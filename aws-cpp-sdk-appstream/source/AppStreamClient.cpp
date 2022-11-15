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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/appstream/AppStreamClient.h>
#include <aws/appstream/AppStreamErrorMarshaller.h>
#include <aws/appstream/AppStreamEndpointProvider.h>
#include <aws/appstream/model/AssociateApplicationFleetRequest.h>
#include <aws/appstream/model/AssociateApplicationToEntitlementRequest.h>
#include <aws/appstream/model/AssociateFleetRequest.h>
#include <aws/appstream/model/BatchAssociateUserStackRequest.h>
#include <aws/appstream/model/BatchDisassociateUserStackRequest.h>
#include <aws/appstream/model/CopyImageRequest.h>
#include <aws/appstream/model/CreateAppBlockRequest.h>
#include <aws/appstream/model/CreateApplicationRequest.h>
#include <aws/appstream/model/CreateDirectoryConfigRequest.h>
#include <aws/appstream/model/CreateEntitlementRequest.h>
#include <aws/appstream/model/CreateFleetRequest.h>
#include <aws/appstream/model/CreateImageBuilderRequest.h>
#include <aws/appstream/model/CreateImageBuilderStreamingURLRequest.h>
#include <aws/appstream/model/CreateStackRequest.h>
#include <aws/appstream/model/CreateStreamingURLRequest.h>
#include <aws/appstream/model/CreateUpdatedImageRequest.h>
#include <aws/appstream/model/CreateUsageReportSubscriptionRequest.h>
#include <aws/appstream/model/CreateUserRequest.h>
#include <aws/appstream/model/DeleteAppBlockRequest.h>
#include <aws/appstream/model/DeleteApplicationRequest.h>
#include <aws/appstream/model/DeleteDirectoryConfigRequest.h>
#include <aws/appstream/model/DeleteEntitlementRequest.h>
#include <aws/appstream/model/DeleteFleetRequest.h>
#include <aws/appstream/model/DeleteImageRequest.h>
#include <aws/appstream/model/DeleteImageBuilderRequest.h>
#include <aws/appstream/model/DeleteImagePermissionsRequest.h>
#include <aws/appstream/model/DeleteStackRequest.h>
#include <aws/appstream/model/DeleteUsageReportSubscriptionRequest.h>
#include <aws/appstream/model/DeleteUserRequest.h>
#include <aws/appstream/model/DescribeAppBlocksRequest.h>
#include <aws/appstream/model/DescribeApplicationFleetAssociationsRequest.h>
#include <aws/appstream/model/DescribeApplicationsRequest.h>
#include <aws/appstream/model/DescribeDirectoryConfigsRequest.h>
#include <aws/appstream/model/DescribeEntitlementsRequest.h>
#include <aws/appstream/model/DescribeFleetsRequest.h>
#include <aws/appstream/model/DescribeImageBuildersRequest.h>
#include <aws/appstream/model/DescribeImagePermissionsRequest.h>
#include <aws/appstream/model/DescribeImagesRequest.h>
#include <aws/appstream/model/DescribeSessionsRequest.h>
#include <aws/appstream/model/DescribeStacksRequest.h>
#include <aws/appstream/model/DescribeUsageReportSubscriptionsRequest.h>
#include <aws/appstream/model/DescribeUserStackAssociationsRequest.h>
#include <aws/appstream/model/DescribeUsersRequest.h>
#include <aws/appstream/model/DisableUserRequest.h>
#include <aws/appstream/model/DisassociateApplicationFleetRequest.h>
#include <aws/appstream/model/DisassociateApplicationFromEntitlementRequest.h>
#include <aws/appstream/model/DisassociateFleetRequest.h>
#include <aws/appstream/model/EnableUserRequest.h>
#include <aws/appstream/model/ExpireSessionRequest.h>
#include <aws/appstream/model/ListAssociatedFleetsRequest.h>
#include <aws/appstream/model/ListAssociatedStacksRequest.h>
#include <aws/appstream/model/ListEntitledApplicationsRequest.h>
#include <aws/appstream/model/ListTagsForResourceRequest.h>
#include <aws/appstream/model/StartFleetRequest.h>
#include <aws/appstream/model/StartImageBuilderRequest.h>
#include <aws/appstream/model/StopFleetRequest.h>
#include <aws/appstream/model/StopImageBuilderRequest.h>
#include <aws/appstream/model/TagResourceRequest.h>
#include <aws/appstream/model/UntagResourceRequest.h>
#include <aws/appstream/model/UpdateApplicationRequest.h>
#include <aws/appstream/model/UpdateDirectoryConfigRequest.h>
#include <aws/appstream/model/UpdateEntitlementRequest.h>
#include <aws/appstream/model/UpdateFleetRequest.h>
#include <aws/appstream/model/UpdateImagePermissionsRequest.h>
#include <aws/appstream/model/UpdateStackRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppStream;
using namespace Aws::AppStream::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AppStreamClient::SERVICE_NAME = "appstream";
const char* AppStreamClient::ALLOCATION_TAG = "AppStreamClient";

AppStreamClient::AppStreamClient(const AppStream::AppStreamClientConfiguration& clientConfiguration,
                                 std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppStreamClient::AppStreamClient(const AWSCredentials& credentials,
                                 std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider,
                                 const AppStream::AppStreamClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppStreamClient::AppStreamClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider,
                                 const AppStream::AppStreamClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AppStreamClient::AppStreamClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppStreamClient::AppStreamClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppStreamClient::AppStreamClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AppStreamClient::~AppStreamClient()
{
}

std::shared_ptr<AppStreamEndpointProviderBase>& AppStreamClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppStreamClient::init(const AppStream::AppStreamClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AppStream");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AppStreamClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateApplicationFleetOutcome AppStreamClient::AssociateApplicationFleet(const AssociateApplicationFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateApplicationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateApplicationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateApplicationFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateApplicationFleetOutcomeCallable AppStreamClient::AssociateApplicationFleetCallable(const AssociateApplicationFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateApplicationFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateApplicationFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::AssociateApplicationFleetAsync(const AssociateApplicationFleetRequest& request, const AssociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateApplicationFleet(request), context);
    } );
}

AssociateApplicationToEntitlementOutcome AppStreamClient::AssociateApplicationToEntitlement(const AssociateApplicationToEntitlementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateApplicationToEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateApplicationToEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateApplicationToEntitlementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateApplicationToEntitlementOutcomeCallable AppStreamClient::AssociateApplicationToEntitlementCallable(const AssociateApplicationToEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateApplicationToEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateApplicationToEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::AssociateApplicationToEntitlementAsync(const AssociateApplicationToEntitlementRequest& request, const AssociateApplicationToEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateApplicationToEntitlement(request), context);
    } );
}

AssociateFleetOutcome AppStreamClient::AssociateFleet(const AssociateFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateFleetOutcomeCallable AppStreamClient::AssociateFleetCallable(const AssociateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::AssociateFleetAsync(const AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateFleet(request), context);
    } );
}

BatchAssociateUserStackOutcome AppStreamClient::BatchAssociateUserStack(const BatchAssociateUserStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateUserStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchAssociateUserStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchAssociateUserStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateUserStackOutcomeCallable AppStreamClient::BatchAssociateUserStackCallable(const BatchAssociateUserStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateUserStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateUserStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::BatchAssociateUserStackAsync(const BatchAssociateUserStackRequest& request, const BatchAssociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchAssociateUserStack(request), context);
    } );
}

BatchDisassociateUserStackOutcome AppStreamClient::BatchDisassociateUserStack(const BatchDisassociateUserStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateUserStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisassociateUserStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDisassociateUserStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateUserStackOutcomeCallable AppStreamClient::BatchDisassociateUserStackCallable(const BatchDisassociateUserStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateUserStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateUserStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::BatchDisassociateUserStackAsync(const BatchDisassociateUserStackRequest& request, const BatchDisassociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDisassociateUserStack(request), context);
    } );
}

CopyImageOutcome AppStreamClient::CopyImage(const CopyImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyImageOutcomeCallable AppStreamClient::CopyImageCallable(const CopyImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CopyImageAsync(const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopyImage(request), context);
    } );
}

CreateAppBlockOutcome AppStreamClient::CreateAppBlock(const CreateAppBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAppBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppBlockOutcomeCallable AppStreamClient::CreateAppBlockCallable(const CreateAppBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateAppBlockAsync(const CreateAppBlockRequest& request, const CreateAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAppBlock(request), context);
    } );
}

CreateApplicationOutcome AppStreamClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable AppStreamClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplication(request), context);
    } );
}

CreateDirectoryConfigOutcome AppStreamClient::CreateDirectoryConfig(const CreateDirectoryConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDirectoryConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDirectoryConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDirectoryConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDirectoryConfigOutcomeCallable AppStreamClient::CreateDirectoryConfigCallable(const CreateDirectoryConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDirectoryConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDirectoryConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateDirectoryConfigAsync(const CreateDirectoryConfigRequest& request, const CreateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDirectoryConfig(request), context);
    } );
}

CreateEntitlementOutcome AppStreamClient::CreateEntitlement(const CreateEntitlementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEntitlementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEntitlementOutcomeCallable AppStreamClient::CreateEntitlementCallable(const CreateEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateEntitlementAsync(const CreateEntitlementRequest& request, const CreateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEntitlement(request), context);
    } );
}

CreateFleetOutcome AppStreamClient::CreateFleet(const CreateFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetOutcomeCallable AppStreamClient::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFleet(request), context);
    } );
}

CreateImageBuilderOutcome AppStreamClient::CreateImageBuilder(const CreateImageBuilderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImageBuilder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImageBuilder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateImageBuilderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImageBuilderOutcomeCallable AppStreamClient::CreateImageBuilderCallable(const CreateImageBuilderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageBuilderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImageBuilder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateImageBuilderAsync(const CreateImageBuilderRequest& request, const CreateImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImageBuilder(request), context);
    } );
}

CreateImageBuilderStreamingURLOutcome AppStreamClient::CreateImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImageBuilderStreamingURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImageBuilderStreamingURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateImageBuilderStreamingURLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImageBuilderStreamingURLOutcomeCallable AppStreamClient::CreateImageBuilderStreamingURLCallable(const CreateImageBuilderStreamingURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageBuilderStreamingURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImageBuilderStreamingURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateImageBuilderStreamingURLAsync(const CreateImageBuilderStreamingURLRequest& request, const CreateImageBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImageBuilderStreamingURL(request), context);
    } );
}

CreateStackOutcome AppStreamClient::CreateStack(const CreateStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStackOutcomeCallable AppStreamClient::CreateStackCallable(const CreateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStack(request), context);
    } );
}

CreateStreamingURLOutcome AppStreamClient::CreateStreamingURL(const CreateStreamingURLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamingURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStreamingURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStreamingURLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamingURLOutcomeCallable AppStreamClient::CreateStreamingURLCallable(const CreateStreamingURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateStreamingURLAsync(const CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStreamingURL(request), context);
    } );
}

CreateUpdatedImageOutcome AppStreamClient::CreateUpdatedImage(const CreateUpdatedImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUpdatedImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUpdatedImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUpdatedImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUpdatedImageOutcomeCallable AppStreamClient::CreateUpdatedImageCallable(const CreateUpdatedImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUpdatedImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUpdatedImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateUpdatedImageAsync(const CreateUpdatedImageRequest& request, const CreateUpdatedImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUpdatedImage(request), context);
    } );
}

CreateUsageReportSubscriptionOutcome AppStreamClient::CreateUsageReportSubscription(const CreateUsageReportSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUsageReportSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUsageReportSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUsageReportSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUsageReportSubscriptionOutcomeCallable AppStreamClient::CreateUsageReportSubscriptionCallable(const CreateUsageReportSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUsageReportSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUsageReportSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateUsageReportSubscriptionAsync(const CreateUsageReportSubscriptionRequest& request, const CreateUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUsageReportSubscription(request), context);
    } );
}

CreateUserOutcome AppStreamClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable AppStreamClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUser(request), context);
    } );
}

DeleteAppBlockOutcome AppStreamClient::DeleteAppBlock(const DeleteAppBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAppBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppBlockOutcomeCallable AppStreamClient::DeleteAppBlockCallable(const DeleteAppBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteAppBlockAsync(const DeleteAppBlockRequest& request, const DeleteAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppBlock(request), context);
    } );
}

DeleteApplicationOutcome AppStreamClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable AppStreamClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplication(request), context);
    } );
}

DeleteDirectoryConfigOutcome AppStreamClient::DeleteDirectoryConfig(const DeleteDirectoryConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDirectoryConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDirectoryConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDirectoryConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDirectoryConfigOutcomeCallable AppStreamClient::DeleteDirectoryConfigCallable(const DeleteDirectoryConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDirectoryConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDirectoryConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteDirectoryConfigAsync(const DeleteDirectoryConfigRequest& request, const DeleteDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDirectoryConfig(request), context);
    } );
}

DeleteEntitlementOutcome AppStreamClient::DeleteEntitlement(const DeleteEntitlementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEntitlementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEntitlementOutcomeCallable AppStreamClient::DeleteEntitlementCallable(const DeleteEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteEntitlementAsync(const DeleteEntitlementRequest& request, const DeleteEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEntitlement(request), context);
    } );
}

DeleteFleetOutcome AppStreamClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetOutcomeCallable AppStreamClient::DeleteFleetCallable(const DeleteFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFleet(request), context);
    } );
}

DeleteImageOutcome AppStreamClient::DeleteImage(const DeleteImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageOutcomeCallable AppStreamClient::DeleteImageCallable(const DeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImage(request), context);
    } );
}

DeleteImageBuilderOutcome AppStreamClient::DeleteImageBuilder(const DeleteImageBuilderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImageBuilder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImageBuilder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteImageBuilderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageBuilderOutcomeCallable AppStreamClient::DeleteImageBuilderCallable(const DeleteImageBuilderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageBuilderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImageBuilder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteImageBuilderAsync(const DeleteImageBuilderRequest& request, const DeleteImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImageBuilder(request), context);
    } );
}

DeleteImagePermissionsOutcome AppStreamClient::DeleteImagePermissions(const DeleteImagePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImagePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImagePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteImagePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImagePermissionsOutcomeCallable AppStreamClient::DeleteImagePermissionsCallable(const DeleteImagePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImagePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImagePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteImagePermissionsAsync(const DeleteImagePermissionsRequest& request, const DeleteImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImagePermissions(request), context);
    } );
}

DeleteStackOutcome AppStreamClient::DeleteStack(const DeleteStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStackOutcomeCallable AppStreamClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStack(request), context);
    } );
}

DeleteUsageReportSubscriptionOutcome AppStreamClient::DeleteUsageReportSubscription(const DeleteUsageReportSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUsageReportSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUsageReportSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUsageReportSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUsageReportSubscriptionOutcomeCallable AppStreamClient::DeleteUsageReportSubscriptionCallable(const DeleteUsageReportSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUsageReportSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUsageReportSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteUsageReportSubscriptionAsync(const DeleteUsageReportSubscriptionRequest& request, const DeleteUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUsageReportSubscription(request), context);
    } );
}

DeleteUserOutcome AppStreamClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable AppStreamClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUser(request), context);
    } );
}

DescribeAppBlocksOutcome AppStreamClient::DescribeAppBlocks(const DescribeAppBlocksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAppBlocks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAppBlocks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAppBlocksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppBlocksOutcomeCallable AppStreamClient::DescribeAppBlocksCallable(const DescribeAppBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeAppBlocksAsync(const DescribeAppBlocksRequest& request, const DescribeAppBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAppBlocks(request), context);
    } );
}

DescribeApplicationFleetAssociationsOutcome AppStreamClient::DescribeApplicationFleetAssociations(const DescribeApplicationFleetAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicationFleetAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicationFleetAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicationFleetAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationFleetAssociationsOutcomeCallable AppStreamClient::DescribeApplicationFleetAssociationsCallable(const DescribeApplicationFleetAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationFleetAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationFleetAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeApplicationFleetAssociationsAsync(const DescribeApplicationFleetAssociationsRequest& request, const DescribeApplicationFleetAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApplicationFleetAssociations(request), context);
    } );
}

DescribeApplicationsOutcome AppStreamClient::DescribeApplications(const DescribeApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationsOutcomeCallable AppStreamClient::DescribeApplicationsCallable(const DescribeApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApplications(request), context);
    } );
}

DescribeDirectoryConfigsOutcome AppStreamClient::DescribeDirectoryConfigs(const DescribeDirectoryConfigsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDirectoryConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDirectoryConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDirectoryConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDirectoryConfigsOutcomeCallable AppStreamClient::DescribeDirectoryConfigsCallable(const DescribeDirectoryConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDirectoryConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDirectoryConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeDirectoryConfigsAsync(const DescribeDirectoryConfigsRequest& request, const DescribeDirectoryConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDirectoryConfigs(request), context);
    } );
}

DescribeEntitlementsOutcome AppStreamClient::DescribeEntitlements(const DescribeEntitlementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEntitlementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntitlementsOutcomeCallable AppStreamClient::DescribeEntitlementsCallable(const DescribeEntitlementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntitlementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntitlements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeEntitlementsAsync(const DescribeEntitlementsRequest& request, const DescribeEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEntitlements(request), context);
    } );
}

DescribeFleetsOutcome AppStreamClient::DescribeFleets(const DescribeFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetsOutcomeCallable AppStreamClient::DescribeFleetsCallable(const DescribeFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeFleetsAsync(const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFleets(request), context);
    } );
}

DescribeImageBuildersOutcome AppStreamClient::DescribeImageBuilders(const DescribeImageBuildersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImageBuilders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImageBuilders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImageBuildersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageBuildersOutcomeCallable AppStreamClient::DescribeImageBuildersCallable(const DescribeImageBuildersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageBuildersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageBuilders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeImageBuildersAsync(const DescribeImageBuildersRequest& request, const DescribeImageBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImageBuilders(request), context);
    } );
}

DescribeImagePermissionsOutcome AppStreamClient::DescribeImagePermissions(const DescribeImagePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImagePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImagePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImagePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImagePermissionsOutcomeCallable AppStreamClient::DescribeImagePermissionsCallable(const DescribeImagePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImagePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeImagePermissionsAsync(const DescribeImagePermissionsRequest& request, const DescribeImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImagePermissions(request), context);
    } );
}

DescribeImagesOutcome AppStreamClient::DescribeImages(const DescribeImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImagesOutcomeCallable AppStreamClient::DescribeImagesCallable(const DescribeImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImages(request), context);
    } );
}

DescribeSessionsOutcome AppStreamClient::DescribeSessions(const DescribeSessionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSessionsOutcomeCallable AppStreamClient::DescribeSessionsCallable(const DescribeSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeSessionsAsync(const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSessions(request), context);
    } );
}

DescribeStacksOutcome AppStreamClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStacksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStacksOutcomeCallable AppStreamClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStacks(request), context);
    } );
}

DescribeUsageReportSubscriptionsOutcome AppStreamClient::DescribeUsageReportSubscriptions(const DescribeUsageReportSubscriptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUsageReportSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUsageReportSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUsageReportSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUsageReportSubscriptionsOutcomeCallable AppStreamClient::DescribeUsageReportSubscriptionsCallable(const DescribeUsageReportSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsageReportSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsageReportSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeUsageReportSubscriptionsAsync(const DescribeUsageReportSubscriptionsRequest& request, const DescribeUsageReportSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUsageReportSubscriptions(request), context);
    } );
}

DescribeUserStackAssociationsOutcome AppStreamClient::DescribeUserStackAssociations(const DescribeUserStackAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserStackAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserStackAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserStackAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserStackAssociationsOutcomeCallable AppStreamClient::DescribeUserStackAssociationsCallable(const DescribeUserStackAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserStackAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserStackAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeUserStackAssociationsAsync(const DescribeUserStackAssociationsRequest& request, const DescribeUserStackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUserStackAssociations(request), context);
    } );
}

DescribeUsersOutcome AppStreamClient::DescribeUsers(const DescribeUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUsersOutcomeCallable AppStreamClient::DescribeUsersCallable(const DescribeUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUsers(request), context);
    } );
}

DisableUserOutcome AppStreamClient::DisableUser(const DisableUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableUserOutcomeCallable AppStreamClient::DisableUserCallable(const DisableUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DisableUserAsync(const DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableUser(request), context);
    } );
}

DisassociateApplicationFleetOutcome AppStreamClient::DisassociateApplicationFleet(const DisassociateApplicationFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateApplicationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateApplicationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateApplicationFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApplicationFleetOutcomeCallable AppStreamClient::DisassociateApplicationFleetCallable(const DisassociateApplicationFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateApplicationFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateApplicationFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DisassociateApplicationFleetAsync(const DisassociateApplicationFleetRequest& request, const DisassociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateApplicationFleet(request), context);
    } );
}

DisassociateApplicationFromEntitlementOutcome AppStreamClient::DisassociateApplicationFromEntitlement(const DisassociateApplicationFromEntitlementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateApplicationFromEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateApplicationFromEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateApplicationFromEntitlementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApplicationFromEntitlementOutcomeCallable AppStreamClient::DisassociateApplicationFromEntitlementCallable(const DisassociateApplicationFromEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateApplicationFromEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateApplicationFromEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DisassociateApplicationFromEntitlementAsync(const DisassociateApplicationFromEntitlementRequest& request, const DisassociateApplicationFromEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateApplicationFromEntitlement(request), context);
    } );
}

DisassociateFleetOutcome AppStreamClient::DisassociateFleet(const DisassociateFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFleetOutcomeCallable AppStreamClient::DisassociateFleetCallable(const DisassociateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DisassociateFleetAsync(const DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateFleet(request), context);
    } );
}

EnableUserOutcome AppStreamClient::EnableUser(const EnableUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableUserOutcomeCallable AppStreamClient::EnableUserCallable(const EnableUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::EnableUserAsync(const EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableUser(request), context);
    } );
}

ExpireSessionOutcome AppStreamClient::ExpireSession(const ExpireSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExpireSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExpireSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExpireSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExpireSessionOutcomeCallable AppStreamClient::ExpireSessionCallable(const ExpireSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExpireSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExpireSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::ExpireSessionAsync(const ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExpireSession(request), context);
    } );
}

ListAssociatedFleetsOutcome AppStreamClient::ListAssociatedFleets(const ListAssociatedFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociatedFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociatedFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAssociatedFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedFleetsOutcomeCallable AppStreamClient::ListAssociatedFleetsCallable(const ListAssociatedFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::ListAssociatedFleetsAsync(const ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssociatedFleets(request), context);
    } );
}

ListAssociatedStacksOutcome AppStreamClient::ListAssociatedStacks(const ListAssociatedStacksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociatedStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociatedStacks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAssociatedStacksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedStacksOutcomeCallable AppStreamClient::ListAssociatedStacksCallable(const ListAssociatedStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::ListAssociatedStacksAsync(const ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssociatedStacks(request), context);
    } );
}

ListEntitledApplicationsOutcome AppStreamClient::ListEntitledApplications(const ListEntitledApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEntitledApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEntitledApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEntitledApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitledApplicationsOutcomeCallable AppStreamClient::ListEntitledApplicationsCallable(const ListEntitledApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitledApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitledApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::ListEntitledApplicationsAsync(const ListEntitledApplicationsRequest& request, const ListEntitledApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEntitledApplications(request), context);
    } );
}

ListTagsForResourceOutcome AppStreamClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppStreamClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

StartFleetOutcome AppStreamClient::StartFleet(const StartFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFleetOutcomeCallable AppStreamClient::StartFleetCallable(const StartFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::StartFleetAsync(const StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFleet(request), context);
    } );
}

StartImageBuilderOutcome AppStreamClient::StartImageBuilder(const StartImageBuilderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartImageBuilder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartImageBuilder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartImageBuilderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartImageBuilderOutcomeCallable AppStreamClient::StartImageBuilderCallable(const StartImageBuilderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImageBuilderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImageBuilder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::StartImageBuilderAsync(const StartImageBuilderRequest& request, const StartImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartImageBuilder(request), context);
    } );
}

StopFleetOutcome AppStreamClient::StopFleet(const StopFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopFleetOutcomeCallable AppStreamClient::StopFleetCallable(const StopFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::StopFleetAsync(const StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopFleet(request), context);
    } );
}

StopImageBuilderOutcome AppStreamClient::StopImageBuilder(const StopImageBuilderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopImageBuilder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopImageBuilder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopImageBuilderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopImageBuilderOutcomeCallable AppStreamClient::StopImageBuilderCallable(const StopImageBuilderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopImageBuilderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopImageBuilder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::StopImageBuilderAsync(const StopImageBuilderRequest& request, const StopImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopImageBuilder(request), context);
    } );
}

TagResourceOutcome AppStreamClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppStreamClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome AppStreamClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppStreamClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateApplicationOutcome AppStreamClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable AppStreamClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplication(request), context);
    } );
}

UpdateDirectoryConfigOutcome AppStreamClient::UpdateDirectoryConfig(const UpdateDirectoryConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDirectoryConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDirectoryConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDirectoryConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDirectoryConfigOutcomeCallable AppStreamClient::UpdateDirectoryConfigCallable(const UpdateDirectoryConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDirectoryConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDirectoryConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UpdateDirectoryConfigAsync(const UpdateDirectoryConfigRequest& request, const UpdateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDirectoryConfig(request), context);
    } );
}

UpdateEntitlementOutcome AppStreamClient::UpdateEntitlement(const UpdateEntitlementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEntitlementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEntitlementOutcomeCallable AppStreamClient::UpdateEntitlementCallable(const UpdateEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UpdateEntitlementAsync(const UpdateEntitlementRequest& request, const UpdateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEntitlement(request), context);
    } );
}

UpdateFleetOutcome AppStreamClient::UpdateFleet(const UpdateFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFleetOutcomeCallable AppStreamClient::UpdateFleetCallable(const UpdateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UpdateFleetAsync(const UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFleet(request), context);
    } );
}

UpdateImagePermissionsOutcome AppStreamClient::UpdateImagePermissions(const UpdateImagePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateImagePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateImagePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateImagePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateImagePermissionsOutcomeCallable AppStreamClient::UpdateImagePermissionsCallable(const UpdateImagePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImagePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImagePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UpdateImagePermissionsAsync(const UpdateImagePermissionsRequest& request, const UpdateImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateImagePermissions(request), context);
    } );
}

UpdateStackOutcome AppStreamClient::UpdateStack(const UpdateStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStackOutcomeCallable AppStreamClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStack(request), context);
    } );
}

