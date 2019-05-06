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

#include <aws/ds/DirectoryServiceClient.h>
#include <aws/ds/DirectoryServiceEndpoint.h>
#include <aws/ds/DirectoryServiceErrorMarshaller.h>
#include <aws/ds/model/AcceptSharedDirectoryRequest.h>
#include <aws/ds/model/AddIpRoutesRequest.h>
#include <aws/ds/model/AddTagsToResourceRequest.h>
#include <aws/ds/model/CancelSchemaExtensionRequest.h>
#include <aws/ds/model/ConnectDirectoryRequest.h>
#include <aws/ds/model/CreateAliasRequest.h>
#include <aws/ds/model/CreateComputerRequest.h>
#include <aws/ds/model/CreateConditionalForwarderRequest.h>
#include <aws/ds/model/CreateDirectoryRequest.h>
#include <aws/ds/model/CreateLogSubscriptionRequest.h>
#include <aws/ds/model/CreateMicrosoftADRequest.h>
#include <aws/ds/model/CreateSnapshotRequest.h>
#include <aws/ds/model/CreateTrustRequest.h>
#include <aws/ds/model/DeleteConditionalForwarderRequest.h>
#include <aws/ds/model/DeleteDirectoryRequest.h>
#include <aws/ds/model/DeleteLogSubscriptionRequest.h>
#include <aws/ds/model/DeleteSnapshotRequest.h>
#include <aws/ds/model/DeleteTrustRequest.h>
#include <aws/ds/model/DeregisterEventTopicRequest.h>
#include <aws/ds/model/DescribeConditionalForwardersRequest.h>
#include <aws/ds/model/DescribeDirectoriesRequest.h>
#include <aws/ds/model/DescribeDomainControllersRequest.h>
#include <aws/ds/model/DescribeEventTopicsRequest.h>
#include <aws/ds/model/DescribeSharedDirectoriesRequest.h>
#include <aws/ds/model/DescribeSnapshotsRequest.h>
#include <aws/ds/model/DescribeTrustsRequest.h>
#include <aws/ds/model/DisableRadiusRequest.h>
#include <aws/ds/model/DisableSsoRequest.h>
#include <aws/ds/model/EnableRadiusRequest.h>
#include <aws/ds/model/EnableSsoRequest.h>
#include <aws/ds/model/GetDirectoryLimitsRequest.h>
#include <aws/ds/model/GetSnapshotLimitsRequest.h>
#include <aws/ds/model/ListIpRoutesRequest.h>
#include <aws/ds/model/ListLogSubscriptionsRequest.h>
#include <aws/ds/model/ListSchemaExtensionsRequest.h>
#include <aws/ds/model/ListTagsForResourceRequest.h>
#include <aws/ds/model/RegisterEventTopicRequest.h>
#include <aws/ds/model/RejectSharedDirectoryRequest.h>
#include <aws/ds/model/RemoveIpRoutesRequest.h>
#include <aws/ds/model/RemoveTagsFromResourceRequest.h>
#include <aws/ds/model/ResetUserPasswordRequest.h>
#include <aws/ds/model/RestoreFromSnapshotRequest.h>
#include <aws/ds/model/ShareDirectoryRequest.h>
#include <aws/ds/model/StartSchemaExtensionRequest.h>
#include <aws/ds/model/UnshareDirectoryRequest.h>
#include <aws/ds/model/UpdateConditionalForwarderRequest.h>
#include <aws/ds/model/UpdateNumberOfDomainControllersRequest.h>
#include <aws/ds/model/UpdateRadiusRequest.h>
#include <aws/ds/model/UpdateTrustRequest.h>
#include <aws/ds/model/VerifyTrustRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DirectoryService;
using namespace Aws::DirectoryService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ds";
static const char* ALLOCATION_TAG = "DirectoryServiceClient";


DirectoryServiceClient::DirectoryServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::~DirectoryServiceClient()
{
}

void DirectoryServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DirectoryServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DirectoryServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptSharedDirectoryOutcome DirectoryServiceClient::AcceptSharedDirectory(const AcceptSharedDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AcceptSharedDirectoryOutcome(AcceptSharedDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return AcceptSharedDirectoryOutcome(outcome.GetError());
  }
}

AcceptSharedDirectoryOutcomeCallable DirectoryServiceClient::AcceptSharedDirectoryCallable(const AcceptSharedDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptSharedDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptSharedDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::AcceptSharedDirectoryAsync(const AcceptSharedDirectoryRequest& request, const AcceptSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptSharedDirectoryAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::AcceptSharedDirectoryAsyncHelper(const AcceptSharedDirectoryRequest& request, const AcceptSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptSharedDirectory(request), context);
}

AddIpRoutesOutcome DirectoryServiceClient::AddIpRoutes(const AddIpRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddIpRoutesOutcome(AddIpRoutesResult(outcome.GetResult()));
  }
  else
  {
    return AddIpRoutesOutcome(outcome.GetError());
  }
}

AddIpRoutesOutcomeCallable DirectoryServiceClient::AddIpRoutesCallable(const AddIpRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddIpRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddIpRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::AddIpRoutesAsync(const AddIpRoutesRequest& request, const AddIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddIpRoutesAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::AddIpRoutesAsyncHelper(const AddIpRoutesRequest& request, const AddIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddIpRoutes(request), context);
}

AddTagsToResourceOutcome DirectoryServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsToResourceOutcome(AddTagsToResourceResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsToResourceOutcome(outcome.GetError());
  }
}

AddTagsToResourceOutcomeCallable DirectoryServiceClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToResourceAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

CancelSchemaExtensionOutcome DirectoryServiceClient::CancelSchemaExtension(const CancelSchemaExtensionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelSchemaExtensionOutcome(CancelSchemaExtensionResult(outcome.GetResult()));
  }
  else
  {
    return CancelSchemaExtensionOutcome(outcome.GetError());
  }
}

CancelSchemaExtensionOutcomeCallable DirectoryServiceClient::CancelSchemaExtensionCallable(const CancelSchemaExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSchemaExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSchemaExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CancelSchemaExtensionAsync(const CancelSchemaExtensionRequest& request, const CancelSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelSchemaExtensionAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CancelSchemaExtensionAsyncHelper(const CancelSchemaExtensionRequest& request, const CancelSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSchemaExtension(request), context);
}

ConnectDirectoryOutcome DirectoryServiceClient::ConnectDirectory(const ConnectDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ConnectDirectoryOutcome(ConnectDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return ConnectDirectoryOutcome(outcome.GetError());
  }
}

ConnectDirectoryOutcomeCallable DirectoryServiceClient::ConnectDirectoryCallable(const ConnectDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConnectDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConnectDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::ConnectDirectoryAsync(const ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConnectDirectoryAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::ConnectDirectoryAsyncHelper(const ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConnectDirectory(request), context);
}

CreateAliasOutcome DirectoryServiceClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAliasOutcome(CreateAliasResult(outcome.GetResult()));
  }
  else
  {
    return CreateAliasOutcome(outcome.GetError());
  }
}

CreateAliasOutcomeCallable DirectoryServiceClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAliasAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CreateAliasAsyncHelper(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlias(request), context);
}

CreateComputerOutcome DirectoryServiceClient::CreateComputer(const CreateComputerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateComputerOutcome(CreateComputerResult(outcome.GetResult()));
  }
  else
  {
    return CreateComputerOutcome(outcome.GetError());
  }
}

CreateComputerOutcomeCallable DirectoryServiceClient::CreateComputerCallable(const CreateComputerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComputerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComputer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CreateComputerAsync(const CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateComputerAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CreateComputerAsyncHelper(const CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateComputer(request), context);
}

CreateConditionalForwarderOutcome DirectoryServiceClient::CreateConditionalForwarder(const CreateConditionalForwarderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConditionalForwarderOutcome(CreateConditionalForwarderResult(outcome.GetResult()));
  }
  else
  {
    return CreateConditionalForwarderOutcome(outcome.GetError());
  }
}

CreateConditionalForwarderOutcomeCallable DirectoryServiceClient::CreateConditionalForwarderCallable(const CreateConditionalForwarderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConditionalForwarderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConditionalForwarder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CreateConditionalForwarderAsync(const CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConditionalForwarderAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CreateConditionalForwarderAsyncHelper(const CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConditionalForwarder(request), context);
}

CreateDirectoryOutcome DirectoryServiceClient::CreateDirectory(const CreateDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDirectoryOutcome(CreateDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return CreateDirectoryOutcome(outcome.GetError());
  }
}

CreateDirectoryOutcomeCallable DirectoryServiceClient::CreateDirectoryCallable(const CreateDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CreateDirectoryAsync(const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDirectoryAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CreateDirectoryAsyncHelper(const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDirectory(request), context);
}

CreateLogSubscriptionOutcome DirectoryServiceClient::CreateLogSubscription(const CreateLogSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLogSubscriptionOutcome(CreateLogSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return CreateLogSubscriptionOutcome(outcome.GetError());
  }
}

CreateLogSubscriptionOutcomeCallable DirectoryServiceClient::CreateLogSubscriptionCallable(const CreateLogSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLogSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLogSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CreateLogSubscriptionAsync(const CreateLogSubscriptionRequest& request, const CreateLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLogSubscriptionAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CreateLogSubscriptionAsyncHelper(const CreateLogSubscriptionRequest& request, const CreateLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLogSubscription(request), context);
}

CreateMicrosoftADOutcome DirectoryServiceClient::CreateMicrosoftAD(const CreateMicrosoftADRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMicrosoftADOutcome(CreateMicrosoftADResult(outcome.GetResult()));
  }
  else
  {
    return CreateMicrosoftADOutcome(outcome.GetError());
  }
}

CreateMicrosoftADOutcomeCallable DirectoryServiceClient::CreateMicrosoftADCallable(const CreateMicrosoftADRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMicrosoftADOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMicrosoftAD(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CreateMicrosoftADAsync(const CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMicrosoftADAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CreateMicrosoftADAsyncHelper(const CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMicrosoftAD(request), context);
}

CreateSnapshotOutcome DirectoryServiceClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSnapshotOutcome(CreateSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateSnapshotOutcome(outcome.GetError());
  }
}

CreateSnapshotOutcomeCallable DirectoryServiceClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateTrustOutcome DirectoryServiceClient::CreateTrust(const CreateTrustRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTrustOutcome(CreateTrustResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrustOutcome(outcome.GetError());
  }
}

CreateTrustOutcomeCallable DirectoryServiceClient::CreateTrustCallable(const CreateTrustRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrustOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrust(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::CreateTrustAsync(const CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrustAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::CreateTrustAsyncHelper(const CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrust(request), context);
}

DeleteConditionalForwarderOutcome DirectoryServiceClient::DeleteConditionalForwarder(const DeleteConditionalForwarderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConditionalForwarderOutcome(DeleteConditionalForwarderResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConditionalForwarderOutcome(outcome.GetError());
  }
}

DeleteConditionalForwarderOutcomeCallable DirectoryServiceClient::DeleteConditionalForwarderCallable(const DeleteConditionalForwarderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConditionalForwarderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConditionalForwarder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DeleteConditionalForwarderAsync(const DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConditionalForwarderAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DeleteConditionalForwarderAsyncHelper(const DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConditionalForwarder(request), context);
}

DeleteDirectoryOutcome DirectoryServiceClient::DeleteDirectory(const DeleteDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDirectoryOutcome(DeleteDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDirectoryOutcome(outcome.GetError());
  }
}

DeleteDirectoryOutcomeCallable DirectoryServiceClient::DeleteDirectoryCallable(const DeleteDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DeleteDirectoryAsync(const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDirectoryAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DeleteDirectoryAsyncHelper(const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDirectory(request), context);
}

DeleteLogSubscriptionOutcome DirectoryServiceClient::DeleteLogSubscription(const DeleteLogSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLogSubscriptionOutcome(DeleteLogSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLogSubscriptionOutcome(outcome.GetError());
  }
}

DeleteLogSubscriptionOutcomeCallable DirectoryServiceClient::DeleteLogSubscriptionCallable(const DeleteLogSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLogSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLogSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DeleteLogSubscriptionAsync(const DeleteLogSubscriptionRequest& request, const DeleteLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLogSubscriptionAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DeleteLogSubscriptionAsyncHelper(const DeleteLogSubscriptionRequest& request, const DeleteLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLogSubscription(request), context);
}

DeleteSnapshotOutcome DirectoryServiceClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSnapshotOutcome(outcome.GetError());
  }
}

DeleteSnapshotOutcomeCallable DirectoryServiceClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSnapshotAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DeleteSnapshotAsyncHelper(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshot(request), context);
}

DeleteTrustOutcome DirectoryServiceClient::DeleteTrust(const DeleteTrustRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTrustOutcome(DeleteTrustResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTrustOutcome(outcome.GetError());
  }
}

DeleteTrustOutcomeCallable DirectoryServiceClient::DeleteTrustCallable(const DeleteTrustRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrustOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrust(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DeleteTrustAsync(const DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrustAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DeleteTrustAsyncHelper(const DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrust(request), context);
}

DeregisterEventTopicOutcome DirectoryServiceClient::DeregisterEventTopic(const DeregisterEventTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterEventTopicOutcome(DeregisterEventTopicResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterEventTopicOutcome(outcome.GetError());
  }
}

DeregisterEventTopicOutcomeCallable DirectoryServiceClient::DeregisterEventTopicCallable(const DeregisterEventTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterEventTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterEventTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DeregisterEventTopicAsync(const DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterEventTopicAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DeregisterEventTopicAsyncHelper(const DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterEventTopic(request), context);
}

DescribeConditionalForwardersOutcome DirectoryServiceClient::DescribeConditionalForwarders(const DescribeConditionalForwardersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConditionalForwardersOutcome(DescribeConditionalForwardersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConditionalForwardersOutcome(outcome.GetError());
  }
}

DescribeConditionalForwardersOutcomeCallable DirectoryServiceClient::DescribeConditionalForwardersCallable(const DescribeConditionalForwardersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConditionalForwardersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConditionalForwarders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DescribeConditionalForwardersAsync(const DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConditionalForwardersAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DescribeConditionalForwardersAsyncHelper(const DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConditionalForwarders(request), context);
}

DescribeDirectoriesOutcome DirectoryServiceClient::DescribeDirectories(const DescribeDirectoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDirectoriesOutcome(DescribeDirectoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDirectoriesOutcome(outcome.GetError());
  }
}

DescribeDirectoriesOutcomeCallable DirectoryServiceClient::DescribeDirectoriesCallable(const DescribeDirectoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDirectoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDirectories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DescribeDirectoriesAsync(const DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDirectoriesAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DescribeDirectoriesAsyncHelper(const DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDirectories(request), context);
}

DescribeDomainControllersOutcome DirectoryServiceClient::DescribeDomainControllers(const DescribeDomainControllersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDomainControllersOutcome(DescribeDomainControllersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDomainControllersOutcome(outcome.GetError());
  }
}

DescribeDomainControllersOutcomeCallable DirectoryServiceClient::DescribeDomainControllersCallable(const DescribeDomainControllersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainControllersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainControllers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DescribeDomainControllersAsync(const DescribeDomainControllersRequest& request, const DescribeDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDomainControllersAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DescribeDomainControllersAsyncHelper(const DescribeDomainControllersRequest& request, const DescribeDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDomainControllers(request), context);
}

DescribeEventTopicsOutcome DirectoryServiceClient::DescribeEventTopics(const DescribeEventTopicsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventTopicsOutcome(DescribeEventTopicsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventTopicsOutcome(outcome.GetError());
  }
}

DescribeEventTopicsOutcomeCallable DirectoryServiceClient::DescribeEventTopicsCallable(const DescribeEventTopicsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventTopicsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventTopics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DescribeEventTopicsAsync(const DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventTopicsAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DescribeEventTopicsAsyncHelper(const DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventTopics(request), context);
}

DescribeSharedDirectoriesOutcome DirectoryServiceClient::DescribeSharedDirectories(const DescribeSharedDirectoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSharedDirectoriesOutcome(DescribeSharedDirectoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSharedDirectoriesOutcome(outcome.GetError());
  }
}

DescribeSharedDirectoriesOutcomeCallable DirectoryServiceClient::DescribeSharedDirectoriesCallable(const DescribeSharedDirectoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSharedDirectoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSharedDirectories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DescribeSharedDirectoriesAsync(const DescribeSharedDirectoriesRequest& request, const DescribeSharedDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSharedDirectoriesAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DescribeSharedDirectoriesAsyncHelper(const DescribeSharedDirectoriesRequest& request, const DescribeSharedDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSharedDirectories(request), context);
}

DescribeSnapshotsOutcome DirectoryServiceClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSnapshotsOutcome(DescribeSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSnapshotsOutcome(outcome.GetError());
  }
}

DescribeSnapshotsOutcomeCallable DirectoryServiceClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSnapshotsAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DescribeSnapshotsAsyncHelper(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshots(request), context);
}

DescribeTrustsOutcome DirectoryServiceClient::DescribeTrusts(const DescribeTrustsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTrustsOutcome(DescribeTrustsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrustsOutcome(outcome.GetError());
  }
}

DescribeTrustsOutcomeCallable DirectoryServiceClient::DescribeTrustsCallable(const DescribeTrustsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrusts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DescribeTrustsAsync(const DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrustsAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DescribeTrustsAsyncHelper(const DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrusts(request), context);
}

DisableRadiusOutcome DirectoryServiceClient::DisableRadius(const DisableRadiusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableRadiusOutcome(DisableRadiusResult(outcome.GetResult()));
  }
  else
  {
    return DisableRadiusOutcome(outcome.GetError());
  }
}

DisableRadiusOutcomeCallable DirectoryServiceClient::DisableRadiusCallable(const DisableRadiusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableRadiusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableRadius(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DisableRadiusAsync(const DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableRadiusAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DisableRadiusAsyncHelper(const DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableRadius(request), context);
}

DisableSsoOutcome DirectoryServiceClient::DisableSso(const DisableSsoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableSsoOutcome(DisableSsoResult(outcome.GetResult()));
  }
  else
  {
    return DisableSsoOutcome(outcome.GetError());
  }
}

DisableSsoOutcomeCallable DirectoryServiceClient::DisableSsoCallable(const DisableSsoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableSsoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableSso(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::DisableSsoAsync(const DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableSsoAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::DisableSsoAsyncHelper(const DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableSso(request), context);
}

EnableRadiusOutcome DirectoryServiceClient::EnableRadius(const EnableRadiusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableRadiusOutcome(EnableRadiusResult(outcome.GetResult()));
  }
  else
  {
    return EnableRadiusOutcome(outcome.GetError());
  }
}

EnableRadiusOutcomeCallable DirectoryServiceClient::EnableRadiusCallable(const EnableRadiusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableRadiusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableRadius(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::EnableRadiusAsync(const EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableRadiusAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::EnableRadiusAsyncHelper(const EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableRadius(request), context);
}

EnableSsoOutcome DirectoryServiceClient::EnableSso(const EnableSsoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableSsoOutcome(EnableSsoResult(outcome.GetResult()));
  }
  else
  {
    return EnableSsoOutcome(outcome.GetError());
  }
}

EnableSsoOutcomeCallable DirectoryServiceClient::EnableSsoCallable(const EnableSsoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableSsoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableSso(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::EnableSsoAsync(const EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableSsoAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::EnableSsoAsyncHelper(const EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableSso(request), context);
}

GetDirectoryLimitsOutcome DirectoryServiceClient::GetDirectoryLimits(const GetDirectoryLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDirectoryLimitsOutcome(GetDirectoryLimitsResult(outcome.GetResult()));
  }
  else
  {
    return GetDirectoryLimitsOutcome(outcome.GetError());
  }
}

GetDirectoryLimitsOutcomeCallable DirectoryServiceClient::GetDirectoryLimitsCallable(const GetDirectoryLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDirectoryLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDirectoryLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::GetDirectoryLimitsAsync(const GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDirectoryLimitsAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::GetDirectoryLimitsAsyncHelper(const GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDirectoryLimits(request), context);
}

GetSnapshotLimitsOutcome DirectoryServiceClient::GetSnapshotLimits(const GetSnapshotLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSnapshotLimitsOutcome(GetSnapshotLimitsResult(outcome.GetResult()));
  }
  else
  {
    return GetSnapshotLimitsOutcome(outcome.GetError());
  }
}

GetSnapshotLimitsOutcomeCallable DirectoryServiceClient::GetSnapshotLimitsCallable(const GetSnapshotLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSnapshotLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSnapshotLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::GetSnapshotLimitsAsync(const GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSnapshotLimitsAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::GetSnapshotLimitsAsyncHelper(const GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSnapshotLimits(request), context);
}

ListIpRoutesOutcome DirectoryServiceClient::ListIpRoutes(const ListIpRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListIpRoutesOutcome(ListIpRoutesResult(outcome.GetResult()));
  }
  else
  {
    return ListIpRoutesOutcome(outcome.GetError());
  }
}

ListIpRoutesOutcomeCallable DirectoryServiceClient::ListIpRoutesCallable(const ListIpRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIpRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIpRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::ListIpRoutesAsync(const ListIpRoutesRequest& request, const ListIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIpRoutesAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::ListIpRoutesAsyncHelper(const ListIpRoutesRequest& request, const ListIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIpRoutes(request), context);
}

ListLogSubscriptionsOutcome DirectoryServiceClient::ListLogSubscriptions(const ListLogSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLogSubscriptionsOutcome(ListLogSubscriptionsResult(outcome.GetResult()));
  }
  else
  {
    return ListLogSubscriptionsOutcome(outcome.GetError());
  }
}

ListLogSubscriptionsOutcomeCallable DirectoryServiceClient::ListLogSubscriptionsCallable(const ListLogSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLogSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLogSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::ListLogSubscriptionsAsync(const ListLogSubscriptionsRequest& request, const ListLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLogSubscriptionsAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::ListLogSubscriptionsAsyncHelper(const ListLogSubscriptionsRequest& request, const ListLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLogSubscriptions(request), context);
}

ListSchemaExtensionsOutcome DirectoryServiceClient::ListSchemaExtensions(const ListSchemaExtensionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSchemaExtensionsOutcome(ListSchemaExtensionsResult(outcome.GetResult()));
  }
  else
  {
    return ListSchemaExtensionsOutcome(outcome.GetError());
  }
}

ListSchemaExtensionsOutcomeCallable DirectoryServiceClient::ListSchemaExtensionsCallable(const ListSchemaExtensionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemaExtensionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemaExtensions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::ListSchemaExtensionsAsync(const ListSchemaExtensionsRequest& request, const ListSchemaExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSchemaExtensionsAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::ListSchemaExtensionsAsyncHelper(const ListSchemaExtensionsRequest& request, const ListSchemaExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSchemaExtensions(request), context);
}

ListTagsForResourceOutcome DirectoryServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
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

ListTagsForResourceOutcomeCallable DirectoryServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

RegisterEventTopicOutcome DirectoryServiceClient::RegisterEventTopic(const RegisterEventTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterEventTopicOutcome(RegisterEventTopicResult(outcome.GetResult()));
  }
  else
  {
    return RegisterEventTopicOutcome(outcome.GetError());
  }
}

RegisterEventTopicOutcomeCallable DirectoryServiceClient::RegisterEventTopicCallable(const RegisterEventTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterEventTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterEventTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::RegisterEventTopicAsync(const RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterEventTopicAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::RegisterEventTopicAsyncHelper(const RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterEventTopic(request), context);
}

RejectSharedDirectoryOutcome DirectoryServiceClient::RejectSharedDirectory(const RejectSharedDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RejectSharedDirectoryOutcome(RejectSharedDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return RejectSharedDirectoryOutcome(outcome.GetError());
  }
}

RejectSharedDirectoryOutcomeCallable DirectoryServiceClient::RejectSharedDirectoryCallable(const RejectSharedDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectSharedDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectSharedDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::RejectSharedDirectoryAsync(const RejectSharedDirectoryRequest& request, const RejectSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectSharedDirectoryAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::RejectSharedDirectoryAsyncHelper(const RejectSharedDirectoryRequest& request, const RejectSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectSharedDirectory(request), context);
}

RemoveIpRoutesOutcome DirectoryServiceClient::RemoveIpRoutes(const RemoveIpRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveIpRoutesOutcome(RemoveIpRoutesResult(outcome.GetResult()));
  }
  else
  {
    return RemoveIpRoutesOutcome(outcome.GetError());
  }
}

RemoveIpRoutesOutcomeCallable DirectoryServiceClient::RemoveIpRoutesCallable(const RemoveIpRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveIpRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveIpRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::RemoveIpRoutesAsync(const RemoveIpRoutesRequest& request, const RemoveIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveIpRoutesAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::RemoveIpRoutesAsyncHelper(const RemoveIpRoutesRequest& request, const RemoveIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveIpRoutes(request), context);
}

RemoveTagsFromResourceOutcome DirectoryServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromResourceOutcome(RemoveTagsFromResourceResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsFromResourceOutcome(outcome.GetError());
  }
}

RemoveTagsFromResourceOutcomeCallable DirectoryServiceClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

ResetUserPasswordOutcome DirectoryServiceClient::ResetUserPassword(const ResetUserPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResetUserPasswordOutcome(ResetUserPasswordResult(outcome.GetResult()));
  }
  else
  {
    return ResetUserPasswordOutcome(outcome.GetError());
  }
}

ResetUserPasswordOutcomeCallable DirectoryServiceClient::ResetUserPasswordCallable(const ResetUserPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetUserPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetUserPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::ResetUserPasswordAsync(const ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetUserPasswordAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::ResetUserPasswordAsyncHelper(const ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetUserPassword(request), context);
}

RestoreFromSnapshotOutcome DirectoryServiceClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RestoreFromSnapshotOutcome(RestoreFromSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return RestoreFromSnapshotOutcome(outcome.GetError());
  }
}

RestoreFromSnapshotOutcomeCallable DirectoryServiceClient::RestoreFromSnapshotCallable(const RestoreFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::RestoreFromSnapshotAsync(const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreFromSnapshotAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::RestoreFromSnapshotAsyncHelper(const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreFromSnapshot(request), context);
}

ShareDirectoryOutcome DirectoryServiceClient::ShareDirectory(const ShareDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ShareDirectoryOutcome(ShareDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return ShareDirectoryOutcome(outcome.GetError());
  }
}

ShareDirectoryOutcomeCallable DirectoryServiceClient::ShareDirectoryCallable(const ShareDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ShareDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ShareDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::ShareDirectoryAsync(const ShareDirectoryRequest& request, const ShareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ShareDirectoryAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::ShareDirectoryAsyncHelper(const ShareDirectoryRequest& request, const ShareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ShareDirectory(request), context);
}

StartSchemaExtensionOutcome DirectoryServiceClient::StartSchemaExtension(const StartSchemaExtensionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartSchemaExtensionOutcome(StartSchemaExtensionResult(outcome.GetResult()));
  }
  else
  {
    return StartSchemaExtensionOutcome(outcome.GetError());
  }
}

StartSchemaExtensionOutcomeCallable DirectoryServiceClient::StartSchemaExtensionCallable(const StartSchemaExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSchemaExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSchemaExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::StartSchemaExtensionAsync(const StartSchemaExtensionRequest& request, const StartSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSchemaExtensionAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::StartSchemaExtensionAsyncHelper(const StartSchemaExtensionRequest& request, const StartSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSchemaExtension(request), context);
}

UnshareDirectoryOutcome DirectoryServiceClient::UnshareDirectory(const UnshareDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UnshareDirectoryOutcome(UnshareDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return UnshareDirectoryOutcome(outcome.GetError());
  }
}

UnshareDirectoryOutcomeCallable DirectoryServiceClient::UnshareDirectoryCallable(const UnshareDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnshareDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnshareDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::UnshareDirectoryAsync(const UnshareDirectoryRequest& request, const UnshareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnshareDirectoryAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::UnshareDirectoryAsyncHelper(const UnshareDirectoryRequest& request, const UnshareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnshareDirectory(request), context);
}

UpdateConditionalForwarderOutcome DirectoryServiceClient::UpdateConditionalForwarder(const UpdateConditionalForwarderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConditionalForwarderOutcome(UpdateConditionalForwarderResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConditionalForwarderOutcome(outcome.GetError());
  }
}

UpdateConditionalForwarderOutcomeCallable DirectoryServiceClient::UpdateConditionalForwarderCallable(const UpdateConditionalForwarderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConditionalForwarderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConditionalForwarder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::UpdateConditionalForwarderAsync(const UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConditionalForwarderAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::UpdateConditionalForwarderAsyncHelper(const UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConditionalForwarder(request), context);
}

UpdateNumberOfDomainControllersOutcome DirectoryServiceClient::UpdateNumberOfDomainControllers(const UpdateNumberOfDomainControllersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateNumberOfDomainControllersOutcome(UpdateNumberOfDomainControllersResult(outcome.GetResult()));
  }
  else
  {
    return UpdateNumberOfDomainControllersOutcome(outcome.GetError());
  }
}

UpdateNumberOfDomainControllersOutcomeCallable DirectoryServiceClient::UpdateNumberOfDomainControllersCallable(const UpdateNumberOfDomainControllersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNumberOfDomainControllersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNumberOfDomainControllers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::UpdateNumberOfDomainControllersAsync(const UpdateNumberOfDomainControllersRequest& request, const UpdateNumberOfDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNumberOfDomainControllersAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::UpdateNumberOfDomainControllersAsyncHelper(const UpdateNumberOfDomainControllersRequest& request, const UpdateNumberOfDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNumberOfDomainControllers(request), context);
}

UpdateRadiusOutcome DirectoryServiceClient::UpdateRadius(const UpdateRadiusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRadiusOutcome(UpdateRadiusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRadiusOutcome(outcome.GetError());
  }
}

UpdateRadiusOutcomeCallable DirectoryServiceClient::UpdateRadiusCallable(const UpdateRadiusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRadiusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRadius(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::UpdateRadiusAsync(const UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRadiusAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::UpdateRadiusAsyncHelper(const UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRadius(request), context);
}

UpdateTrustOutcome DirectoryServiceClient::UpdateTrust(const UpdateTrustRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTrustOutcome(UpdateTrustResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTrustOutcome(outcome.GetError());
  }
}

UpdateTrustOutcomeCallable DirectoryServiceClient::UpdateTrustCallable(const UpdateTrustRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrustOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrust(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::UpdateTrustAsync(const UpdateTrustRequest& request, const UpdateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrustAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::UpdateTrustAsyncHelper(const UpdateTrustRequest& request, const UpdateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrust(request), context);
}

VerifyTrustOutcome DirectoryServiceClient::VerifyTrust(const VerifyTrustRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return VerifyTrustOutcome(VerifyTrustResult(outcome.GetResult()));
  }
  else
  {
    return VerifyTrustOutcome(outcome.GetError());
  }
}

VerifyTrustOutcomeCallable DirectoryServiceClient::VerifyTrustCallable(const VerifyTrustRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyTrustOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyTrust(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClient::VerifyTrustAsync(const VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->VerifyTrustAsyncHelper( request, handler, context ); } );
}

void DirectoryServiceClient::VerifyTrustAsyncHelper(const VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VerifyTrust(request), context);
}

