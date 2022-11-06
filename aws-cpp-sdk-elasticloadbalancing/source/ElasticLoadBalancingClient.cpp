/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/elasticloadbalancing/ElasticLoadBalancingClient.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrorMarshaller.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpointProvider.h>
#include <aws/elasticloadbalancing/model/AddTagsRequest.h>
#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/ConfigureHealthCheckRequest.h>
#include <aws/elasticloadbalancing/model/CreateAppCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLBCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/DeregisterInstancesFromLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DescribeAccountLimitsRequest.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancing/model/DescribeTagsRequest.h>
#include <aws/elasticloadbalancing/model/DetachLoadBalancerFromSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/DisableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/EnableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/ModifyLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/RegisterInstancesWithLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/RemoveTagsRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerListenerSSLCertificateRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesForBackendServerRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesOfListenerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancing;
using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* ElasticLoadBalancingClient::SERVICE_NAME = "elasticloadbalancing";
const char* ElasticLoadBalancingClient::ALLOCATION_TAG = "ElasticLoadBalancingClient";

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration& clientConfiguration,
                                                       std::shared_ptr<ElasticLoadBalancingEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const AWSCredentials& credentials,
                                                       std::shared_ptr<ElasticLoadBalancingEndpointProviderBase> endpointProvider,
                                                       const ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       std::shared_ptr<ElasticLoadBalancingEndpointProviderBase> endpointProvider,
                                                       const ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ElasticLoadBalancingClient::ElasticLoadBalancingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ElasticLoadBalancingClient::~ElasticLoadBalancingClient()
{
}

std::shared_ptr<ElasticLoadBalancingEndpointProviderBase>& ElasticLoadBalancingClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ElasticLoadBalancingClient::init(const ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Elastic Load Balancing");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ElasticLoadBalancingClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String ElasticLoadBalancingClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  if (!m_endpointProvider)
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess())
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddTagsOutcome ElasticLoadBalancingClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsOutcomeCallable ElasticLoadBalancingClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTags(request), context);
    } );
}

ApplySecurityGroupsToLoadBalancerOutcome ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancer(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApplySecurityGroupsToLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApplySecurityGroupsToLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ApplySecurityGroupsToLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ApplySecurityGroupsToLoadBalancerOutcomeCallable ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerCallable(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplySecurityGroupsToLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplySecurityGroupsToLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerAsync(const ApplySecurityGroupsToLoadBalancerRequest& request, const ApplySecurityGroupsToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ApplySecurityGroupsToLoadBalancer(request), context);
    } );
}

AttachLoadBalancerToSubnetsOutcome ElasticLoadBalancingClient::AttachLoadBalancerToSubnets(const AttachLoadBalancerToSubnetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachLoadBalancerToSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachLoadBalancerToSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachLoadBalancerToSubnetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachLoadBalancerToSubnetsOutcomeCallable ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsCallable(const AttachLoadBalancerToSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachLoadBalancerToSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachLoadBalancerToSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsAsync(const AttachLoadBalancerToSubnetsRequest& request, const AttachLoadBalancerToSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachLoadBalancerToSubnets(request), context);
    } );
}

ConfigureHealthCheckOutcome ElasticLoadBalancingClient::ConfigureHealthCheck(const ConfigureHealthCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfigureHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfigureHealthCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfigureHealthCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ConfigureHealthCheckOutcomeCallable ElasticLoadBalancingClient::ConfigureHealthCheckCallable(const ConfigureHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfigureHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfigureHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::ConfigureHealthCheckAsync(const ConfigureHealthCheckRequest& request, const ConfigureHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ConfigureHealthCheck(request), context);
    } );
}

CreateAppCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateAppCookieStickinessPolicy(const CreateAppCookieStickinessPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppCookieStickinessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppCookieStickinessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAppCookieStickinessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateAppCookieStickinessPolicyOutcomeCallable ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyCallable(const CreateAppCookieStickinessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppCookieStickinessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppCookieStickinessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyAsync(const CreateAppCookieStickinessPolicyRequest& request, const CreateAppCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAppCookieStickinessPolicy(request), context);
    } );
}

CreateLBCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateLBCookieStickinessPolicy(const CreateLBCookieStickinessPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLBCookieStickinessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLBCookieStickinessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLBCookieStickinessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLBCookieStickinessPolicyOutcomeCallable ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyCallable(const CreateLBCookieStickinessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLBCookieStickinessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLBCookieStickinessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyAsync(const CreateLBCookieStickinessPolicyRequest& request, const CreateLBCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLBCookieStickinessPolicy(request), context);
    } );
}

CreateLoadBalancerOutcome ElasticLoadBalancingClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLoadBalancerOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLoadBalancer(request), context);
    } );
}

CreateLoadBalancerListenersOutcome ElasticLoadBalancingClient::CreateLoadBalancerListeners(const CreateLoadBalancerListenersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoadBalancerListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoadBalancerListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLoadBalancerListenersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLoadBalancerListenersOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerListenersCallable(const CreateLoadBalancerListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancerListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateLoadBalancerListenersAsync(const CreateLoadBalancerListenersRequest& request, const CreateLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLoadBalancerListeners(request), context);
    } );
}

CreateLoadBalancerPolicyOutcome ElasticLoadBalancingClient::CreateLoadBalancerPolicy(const CreateLoadBalancerPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoadBalancerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoadBalancerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLoadBalancerPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLoadBalancerPolicyOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerPolicyCallable(const CreateLoadBalancerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateLoadBalancerPolicyAsync(const CreateLoadBalancerPolicyRequest& request, const CreateLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLoadBalancerPolicy(request), context);
    } );
}

DeleteLoadBalancerOutcome ElasticLoadBalancingClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLoadBalancer(request), context);
    } );
}

DeleteLoadBalancerListenersOutcome ElasticLoadBalancingClient::DeleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoadBalancerListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoadBalancerListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLoadBalancerListenersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLoadBalancerListenersOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerListenersCallable(const DeleteLoadBalancerListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancerListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DeleteLoadBalancerListenersAsync(const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLoadBalancerListeners(request), context);
    } );
}

DeleteLoadBalancerPolicyOutcome ElasticLoadBalancingClient::DeleteLoadBalancerPolicy(const DeleteLoadBalancerPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoadBalancerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoadBalancerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLoadBalancerPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLoadBalancerPolicyOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerPolicyCallable(const DeleteLoadBalancerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DeleteLoadBalancerPolicyAsync(const DeleteLoadBalancerPolicyRequest& request, const DeleteLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLoadBalancerPolicy(request), context);
    } );
}

DeregisterInstancesFromLoadBalancerOutcome ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancer(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterInstancesFromLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterInstancesFromLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterInstancesFromLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterInstancesFromLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerCallable(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstancesFromLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterInstancesFromLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerAsync(const DeregisterInstancesFromLoadBalancerRequest& request, const DeregisterInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterInstancesFromLoadBalancer(request), context);
    } );
}

DescribeAccountLimitsOutcome ElasticLoadBalancingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountLimitsOutcomeCallable ElasticLoadBalancingClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountLimits(request), context);
    } );
}

DescribeInstanceHealthOutcome ElasticLoadBalancingClient::DescribeInstanceHealth(const DescribeInstanceHealthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceHealthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceHealthOutcomeCallable ElasticLoadBalancingClient::DescribeInstanceHealthCallable(const DescribeInstanceHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeInstanceHealthAsync(const DescribeInstanceHealthRequest& request, const DescribeInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstanceHealth(request), context);
    } );
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoadBalancerAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLoadBalancerAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLoadBalancerAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerAttributesCallable(const DescribeLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeLoadBalancerAttributesAsync(const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLoadBalancerAttributes(request), context);
    } );
}

DescribeLoadBalancerPoliciesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicies(const DescribeLoadBalancerPoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoadBalancerPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLoadBalancerPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLoadBalancerPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancerPoliciesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesCallable(const DescribeLoadBalancerPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesAsync(const DescribeLoadBalancerPoliciesRequest& request, const DescribeLoadBalancerPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLoadBalancerPolicies(request), context);
    } );
}

DescribeLoadBalancerPolicyTypesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypes(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoadBalancerPolicyTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLoadBalancerPolicyTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLoadBalancerPolicyTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancerPolicyTypesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesCallable(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerPolicyTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerPolicyTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesAsync(const DescribeLoadBalancerPolicyTypesRequest& request, const DescribeLoadBalancerPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLoadBalancerPolicyTypes(request), context);
    } );
}

DescribeLoadBalancersOutcome ElasticLoadBalancingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoadBalancers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLoadBalancers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLoadBalancersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancersOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLoadBalancers(request), context);
    } );
}

DescribeTagsOutcome ElasticLoadBalancingClient::DescribeTags(const DescribeTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcomeCallable ElasticLoadBalancingClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTags(request), context);
    } );
}

DetachLoadBalancerFromSubnetsOutcome ElasticLoadBalancingClient::DetachLoadBalancerFromSubnets(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachLoadBalancerFromSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachLoadBalancerFromSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachLoadBalancerFromSubnetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachLoadBalancerFromSubnetsOutcomeCallable ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsCallable(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachLoadBalancerFromSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachLoadBalancerFromSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsAsync(const DetachLoadBalancerFromSubnetsRequest& request, const DetachLoadBalancerFromSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachLoadBalancerFromSubnets(request), context);
    } );
}

DisableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancer(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableAvailabilityZonesForLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableAvailabilityZonesForLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableAvailabilityZonesForLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableAvailabilityZonesForLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerCallable(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAvailabilityZonesForLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAvailabilityZonesForLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerAsync(const DisableAvailabilityZonesForLoadBalancerRequest& request, const DisableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableAvailabilityZonesForLoadBalancer(request), context);
    } );
}

EnableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancer(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableAvailabilityZonesForLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableAvailabilityZonesForLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableAvailabilityZonesForLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableAvailabilityZonesForLoadBalancerOutcomeCallable ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerCallable(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAvailabilityZonesForLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAvailabilityZonesForLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerAsync(const EnableAvailabilityZonesForLoadBalancerRequest& request, const EnableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableAvailabilityZonesForLoadBalancer(request), context);
    } );
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyLoadBalancerAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyLoadBalancerAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyLoadBalancerAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyLoadBalancerAttributes(request), context);
    } );
}

RegisterInstancesWithLoadBalancerOutcome ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancer(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterInstancesWithLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterInstancesWithLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterInstancesWithLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterInstancesWithLoadBalancerOutcomeCallable ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerCallable(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstancesWithLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterInstancesWithLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerAsync(const RegisterInstancesWithLoadBalancerRequest& request, const RegisterInstancesWithLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterInstancesWithLoadBalancer(request), context);
    } );
}

RemoveTagsOutcome ElasticLoadBalancingClient::RemoveTags(const RemoveTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsOutcomeCallable ElasticLoadBalancingClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTags(request), context);
    } );
}

SetLoadBalancerListenerSSLCertificateOutcome ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificate(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetLoadBalancerListenerSSLCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetLoadBalancerListenerSSLCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetLoadBalancerListenerSSLCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SetLoadBalancerListenerSSLCertificateOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateCallable(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerListenerSSLCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerListenerSSLCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateAsync(const SetLoadBalancerListenerSSLCertificateRequest& request, const SetLoadBalancerListenerSSLCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetLoadBalancerListenerSSLCertificate(request), context);
    } );
}

SetLoadBalancerPoliciesForBackendServerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServer(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetLoadBalancerPoliciesForBackendServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetLoadBalancerPoliciesForBackendServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetLoadBalancerPoliciesForBackendServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SetLoadBalancerPoliciesForBackendServerOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerCallable(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerPoliciesForBackendServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerPoliciesForBackendServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerAsync(const SetLoadBalancerPoliciesForBackendServerRequest& request, const SetLoadBalancerPoliciesForBackendServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetLoadBalancerPoliciesForBackendServer(request), context);
    } );
}

SetLoadBalancerPoliciesOfListenerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListener(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetLoadBalancerPoliciesOfListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetLoadBalancerPoliciesOfListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetLoadBalancerPoliciesOfListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SetLoadBalancerPoliciesOfListenerOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerCallable(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerPoliciesOfListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerPoliciesOfListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerAsync(const SetLoadBalancerPoliciesOfListenerRequest& request, const SetLoadBalancerPoliciesOfListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetLoadBalancerPoliciesOfListener(request), context);
    } );
}

