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

#include <aws/elasticbeanstalk/ElasticBeanstalkClient.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrorMarshaller.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkEndpointProvider.h>
#include <aws/elasticbeanstalk/model/AbortEnvironmentUpdateRequest.h>
#include <aws/elasticbeanstalk/model/ApplyEnvironmentManagedActionRequest.h>
#include <aws/elasticbeanstalk/model/AssociateEnvironmentOperationsRoleRequest.h>
#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityRequest.h>
#include <aws/elasticbeanstalk/model/ComposeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/CreateApplicationRequest.h>
#include <aws/elasticbeanstalk/model/CreateApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/CreateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/CreatePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/CreateStorageLocationRequest.h>
#include <aws/elasticbeanstalk/model/DeleteApplicationRequest.h>
#include <aws/elasticbeanstalk/model/DeleteApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/DeleteConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/DeleteEnvironmentConfigurationRequest.h>
#include <aws/elasticbeanstalk/model/DeletePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/DescribeAccountAttributesRequest.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationVersionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationOptionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationSettingsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentHealthRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentResourcesRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEventsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeInstancesHealthRequest.h>
#include <aws/elasticbeanstalk/model/DescribePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/DisassociateEnvironmentOperationsRoleRequest.h>
#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksRequest.h>
#include <aws/elasticbeanstalk/model/ListPlatformBranchesRequest.h>
#include <aws/elasticbeanstalk/model/ListPlatformVersionsRequest.h>
#include <aws/elasticbeanstalk/model/ListTagsForResourceRequest.h>
#include <aws/elasticbeanstalk/model/RebuildEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/RequestEnvironmentInfoRequest.h>
#include <aws/elasticbeanstalk/model/RestartAppServerRequest.h>
#include <aws/elasticbeanstalk/model/RetrieveEnvironmentInfoRequest.h>
#include <aws/elasticbeanstalk/model/SwapEnvironmentCNAMEsRequest.h>
#include <aws/elasticbeanstalk/model/TerminateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationResourceLifecycleRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/UpdateConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/UpdateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/UpdateTagsForResourceRequest.h>
#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticBeanstalk;
using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* ElasticBeanstalkClient::SERVICE_NAME = "elasticbeanstalk";
const char* ElasticBeanstalkClient::ALLOCATION_TAG = "ElasticBeanstalkClient";

ElasticBeanstalkClient::ElasticBeanstalkClient(const ElasticBeanstalk::ElasticBeanstalkClientConfiguration& clientConfiguration,
                                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const AWSCredentials& credentials,
                                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider,
                                               const ElasticBeanstalk::ElasticBeanstalkClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider,
                                               const ElasticBeanstalk::ElasticBeanstalkClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ElasticBeanstalkClient::ElasticBeanstalkClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ElasticBeanstalkEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElasticBeanstalkEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElasticBeanstalkEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ElasticBeanstalkClient::~ElasticBeanstalkClient()
{
}

std::shared_ptr<ElasticBeanstalkEndpointProviderBase>& ElasticBeanstalkClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ElasticBeanstalkClient::init(const ElasticBeanstalk::ElasticBeanstalkClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Elastic Beanstalk");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ElasticBeanstalkClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String ElasticBeanstalkClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
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

AbortEnvironmentUpdateOutcome ElasticBeanstalkClient::AbortEnvironmentUpdate(const AbortEnvironmentUpdateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AbortEnvironmentUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AbortEnvironmentUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AbortEnvironmentUpdateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AbortEnvironmentUpdateOutcomeCallable ElasticBeanstalkClient::AbortEnvironmentUpdateCallable(const AbortEnvironmentUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AbortEnvironmentUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AbortEnvironmentUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::AbortEnvironmentUpdateAsync(const AbortEnvironmentUpdateRequest& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AbortEnvironmentUpdate(request), context);
    } );
}

ApplyEnvironmentManagedActionOutcome ElasticBeanstalkClient::ApplyEnvironmentManagedAction(const ApplyEnvironmentManagedActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApplyEnvironmentManagedAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApplyEnvironmentManagedAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ApplyEnvironmentManagedActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ApplyEnvironmentManagedActionOutcomeCallable ElasticBeanstalkClient::ApplyEnvironmentManagedActionCallable(const ApplyEnvironmentManagedActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyEnvironmentManagedActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyEnvironmentManagedAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::ApplyEnvironmentManagedActionAsync(const ApplyEnvironmentManagedActionRequest& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ApplyEnvironmentManagedAction(request), context);
    } );
}

AssociateEnvironmentOperationsRoleOutcome ElasticBeanstalkClient::AssociateEnvironmentOperationsRole(const AssociateEnvironmentOperationsRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateEnvironmentOperationsRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateEnvironmentOperationsRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateEnvironmentOperationsRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateEnvironmentOperationsRoleOutcomeCallable ElasticBeanstalkClient::AssociateEnvironmentOperationsRoleCallable(const AssociateEnvironmentOperationsRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateEnvironmentOperationsRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateEnvironmentOperationsRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::AssociateEnvironmentOperationsRoleAsync(const AssociateEnvironmentOperationsRoleRequest& request, const AssociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateEnvironmentOperationsRole(request), context);
    } );
}

CheckDNSAvailabilityOutcome ElasticBeanstalkClient::CheckDNSAvailability(const CheckDNSAvailabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CheckDNSAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CheckDNSAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CheckDNSAvailabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CheckDNSAvailabilityOutcomeCallable ElasticBeanstalkClient::CheckDNSAvailabilityCallable(const CheckDNSAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckDNSAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckDNSAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::CheckDNSAvailabilityAsync(const CheckDNSAvailabilityRequest& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CheckDNSAvailability(request), context);
    } );
}

ComposeEnvironmentsOutcome ElasticBeanstalkClient::ComposeEnvironments(const ComposeEnvironmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ComposeEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ComposeEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ComposeEnvironmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ComposeEnvironmentsOutcomeCallable ElasticBeanstalkClient::ComposeEnvironmentsCallable(const ComposeEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ComposeEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ComposeEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::ComposeEnvironmentsAsync(const ComposeEnvironmentsRequest& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ComposeEnvironments(request), context);
    } );
}

CreateApplicationOutcome ElasticBeanstalkClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateApplicationOutcomeCallable ElasticBeanstalkClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplication(request), context);
    } );
}

CreateApplicationVersionOutcome ElasticBeanstalkClient::CreateApplicationVersion(const CreateApplicationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApplicationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateApplicationVersionOutcomeCallable ElasticBeanstalkClient::CreateApplicationVersionCallable(const CreateApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::CreateApplicationVersionAsync(const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplicationVersion(request), context);
    } );
}

CreateConfigurationTemplateOutcome ElasticBeanstalkClient::CreateConfigurationTemplate(const CreateConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::CreateConfigurationTemplateCallable(const CreateConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::CreateConfigurationTemplateAsync(const CreateConfigurationTemplateRequest& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConfigurationTemplate(request), context);
    } );
}

CreateEnvironmentOutcome ElasticBeanstalkClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateEnvironmentOutcomeCallable ElasticBeanstalkClient::CreateEnvironmentCallable(const CreateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEnvironment(request), context);
    } );
}

CreatePlatformVersionOutcome ElasticBeanstalkClient::CreatePlatformVersion(const CreatePlatformVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePlatformVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePlatformVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePlatformVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreatePlatformVersionOutcomeCallable ElasticBeanstalkClient::CreatePlatformVersionCallable(const CreatePlatformVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlatformVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlatformVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::CreatePlatformVersionAsync(const CreatePlatformVersionRequest& request, const CreatePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePlatformVersion(request), context);
    } );
}

CreateStorageLocationOutcome ElasticBeanstalkClient::CreateStorageLocation(const CreateStorageLocationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStorageLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStorageLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStorageLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStorageLocationOutcomeCallable ElasticBeanstalkClient::CreateStorageLocationCallable(const CreateStorageLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStorageLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStorageLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::CreateStorageLocationAsync(const CreateStorageLocationRequest& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStorageLocation(request), context);
    } );
}

DeleteApplicationOutcome ElasticBeanstalkClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteApplicationOutcomeCallable ElasticBeanstalkClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplication(request), context);
    } );
}

DeleteApplicationVersionOutcome ElasticBeanstalkClient::DeleteApplicationVersion(const DeleteApplicationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteApplicationVersionOutcomeCallable ElasticBeanstalkClient::DeleteApplicationVersionCallable(const DeleteApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DeleteApplicationVersionAsync(const DeleteApplicationVersionRequest& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplicationVersion(request), context);
    } );
}

DeleteConfigurationTemplateOutcome ElasticBeanstalkClient::DeleteConfigurationTemplate(const DeleteConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::DeleteConfigurationTemplateCallable(const DeleteConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DeleteConfigurationTemplateAsync(const DeleteConfigurationTemplateRequest& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConfigurationTemplate(request), context);
    } );
}

DeleteEnvironmentConfigurationOutcome ElasticBeanstalkClient::DeleteEnvironmentConfiguration(const DeleteEnvironmentConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEnvironmentConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEnvironmentConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEnvironmentConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEnvironmentConfigurationOutcomeCallable ElasticBeanstalkClient::DeleteEnvironmentConfigurationCallable(const DeleteEnvironmentConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironmentConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DeleteEnvironmentConfigurationAsync(const DeleteEnvironmentConfigurationRequest& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEnvironmentConfiguration(request), context);
    } );
}

DeletePlatformVersionOutcome ElasticBeanstalkClient::DeletePlatformVersion(const DeletePlatformVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePlatformVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePlatformVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePlatformVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeletePlatformVersionOutcomeCallable ElasticBeanstalkClient::DeletePlatformVersionCallable(const DeletePlatformVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlatformVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlatformVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DeletePlatformVersionAsync(const DeletePlatformVersionRequest& request, const DeletePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePlatformVersion(request), context);
    } );
}

DescribeAccountAttributesOutcome ElasticBeanstalkClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountAttributesOutcomeCallable ElasticBeanstalkClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountAttributes(request), context);
    } );
}

DescribeApplicationVersionsOutcome ElasticBeanstalkClient::DescribeApplicationVersions(const DescribeApplicationVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicationVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeApplicationVersionsOutcomeCallable ElasticBeanstalkClient::DescribeApplicationVersionsCallable(const DescribeApplicationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeApplicationVersionsAsync(const DescribeApplicationVersionsRequest& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApplicationVersions(request), context);
    } );
}

DescribeApplicationsOutcome ElasticBeanstalkClient::DescribeApplications(const DescribeApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeApplicationsOutcomeCallable ElasticBeanstalkClient::DescribeApplicationsCallable(const DescribeApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApplications(request), context);
    } );
}

DescribeConfigurationOptionsOutcome ElasticBeanstalkClient::DescribeConfigurationOptions(const DescribeConfigurationOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConfigurationOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConfigurationOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConfigurationOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeConfigurationOptionsOutcomeCallable ElasticBeanstalkClient::DescribeConfigurationOptionsCallable(const DescribeConfigurationOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeConfigurationOptionsAsync(const DescribeConfigurationOptionsRequest& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConfigurationOptions(request), context);
    } );
}

DescribeConfigurationSettingsOutcome ElasticBeanstalkClient::DescribeConfigurationSettings(const DescribeConfigurationSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConfigurationSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConfigurationSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConfigurationSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeConfigurationSettingsOutcomeCallable ElasticBeanstalkClient::DescribeConfigurationSettingsCallable(const DescribeConfigurationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeConfigurationSettingsAsync(const DescribeConfigurationSettingsRequest& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConfigurationSettings(request), context);
    } );
}

DescribeEnvironmentHealthOutcome ElasticBeanstalkClient::DescribeEnvironmentHealth(const DescribeEnvironmentHealthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEnvironmentHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEnvironmentHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEnvironmentHealthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentHealthOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentHealthCallable(const DescribeEnvironmentHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeEnvironmentHealthAsync(const DescribeEnvironmentHealthRequest& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEnvironmentHealth(request), context);
    } );
}

DescribeEnvironmentManagedActionHistoryOutcome ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistory(const DescribeEnvironmentManagedActionHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEnvironmentManagedActionHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEnvironmentManagedActionHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEnvironmentManagedActionHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentManagedActionHistoryOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistoryCallable(const DescribeEnvironmentManagedActionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentManagedActionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentManagedActionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistoryAsync(const DescribeEnvironmentManagedActionHistoryRequest& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEnvironmentManagedActionHistory(request), context);
    } );
}

DescribeEnvironmentManagedActionsOutcome ElasticBeanstalkClient::DescribeEnvironmentManagedActions(const DescribeEnvironmentManagedActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEnvironmentManagedActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEnvironmentManagedActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEnvironmentManagedActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentManagedActionsOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentManagedActionsCallable(const DescribeEnvironmentManagedActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentManagedActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentManagedActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeEnvironmentManagedActionsAsync(const DescribeEnvironmentManagedActionsRequest& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEnvironmentManagedActions(request), context);
    } );
}

DescribeEnvironmentResourcesOutcome ElasticBeanstalkClient::DescribeEnvironmentResources(const DescribeEnvironmentResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEnvironmentResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEnvironmentResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEnvironmentResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentResourcesOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentResourcesCallable(const DescribeEnvironmentResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeEnvironmentResourcesAsync(const DescribeEnvironmentResourcesRequest& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEnvironmentResources(request), context);
    } );
}

DescribeEnvironmentsOutcome ElasticBeanstalkClient::DescribeEnvironments(const DescribeEnvironmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEnvironmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentsOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEnvironments(request), context);
    } );
}

DescribeEventsOutcome ElasticBeanstalkClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable ElasticBeanstalkClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEvents(request), context);
    } );
}

DescribeInstancesHealthOutcome ElasticBeanstalkClient::DescribeInstancesHealth(const DescribeInstancesHealthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstancesHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstancesHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstancesHealthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstancesHealthOutcomeCallable ElasticBeanstalkClient::DescribeInstancesHealthCallable(const DescribeInstancesHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstancesHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribeInstancesHealthAsync(const DescribeInstancesHealthRequest& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstancesHealth(request), context);
    } );
}

DescribePlatformVersionOutcome ElasticBeanstalkClient::DescribePlatformVersion(const DescribePlatformVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePlatformVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePlatformVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePlatformVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePlatformVersionOutcomeCallable ElasticBeanstalkClient::DescribePlatformVersionCallable(const DescribePlatformVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePlatformVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePlatformVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DescribePlatformVersionAsync(const DescribePlatformVersionRequest& request, const DescribePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePlatformVersion(request), context);
    } );
}

DisassociateEnvironmentOperationsRoleOutcome ElasticBeanstalkClient::DisassociateEnvironmentOperationsRole(const DisassociateEnvironmentOperationsRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateEnvironmentOperationsRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateEnvironmentOperationsRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateEnvironmentOperationsRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateEnvironmentOperationsRoleOutcomeCallable ElasticBeanstalkClient::DisassociateEnvironmentOperationsRoleCallable(const DisassociateEnvironmentOperationsRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateEnvironmentOperationsRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateEnvironmentOperationsRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::DisassociateEnvironmentOperationsRoleAsync(const DisassociateEnvironmentOperationsRoleRequest& request, const DisassociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateEnvironmentOperationsRole(request), context);
    } );
}

ListAvailableSolutionStacksOutcome ElasticBeanstalkClient::ListAvailableSolutionStacks(const ListAvailableSolutionStacksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailableSolutionStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAvailableSolutionStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAvailableSolutionStacksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListAvailableSolutionStacksOutcomeCallable ElasticBeanstalkClient::ListAvailableSolutionStacksCallable(const ListAvailableSolutionStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableSolutionStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableSolutionStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::ListAvailableSolutionStacksAsync(const ListAvailableSolutionStacksRequest& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAvailableSolutionStacks(request), context);
    } );
}

ListPlatformBranchesOutcome ElasticBeanstalkClient::ListPlatformBranches(const ListPlatformBranchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPlatformBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPlatformBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPlatformBranchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListPlatformBranchesOutcomeCallable ElasticBeanstalkClient::ListPlatformBranchesCallable(const ListPlatformBranchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlatformBranchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlatformBranches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::ListPlatformBranchesAsync(const ListPlatformBranchesRequest& request, const ListPlatformBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPlatformBranches(request), context);
    } );
}

ListPlatformVersionsOutcome ElasticBeanstalkClient::ListPlatformVersions(const ListPlatformVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPlatformVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPlatformVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPlatformVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListPlatformVersionsOutcomeCallable ElasticBeanstalkClient::ListPlatformVersionsCallable(const ListPlatformVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlatformVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlatformVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::ListPlatformVersionsAsync(const ListPlatformVersionsRequest& request, const ListPlatformVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPlatformVersions(request), context);
    } );
}

ListTagsForResourceOutcome ElasticBeanstalkClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable ElasticBeanstalkClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

RebuildEnvironmentOutcome ElasticBeanstalkClient::RebuildEnvironment(const RebuildEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebuildEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebuildEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebuildEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RebuildEnvironmentOutcomeCallable ElasticBeanstalkClient::RebuildEnvironmentCallable(const RebuildEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebuildEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebuildEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::RebuildEnvironmentAsync(const RebuildEnvironmentRequest& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RebuildEnvironment(request), context);
    } );
}

RequestEnvironmentInfoOutcome ElasticBeanstalkClient::RequestEnvironmentInfo(const RequestEnvironmentInfoRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RequestEnvironmentInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RequestEnvironmentInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RequestEnvironmentInfoOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RequestEnvironmentInfoOutcomeCallable ElasticBeanstalkClient::RequestEnvironmentInfoCallable(const RequestEnvironmentInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestEnvironmentInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestEnvironmentInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::RequestEnvironmentInfoAsync(const RequestEnvironmentInfoRequest& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RequestEnvironmentInfo(request), context);
    } );
}

RestartAppServerOutcome ElasticBeanstalkClient::RestartAppServer(const RestartAppServerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestartAppServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestartAppServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestartAppServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestartAppServerOutcomeCallable ElasticBeanstalkClient::RestartAppServerCallable(const RestartAppServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestartAppServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestartAppServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::RestartAppServerAsync(const RestartAppServerRequest& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestartAppServer(request), context);
    } );
}

RetrieveEnvironmentInfoOutcome ElasticBeanstalkClient::RetrieveEnvironmentInfo(const RetrieveEnvironmentInfoRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveEnvironmentInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetrieveEnvironmentInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RetrieveEnvironmentInfoOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RetrieveEnvironmentInfoOutcomeCallable ElasticBeanstalkClient::RetrieveEnvironmentInfoCallable(const RetrieveEnvironmentInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetrieveEnvironmentInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetrieveEnvironmentInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::RetrieveEnvironmentInfoAsync(const RetrieveEnvironmentInfoRequest& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetrieveEnvironmentInfo(request), context);
    } );
}

SwapEnvironmentCNAMEsOutcome ElasticBeanstalkClient::SwapEnvironmentCNAMEs(const SwapEnvironmentCNAMEsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SwapEnvironmentCNAMEs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SwapEnvironmentCNAMEs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SwapEnvironmentCNAMEsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SwapEnvironmentCNAMEsOutcomeCallable ElasticBeanstalkClient::SwapEnvironmentCNAMEsCallable(const SwapEnvironmentCNAMEsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SwapEnvironmentCNAMEsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SwapEnvironmentCNAMEs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::SwapEnvironmentCNAMEsAsync(const SwapEnvironmentCNAMEsRequest& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SwapEnvironmentCNAMEs(request), context);
    } );
}

TerminateEnvironmentOutcome ElasticBeanstalkClient::TerminateEnvironment(const TerminateEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TerminateEnvironmentOutcomeCallable ElasticBeanstalkClient::TerminateEnvironmentCallable(const TerminateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::TerminateEnvironmentAsync(const TerminateEnvironmentRequest& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TerminateEnvironment(request), context);
    } );
}

UpdateApplicationOutcome ElasticBeanstalkClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateApplicationOutcomeCallable ElasticBeanstalkClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplication(request), context);
    } );
}

UpdateApplicationResourceLifecycleOutcome ElasticBeanstalkClient::UpdateApplicationResourceLifecycle(const UpdateApplicationResourceLifecycleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplicationResourceLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplicationResourceLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApplicationResourceLifecycleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateApplicationResourceLifecycleOutcomeCallable ElasticBeanstalkClient::UpdateApplicationResourceLifecycleCallable(const UpdateApplicationResourceLifecycleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationResourceLifecycleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationResourceLifecycle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::UpdateApplicationResourceLifecycleAsync(const UpdateApplicationResourceLifecycleRequest& request, const UpdateApplicationResourceLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplicationResourceLifecycle(request), context);
    } );
}

UpdateApplicationVersionOutcome ElasticBeanstalkClient::UpdateApplicationVersion(const UpdateApplicationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApplicationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateApplicationVersionOutcomeCallable ElasticBeanstalkClient::UpdateApplicationVersionCallable(const UpdateApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::UpdateApplicationVersionAsync(const UpdateApplicationVersionRequest& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplicationVersion(request), context);
    } );
}

UpdateConfigurationTemplateOutcome ElasticBeanstalkClient::UpdateConfigurationTemplate(const UpdateConfigurationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfigurationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateConfigurationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::UpdateConfigurationTemplateCallable(const UpdateConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::UpdateConfigurationTemplateAsync(const UpdateConfigurationTemplateRequest& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConfigurationTemplate(request), context);
    } );
}

UpdateEnvironmentOutcome ElasticBeanstalkClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateEnvironmentOutcomeCallable ElasticBeanstalkClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEnvironment(request), context);
    } );
}

UpdateTagsForResourceOutcome ElasticBeanstalkClient::UpdateTagsForResource(const UpdateTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTagsForResourceOutcomeCallable ElasticBeanstalkClient::UpdateTagsForResourceCallable(const UpdateTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::UpdateTagsForResourceAsync(const UpdateTagsForResourceRequest& request, const UpdateTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTagsForResource(request), context);
    } );
}

ValidateConfigurationSettingsOutcome ElasticBeanstalkClient::ValidateConfigurationSettings(const ValidateConfigurationSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateConfigurationSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateConfigurationSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ValidateConfigurationSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ValidateConfigurationSettingsOutcomeCallable ElasticBeanstalkClient::ValidateConfigurationSettingsCallable(const ValidateConfigurationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateConfigurationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateConfigurationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClient::ValidateConfigurationSettingsAsync(const ValidateConfigurationSettingsRequest& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidateConfigurationSettings(request), context);
    } );
}

