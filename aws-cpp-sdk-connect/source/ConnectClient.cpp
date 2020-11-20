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

#include <aws/connect/ConnectClient.h>
#include <aws/connect/ConnectEndpoint.h>
#include <aws/connect/ConnectErrorMarshaller.h>
#include <aws/connect/model/AssociateApprovedOriginRequest.h>
#include <aws/connect/model/AssociateInstanceStorageConfigRequest.h>
#include <aws/connect/model/AssociateLambdaFunctionRequest.h>
#include <aws/connect/model/AssociateLexBotRequest.h>
#include <aws/connect/model/AssociateRoutingProfileQueuesRequest.h>
#include <aws/connect/model/AssociateSecurityKeyRequest.h>
#include <aws/connect/model/CreateContactFlowRequest.h>
#include <aws/connect/model/CreateInstanceRequest.h>
#include <aws/connect/model/CreateRoutingProfileRequest.h>
#include <aws/connect/model/CreateUserRequest.h>
#include <aws/connect/model/CreateUserHierarchyGroupRequest.h>
#include <aws/connect/model/DeleteInstanceRequest.h>
#include <aws/connect/model/DeleteUserRequest.h>
#include <aws/connect/model/DeleteUserHierarchyGroupRequest.h>
#include <aws/connect/model/DescribeContactFlowRequest.h>
#include <aws/connect/model/DescribeInstanceRequest.h>
#include <aws/connect/model/DescribeInstanceAttributeRequest.h>
#include <aws/connect/model/DescribeInstanceStorageConfigRequest.h>
#include <aws/connect/model/DescribeRoutingProfileRequest.h>
#include <aws/connect/model/DescribeUserRequest.h>
#include <aws/connect/model/DescribeUserHierarchyGroupRequest.h>
#include <aws/connect/model/DescribeUserHierarchyStructureRequest.h>
#include <aws/connect/model/DisassociateApprovedOriginRequest.h>
#include <aws/connect/model/DisassociateInstanceStorageConfigRequest.h>
#include <aws/connect/model/DisassociateLambdaFunctionRequest.h>
#include <aws/connect/model/DisassociateLexBotRequest.h>
#include <aws/connect/model/DisassociateRoutingProfileQueuesRequest.h>
#include <aws/connect/model/DisassociateSecurityKeyRequest.h>
#include <aws/connect/model/GetContactAttributesRequest.h>
#include <aws/connect/model/GetCurrentMetricDataRequest.h>
#include <aws/connect/model/GetFederationTokenRequest.h>
#include <aws/connect/model/GetMetricDataRequest.h>
#include <aws/connect/model/ListApprovedOriginsRequest.h>
#include <aws/connect/model/ListContactFlowsRequest.h>
#include <aws/connect/model/ListHoursOfOperationsRequest.h>
#include <aws/connect/model/ListInstanceAttributesRequest.h>
#include <aws/connect/model/ListInstanceStorageConfigsRequest.h>
#include <aws/connect/model/ListInstancesRequest.h>
#include <aws/connect/model/ListLambdaFunctionsRequest.h>
#include <aws/connect/model/ListLexBotsRequest.h>
#include <aws/connect/model/ListPhoneNumbersRequest.h>
#include <aws/connect/model/ListPromptsRequest.h>
#include <aws/connect/model/ListQueuesRequest.h>
#include <aws/connect/model/ListRoutingProfileQueuesRequest.h>
#include <aws/connect/model/ListRoutingProfilesRequest.h>
#include <aws/connect/model/ListSecurityKeysRequest.h>
#include <aws/connect/model/ListSecurityProfilesRequest.h>
#include <aws/connect/model/ListTagsForResourceRequest.h>
#include <aws/connect/model/ListUserHierarchyGroupsRequest.h>
#include <aws/connect/model/ListUsersRequest.h>
#include <aws/connect/model/ResumeContactRecordingRequest.h>
#include <aws/connect/model/StartChatContactRequest.h>
#include <aws/connect/model/StartContactRecordingRequest.h>
#include <aws/connect/model/StartOutboundVoiceContactRequest.h>
#include <aws/connect/model/StopContactRequest.h>
#include <aws/connect/model/StopContactRecordingRequest.h>
#include <aws/connect/model/SuspendContactRecordingRequest.h>
#include <aws/connect/model/TagResourceRequest.h>
#include <aws/connect/model/UntagResourceRequest.h>
#include <aws/connect/model/UpdateContactAttributesRequest.h>
#include <aws/connect/model/UpdateContactFlowContentRequest.h>
#include <aws/connect/model/UpdateContactFlowNameRequest.h>
#include <aws/connect/model/UpdateInstanceAttributeRequest.h>
#include <aws/connect/model/UpdateInstanceStorageConfigRequest.h>
#include <aws/connect/model/UpdateRoutingProfileConcurrencyRequest.h>
#include <aws/connect/model/UpdateRoutingProfileDefaultOutboundQueueRequest.h>
#include <aws/connect/model/UpdateRoutingProfileNameRequest.h>
#include <aws/connect/model/UpdateRoutingProfileQueuesRequest.h>
#include <aws/connect/model/UpdateUserHierarchyRequest.h>
#include <aws/connect/model/UpdateUserHierarchyGroupNameRequest.h>
#include <aws/connect/model/UpdateUserHierarchyStructureRequest.h>
#include <aws/connect/model/UpdateUserIdentityInfoRequest.h>
#include <aws/connect/model/UpdateUserPhoneConfigRequest.h>
#include <aws/connect/model/UpdateUserRoutingProfileRequest.h>
#include <aws/connect/model/UpdateUserSecurityProfilesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Connect;
using namespace Aws::Connect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "connect";
static const char* ALLOCATION_TAG = "ConnectClient";


ConnectClient::ConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectClient::ConnectClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectClient::ConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectClient::~ConnectClient()
{
}

void ConnectClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Connect");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ConnectEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ConnectClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateApprovedOriginOutcome ConnectClient::AssociateApprovedOrigin(const AssociateApprovedOriginRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateApprovedOrigin", "Required field: InstanceId, is not set");
    return AssociateApprovedOriginOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/approved-origin";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateApprovedOriginOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateApprovedOriginOutcomeCallable ConnectClient::AssociateApprovedOriginCallable(const AssociateApprovedOriginRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateApprovedOriginOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateApprovedOrigin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateApprovedOriginAsync(const AssociateApprovedOriginRequest& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateApprovedOriginAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateApprovedOriginAsyncHelper(const AssociateApprovedOriginRequest& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateApprovedOrigin(request), context);
}

AssociateInstanceStorageConfigOutcome ConnectClient::AssociateInstanceStorageConfig(const AssociateInstanceStorageConfigRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateInstanceStorageConfig", "Required field: InstanceId, is not set");
    return AssociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/storage-config";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateInstanceStorageConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateInstanceStorageConfigOutcomeCallable ConnectClient::AssociateInstanceStorageConfigCallable(const AssociateInstanceStorageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateInstanceStorageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateInstanceStorageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateInstanceStorageConfigAsync(const AssociateInstanceStorageConfigRequest& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateInstanceStorageConfigAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateInstanceStorageConfigAsyncHelper(const AssociateInstanceStorageConfigRequest& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateInstanceStorageConfig(request), context);
}

AssociateLambdaFunctionOutcome ConnectClient::AssociateLambdaFunction(const AssociateLambdaFunctionRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLambdaFunction", "Required field: InstanceId, is not set");
    return AssociateLambdaFunctionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/lambda-function";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateLambdaFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateLambdaFunctionOutcomeCallable ConnectClient::AssociateLambdaFunctionCallable(const AssociateLambdaFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateLambdaFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateLambdaFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateLambdaFunctionAsync(const AssociateLambdaFunctionRequest& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateLambdaFunctionAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateLambdaFunctionAsyncHelper(const AssociateLambdaFunctionRequest& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateLambdaFunction(request), context);
}

AssociateLexBotOutcome ConnectClient::AssociateLexBot(const AssociateLexBotRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLexBot", "Required field: InstanceId, is not set");
    return AssociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/lex-bot";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateLexBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateLexBotOutcomeCallable ConnectClient::AssociateLexBotCallable(const AssociateLexBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateLexBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateLexBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateLexBotAsync(const AssociateLexBotRequest& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateLexBotAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateLexBotAsyncHelper(const AssociateLexBotRequest& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateLexBot(request), context);
}

AssociateRoutingProfileQueuesOutcome ConnectClient::AssociateRoutingProfileQueues(const AssociateRoutingProfileQueuesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateRoutingProfileQueues", "Required field: InstanceId, is not set");
    return AssociateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateRoutingProfileQueues", "Required field: RoutingProfileId, is not set");
    return AssociateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetRoutingProfileId();
  ss << "/associate-queues";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateRoutingProfileQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateRoutingProfileQueuesOutcomeCallable ConnectClient::AssociateRoutingProfileQueuesCallable(const AssociateRoutingProfileQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateRoutingProfileQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateRoutingProfileQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateRoutingProfileQueuesAsync(const AssociateRoutingProfileQueuesRequest& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateRoutingProfileQueuesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateRoutingProfileQueuesAsyncHelper(const AssociateRoutingProfileQueuesRequest& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateRoutingProfileQueues(request), context);
}

AssociateSecurityKeyOutcome ConnectClient::AssociateSecurityKey(const AssociateSecurityKeyRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateSecurityKey", "Required field: InstanceId, is not set");
    return AssociateSecurityKeyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/security-key";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateSecurityKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateSecurityKeyOutcomeCallable ConnectClient::AssociateSecurityKeyCallable(const AssociateSecurityKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSecurityKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSecurityKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateSecurityKeyAsync(const AssociateSecurityKeyRequest& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSecurityKeyAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateSecurityKeyAsyncHelper(const AssociateSecurityKeyRequest& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSecurityKey(request), context);
}

CreateContactFlowOutcome ConnectClient::CreateContactFlow(const CreateContactFlowRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContactFlow", "Required field: InstanceId, is not set");
    return CreateContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact-flows/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateContactFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateContactFlowOutcomeCallable ConnectClient::CreateContactFlowCallable(const CreateContactFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContactFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateContactFlowAsync(const CreateContactFlowRequest& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateContactFlowAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateContactFlowAsyncHelper(const CreateContactFlowRequest& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateContactFlow(request), context);
}

CreateInstanceOutcome ConnectClient::CreateInstance(const CreateInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceOutcomeCallable ConnectClient::CreateInstanceCallable(const CreateInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstanceAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateInstanceAsyncHelper(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstance(request), context);
}

CreateRoutingProfileOutcome ConnectClient::CreateRoutingProfile(const CreateRoutingProfileRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoutingProfile", "Required field: InstanceId, is not set");
    return CreateRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateRoutingProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateRoutingProfileOutcomeCallable ConnectClient::CreateRoutingProfileCallable(const CreateRoutingProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoutingProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoutingProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateRoutingProfileAsync(const CreateRoutingProfileRequest& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRoutingProfileAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateRoutingProfileAsyncHelper(const CreateRoutingProfileRequest& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoutingProfile(request), context);
}

CreateUserOutcome ConnectClient::CreateUser(const CreateUserRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: InstanceId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable ConnectClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

CreateUserHierarchyGroupOutcome ConnectClient::CreateUserHierarchyGroup(const CreateUserHierarchyGroupRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUserHierarchyGroup", "Required field: InstanceId, is not set");
    return CreateUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/user-hierarchy-groups/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateUserHierarchyGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateUserHierarchyGroupOutcomeCallable ConnectClient::CreateUserHierarchyGroupCallable(const CreateUserHierarchyGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserHierarchyGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserHierarchyGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateUserHierarchyGroupAsync(const CreateUserHierarchyGroupRequest& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserHierarchyGroupAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateUserHierarchyGroupAsyncHelper(const CreateUserHierarchyGroupRequest& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserHierarchyGroup(request), context);
}

DeleteInstanceOutcome ConnectClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInstance", "Required field: InstanceId, is not set");
    return DeleteInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceOutcomeCallable ConnectClient::DeleteInstanceCallable(const DeleteInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstanceAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteInstanceAsyncHelper(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstance(request), context);
}

DeleteUserOutcome ConnectClient::DeleteUser(const DeleteUserRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: InstanceId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable ConnectClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DeleteUserHierarchyGroupOutcome ConnectClient::DeleteUserHierarchyGroup(const DeleteUserHierarchyGroupRequest& request) const
{
  if (!request.HierarchyGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserHierarchyGroup", "Required field: HierarchyGroupId, is not set");
    return DeleteUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HierarchyGroupId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserHierarchyGroup", "Required field: InstanceId, is not set");
    return DeleteUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/user-hierarchy-groups/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetHierarchyGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteUserHierarchyGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserHierarchyGroupOutcomeCallable ConnectClient::DeleteUserHierarchyGroupCallable(const DeleteUserHierarchyGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserHierarchyGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserHierarchyGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteUserHierarchyGroupAsync(const DeleteUserHierarchyGroupRequest& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserHierarchyGroupAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteUserHierarchyGroupAsyncHelper(const DeleteUserHierarchyGroupRequest& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserHierarchyGroup(request), context);
}

DescribeContactFlowOutcome ConnectClient::DescribeContactFlow(const DescribeContactFlowRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContactFlow", "Required field: InstanceId, is not set");
    return DescribeContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContactFlow", "Required field: ContactFlowId, is not set");
    return DescribeContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact-flows/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetContactFlowId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeContactFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeContactFlowOutcomeCallable ConnectClient::DescribeContactFlowCallable(const DescribeContactFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContactFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContactFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeContactFlowAsync(const DescribeContactFlowRequest& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeContactFlowAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeContactFlowAsyncHelper(const DescribeContactFlowRequest& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeContactFlow(request), context);
}

DescribeInstanceOutcome ConnectClient::DescribeInstance(const DescribeInstanceRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstance", "Required field: InstanceId, is not set");
    return DescribeInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceOutcomeCallable ConnectClient::DescribeInstanceCallable(const DescribeInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeInstanceAsyncHelper(const DescribeInstanceRequest& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstance(request), context);
}

DescribeInstanceAttributeOutcome ConnectClient::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceAttribute", "Required field: InstanceId, is not set");
    return DescribeInstanceAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AttributeTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceAttribute", "Required field: AttributeType, is not set");
    return DescribeInstanceAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/attribute/";
  ss << InstanceAttributeTypeMapper::GetNameForInstanceAttributeType(request.GetAttributeType());
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeInstanceAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceAttributeOutcomeCallable ConnectClient::DescribeInstanceAttributeCallable(const DescribeInstanceAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeInstanceAttributeAsync(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceAttributeAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeInstanceAttributeAsyncHelper(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceAttribute(request), context);
}

DescribeInstanceStorageConfigOutcome ConnectClient::DescribeInstanceStorageConfig(const DescribeInstanceStorageConfigRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceStorageConfig", "Required field: InstanceId, is not set");
    return DescribeInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceStorageConfig", "Required field: AssociationId, is not set");
    return DescribeInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationId]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceStorageConfig", "Required field: ResourceType, is not set");
    return DescribeInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/storage-config/";
  ss << request.GetAssociationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeInstanceStorageConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceStorageConfigOutcomeCallable ConnectClient::DescribeInstanceStorageConfigCallable(const DescribeInstanceStorageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceStorageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceStorageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeInstanceStorageConfigAsync(const DescribeInstanceStorageConfigRequest& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceStorageConfigAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeInstanceStorageConfigAsyncHelper(const DescribeInstanceStorageConfigRequest& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceStorageConfig(request), context);
}

DescribeRoutingProfileOutcome ConnectClient::DescribeRoutingProfile(const DescribeRoutingProfileRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRoutingProfile", "Required field: InstanceId, is not set");
    return DescribeRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRoutingProfile", "Required field: RoutingProfileId, is not set");
    return DescribeRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetRoutingProfileId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeRoutingProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRoutingProfileOutcomeCallable ConnectClient::DescribeRoutingProfileCallable(const DescribeRoutingProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRoutingProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRoutingProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeRoutingProfileAsync(const DescribeRoutingProfileRequest& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRoutingProfileAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeRoutingProfileAsyncHelper(const DescribeRoutingProfileRequest& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRoutingProfile(request), context);
}

DescribeUserOutcome ConnectClient::DescribeUser(const DescribeUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: UserId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: InstanceId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcomeCallable ConnectClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeUserAsyncHelper(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUser(request), context);
}

DescribeUserHierarchyGroupOutcome ConnectClient::DescribeUserHierarchyGroup(const DescribeUserHierarchyGroupRequest& request) const
{
  if (!request.HierarchyGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUserHierarchyGroup", "Required field: HierarchyGroupId, is not set");
    return DescribeUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HierarchyGroupId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUserHierarchyGroup", "Required field: InstanceId, is not set");
    return DescribeUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/user-hierarchy-groups/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetHierarchyGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeUserHierarchyGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserHierarchyGroupOutcomeCallable ConnectClient::DescribeUserHierarchyGroupCallable(const DescribeUserHierarchyGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserHierarchyGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserHierarchyGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeUserHierarchyGroupAsync(const DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserHierarchyGroupAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeUserHierarchyGroupAsyncHelper(const DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserHierarchyGroup(request), context);
}

DescribeUserHierarchyStructureOutcome ConnectClient::DescribeUserHierarchyStructure(const DescribeUserHierarchyStructureRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUserHierarchyStructure", "Required field: InstanceId, is not set");
    return DescribeUserHierarchyStructureOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/user-hierarchy-structure/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeUserHierarchyStructureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserHierarchyStructureOutcomeCallable ConnectClient::DescribeUserHierarchyStructureCallable(const DescribeUserHierarchyStructureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserHierarchyStructureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserHierarchyStructure(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeUserHierarchyStructureAsync(const DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserHierarchyStructureAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeUserHierarchyStructureAsyncHelper(const DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserHierarchyStructure(request), context);
}

DisassociateApprovedOriginOutcome ConnectClient::DisassociateApprovedOrigin(const DisassociateApprovedOriginRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateApprovedOrigin", "Required field: InstanceId, is not set");
    return DisassociateApprovedOriginOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.OriginHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateApprovedOrigin", "Required field: Origin, is not set");
    return DisassociateApprovedOriginOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Origin]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/approved-origin";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateApprovedOriginOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApprovedOriginOutcomeCallable ConnectClient::DisassociateApprovedOriginCallable(const DisassociateApprovedOriginRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateApprovedOriginOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateApprovedOrigin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociateApprovedOriginAsync(const DisassociateApprovedOriginRequest& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateApprovedOriginAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociateApprovedOriginAsyncHelper(const DisassociateApprovedOriginRequest& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateApprovedOrigin(request), context);
}

DisassociateInstanceStorageConfigOutcome ConnectClient::DisassociateInstanceStorageConfig(const DisassociateInstanceStorageConfigRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateInstanceStorageConfig", "Required field: InstanceId, is not set");
    return DisassociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateInstanceStorageConfig", "Required field: AssociationId, is not set");
    return DisassociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationId]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateInstanceStorageConfig", "Required field: ResourceType, is not set");
    return DisassociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/storage-config/";
  ss << request.GetAssociationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateInstanceStorageConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateInstanceStorageConfigOutcomeCallable ConnectClient::DisassociateInstanceStorageConfigCallable(const DisassociateInstanceStorageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateInstanceStorageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateInstanceStorageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociateInstanceStorageConfigAsync(const DisassociateInstanceStorageConfigRequest& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateInstanceStorageConfigAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociateInstanceStorageConfigAsyncHelper(const DisassociateInstanceStorageConfigRequest& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateInstanceStorageConfig(request), context);
}

DisassociateLambdaFunctionOutcome ConnectClient::DisassociateLambdaFunction(const DisassociateLambdaFunctionRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLambdaFunction", "Required field: InstanceId, is not set");
    return DisassociateLambdaFunctionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.FunctionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLambdaFunction", "Required field: FunctionArn, is not set");
    return DisassociateLambdaFunctionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/lambda-function";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateLambdaFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateLambdaFunctionOutcomeCallable ConnectClient::DisassociateLambdaFunctionCallable(const DisassociateLambdaFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateLambdaFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateLambdaFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociateLambdaFunctionAsync(const DisassociateLambdaFunctionRequest& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateLambdaFunctionAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociateLambdaFunctionAsyncHelper(const DisassociateLambdaFunctionRequest& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateLambdaFunction(request), context);
}

DisassociateLexBotOutcome ConnectClient::DisassociateLexBot(const DisassociateLexBotRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLexBot", "Required field: InstanceId, is not set");
    return DisassociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLexBot", "Required field: BotName, is not set");
    return DisassociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.LexRegionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLexBot", "Required field: LexRegion, is not set");
    return DisassociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LexRegion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/lex-bot";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateLexBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateLexBotOutcomeCallable ConnectClient::DisassociateLexBotCallable(const DisassociateLexBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateLexBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateLexBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociateLexBotAsync(const DisassociateLexBotRequest& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateLexBotAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociateLexBotAsyncHelper(const DisassociateLexBotRequest& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateLexBot(request), context);
}

DisassociateRoutingProfileQueuesOutcome ConnectClient::DisassociateRoutingProfileQueues(const DisassociateRoutingProfileQueuesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRoutingProfileQueues", "Required field: InstanceId, is not set");
    return DisassociateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRoutingProfileQueues", "Required field: RoutingProfileId, is not set");
    return DisassociateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetRoutingProfileId();
  ss << "/disassociate-queues";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateRoutingProfileQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateRoutingProfileQueuesOutcomeCallable ConnectClient::DisassociateRoutingProfileQueuesCallable(const DisassociateRoutingProfileQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateRoutingProfileQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateRoutingProfileQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociateRoutingProfileQueuesAsync(const DisassociateRoutingProfileQueuesRequest& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateRoutingProfileQueuesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociateRoutingProfileQueuesAsyncHelper(const DisassociateRoutingProfileQueuesRequest& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateRoutingProfileQueues(request), context);
}

DisassociateSecurityKeyOutcome ConnectClient::DisassociateSecurityKey(const DisassociateSecurityKeyRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateSecurityKey", "Required field: InstanceId, is not set");
    return DisassociateSecurityKeyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateSecurityKey", "Required field: AssociationId, is not set");
    return DisassociateSecurityKeyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/security-key/";
  ss << request.GetAssociationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateSecurityKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateSecurityKeyOutcomeCallable ConnectClient::DisassociateSecurityKeyCallable(const DisassociateSecurityKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSecurityKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSecurityKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociateSecurityKeyAsync(const DisassociateSecurityKeyRequest& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateSecurityKeyAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociateSecurityKeyAsyncHelper(const DisassociateSecurityKeyRequest& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateSecurityKey(request), context);
}

GetContactAttributesOutcome ConnectClient::GetContactAttributes(const GetContactAttributesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContactAttributes", "Required field: InstanceId, is not set");
    return GetContactAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.InitialContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContactAttributes", "Required field: InitialContactId, is not set");
    return GetContactAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InitialContactId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/attributes/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetInitialContactId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetContactAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContactAttributesOutcomeCallable ConnectClient::GetContactAttributesCallable(const GetContactAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContactAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::GetContactAttributesAsync(const GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContactAttributesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::GetContactAttributesAsyncHelper(const GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContactAttributes(request), context);
}

GetCurrentMetricDataOutcome ConnectClient::GetCurrentMetricData(const GetCurrentMetricDataRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCurrentMetricData", "Required field: InstanceId, is not set");
    return GetCurrentMetricDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/metrics/current/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetCurrentMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCurrentMetricDataOutcomeCallable ConnectClient::GetCurrentMetricDataCallable(const GetCurrentMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCurrentMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCurrentMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::GetCurrentMetricDataAsync(const GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCurrentMetricDataAsyncHelper( request, handler, context ); } );
}

void ConnectClient::GetCurrentMetricDataAsyncHelper(const GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCurrentMetricData(request), context);
}

GetFederationTokenOutcome ConnectClient::GetFederationToken(const GetFederationTokenRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFederationToken", "Required field: InstanceId, is not set");
    return GetFederationTokenOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/user/federate/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetFederationTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFederationTokenOutcomeCallable ConnectClient::GetFederationTokenCallable(const GetFederationTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFederationTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFederationToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::GetFederationTokenAsync(const GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFederationTokenAsyncHelper( request, handler, context ); } );
}

void ConnectClient::GetFederationTokenAsyncHelper(const GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFederationToken(request), context);
}

GetMetricDataOutcome ConnectClient::GetMetricData(const GetMetricDataRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMetricData", "Required field: InstanceId, is not set");
    return GetMetricDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/metrics/historical/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMetricDataOutcomeCallable ConnectClient::GetMetricDataCallable(const GetMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::GetMetricDataAsync(const GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMetricDataAsyncHelper( request, handler, context ); } );
}

void ConnectClient::GetMetricDataAsyncHelper(const GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMetricData(request), context);
}

ListApprovedOriginsOutcome ConnectClient::ListApprovedOrigins(const ListApprovedOriginsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApprovedOrigins", "Required field: InstanceId, is not set");
    return ListApprovedOriginsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/approved-origins";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListApprovedOriginsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApprovedOriginsOutcomeCallable ConnectClient::ListApprovedOriginsCallable(const ListApprovedOriginsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApprovedOriginsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApprovedOrigins(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListApprovedOriginsAsync(const ListApprovedOriginsRequest& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApprovedOriginsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListApprovedOriginsAsyncHelper(const ListApprovedOriginsRequest& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApprovedOrigins(request), context);
}

ListContactFlowsOutcome ConnectClient::ListContactFlows(const ListContactFlowsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactFlows", "Required field: InstanceId, is not set");
    return ListContactFlowsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact-flows-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListContactFlowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactFlowsOutcomeCallable ConnectClient::ListContactFlowsCallable(const ListContactFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContactFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContactFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListContactFlowsAsync(const ListContactFlowsRequest& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListContactFlowsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListContactFlowsAsyncHelper(const ListContactFlowsRequest& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListContactFlows(request), context);
}

ListHoursOfOperationsOutcome ConnectClient::ListHoursOfOperations(const ListHoursOfOperationsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHoursOfOperations", "Required field: InstanceId, is not set");
    return ListHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/hours-of-operations-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListHoursOfOperationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListHoursOfOperationsOutcomeCallable ConnectClient::ListHoursOfOperationsCallable(const ListHoursOfOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHoursOfOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHoursOfOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListHoursOfOperationsAsync(const ListHoursOfOperationsRequest& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHoursOfOperationsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListHoursOfOperationsAsyncHelper(const ListHoursOfOperationsRequest& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHoursOfOperations(request), context);
}

ListInstanceAttributesOutcome ConnectClient::ListInstanceAttributes(const ListInstanceAttributesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInstanceAttributes", "Required field: InstanceId, is not set");
    return ListInstanceAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/attributes";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListInstanceAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceAttributesOutcomeCallable ConnectClient::ListInstanceAttributesCallable(const ListInstanceAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListInstanceAttributesAsync(const ListInstanceAttributesRequest& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceAttributesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListInstanceAttributesAsyncHelper(const ListInstanceAttributesRequest& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceAttributes(request), context);
}

ListInstanceStorageConfigsOutcome ConnectClient::ListInstanceStorageConfigs(const ListInstanceStorageConfigsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInstanceStorageConfigs", "Required field: InstanceId, is not set");
    return ListInstanceStorageConfigsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInstanceStorageConfigs", "Required field: ResourceType, is not set");
    return ListInstanceStorageConfigsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/storage-configs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListInstanceStorageConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceStorageConfigsOutcomeCallable ConnectClient::ListInstanceStorageConfigsCallable(const ListInstanceStorageConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceStorageConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceStorageConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListInstanceStorageConfigsAsync(const ListInstanceStorageConfigsRequest& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceStorageConfigsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListInstanceStorageConfigsAsyncHelper(const ListInstanceStorageConfigsRequest& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceStorageConfigs(request), context);
}

ListInstancesOutcome ConnectClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcomeCallable ConnectClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstancesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListInstancesAsyncHelper(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstances(request), context);
}

ListLambdaFunctionsOutcome ConnectClient::ListLambdaFunctions(const ListLambdaFunctionsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLambdaFunctions", "Required field: InstanceId, is not set");
    return ListLambdaFunctionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/lambda-functions";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListLambdaFunctionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLambdaFunctionsOutcomeCallable ConnectClient::ListLambdaFunctionsCallable(const ListLambdaFunctionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLambdaFunctionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLambdaFunctions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListLambdaFunctionsAsync(const ListLambdaFunctionsRequest& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLambdaFunctionsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListLambdaFunctionsAsyncHelper(const ListLambdaFunctionsRequest& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLambdaFunctions(request), context);
}

ListLexBotsOutcome ConnectClient::ListLexBots(const ListLexBotsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLexBots", "Required field: InstanceId, is not set");
    return ListLexBotsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/lex-bots";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListLexBotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLexBotsOutcomeCallable ConnectClient::ListLexBotsCallable(const ListLexBotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLexBotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLexBots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListLexBotsAsync(const ListLexBotsRequest& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLexBotsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListLexBotsAsyncHelper(const ListLexBotsRequest& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLexBots(request), context);
}

ListPhoneNumbersOutcome ConnectClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPhoneNumbers", "Required field: InstanceId, is not set");
    return ListPhoneNumbersOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-numbers-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPhoneNumbersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPhoneNumbersOutcomeCallable ConnectClient::ListPhoneNumbersCallable(const ListPhoneNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPhoneNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPhoneNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListPhoneNumbersAsync(const ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPhoneNumbersAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListPhoneNumbersAsyncHelper(const ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPhoneNumbers(request), context);
}

ListPromptsOutcome ConnectClient::ListPrompts(const ListPromptsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrompts", "Required field: InstanceId, is not set");
    return ListPromptsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prompts-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPromptsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPromptsOutcomeCallable ConnectClient::ListPromptsCallable(const ListPromptsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPromptsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrompts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListPromptsAsync(const ListPromptsRequest& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPromptsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListPromptsAsyncHelper(const ListPromptsRequest& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPrompts(request), context);
}

ListQueuesOutcome ConnectClient::ListQueues(const ListQueuesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueues", "Required field: InstanceId, is not set");
    return ListQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/queues-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQueuesOutcomeCallable ConnectClient::ListQueuesCallable(const ListQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListQueuesAsync(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQueuesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListQueuesAsyncHelper(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQueues(request), context);
}

ListRoutingProfileQueuesOutcome ConnectClient::ListRoutingProfileQueues(const ListRoutingProfileQueuesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutingProfileQueues", "Required field: InstanceId, is not set");
    return ListRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutingProfileQueues", "Required field: RoutingProfileId, is not set");
    return ListRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetRoutingProfileId();
  ss << "/queues";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRoutingProfileQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoutingProfileQueuesOutcomeCallable ConnectClient::ListRoutingProfileQueuesCallable(const ListRoutingProfileQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutingProfileQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutingProfileQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListRoutingProfileQueuesAsync(const ListRoutingProfileQueuesRequest& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoutingProfileQueuesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListRoutingProfileQueuesAsyncHelper(const ListRoutingProfileQueuesRequest& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoutingProfileQueues(request), context);
}

ListRoutingProfilesOutcome ConnectClient::ListRoutingProfiles(const ListRoutingProfilesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutingProfiles", "Required field: InstanceId, is not set");
    return ListRoutingProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRoutingProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoutingProfilesOutcomeCallable ConnectClient::ListRoutingProfilesCallable(const ListRoutingProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutingProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutingProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListRoutingProfilesAsync(const ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoutingProfilesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListRoutingProfilesAsyncHelper(const ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoutingProfiles(request), context);
}

ListSecurityKeysOutcome ConnectClient::ListSecurityKeys(const ListSecurityKeysRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityKeys", "Required field: InstanceId, is not set");
    return ListSecurityKeysOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/security-keys";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSecurityKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityKeysOutcomeCallable ConnectClient::ListSecurityKeysCallable(const ListSecurityKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListSecurityKeysAsync(const ListSecurityKeysRequest& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSecurityKeysAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListSecurityKeysAsyncHelper(const ListSecurityKeysRequest& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSecurityKeys(request), context);
}

ListSecurityProfilesOutcome ConnectClient::ListSecurityProfiles(const ListSecurityProfilesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityProfiles", "Required field: InstanceId, is not set");
    return ListSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/security-profiles-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSecurityProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityProfilesOutcomeCallable ConnectClient::ListSecurityProfilesCallable(const ListSecurityProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListSecurityProfilesAsync(const ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSecurityProfilesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListSecurityProfilesAsyncHelper(const ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSecurityProfiles(request), context);
}

ListTagsForResourceOutcome ConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ConnectClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListUserHierarchyGroupsOutcome ConnectClient::ListUserHierarchyGroups(const ListUserHierarchyGroupsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserHierarchyGroups", "Required field: InstanceId, is not set");
    return ListUserHierarchyGroupsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/user-hierarchy-groups-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListUserHierarchyGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserHierarchyGroupsOutcomeCallable ConnectClient::ListUserHierarchyGroupsCallable(const ListUserHierarchyGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserHierarchyGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserHierarchyGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListUserHierarchyGroupsAsync(const ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUserHierarchyGroupsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListUserHierarchyGroupsAsyncHelper(const ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserHierarchyGroups(request), context);
}

ListUsersOutcome ConnectClient::ListUsers(const ListUsersRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: InstanceId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users-summary/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable ConnectClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

ResumeContactRecordingOutcome ConnectClient::ResumeContactRecording(const ResumeContactRecordingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/resume-recording";
  uri.SetPath(uri.GetPath() + ss.str());
  return ResumeContactRecordingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeContactRecordingOutcomeCallable ConnectClient::ResumeContactRecordingCallable(const ResumeContactRecordingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeContactRecordingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeContactRecording(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ResumeContactRecordingAsync(const ResumeContactRecordingRequest& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResumeContactRecordingAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ResumeContactRecordingAsyncHelper(const ResumeContactRecordingRequest& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResumeContactRecording(request), context);
}

StartChatContactOutcome ConnectClient::StartChatContact(const StartChatContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/chat";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartChatContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartChatContactOutcomeCallable ConnectClient::StartChatContactCallable(const StartChatContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartChatContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartChatContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::StartChatContactAsync(const StartChatContactRequest& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartChatContactAsyncHelper( request, handler, context ); } );
}

void ConnectClient::StartChatContactAsyncHelper(const StartChatContactRequest& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartChatContact(request), context);
}

StartContactRecordingOutcome ConnectClient::StartContactRecording(const StartContactRecordingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/start-recording";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartContactRecordingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartContactRecordingOutcomeCallable ConnectClient::StartContactRecordingCallable(const StartContactRecordingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartContactRecordingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartContactRecording(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::StartContactRecordingAsync(const StartContactRecordingRequest& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartContactRecordingAsyncHelper( request, handler, context ); } );
}

void ConnectClient::StartContactRecordingAsyncHelper(const StartContactRecordingRequest& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartContactRecording(request), context);
}

StartOutboundVoiceContactOutcome ConnectClient::StartOutboundVoiceContact(const StartOutboundVoiceContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/outbound-voice";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartOutboundVoiceContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartOutboundVoiceContactOutcomeCallable ConnectClient::StartOutboundVoiceContactCallable(const StartOutboundVoiceContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartOutboundVoiceContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartOutboundVoiceContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::StartOutboundVoiceContactAsync(const StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartOutboundVoiceContactAsyncHelper( request, handler, context ); } );
}

void ConnectClient::StartOutboundVoiceContactAsyncHelper(const StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartOutboundVoiceContact(request), context);
}

StopContactOutcome ConnectClient::StopContact(const StopContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/stop";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopContactOutcomeCallable ConnectClient::StopContactCallable(const StopContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::StopContactAsync(const StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopContactAsyncHelper( request, handler, context ); } );
}

void ConnectClient::StopContactAsyncHelper(const StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopContact(request), context);
}

StopContactRecordingOutcome ConnectClient::StopContactRecording(const StopContactRecordingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/stop-recording";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopContactRecordingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopContactRecordingOutcomeCallable ConnectClient::StopContactRecordingCallable(const StopContactRecordingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopContactRecordingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopContactRecording(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::StopContactRecordingAsync(const StopContactRecordingRequest& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopContactRecordingAsyncHelper( request, handler, context ); } );
}

void ConnectClient::StopContactRecordingAsyncHelper(const StopContactRecordingRequest& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopContactRecording(request), context);
}

SuspendContactRecordingOutcome ConnectClient::SuspendContactRecording(const SuspendContactRecordingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/suspend-recording";
  uri.SetPath(uri.GetPath() + ss.str());
  return SuspendContactRecordingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SuspendContactRecordingOutcomeCallable ConnectClient::SuspendContactRecordingCallable(const SuspendContactRecordingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SuspendContactRecordingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SuspendContactRecording(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::SuspendContactRecordingAsync(const SuspendContactRecordingRequest& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SuspendContactRecordingAsyncHelper( request, handler, context ); } );
}

void ConnectClient::SuspendContactRecordingAsyncHelper(const SuspendContactRecordingRequest& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SuspendContactRecording(request), context);
}

TagResourceOutcome ConnectClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ConnectClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ConnectClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ConnectClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ConnectClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateContactAttributesOutcome ConnectClient::UpdateContactAttributes(const UpdateContactAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/attributes";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateContactAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactAttributesOutcomeCallable ConnectClient::UpdateContactAttributesCallable(const UpdateContactAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateContactAttributesAsync(const UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactAttributesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateContactAttributesAsyncHelper(const UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContactAttributes(request), context);
}

UpdateContactFlowContentOutcome ConnectClient::UpdateContactFlowContent(const UpdateContactFlowContentRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowContent", "Required field: InstanceId, is not set");
    return UpdateContactFlowContentOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowContent", "Required field: ContactFlowId, is not set");
    return UpdateContactFlowContentOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact-flows/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetContactFlowId();
  ss << "/content";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateContactFlowContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowContentOutcomeCallable ConnectClient::UpdateContactFlowContentCallable(const UpdateContactFlowContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactFlowContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactFlowContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateContactFlowContentAsync(const UpdateContactFlowContentRequest& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactFlowContentAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateContactFlowContentAsyncHelper(const UpdateContactFlowContentRequest& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContactFlowContent(request), context);
}

UpdateContactFlowNameOutcome ConnectClient::UpdateContactFlowName(const UpdateContactFlowNameRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowName", "Required field: InstanceId, is not set");
    return UpdateContactFlowNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowName", "Required field: ContactFlowId, is not set");
    return UpdateContactFlowNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact-flows/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetContactFlowId();
  ss << "/name";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateContactFlowNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowNameOutcomeCallable ConnectClient::UpdateContactFlowNameCallable(const UpdateContactFlowNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactFlowNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactFlowName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateContactFlowNameAsync(const UpdateContactFlowNameRequest& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactFlowNameAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateContactFlowNameAsyncHelper(const UpdateContactFlowNameRequest& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContactFlowName(request), context);
}

UpdateInstanceAttributeOutcome ConnectClient::UpdateInstanceAttribute(const UpdateInstanceAttributeRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInstanceAttribute", "Required field: InstanceId, is not set");
    return UpdateInstanceAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AttributeTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInstanceAttribute", "Required field: AttributeType, is not set");
    return UpdateInstanceAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/attribute/";
  ss << InstanceAttributeTypeMapper::GetNameForInstanceAttributeType(request.GetAttributeType());
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateInstanceAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceAttributeOutcomeCallable ConnectClient::UpdateInstanceAttributeCallable(const UpdateInstanceAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateInstanceAttributeAsync(const UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInstanceAttributeAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateInstanceAttributeAsyncHelper(const UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInstanceAttribute(request), context);
}

UpdateInstanceStorageConfigOutcome ConnectClient::UpdateInstanceStorageConfig(const UpdateInstanceStorageConfigRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInstanceStorageConfig", "Required field: InstanceId, is not set");
    return UpdateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInstanceStorageConfig", "Required field: AssociationId, is not set");
    return UpdateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationId]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInstanceStorageConfig", "Required field: ResourceType, is not set");
    return UpdateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/instance/";
  ss << request.GetInstanceId();
  ss << "/storage-config/";
  ss << request.GetAssociationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateInstanceStorageConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceStorageConfigOutcomeCallable ConnectClient::UpdateInstanceStorageConfigCallable(const UpdateInstanceStorageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceStorageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceStorageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateInstanceStorageConfigAsync(const UpdateInstanceStorageConfigRequest& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInstanceStorageConfigAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateInstanceStorageConfigAsyncHelper(const UpdateInstanceStorageConfigRequest& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInstanceStorageConfig(request), context);
}

UpdateRoutingProfileConcurrencyOutcome ConnectClient::UpdateRoutingProfileConcurrency(const UpdateRoutingProfileConcurrencyRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoutingProfileConcurrency", "Required field: InstanceId, is not set");
    return UpdateRoutingProfileConcurrencyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoutingProfileConcurrency", "Required field: RoutingProfileId, is not set");
    return UpdateRoutingProfileConcurrencyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetRoutingProfileId();
  ss << "/concurrency";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRoutingProfileConcurrencyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingProfileConcurrencyOutcomeCallable ConnectClient::UpdateRoutingProfileConcurrencyCallable(const UpdateRoutingProfileConcurrencyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingProfileConcurrencyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingProfileConcurrency(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateRoutingProfileConcurrencyAsync(const UpdateRoutingProfileConcurrencyRequest& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoutingProfileConcurrencyAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateRoutingProfileConcurrencyAsyncHelper(const UpdateRoutingProfileConcurrencyRequest& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoutingProfileConcurrency(request), context);
}

UpdateRoutingProfileDefaultOutboundQueueOutcome ConnectClient::UpdateRoutingProfileDefaultOutboundQueue(const UpdateRoutingProfileDefaultOutboundQueueRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoutingProfileDefaultOutboundQueue", "Required field: InstanceId, is not set");
    return UpdateRoutingProfileDefaultOutboundQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoutingProfileDefaultOutboundQueue", "Required field: RoutingProfileId, is not set");
    return UpdateRoutingProfileDefaultOutboundQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetRoutingProfileId();
  ss << "/default-outbound-queue";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRoutingProfileDefaultOutboundQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingProfileDefaultOutboundQueueOutcomeCallable ConnectClient::UpdateRoutingProfileDefaultOutboundQueueCallable(const UpdateRoutingProfileDefaultOutboundQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingProfileDefaultOutboundQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingProfileDefaultOutboundQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateRoutingProfileDefaultOutboundQueueAsync(const UpdateRoutingProfileDefaultOutboundQueueRequest& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoutingProfileDefaultOutboundQueueAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateRoutingProfileDefaultOutboundQueueAsyncHelper(const UpdateRoutingProfileDefaultOutboundQueueRequest& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoutingProfileDefaultOutboundQueue(request), context);
}

UpdateRoutingProfileNameOutcome ConnectClient::UpdateRoutingProfileName(const UpdateRoutingProfileNameRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoutingProfileName", "Required field: InstanceId, is not set");
    return UpdateRoutingProfileNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoutingProfileName", "Required field: RoutingProfileId, is not set");
    return UpdateRoutingProfileNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetRoutingProfileId();
  ss << "/name";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRoutingProfileNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingProfileNameOutcomeCallable ConnectClient::UpdateRoutingProfileNameCallable(const UpdateRoutingProfileNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingProfileNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingProfileName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateRoutingProfileNameAsync(const UpdateRoutingProfileNameRequest& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoutingProfileNameAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateRoutingProfileNameAsyncHelper(const UpdateRoutingProfileNameRequest& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoutingProfileName(request), context);
}

UpdateRoutingProfileQueuesOutcome ConnectClient::UpdateRoutingProfileQueues(const UpdateRoutingProfileQueuesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoutingProfileQueues", "Required field: InstanceId, is not set");
    return UpdateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoutingProfileQueues", "Required field: RoutingProfileId, is not set");
    return UpdateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/routing-profiles/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetRoutingProfileId();
  ss << "/queues";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRoutingProfileQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingProfileQueuesOutcomeCallable ConnectClient::UpdateRoutingProfileQueuesCallable(const UpdateRoutingProfileQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingProfileQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingProfileQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateRoutingProfileQueuesAsync(const UpdateRoutingProfileQueuesRequest& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoutingProfileQueuesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateRoutingProfileQueuesAsyncHelper(const UpdateRoutingProfileQueuesRequest& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoutingProfileQueues(request), context);
}

UpdateUserHierarchyOutcome ConnectClient::UpdateUserHierarchy(const UpdateUserHierarchyRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserHierarchy", "Required field: UserId, is not set");
    return UpdateUserHierarchyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserHierarchy", "Required field: InstanceId, is not set");
    return UpdateUserHierarchyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetUserId();
  ss << "/hierarchy";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserHierarchyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserHierarchyOutcomeCallable ConnectClient::UpdateUserHierarchyCallable(const UpdateUserHierarchyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserHierarchyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserHierarchy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateUserHierarchyAsync(const UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserHierarchyAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateUserHierarchyAsyncHelper(const UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserHierarchy(request), context);
}

UpdateUserHierarchyGroupNameOutcome ConnectClient::UpdateUserHierarchyGroupName(const UpdateUserHierarchyGroupNameRequest& request) const
{
  if (!request.HierarchyGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserHierarchyGroupName", "Required field: HierarchyGroupId, is not set");
    return UpdateUserHierarchyGroupNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HierarchyGroupId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserHierarchyGroupName", "Required field: InstanceId, is not set");
    return UpdateUserHierarchyGroupNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/user-hierarchy-groups/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetHierarchyGroupId();
  ss << "/name";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserHierarchyGroupNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserHierarchyGroupNameOutcomeCallable ConnectClient::UpdateUserHierarchyGroupNameCallable(const UpdateUserHierarchyGroupNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserHierarchyGroupNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserHierarchyGroupName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateUserHierarchyGroupNameAsync(const UpdateUserHierarchyGroupNameRequest& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserHierarchyGroupNameAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateUserHierarchyGroupNameAsyncHelper(const UpdateUserHierarchyGroupNameRequest& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserHierarchyGroupName(request), context);
}

UpdateUserHierarchyStructureOutcome ConnectClient::UpdateUserHierarchyStructure(const UpdateUserHierarchyStructureRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserHierarchyStructure", "Required field: InstanceId, is not set");
    return UpdateUserHierarchyStructureOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/user-hierarchy-structure/";
  ss << request.GetInstanceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserHierarchyStructureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserHierarchyStructureOutcomeCallable ConnectClient::UpdateUserHierarchyStructureCallable(const UpdateUserHierarchyStructureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserHierarchyStructureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserHierarchyStructure(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateUserHierarchyStructureAsync(const UpdateUserHierarchyStructureRequest& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserHierarchyStructureAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateUserHierarchyStructureAsyncHelper(const UpdateUserHierarchyStructureRequest& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserHierarchyStructure(request), context);
}

UpdateUserIdentityInfoOutcome ConnectClient::UpdateUserIdentityInfo(const UpdateUserIdentityInfoRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserIdentityInfo", "Required field: UserId, is not set");
    return UpdateUserIdentityInfoOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserIdentityInfo", "Required field: InstanceId, is not set");
    return UpdateUserIdentityInfoOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetUserId();
  ss << "/identity-info";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserIdentityInfoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserIdentityInfoOutcomeCallable ConnectClient::UpdateUserIdentityInfoCallable(const UpdateUserIdentityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserIdentityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserIdentityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateUserIdentityInfoAsync(const UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserIdentityInfoAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateUserIdentityInfoAsyncHelper(const UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserIdentityInfo(request), context);
}

UpdateUserPhoneConfigOutcome ConnectClient::UpdateUserPhoneConfig(const UpdateUserPhoneConfigRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserPhoneConfig", "Required field: UserId, is not set");
    return UpdateUserPhoneConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserPhoneConfig", "Required field: InstanceId, is not set");
    return UpdateUserPhoneConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetUserId();
  ss << "/phone-config";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserPhoneConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserPhoneConfigOutcomeCallable ConnectClient::UpdateUserPhoneConfigCallable(const UpdateUserPhoneConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserPhoneConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserPhoneConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateUserPhoneConfigAsync(const UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserPhoneConfigAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateUserPhoneConfigAsyncHelper(const UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserPhoneConfig(request), context);
}

UpdateUserRoutingProfileOutcome ConnectClient::UpdateUserRoutingProfile(const UpdateUserRoutingProfileRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserRoutingProfile", "Required field: UserId, is not set");
    return UpdateUserRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserRoutingProfile", "Required field: InstanceId, is not set");
    return UpdateUserRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetUserId();
  ss << "/routing-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserRoutingProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserRoutingProfileOutcomeCallable ConnectClient::UpdateUserRoutingProfileCallable(const UpdateUserRoutingProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserRoutingProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserRoutingProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateUserRoutingProfileAsync(const UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserRoutingProfileAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateUserRoutingProfileAsyncHelper(const UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserRoutingProfile(request), context);
}

UpdateUserSecurityProfilesOutcome ConnectClient::UpdateUserSecurityProfiles(const UpdateUserSecurityProfilesRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserSecurityProfiles", "Required field: UserId, is not set");
    return UpdateUserSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserSecurityProfiles", "Required field: InstanceId, is not set");
    return UpdateUserSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/users/";
  ss << request.GetInstanceId();
  ss << "/";
  ss << request.GetUserId();
  ss << "/security-profiles";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserSecurityProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserSecurityProfilesOutcomeCallable ConnectClient::UpdateUserSecurityProfilesCallable(const UpdateUserSecurityProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserSecurityProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserSecurityProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateUserSecurityProfilesAsync(const UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserSecurityProfilesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateUserSecurityProfilesAsyncHelper(const UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserSecurityProfiles(request), context);
}

