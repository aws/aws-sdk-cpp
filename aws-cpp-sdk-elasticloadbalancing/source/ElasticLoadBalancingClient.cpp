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

#include <aws/elasticloadbalancing/ElasticLoadBalancingClient.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpoint.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrorMarshaller.h>
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


static const char* SERVICE_NAME = "elasticloadbalancing";
static const char* ALLOCATION_TAG = "ElasticLoadBalancingClient";

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::~ElasticLoadBalancingClient()
{
}

void ElasticLoadBalancingClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Elastic Load Balancing");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ElasticLoadBalancingEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ElasticLoadBalancingClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

Aws::String ElasticLoadBalancingClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << ElasticLoadBalancingEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddTagsOutcome ElasticLoadBalancingClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsOutcomeCallable ElasticLoadBalancingClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientAddTagsAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTags(request), context);
}

void ElasticLoadBalancingClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientAddTagsAsyncHelper( this, request, handler, context ); } );
}

ApplySecurityGroupsToLoadBalancerOutcome ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancer(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ApplySecurityGroupsToLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ApplySecurityGroupsToLoadBalancerOutcomeCallable ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerCallable(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplySecurityGroupsToLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplySecurityGroupsToLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientApplySecurityGroupsToLoadBalancerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const ApplySecurityGroupsToLoadBalancerRequest& request, const ApplySecurityGroupsToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApplySecurityGroupsToLoadBalancer(request), context);
}

void ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerAsync(const ApplySecurityGroupsToLoadBalancerRequest& request, const ApplySecurityGroupsToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientApplySecurityGroupsToLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

AttachLoadBalancerToSubnetsOutcome ElasticLoadBalancingClient::AttachLoadBalancerToSubnets(const AttachLoadBalancerToSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachLoadBalancerToSubnetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AttachLoadBalancerToSubnetsOutcomeCallable ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsCallable(const AttachLoadBalancerToSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachLoadBalancerToSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachLoadBalancerToSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientAttachLoadBalancerToSubnetsAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const AttachLoadBalancerToSubnetsRequest& request, const AttachLoadBalancerToSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachLoadBalancerToSubnets(request), context);
}

void ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsAsync(const AttachLoadBalancerToSubnetsRequest& request, const AttachLoadBalancerToSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientAttachLoadBalancerToSubnetsAsyncHelper( this, request, handler, context ); } );
}

ConfigureHealthCheckOutcome ElasticLoadBalancingClient::ConfigureHealthCheck(const ConfigureHealthCheckRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ConfigureHealthCheckOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ConfigureHealthCheckOutcomeCallable ElasticLoadBalancingClient::ConfigureHealthCheckCallable(const ConfigureHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfigureHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfigureHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientConfigureHealthCheckAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const ConfigureHealthCheckRequest& request, const ConfigureHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ConfigureHealthCheck(request), context);
}

void ElasticLoadBalancingClient::ConfigureHealthCheckAsync(const ConfigureHealthCheckRequest& request, const ConfigureHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientConfigureHealthCheckAsyncHelper( this, request, handler, context ); } );
}

CreateAppCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateAppCookieStickinessPolicy(const CreateAppCookieStickinessPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAppCookieStickinessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateAppCookieStickinessPolicyOutcomeCallable ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyCallable(const CreateAppCookieStickinessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppCookieStickinessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppCookieStickinessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientCreateAppCookieStickinessPolicyAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const CreateAppCookieStickinessPolicyRequest& request, const CreateAppCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAppCookieStickinessPolicy(request), context);
}

void ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyAsync(const CreateAppCookieStickinessPolicyRequest& request, const CreateAppCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientCreateAppCookieStickinessPolicyAsyncHelper( this, request, handler, context ); } );
}

CreateLBCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateLBCookieStickinessPolicy(const CreateLBCookieStickinessPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLBCookieStickinessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateLBCookieStickinessPolicyOutcomeCallable ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyCallable(const CreateLBCookieStickinessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLBCookieStickinessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLBCookieStickinessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientCreateLBCookieStickinessPolicyAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const CreateLBCookieStickinessPolicyRequest& request, const CreateLBCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLBCookieStickinessPolicy(request), context);
}

void ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyAsync(const CreateLBCookieStickinessPolicyRequest& request, const CreateLBCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientCreateLBCookieStickinessPolicyAsyncHelper( this, request, handler, context ); } );
}

CreateLoadBalancerOutcome ElasticLoadBalancingClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateLoadBalancerOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientCreateLoadBalancerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLoadBalancer(request), context);
}

void ElasticLoadBalancingClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientCreateLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

CreateLoadBalancerListenersOutcome ElasticLoadBalancingClient::CreateLoadBalancerListeners(const CreateLoadBalancerListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLoadBalancerListenersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateLoadBalancerListenersOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerListenersCallable(const CreateLoadBalancerListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancerListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientCreateLoadBalancerListenersAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const CreateLoadBalancerListenersRequest& request, const CreateLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLoadBalancerListeners(request), context);
}

void ElasticLoadBalancingClient::CreateLoadBalancerListenersAsync(const CreateLoadBalancerListenersRequest& request, const CreateLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientCreateLoadBalancerListenersAsyncHelper( this, request, handler, context ); } );
}

CreateLoadBalancerPolicyOutcome ElasticLoadBalancingClient::CreateLoadBalancerPolicy(const CreateLoadBalancerPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLoadBalancerPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateLoadBalancerPolicyOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerPolicyCallable(const CreateLoadBalancerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientCreateLoadBalancerPolicyAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const CreateLoadBalancerPolicyRequest& request, const CreateLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLoadBalancerPolicy(request), context);
}

void ElasticLoadBalancingClient::CreateLoadBalancerPolicyAsync(const CreateLoadBalancerPolicyRequest& request, const CreateLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientCreateLoadBalancerPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteLoadBalancerOutcome ElasticLoadBalancingClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDeleteLoadBalancerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoadBalancer(request), context);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDeleteLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

DeleteLoadBalancerListenersOutcome ElasticLoadBalancingClient::DeleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLoadBalancerListenersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLoadBalancerListenersOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerListenersCallable(const DeleteLoadBalancerListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancerListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDeleteLoadBalancerListenersAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoadBalancerListeners(request), context);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerListenersAsync(const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDeleteLoadBalancerListenersAsyncHelper( this, request, handler, context ); } );
}

DeleteLoadBalancerPolicyOutcome ElasticLoadBalancingClient::DeleteLoadBalancerPolicy(const DeleteLoadBalancerPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLoadBalancerPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLoadBalancerPolicyOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerPolicyCallable(const DeleteLoadBalancerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDeleteLoadBalancerPolicyAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DeleteLoadBalancerPolicyRequest& request, const DeleteLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoadBalancerPolicy(request), context);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerPolicyAsync(const DeleteLoadBalancerPolicyRequest& request, const DeleteLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDeleteLoadBalancerPolicyAsyncHelper( this, request, handler, context ); } );
}

DeregisterInstancesFromLoadBalancerOutcome ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancer(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterInstancesFromLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterInstancesFromLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerCallable(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstancesFromLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterInstancesFromLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDeregisterInstancesFromLoadBalancerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DeregisterInstancesFromLoadBalancerRequest& request, const DeregisterInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterInstancesFromLoadBalancer(request), context);
}

void ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerAsync(const DeregisterInstancesFromLoadBalancerRequest& request, const DeregisterInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDeregisterInstancesFromLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountLimitsOutcome ElasticLoadBalancingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountLimitsOutcomeCallable ElasticLoadBalancingClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDescribeAccountLimitsAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountLimits(request), context);
}

void ElasticLoadBalancingClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDescribeAccountLimitsAsyncHelper( this, request, handler, context ); } );
}

DescribeInstanceHealthOutcome ElasticLoadBalancingClient::DescribeInstanceHealth(const DescribeInstanceHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstanceHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceHealthOutcomeCallable ElasticLoadBalancingClient::DescribeInstanceHealthCallable(const DescribeInstanceHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDescribeInstanceHealthAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DescribeInstanceHealthRequest& request, const DescribeInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstanceHealth(request), context);
}

void ElasticLoadBalancingClient::DescribeInstanceHealthAsync(const DescribeInstanceHealthRequest& request, const DescribeInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDescribeInstanceHealthAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBalancerAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerAttributesCallable(const DescribeLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDescribeLoadBalancerAttributesAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBalancerAttributes(request), context);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerAttributesAsync(const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDescribeLoadBalancerAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBalancerPoliciesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicies(const DescribeLoadBalancerPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBalancerPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancerPoliciesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesCallable(const DescribeLoadBalancerPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDescribeLoadBalancerPoliciesAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DescribeLoadBalancerPoliciesRequest& request, const DescribeLoadBalancerPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBalancerPolicies(request), context);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesAsync(const DescribeLoadBalancerPoliciesRequest& request, const DescribeLoadBalancerPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDescribeLoadBalancerPoliciesAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBalancerPolicyTypesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypes(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBalancerPolicyTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancerPolicyTypesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesCallable(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerPolicyTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerPolicyTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDescribeLoadBalancerPolicyTypesAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DescribeLoadBalancerPolicyTypesRequest& request, const DescribeLoadBalancerPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBalancerPolicyTypes(request), context);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesAsync(const DescribeLoadBalancerPolicyTypesRequest& request, const DescribeLoadBalancerPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDescribeLoadBalancerPolicyTypesAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBalancersOutcome ElasticLoadBalancingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBalancersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancersOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDescribeLoadBalancersAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBalancers(request), context);
}

void ElasticLoadBalancingClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDescribeLoadBalancersAsyncHelper( this, request, handler, context ); } );
}

DescribeTagsOutcome ElasticLoadBalancingClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcomeCallable ElasticLoadBalancingClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDescribeTagsAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTags(request), context);
}

void ElasticLoadBalancingClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDescribeTagsAsyncHelper( this, request, handler, context ); } );
}

DetachLoadBalancerFromSubnetsOutcome ElasticLoadBalancingClient::DetachLoadBalancerFromSubnets(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachLoadBalancerFromSubnetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetachLoadBalancerFromSubnetsOutcomeCallable ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsCallable(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachLoadBalancerFromSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachLoadBalancerFromSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDetachLoadBalancerFromSubnetsAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DetachLoadBalancerFromSubnetsRequest& request, const DetachLoadBalancerFromSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachLoadBalancerFromSubnets(request), context);
}

void ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsAsync(const DetachLoadBalancerFromSubnetsRequest& request, const DetachLoadBalancerFromSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDetachLoadBalancerFromSubnetsAsyncHelper( this, request, handler, context ); } );
}

DisableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancer(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableAvailabilityZonesForLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisableAvailabilityZonesForLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerCallable(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAvailabilityZonesForLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAvailabilityZonesForLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientDisableAvailabilityZonesForLoadBalancerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const DisableAvailabilityZonesForLoadBalancerRequest& request, const DisableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableAvailabilityZonesForLoadBalancer(request), context);
}

void ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerAsync(const DisableAvailabilityZonesForLoadBalancerRequest& request, const DisableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientDisableAvailabilityZonesForLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

EnableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancer(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableAvailabilityZonesForLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnableAvailabilityZonesForLoadBalancerOutcomeCallable ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerCallable(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAvailabilityZonesForLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAvailabilityZonesForLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientEnableAvailabilityZonesForLoadBalancerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const EnableAvailabilityZonesForLoadBalancerRequest& request, const EnableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableAvailabilityZonesForLoadBalancer(request), context);
}

void ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerAsync(const EnableAvailabilityZonesForLoadBalancerRequest& request, const EnableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientEnableAvailabilityZonesForLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyLoadBalancerAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientModifyLoadBalancerAttributesAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyLoadBalancerAttributes(request), context);
}

void ElasticLoadBalancingClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientModifyLoadBalancerAttributesAsyncHelper( this, request, handler, context ); } );
}

RegisterInstancesWithLoadBalancerOutcome ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancer(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterInstancesWithLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RegisterInstancesWithLoadBalancerOutcomeCallable ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerCallable(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstancesWithLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterInstancesWithLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientRegisterInstancesWithLoadBalancerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const RegisterInstancesWithLoadBalancerRequest& request, const RegisterInstancesWithLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterInstancesWithLoadBalancer(request), context);
}

void ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerAsync(const RegisterInstancesWithLoadBalancerRequest& request, const RegisterInstancesWithLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientRegisterInstancesWithLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsOutcome ElasticLoadBalancingClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsOutcomeCallable ElasticLoadBalancingClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientRemoveTagsAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTags(request), context);
}

void ElasticLoadBalancingClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientRemoveTagsAsyncHelper( this, request, handler, context ); } );
}

SetLoadBalancerListenerSSLCertificateOutcome ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificate(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetLoadBalancerListenerSSLCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetLoadBalancerListenerSSLCertificateOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateCallable(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerListenerSSLCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerListenerSSLCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientSetLoadBalancerListenerSSLCertificateAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const SetLoadBalancerListenerSSLCertificateRequest& request, const SetLoadBalancerListenerSSLCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetLoadBalancerListenerSSLCertificate(request), context);
}

void ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateAsync(const SetLoadBalancerListenerSSLCertificateRequest& request, const SetLoadBalancerListenerSSLCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientSetLoadBalancerListenerSSLCertificateAsyncHelper( this, request, handler, context ); } );
}

SetLoadBalancerPoliciesForBackendServerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServer(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetLoadBalancerPoliciesForBackendServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetLoadBalancerPoliciesForBackendServerOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerCallable(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerPoliciesForBackendServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerPoliciesForBackendServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientSetLoadBalancerPoliciesForBackendServerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const SetLoadBalancerPoliciesForBackendServerRequest& request, const SetLoadBalancerPoliciesForBackendServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetLoadBalancerPoliciesForBackendServer(request), context);
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerAsync(const SetLoadBalancerPoliciesForBackendServerRequest& request, const SetLoadBalancerPoliciesForBackendServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientSetLoadBalancerPoliciesForBackendServerAsyncHelper( this, request, handler, context ); } );
}

SetLoadBalancerPoliciesOfListenerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListener(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetLoadBalancerPoliciesOfListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetLoadBalancerPoliciesOfListenerOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerCallable(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerPoliciesOfListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerPoliciesOfListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClientSetLoadBalancerPoliciesOfListenerAsyncHelper(ElasticLoadBalancingClient const * const clientThis, const SetLoadBalancerPoliciesOfListenerRequest& request, const SetLoadBalancerPoliciesOfListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetLoadBalancerPoliciesOfListener(request), context);
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerAsync(const SetLoadBalancerPoliciesOfListenerRequest& request, const SetLoadBalancerPoliciesOfListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingClientSetLoadBalancerPoliciesOfListenerAsyncHelper( this, request, handler, context ); } );
}

