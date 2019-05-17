/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/appstream/model/AssociateFleetRequest.h>
#include <aws/appstream/model/BatchAssociateUserStackRequest.h>
#include <aws/appstream/model/BatchDisassociateUserStackRequest.h>
#include <aws/appstream/model/CopyImageRequest.h>
#include <aws/appstream/model/CreateDirectoryConfigRequest.h>
#include <aws/appstream/model/CreateFleetRequest.h>
#include <aws/appstream/model/CreateImageBuilderRequest.h>
#include <aws/appstream/model/CreateImageBuilderStreamingURLRequest.h>
#include <aws/appstream/model/CreateStackRequest.h>
#include <aws/appstream/model/CreateStreamingURLRequest.h>
#include <aws/appstream/model/CreateUsageReportSubscriptionRequest.h>
#include <aws/appstream/model/CreateUserRequest.h>
#include <aws/appstream/model/DeleteDirectoryConfigRequest.h>
#include <aws/appstream/model/DeleteFleetRequest.h>
#include <aws/appstream/model/DeleteImageRequest.h>
#include <aws/appstream/model/DeleteImageBuilderRequest.h>
#include <aws/appstream/model/DeleteImagePermissionsRequest.h>
#include <aws/appstream/model/DeleteStackRequest.h>
#include <aws/appstream/model/DeleteUsageReportSubscriptionRequest.h>
#include <aws/appstream/model/DeleteUserRequest.h>
#include <aws/appstream/model/DescribeDirectoryConfigsRequest.h>
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
#include <aws/appstream/model/DisassociateFleetRequest.h>
#include <aws/appstream/model/EnableUserRequest.h>
#include <aws/appstream/model/ExpireSessionRequest.h>
#include <aws/appstream/model/ListAssociatedFleetsRequest.h>
#include <aws/appstream/model/ListAssociatedStacksRequest.h>
#include <aws/appstream/model/ListTagsForResourceRequest.h>
#include <aws/appstream/model/StartFleetRequest.h>
#include <aws/appstream/model/StartImageBuilderRequest.h>
#include <aws/appstream/model/StopFleetRequest.h>
#include <aws/appstream/model/StopImageBuilderRequest.h>
#include <aws/appstream/model/TagResourceRequest.h>
#include <aws/appstream/model/UntagResourceRequest.h>
#include <aws/appstream/model/UpdateDirectoryConfigRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::AppStreamClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::AppStreamClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::~AppStreamClient()
{
}

void AppStreamClient::init(const ClientConfiguration& config)
{
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

AssociateFleetOutcome AppStreamClient::AssociateFleet(const AssociateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateFleetOutcome(AssociateFleetResult(outcome.GetResult()));
  }
  else
  {
    return AssociateFleetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AssociateFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::AssociateFleetAsyncHelper(const AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateFleet(request), context);
}

BatchAssociateUserStackOutcome AppStreamClient::BatchAssociateUserStack(const BatchAssociateUserStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchAssociateUserStackOutcome(BatchAssociateUserStackResult(outcome.GetResult()));
  }
  else
  {
    return BatchAssociateUserStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchAssociateUserStackAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::BatchAssociateUserStackAsyncHelper(const BatchAssociateUserStackRequest& request, const BatchAssociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchAssociateUserStack(request), context);
}

BatchDisassociateUserStackOutcome AppStreamClient::BatchDisassociateUserStack(const BatchDisassociateUserStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDisassociateUserStackOutcome(BatchDisassociateUserStackResult(outcome.GetResult()));
  }
  else
  {
    return BatchDisassociateUserStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchDisassociateUserStackAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::BatchDisassociateUserStackAsyncHelper(const BatchDisassociateUserStackRequest& request, const BatchDisassociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDisassociateUserStack(request), context);
}

CopyImageOutcome AppStreamClient::CopyImage(const CopyImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CopyImageOutcome(CopyImageResult(outcome.GetResult()));
  }
  else
  {
    return CopyImageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CopyImageAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CopyImageAsyncHelper(const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyImage(request), context);
}

CreateDirectoryConfigOutcome AppStreamClient::CreateDirectoryConfig(const CreateDirectoryConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDirectoryConfigOutcome(CreateDirectoryConfigResult(outcome.GetResult()));
  }
  else
  {
    return CreateDirectoryConfigOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDirectoryConfigAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateDirectoryConfigAsyncHelper(const CreateDirectoryConfigRequest& request, const CreateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDirectoryConfig(request), context);
}

CreateFleetOutcome AppStreamClient::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFleetOutcome(CreateFleetResult(outcome.GetResult()));
  }
  else
  {
    return CreateFleetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateFleetAsyncHelper(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFleet(request), context);
}

CreateImageBuilderOutcome AppStreamClient::CreateImageBuilder(const CreateImageBuilderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateImageBuilderOutcome(CreateImageBuilderResult(outcome.GetResult()));
  }
  else
  {
    return CreateImageBuilderOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateImageBuilderAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateImageBuilderAsyncHelper(const CreateImageBuilderRequest& request, const CreateImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateImageBuilder(request), context);
}

CreateImageBuilderStreamingURLOutcome AppStreamClient::CreateImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateImageBuilderStreamingURLOutcome(CreateImageBuilderStreamingURLResult(outcome.GetResult()));
  }
  else
  {
    return CreateImageBuilderStreamingURLOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateImageBuilderStreamingURLAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateImageBuilderStreamingURLAsyncHelper(const CreateImageBuilderStreamingURLRequest& request, const CreateImageBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateImageBuilderStreamingURL(request), context);
}

CreateStackOutcome AppStreamClient::CreateStack(const CreateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStackOutcome(CreateStackResult(outcome.GetResult()));
  }
  else
  {
    return CreateStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateStackAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateStackAsyncHelper(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStack(request), context);
}

CreateStreamingURLOutcome AppStreamClient::CreateStreamingURL(const CreateStreamingURLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStreamingURLOutcome(CreateStreamingURLResult(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingURLOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingURLAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateStreamingURLAsyncHelper(const CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingURL(request), context);
}

CreateUsageReportSubscriptionOutcome AppStreamClient::CreateUsageReportSubscription(const CreateUsageReportSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUsageReportSubscriptionOutcome(CreateUsageReportSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return CreateUsageReportSubscriptionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateUsageReportSubscriptionAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateUsageReportSubscriptionAsyncHelper(const CreateUsageReportSubscriptionRequest& request, const CreateUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUsageReportSubscription(request), context);
}

CreateUserOutcome AppStreamClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserOutcome(CreateUserResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

DeleteDirectoryConfigOutcome AppStreamClient::DeleteDirectoryConfig(const DeleteDirectoryConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDirectoryConfigOutcome(DeleteDirectoryConfigResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDirectoryConfigOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDirectoryConfigAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteDirectoryConfigAsyncHelper(const DeleteDirectoryConfigRequest& request, const DeleteDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDirectoryConfig(request), context);
}

DeleteFleetOutcome AppStreamClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFleetOutcome(DeleteFleetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFleetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteFleetAsyncHelper(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFleet(request), context);
}

DeleteImageOutcome AppStreamClient::DeleteImage(const DeleteImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteImageOutcome(DeleteImageResult(outcome.GetResult()));
  }
  else
  {
    return DeleteImageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteImageAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteImageAsyncHelper(const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteImage(request), context);
}

DeleteImageBuilderOutcome AppStreamClient::DeleteImageBuilder(const DeleteImageBuilderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteImageBuilderOutcome(DeleteImageBuilderResult(outcome.GetResult()));
  }
  else
  {
    return DeleteImageBuilderOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteImageBuilderAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteImageBuilderAsyncHelper(const DeleteImageBuilderRequest& request, const DeleteImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteImageBuilder(request), context);
}

DeleteImagePermissionsOutcome AppStreamClient::DeleteImagePermissions(const DeleteImagePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteImagePermissionsOutcome(DeleteImagePermissionsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteImagePermissionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteImagePermissionsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteImagePermissionsAsyncHelper(const DeleteImagePermissionsRequest& request, const DeleteImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteImagePermissions(request), context);
}

DeleteStackOutcome AppStreamClient::DeleteStack(const DeleteStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteStackOutcome(DeleteStackResult(outcome.GetResult()));
  }
  else
  {
    return DeleteStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStackAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteStackAsyncHelper(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStack(request), context);
}

DeleteUsageReportSubscriptionOutcome AppStreamClient::DeleteUsageReportSubscription(const DeleteUsageReportSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUsageReportSubscriptionOutcome(DeleteUsageReportSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUsageReportSubscriptionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUsageReportSubscriptionAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteUsageReportSubscriptionAsyncHelper(const DeleteUsageReportSubscriptionRequest& request, const DeleteUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUsageReportSubscription(request), context);
}

DeleteUserOutcome AppStreamClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserOutcome(DeleteUserResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUserOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DescribeDirectoryConfigsOutcome AppStreamClient::DescribeDirectoryConfigs(const DescribeDirectoryConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDirectoryConfigsOutcome(DescribeDirectoryConfigsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDirectoryConfigsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDirectoryConfigsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeDirectoryConfigsAsyncHelper(const DescribeDirectoryConfigsRequest& request, const DescribeDirectoryConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDirectoryConfigs(request), context);
}

DescribeFleetsOutcome AppStreamClient::DescribeFleets(const DescribeFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFleetsOutcome(DescribeFleetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeFleetsAsyncHelper(const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleets(request), context);
}

DescribeImageBuildersOutcome AppStreamClient::DescribeImageBuilders(const DescribeImageBuildersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeImageBuildersOutcome(DescribeImageBuildersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeImageBuildersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImageBuildersAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeImageBuildersAsyncHelper(const DescribeImageBuildersRequest& request, const DescribeImageBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImageBuilders(request), context);
}

DescribeImagePermissionsOutcome AppStreamClient::DescribeImagePermissions(const DescribeImagePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeImagePermissionsOutcome(DescribeImagePermissionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeImagePermissionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImagePermissionsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeImagePermissionsAsyncHelper(const DescribeImagePermissionsRequest& request, const DescribeImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImagePermissions(request), context);
}

DescribeImagesOutcome AppStreamClient::DescribeImages(const DescribeImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeImagesOutcome(DescribeImagesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeImagesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImagesAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeImagesAsyncHelper(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImages(request), context);
}

DescribeSessionsOutcome AppStreamClient::DescribeSessions(const DescribeSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSessionsOutcome(DescribeSessionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSessionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSessionsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeSessionsAsyncHelper(const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSessions(request), context);
}

DescribeStacksOutcome AppStreamClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStacksOutcome(DescribeStacksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStacksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStacksAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeStacksAsyncHelper(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStacks(request), context);
}

DescribeUsageReportSubscriptionsOutcome AppStreamClient::DescribeUsageReportSubscriptions(const DescribeUsageReportSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUsageReportSubscriptionsOutcome(DescribeUsageReportSubscriptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUsageReportSubscriptionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUsageReportSubscriptionsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeUsageReportSubscriptionsAsyncHelper(const DescribeUsageReportSubscriptionsRequest& request, const DescribeUsageReportSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUsageReportSubscriptions(request), context);
}

DescribeUserStackAssociationsOutcome AppStreamClient::DescribeUserStackAssociations(const DescribeUserStackAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserStackAssociationsOutcome(DescribeUserStackAssociationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserStackAssociationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserStackAssociationsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeUserStackAssociationsAsyncHelper(const DescribeUserStackAssociationsRequest& request, const DescribeUserStackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserStackAssociations(request), context);
}

DescribeUsersOutcome AppStreamClient::DescribeUsers(const DescribeUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUsersOutcome(DescribeUsersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUsersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUsersAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeUsersAsyncHelper(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUsers(request), context);
}

DisableUserOutcome AppStreamClient::DisableUser(const DisableUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableUserOutcome(DisableUserResult(outcome.GetResult()));
  }
  else
  {
    return DisableUserOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DisableUserAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DisableUserAsyncHelper(const DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableUser(request), context);
}

DisassociateFleetOutcome AppStreamClient::DisassociateFleet(const DisassociateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateFleetOutcome(DisassociateFleetResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateFleetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DisassociateFleetAsyncHelper(const DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateFleet(request), context);
}

EnableUserOutcome AppStreamClient::EnableUser(const EnableUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableUserOutcome(EnableUserResult(outcome.GetResult()));
  }
  else
  {
    return EnableUserOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->EnableUserAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::EnableUserAsyncHelper(const EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableUser(request), context);
}

ExpireSessionOutcome AppStreamClient::ExpireSession(const ExpireSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ExpireSessionOutcome(ExpireSessionResult(outcome.GetResult()));
  }
  else
  {
    return ExpireSessionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ExpireSessionAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::ExpireSessionAsyncHelper(const ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExpireSession(request), context);
}

ListAssociatedFleetsOutcome AppStreamClient::ListAssociatedFleets(const ListAssociatedFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAssociatedFleetsOutcome(ListAssociatedFleetsResult(outcome.GetResult()));
  }
  else
  {
    return ListAssociatedFleetsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAssociatedFleetsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::ListAssociatedFleetsAsyncHelper(const ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociatedFleets(request), context);
}

ListAssociatedStacksOutcome AppStreamClient::ListAssociatedStacks(const ListAssociatedStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAssociatedStacksOutcome(ListAssociatedStacksResult(outcome.GetResult()));
  }
  else
  {
    return ListAssociatedStacksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAssociatedStacksAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::ListAssociatedStacksAsyncHelper(const ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociatedStacks(request), context);
}

ListTagsForResourceOutcome AppStreamClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

StartFleetOutcome AppStreamClient::StartFleet(const StartFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartFleetOutcome(StartFleetResult(outcome.GetResult()));
  }
  else
  {
    return StartFleetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::StartFleetAsyncHelper(const StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFleet(request), context);
}

StartImageBuilderOutcome AppStreamClient::StartImageBuilder(const StartImageBuilderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartImageBuilderOutcome(StartImageBuilderResult(outcome.GetResult()));
  }
  else
  {
    return StartImageBuilderOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartImageBuilderAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::StartImageBuilderAsyncHelper(const StartImageBuilderRequest& request, const StartImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartImageBuilder(request), context);
}

StopFleetOutcome AppStreamClient::StopFleet(const StopFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopFleetOutcome(StopFleetResult(outcome.GetResult()));
  }
  else
  {
    return StopFleetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::StopFleetAsyncHelper(const StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopFleet(request), context);
}

StopImageBuilderOutcome AppStreamClient::StopImageBuilder(const StopImageBuilderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopImageBuilderOutcome(StopImageBuilderResult(outcome.GetResult()));
  }
  else
  {
    return StopImageBuilderOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopImageBuilderAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::StopImageBuilderAsyncHelper(const StopImageBuilderRequest& request, const StopImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopImageBuilder(request), context);
}

TagResourceOutcome AppStreamClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AppStreamClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDirectoryConfigOutcome AppStreamClient::UpdateDirectoryConfig(const UpdateDirectoryConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDirectoryConfigOutcome(UpdateDirectoryConfigResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDirectoryConfigOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDirectoryConfigAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::UpdateDirectoryConfigAsyncHelper(const UpdateDirectoryConfigRequest& request, const UpdateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDirectoryConfig(request), context);
}

UpdateFleetOutcome AppStreamClient::UpdateFleet(const UpdateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFleetOutcome(UpdateFleetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFleetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::UpdateFleetAsyncHelper(const UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleet(request), context);
}

UpdateImagePermissionsOutcome AppStreamClient::UpdateImagePermissions(const UpdateImagePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateImagePermissionsOutcome(UpdateImagePermissionsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateImagePermissionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateImagePermissionsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::UpdateImagePermissionsAsyncHelper(const UpdateImagePermissionsRequest& request, const UpdateImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateImagePermissions(request), context);
}

UpdateStackOutcome AppStreamClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateStackOutcome(UpdateStackResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStackAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::UpdateStackAsyncHelper(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStack(request), context);
}

