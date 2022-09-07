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

#include <aws/appstream/AppStreamClient.h>
#include <aws/appstream/AppStreamEndpoint.h>
#include <aws/appstream/AppStreamErrorMarshaller.h>
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

static const char* SERVICE_NAME = "appstream";
static const char* ALLOCATION_TAG = "AppStreamClient";

AppStreamClient::AppStreamClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::AppStreamClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::AppStreamClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::~AppStreamClient()
{
}

void AppStreamClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AppStream");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppStreamEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppStreamClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateApplicationFleetOutcome AppStreamClient::AssociateApplicationFleet(const AssociateApplicationFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateApplicationFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateApplicationFleetOutcomeCallable AppStreamClient::AssociateApplicationFleetCallable(const AssociateApplicationFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateApplicationFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateApplicationFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientAssociateApplicationFleetAsyncHelper(AppStreamClient const * const clientThis, const AssociateApplicationFleetRequest& request, const AssociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateApplicationFleet(request), context);
}

void AppStreamClient::AssociateApplicationFleetAsync(const AssociateApplicationFleetRequest& request, const AssociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientAssociateApplicationFleetAsyncHelper( this, request, handler, context ); } );
}

AssociateApplicationToEntitlementOutcome AppStreamClient::AssociateApplicationToEntitlement(const AssociateApplicationToEntitlementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateApplicationToEntitlementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateApplicationToEntitlementOutcomeCallable AppStreamClient::AssociateApplicationToEntitlementCallable(const AssociateApplicationToEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateApplicationToEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateApplicationToEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientAssociateApplicationToEntitlementAsyncHelper(AppStreamClient const * const clientThis, const AssociateApplicationToEntitlementRequest& request, const AssociateApplicationToEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateApplicationToEntitlement(request), context);
}

void AppStreamClient::AssociateApplicationToEntitlementAsync(const AssociateApplicationToEntitlementRequest& request, const AssociateApplicationToEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientAssociateApplicationToEntitlementAsyncHelper( this, request, handler, context ); } );
}

AssociateFleetOutcome AppStreamClient::AssociateFleet(const AssociateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateFleetOutcomeCallable AppStreamClient::AssociateFleetCallable(const AssociateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientAssociateFleetAsyncHelper(AppStreamClient const * const clientThis, const AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateFleet(request), context);
}

void AppStreamClient::AssociateFleetAsync(const AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientAssociateFleetAsyncHelper( this, request, handler, context ); } );
}

BatchAssociateUserStackOutcome AppStreamClient::BatchAssociateUserStack(const BatchAssociateUserStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchAssociateUserStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateUserStackOutcomeCallable AppStreamClient::BatchAssociateUserStackCallable(const BatchAssociateUserStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateUserStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateUserStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientBatchAssociateUserStackAsyncHelper(AppStreamClient const * const clientThis, const BatchAssociateUserStackRequest& request, const BatchAssociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAssociateUserStack(request), context);
}

void AppStreamClient::BatchAssociateUserStackAsync(const BatchAssociateUserStackRequest& request, const BatchAssociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientBatchAssociateUserStackAsyncHelper( this, request, handler, context ); } );
}

BatchDisassociateUserStackOutcome AppStreamClient::BatchDisassociateUserStack(const BatchDisassociateUserStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDisassociateUserStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateUserStackOutcomeCallable AppStreamClient::BatchDisassociateUserStackCallable(const BatchDisassociateUserStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateUserStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateUserStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientBatchDisassociateUserStackAsyncHelper(AppStreamClient const * const clientThis, const BatchDisassociateUserStackRequest& request, const BatchDisassociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisassociateUserStack(request), context);
}

void AppStreamClient::BatchDisassociateUserStackAsync(const BatchDisassociateUserStackRequest& request, const BatchDisassociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientBatchDisassociateUserStackAsyncHelper( this, request, handler, context ); } );
}

CopyImageOutcome AppStreamClient::CopyImage(const CopyImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyImageOutcomeCallable AppStreamClient::CopyImageCallable(const CopyImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCopyImageAsyncHelper(AppStreamClient const * const clientThis, const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyImage(request), context);
}

void AppStreamClient::CopyImageAsync(const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCopyImageAsyncHelper( this, request, handler, context ); } );
}

CreateAppBlockOutcome AppStreamClient::CreateAppBlock(const CreateAppBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAppBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppBlockOutcomeCallable AppStreamClient::CreateAppBlockCallable(const CreateAppBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateAppBlockAsyncHelper(AppStreamClient const * const clientThis, const CreateAppBlockRequest& request, const CreateAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAppBlock(request), context);
}

void AppStreamClient::CreateAppBlockAsync(const CreateAppBlockRequest& request, const CreateAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateAppBlockAsyncHelper( this, request, handler, context ); } );
}

CreateApplicationOutcome AppStreamClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable AppStreamClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateApplicationAsyncHelper(AppStreamClient const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void AppStreamClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
}

CreateDirectoryConfigOutcome AppStreamClient::CreateDirectoryConfig(const CreateDirectoryConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDirectoryConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDirectoryConfigOutcomeCallable AppStreamClient::CreateDirectoryConfigCallable(const CreateDirectoryConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDirectoryConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDirectoryConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateDirectoryConfigAsyncHelper(AppStreamClient const * const clientThis, const CreateDirectoryConfigRequest& request, const CreateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDirectoryConfig(request), context);
}

void AppStreamClient::CreateDirectoryConfigAsync(const CreateDirectoryConfigRequest& request, const CreateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateDirectoryConfigAsyncHelper( this, request, handler, context ); } );
}

CreateEntitlementOutcome AppStreamClient::CreateEntitlement(const CreateEntitlementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEntitlementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEntitlementOutcomeCallable AppStreamClient::CreateEntitlementCallable(const CreateEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateEntitlementAsyncHelper(AppStreamClient const * const clientThis, const CreateEntitlementRequest& request, const CreateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEntitlement(request), context);
}

void AppStreamClient::CreateEntitlementAsync(const CreateEntitlementRequest& request, const CreateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateEntitlementAsyncHelper( this, request, handler, context ); } );
}

CreateFleetOutcome AppStreamClient::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetOutcomeCallable AppStreamClient::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateFleetAsyncHelper(AppStreamClient const * const clientThis, const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFleet(request), context);
}

void AppStreamClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateFleetAsyncHelper( this, request, handler, context ); } );
}

CreateImageBuilderOutcome AppStreamClient::CreateImageBuilder(const CreateImageBuilderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateImageBuilderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImageBuilderOutcomeCallable AppStreamClient::CreateImageBuilderCallable(const CreateImageBuilderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageBuilderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImageBuilder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateImageBuilderAsyncHelper(AppStreamClient const * const clientThis, const CreateImageBuilderRequest& request, const CreateImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImageBuilder(request), context);
}

void AppStreamClient::CreateImageBuilderAsync(const CreateImageBuilderRequest& request, const CreateImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateImageBuilderAsyncHelper( this, request, handler, context ); } );
}

CreateImageBuilderStreamingURLOutcome AppStreamClient::CreateImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateImageBuilderStreamingURLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImageBuilderStreamingURLOutcomeCallable AppStreamClient::CreateImageBuilderStreamingURLCallable(const CreateImageBuilderStreamingURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageBuilderStreamingURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImageBuilderStreamingURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateImageBuilderStreamingURLAsyncHelper(AppStreamClient const * const clientThis, const CreateImageBuilderStreamingURLRequest& request, const CreateImageBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImageBuilderStreamingURL(request), context);
}

void AppStreamClient::CreateImageBuilderStreamingURLAsync(const CreateImageBuilderStreamingURLRequest& request, const CreateImageBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateImageBuilderStreamingURLAsyncHelper( this, request, handler, context ); } );
}

CreateStackOutcome AppStreamClient::CreateStack(const CreateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStackOutcomeCallable AppStreamClient::CreateStackCallable(const CreateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateStackAsyncHelper(AppStreamClient const * const clientThis, const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStack(request), context);
}

void AppStreamClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateStackAsyncHelper( this, request, handler, context ); } );
}

CreateStreamingURLOutcome AppStreamClient::CreateStreamingURL(const CreateStreamingURLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStreamingURLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamingURLOutcomeCallable AppStreamClient::CreateStreamingURLCallable(const CreateStreamingURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateStreamingURLAsyncHelper(AppStreamClient const * const clientThis, const CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStreamingURL(request), context);
}

void AppStreamClient::CreateStreamingURLAsync(const CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateStreamingURLAsyncHelper( this, request, handler, context ); } );
}

CreateUpdatedImageOutcome AppStreamClient::CreateUpdatedImage(const CreateUpdatedImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUpdatedImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUpdatedImageOutcomeCallable AppStreamClient::CreateUpdatedImageCallable(const CreateUpdatedImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUpdatedImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUpdatedImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateUpdatedImageAsyncHelper(AppStreamClient const * const clientThis, const CreateUpdatedImageRequest& request, const CreateUpdatedImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUpdatedImage(request), context);
}

void AppStreamClient::CreateUpdatedImageAsync(const CreateUpdatedImageRequest& request, const CreateUpdatedImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateUpdatedImageAsyncHelper( this, request, handler, context ); } );
}

CreateUsageReportSubscriptionOutcome AppStreamClient::CreateUsageReportSubscription(const CreateUsageReportSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUsageReportSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUsageReportSubscriptionOutcomeCallable AppStreamClient::CreateUsageReportSubscriptionCallable(const CreateUsageReportSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUsageReportSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUsageReportSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateUsageReportSubscriptionAsyncHelper(AppStreamClient const * const clientThis, const CreateUsageReportSubscriptionRequest& request, const CreateUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUsageReportSubscription(request), context);
}

void AppStreamClient::CreateUsageReportSubscriptionAsync(const CreateUsageReportSubscriptionRequest& request, const CreateUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateUsageReportSubscriptionAsyncHelper( this, request, handler, context ); } );
}

CreateUserOutcome AppStreamClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable AppStreamClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientCreateUserAsyncHelper(AppStreamClient const * const clientThis, const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUser(request), context);
}

void AppStreamClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientCreateUserAsyncHelper( this, request, handler, context ); } );
}

DeleteAppBlockOutcome AppStreamClient::DeleteAppBlock(const DeleteAppBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAppBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppBlockOutcomeCallable AppStreamClient::DeleteAppBlockCallable(const DeleteAppBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteAppBlockAsyncHelper(AppStreamClient const * const clientThis, const DeleteAppBlockRequest& request, const DeleteAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAppBlock(request), context);
}

void AppStreamClient::DeleteAppBlockAsync(const DeleteAppBlockRequest& request, const DeleteAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteAppBlockAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutcome AppStreamClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable AppStreamClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteApplicationAsyncHelper(AppStreamClient const * const clientThis, const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplication(request), context);
}

void AppStreamClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteApplicationAsyncHelper( this, request, handler, context ); } );
}

DeleteDirectoryConfigOutcome AppStreamClient::DeleteDirectoryConfig(const DeleteDirectoryConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDirectoryConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDirectoryConfigOutcomeCallable AppStreamClient::DeleteDirectoryConfigCallable(const DeleteDirectoryConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDirectoryConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDirectoryConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteDirectoryConfigAsyncHelper(AppStreamClient const * const clientThis, const DeleteDirectoryConfigRequest& request, const DeleteDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDirectoryConfig(request), context);
}

void AppStreamClient::DeleteDirectoryConfigAsync(const DeleteDirectoryConfigRequest& request, const DeleteDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteDirectoryConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteEntitlementOutcome AppStreamClient::DeleteEntitlement(const DeleteEntitlementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEntitlementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEntitlementOutcomeCallable AppStreamClient::DeleteEntitlementCallable(const DeleteEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteEntitlementAsyncHelper(AppStreamClient const * const clientThis, const DeleteEntitlementRequest& request, const DeleteEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEntitlement(request), context);
}

void AppStreamClient::DeleteEntitlementAsync(const DeleteEntitlementRequest& request, const DeleteEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteEntitlementAsyncHelper( this, request, handler, context ); } );
}

DeleteFleetOutcome AppStreamClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetOutcomeCallable AppStreamClient::DeleteFleetCallable(const DeleteFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteFleetAsyncHelper(AppStreamClient const * const clientThis, const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFleet(request), context);
}

void AppStreamClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteFleetAsyncHelper( this, request, handler, context ); } );
}

DeleteImageOutcome AppStreamClient::DeleteImage(const DeleteImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageOutcomeCallable AppStreamClient::DeleteImageCallable(const DeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteImageAsyncHelper(AppStreamClient const * const clientThis, const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImage(request), context);
}

void AppStreamClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteImageAsyncHelper( this, request, handler, context ); } );
}

DeleteImageBuilderOutcome AppStreamClient::DeleteImageBuilder(const DeleteImageBuilderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteImageBuilderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageBuilderOutcomeCallable AppStreamClient::DeleteImageBuilderCallable(const DeleteImageBuilderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageBuilderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImageBuilder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteImageBuilderAsyncHelper(AppStreamClient const * const clientThis, const DeleteImageBuilderRequest& request, const DeleteImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImageBuilder(request), context);
}

void AppStreamClient::DeleteImageBuilderAsync(const DeleteImageBuilderRequest& request, const DeleteImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteImageBuilderAsyncHelper( this, request, handler, context ); } );
}

DeleteImagePermissionsOutcome AppStreamClient::DeleteImagePermissions(const DeleteImagePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteImagePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImagePermissionsOutcomeCallable AppStreamClient::DeleteImagePermissionsCallable(const DeleteImagePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImagePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImagePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteImagePermissionsAsyncHelper(AppStreamClient const * const clientThis, const DeleteImagePermissionsRequest& request, const DeleteImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImagePermissions(request), context);
}

void AppStreamClient::DeleteImagePermissionsAsync(const DeleteImagePermissionsRequest& request, const DeleteImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteImagePermissionsAsyncHelper( this, request, handler, context ); } );
}

DeleteStackOutcome AppStreamClient::DeleteStack(const DeleteStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStackOutcomeCallable AppStreamClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteStackAsyncHelper(AppStreamClient const * const clientThis, const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStack(request), context);
}

void AppStreamClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteStackAsyncHelper( this, request, handler, context ); } );
}

DeleteUsageReportSubscriptionOutcome AppStreamClient::DeleteUsageReportSubscription(const DeleteUsageReportSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUsageReportSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUsageReportSubscriptionOutcomeCallable AppStreamClient::DeleteUsageReportSubscriptionCallable(const DeleteUsageReportSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUsageReportSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUsageReportSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteUsageReportSubscriptionAsyncHelper(AppStreamClient const * const clientThis, const DeleteUsageReportSubscriptionRequest& request, const DeleteUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUsageReportSubscription(request), context);
}

void AppStreamClient::DeleteUsageReportSubscriptionAsync(const DeleteUsageReportSubscriptionRequest& request, const DeleteUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteUsageReportSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DeleteUserOutcome AppStreamClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable AppStreamClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDeleteUserAsyncHelper(AppStreamClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void AppStreamClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDeleteUserAsyncHelper( this, request, handler, context ); } );
}

DescribeAppBlocksOutcome AppStreamClient::DescribeAppBlocks(const DescribeAppBlocksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAppBlocksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppBlocksOutcomeCallable AppStreamClient::DescribeAppBlocksCallable(const DescribeAppBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeAppBlocksAsyncHelper(AppStreamClient const * const clientThis, const DescribeAppBlocksRequest& request, const DescribeAppBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAppBlocks(request), context);
}

void AppStreamClient::DescribeAppBlocksAsync(const DescribeAppBlocksRequest& request, const DescribeAppBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeAppBlocksAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationFleetAssociationsOutcome AppStreamClient::DescribeApplicationFleetAssociations(const DescribeApplicationFleetAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationFleetAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationFleetAssociationsOutcomeCallable AppStreamClient::DescribeApplicationFleetAssociationsCallable(const DescribeApplicationFleetAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationFleetAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationFleetAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeApplicationFleetAssociationsAsyncHelper(AppStreamClient const * const clientThis, const DescribeApplicationFleetAssociationsRequest& request, const DescribeApplicationFleetAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplicationFleetAssociations(request), context);
}

void AppStreamClient::DescribeApplicationFleetAssociationsAsync(const DescribeApplicationFleetAssociationsRequest& request, const DescribeApplicationFleetAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeApplicationFleetAssociationsAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationsOutcome AppStreamClient::DescribeApplications(const DescribeApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationsOutcomeCallable AppStreamClient::DescribeApplicationsCallable(const DescribeApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeApplicationsAsyncHelper(AppStreamClient const * const clientThis, const DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplications(request), context);
}

void AppStreamClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeApplicationsAsyncHelper( this, request, handler, context ); } );
}

DescribeDirectoryConfigsOutcome AppStreamClient::DescribeDirectoryConfigs(const DescribeDirectoryConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDirectoryConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDirectoryConfigsOutcomeCallable AppStreamClient::DescribeDirectoryConfigsCallable(const DescribeDirectoryConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDirectoryConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDirectoryConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeDirectoryConfigsAsyncHelper(AppStreamClient const * const clientThis, const DescribeDirectoryConfigsRequest& request, const DescribeDirectoryConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDirectoryConfigs(request), context);
}

void AppStreamClient::DescribeDirectoryConfigsAsync(const DescribeDirectoryConfigsRequest& request, const DescribeDirectoryConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeDirectoryConfigsAsyncHelper( this, request, handler, context ); } );
}

DescribeEntitlementsOutcome AppStreamClient::DescribeEntitlements(const DescribeEntitlementsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEntitlementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntitlementsOutcomeCallable AppStreamClient::DescribeEntitlementsCallable(const DescribeEntitlementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntitlementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntitlements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeEntitlementsAsyncHelper(AppStreamClient const * const clientThis, const DescribeEntitlementsRequest& request, const DescribeEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEntitlements(request), context);
}

void AppStreamClient::DescribeEntitlementsAsync(const DescribeEntitlementsRequest& request, const DescribeEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeEntitlementsAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetsOutcome AppStreamClient::DescribeFleets(const DescribeFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetsOutcomeCallable AppStreamClient::DescribeFleetsCallable(const DescribeFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeFleetsAsyncHelper(AppStreamClient const * const clientThis, const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleets(request), context);
}

void AppStreamClient::DescribeFleetsAsync(const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeFleetsAsyncHelper( this, request, handler, context ); } );
}

DescribeImageBuildersOutcome AppStreamClient::DescribeImageBuilders(const DescribeImageBuildersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImageBuildersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageBuildersOutcomeCallable AppStreamClient::DescribeImageBuildersCallable(const DescribeImageBuildersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageBuildersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageBuilders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeImageBuildersAsyncHelper(AppStreamClient const * const clientThis, const DescribeImageBuildersRequest& request, const DescribeImageBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImageBuilders(request), context);
}

void AppStreamClient::DescribeImageBuildersAsync(const DescribeImageBuildersRequest& request, const DescribeImageBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeImageBuildersAsyncHelper( this, request, handler, context ); } );
}

DescribeImagePermissionsOutcome AppStreamClient::DescribeImagePermissions(const DescribeImagePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImagePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImagePermissionsOutcomeCallable AppStreamClient::DescribeImagePermissionsCallable(const DescribeImagePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImagePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeImagePermissionsAsyncHelper(AppStreamClient const * const clientThis, const DescribeImagePermissionsRequest& request, const DescribeImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImagePermissions(request), context);
}

void AppStreamClient::DescribeImagePermissionsAsync(const DescribeImagePermissionsRequest& request, const DescribeImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeImagePermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeImagesOutcome AppStreamClient::DescribeImages(const DescribeImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImagesOutcomeCallable AppStreamClient::DescribeImagesCallable(const DescribeImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeImagesAsyncHelper(AppStreamClient const * const clientThis, const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImages(request), context);
}

void AppStreamClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeImagesAsyncHelper( this, request, handler, context ); } );
}

DescribeSessionsOutcome AppStreamClient::DescribeSessions(const DescribeSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSessionsOutcomeCallable AppStreamClient::DescribeSessionsCallable(const DescribeSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeSessionsAsyncHelper(AppStreamClient const * const clientThis, const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSessions(request), context);
}

void AppStreamClient::DescribeSessionsAsync(const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeSessionsAsyncHelper( this, request, handler, context ); } );
}

DescribeStacksOutcome AppStreamClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStacksOutcomeCallable AppStreamClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeStacksAsyncHelper(AppStreamClient const * const clientThis, const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStacks(request), context);
}

void AppStreamClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeStacksAsyncHelper( this, request, handler, context ); } );
}

DescribeUsageReportSubscriptionsOutcome AppStreamClient::DescribeUsageReportSubscriptions(const DescribeUsageReportSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUsageReportSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUsageReportSubscriptionsOutcomeCallable AppStreamClient::DescribeUsageReportSubscriptionsCallable(const DescribeUsageReportSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsageReportSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsageReportSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeUsageReportSubscriptionsAsyncHelper(AppStreamClient const * const clientThis, const DescribeUsageReportSubscriptionsRequest& request, const DescribeUsageReportSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUsageReportSubscriptions(request), context);
}

void AppStreamClient::DescribeUsageReportSubscriptionsAsync(const DescribeUsageReportSubscriptionsRequest& request, const DescribeUsageReportSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeUsageReportSubscriptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeUserStackAssociationsOutcome AppStreamClient::DescribeUserStackAssociations(const DescribeUserStackAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUserStackAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserStackAssociationsOutcomeCallable AppStreamClient::DescribeUserStackAssociationsCallable(const DescribeUserStackAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserStackAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserStackAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeUserStackAssociationsAsyncHelper(AppStreamClient const * const clientThis, const DescribeUserStackAssociationsRequest& request, const DescribeUserStackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUserStackAssociations(request), context);
}

void AppStreamClient::DescribeUserStackAssociationsAsync(const DescribeUserStackAssociationsRequest& request, const DescribeUserStackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeUserStackAssociationsAsyncHelper( this, request, handler, context ); } );
}

DescribeUsersOutcome AppStreamClient::DescribeUsers(const DescribeUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUsersOutcomeCallable AppStreamClient::DescribeUsersCallable(const DescribeUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDescribeUsersAsyncHelper(AppStreamClient const * const clientThis, const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUsers(request), context);
}

void AppStreamClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDescribeUsersAsyncHelper( this, request, handler, context ); } );
}

DisableUserOutcome AppStreamClient::DisableUser(const DisableUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableUserOutcomeCallable AppStreamClient::DisableUserCallable(const DisableUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDisableUserAsyncHelper(AppStreamClient const * const clientThis, const DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableUser(request), context);
}

void AppStreamClient::DisableUserAsync(const DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDisableUserAsyncHelper( this, request, handler, context ); } );
}

DisassociateApplicationFleetOutcome AppStreamClient::DisassociateApplicationFleet(const DisassociateApplicationFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateApplicationFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApplicationFleetOutcomeCallable AppStreamClient::DisassociateApplicationFleetCallable(const DisassociateApplicationFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateApplicationFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateApplicationFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDisassociateApplicationFleetAsyncHelper(AppStreamClient const * const clientThis, const DisassociateApplicationFleetRequest& request, const DisassociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateApplicationFleet(request), context);
}

void AppStreamClient::DisassociateApplicationFleetAsync(const DisassociateApplicationFleetRequest& request, const DisassociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDisassociateApplicationFleetAsyncHelper( this, request, handler, context ); } );
}

DisassociateApplicationFromEntitlementOutcome AppStreamClient::DisassociateApplicationFromEntitlement(const DisassociateApplicationFromEntitlementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateApplicationFromEntitlementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApplicationFromEntitlementOutcomeCallable AppStreamClient::DisassociateApplicationFromEntitlementCallable(const DisassociateApplicationFromEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateApplicationFromEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateApplicationFromEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDisassociateApplicationFromEntitlementAsyncHelper(AppStreamClient const * const clientThis, const DisassociateApplicationFromEntitlementRequest& request, const DisassociateApplicationFromEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateApplicationFromEntitlement(request), context);
}

void AppStreamClient::DisassociateApplicationFromEntitlementAsync(const DisassociateApplicationFromEntitlementRequest& request, const DisassociateApplicationFromEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDisassociateApplicationFromEntitlementAsyncHelper( this, request, handler, context ); } );
}

DisassociateFleetOutcome AppStreamClient::DisassociateFleet(const DisassociateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFleetOutcomeCallable AppStreamClient::DisassociateFleetCallable(const DisassociateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientDisassociateFleetAsyncHelper(AppStreamClient const * const clientThis, const DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateFleet(request), context);
}

void AppStreamClient::DisassociateFleetAsync(const DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientDisassociateFleetAsyncHelper( this, request, handler, context ); } );
}

EnableUserOutcome AppStreamClient::EnableUser(const EnableUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableUserOutcomeCallable AppStreamClient::EnableUserCallable(const EnableUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientEnableUserAsyncHelper(AppStreamClient const * const clientThis, const EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableUser(request), context);
}

void AppStreamClient::EnableUserAsync(const EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientEnableUserAsyncHelper( this, request, handler, context ); } );
}

ExpireSessionOutcome AppStreamClient::ExpireSession(const ExpireSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExpireSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExpireSessionOutcomeCallable AppStreamClient::ExpireSessionCallable(const ExpireSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExpireSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExpireSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientExpireSessionAsyncHelper(AppStreamClient const * const clientThis, const ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExpireSession(request), context);
}

void AppStreamClient::ExpireSessionAsync(const ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientExpireSessionAsyncHelper( this, request, handler, context ); } );
}

ListAssociatedFleetsOutcome AppStreamClient::ListAssociatedFleets(const ListAssociatedFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssociatedFleetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedFleetsOutcomeCallable AppStreamClient::ListAssociatedFleetsCallable(const ListAssociatedFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientListAssociatedFleetsAsyncHelper(AppStreamClient const * const clientThis, const ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociatedFleets(request), context);
}

void AppStreamClient::ListAssociatedFleetsAsync(const ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientListAssociatedFleetsAsyncHelper( this, request, handler, context ); } );
}

ListAssociatedStacksOutcome AppStreamClient::ListAssociatedStacks(const ListAssociatedStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssociatedStacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedStacksOutcomeCallable AppStreamClient::ListAssociatedStacksCallable(const ListAssociatedStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientListAssociatedStacksAsyncHelper(AppStreamClient const * const clientThis, const ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociatedStacks(request), context);
}

void AppStreamClient::ListAssociatedStacksAsync(const ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientListAssociatedStacksAsyncHelper( this, request, handler, context ); } );
}

ListEntitledApplicationsOutcome AppStreamClient::ListEntitledApplications(const ListEntitledApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntitledApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitledApplicationsOutcomeCallable AppStreamClient::ListEntitledApplicationsCallable(const ListEntitledApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitledApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitledApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientListEntitledApplicationsAsyncHelper(AppStreamClient const * const clientThis, const ListEntitledApplicationsRequest& request, const ListEntitledApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEntitledApplications(request), context);
}

void AppStreamClient::ListEntitledApplicationsAsync(const ListEntitledApplicationsRequest& request, const ListEntitledApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientListEntitledApplicationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome AppStreamClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppStreamClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientListTagsForResourceAsyncHelper(AppStreamClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void AppStreamClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

StartFleetOutcome AppStreamClient::StartFleet(const StartFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFleetOutcomeCallable AppStreamClient::StartFleetCallable(const StartFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientStartFleetAsyncHelper(AppStreamClient const * const clientThis, const StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartFleet(request), context);
}

void AppStreamClient::StartFleetAsync(const StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientStartFleetAsyncHelper( this, request, handler, context ); } );
}

StartImageBuilderOutcome AppStreamClient::StartImageBuilder(const StartImageBuilderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartImageBuilderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartImageBuilderOutcomeCallable AppStreamClient::StartImageBuilderCallable(const StartImageBuilderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImageBuilderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImageBuilder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientStartImageBuilderAsyncHelper(AppStreamClient const * const clientThis, const StartImageBuilderRequest& request, const StartImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartImageBuilder(request), context);
}

void AppStreamClient::StartImageBuilderAsync(const StartImageBuilderRequest& request, const StartImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientStartImageBuilderAsyncHelper( this, request, handler, context ); } );
}

StopFleetOutcome AppStreamClient::StopFleet(const StopFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopFleetOutcomeCallable AppStreamClient::StopFleetCallable(const StopFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientStopFleetAsyncHelper(AppStreamClient const * const clientThis, const StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopFleet(request), context);
}

void AppStreamClient::StopFleetAsync(const StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientStopFleetAsyncHelper( this, request, handler, context ); } );
}

StopImageBuilderOutcome AppStreamClient::StopImageBuilder(const StopImageBuilderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopImageBuilderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopImageBuilderOutcomeCallable AppStreamClient::StopImageBuilderCallable(const StopImageBuilderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopImageBuilderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopImageBuilder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientStopImageBuilderAsyncHelper(AppStreamClient const * const clientThis, const StopImageBuilderRequest& request, const StopImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopImageBuilder(request), context);
}

void AppStreamClient::StopImageBuilderAsync(const StopImageBuilderRequest& request, const StopImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientStopImageBuilderAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AppStreamClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppStreamClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientTagResourceAsyncHelper(AppStreamClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AppStreamClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AppStreamClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppStreamClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientUntagResourceAsyncHelper(AppStreamClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AppStreamClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationOutcome AppStreamClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable AppStreamClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientUpdateApplicationAsyncHelper(AppStreamClient const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void AppStreamClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

UpdateDirectoryConfigOutcome AppStreamClient::UpdateDirectoryConfig(const UpdateDirectoryConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDirectoryConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDirectoryConfigOutcomeCallable AppStreamClient::UpdateDirectoryConfigCallable(const UpdateDirectoryConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDirectoryConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDirectoryConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientUpdateDirectoryConfigAsyncHelper(AppStreamClient const * const clientThis, const UpdateDirectoryConfigRequest& request, const UpdateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDirectoryConfig(request), context);
}

void AppStreamClient::UpdateDirectoryConfigAsync(const UpdateDirectoryConfigRequest& request, const UpdateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientUpdateDirectoryConfigAsyncHelper( this, request, handler, context ); } );
}

UpdateEntitlementOutcome AppStreamClient::UpdateEntitlement(const UpdateEntitlementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEntitlementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEntitlementOutcomeCallable AppStreamClient::UpdateEntitlementCallable(const UpdateEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientUpdateEntitlementAsyncHelper(AppStreamClient const * const clientThis, const UpdateEntitlementRequest& request, const UpdateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEntitlement(request), context);
}

void AppStreamClient::UpdateEntitlementAsync(const UpdateEntitlementRequest& request, const UpdateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientUpdateEntitlementAsyncHelper( this, request, handler, context ); } );
}

UpdateFleetOutcome AppStreamClient::UpdateFleet(const UpdateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFleetOutcomeCallable AppStreamClient::UpdateFleetCallable(const UpdateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientUpdateFleetAsyncHelper(AppStreamClient const * const clientThis, const UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFleet(request), context);
}

void AppStreamClient::UpdateFleetAsync(const UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientUpdateFleetAsyncHelper( this, request, handler, context ); } );
}

UpdateImagePermissionsOutcome AppStreamClient::UpdateImagePermissions(const UpdateImagePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateImagePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateImagePermissionsOutcomeCallable AppStreamClient::UpdateImagePermissionsCallable(const UpdateImagePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImagePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImagePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientUpdateImagePermissionsAsyncHelper(AppStreamClient const * const clientThis, const UpdateImagePermissionsRequest& request, const UpdateImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateImagePermissions(request), context);
}

void AppStreamClient::UpdateImagePermissionsAsync(const UpdateImagePermissionsRequest& request, const UpdateImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientUpdateImagePermissionsAsyncHelper( this, request, handler, context ); } );
}

UpdateStackOutcome AppStreamClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStackOutcomeCallable AppStreamClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClientUpdateStackAsyncHelper(AppStreamClient const * const clientThis, const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStack(request), context);
}

void AppStreamClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppStreamClientUpdateStackAsyncHelper( this, request, handler, context ); } );
}

