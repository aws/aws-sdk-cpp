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
#include <aws/connect/model/AssociateBotRequest.h>
#include <aws/connect/model/AssociateDefaultVocabularyRequest.h>
#include <aws/connect/model/AssociateInstanceStorageConfigRequest.h>
#include <aws/connect/model/AssociateLambdaFunctionRequest.h>
#include <aws/connect/model/AssociateLexBotRequest.h>
#include <aws/connect/model/AssociatePhoneNumberContactFlowRequest.h>
#include <aws/connect/model/AssociateQueueQuickConnectsRequest.h>
#include <aws/connect/model/AssociateRoutingProfileQueuesRequest.h>
#include <aws/connect/model/AssociateSecurityKeyRequest.h>
#include <aws/connect/model/ClaimPhoneNumberRequest.h>
#include <aws/connect/model/CreateAgentStatusRequest.h>
#include <aws/connect/model/CreateContactFlowRequest.h>
#include <aws/connect/model/CreateContactFlowModuleRequest.h>
#include <aws/connect/model/CreateHoursOfOperationRequest.h>
#include <aws/connect/model/CreateInstanceRequest.h>
#include <aws/connect/model/CreateIntegrationAssociationRequest.h>
#include <aws/connect/model/CreateQueueRequest.h>
#include <aws/connect/model/CreateQuickConnectRequest.h>
#include <aws/connect/model/CreateRoutingProfileRequest.h>
#include <aws/connect/model/CreateSecurityProfileRequest.h>
#include <aws/connect/model/CreateTaskTemplateRequest.h>
#include <aws/connect/model/CreateUseCaseRequest.h>
#include <aws/connect/model/CreateUserRequest.h>
#include <aws/connect/model/CreateUserHierarchyGroupRequest.h>
#include <aws/connect/model/CreateVocabularyRequest.h>
#include <aws/connect/model/DeleteContactFlowRequest.h>
#include <aws/connect/model/DeleteContactFlowModuleRequest.h>
#include <aws/connect/model/DeleteHoursOfOperationRequest.h>
#include <aws/connect/model/DeleteInstanceRequest.h>
#include <aws/connect/model/DeleteIntegrationAssociationRequest.h>
#include <aws/connect/model/DeleteQuickConnectRequest.h>
#include <aws/connect/model/DeleteSecurityProfileRequest.h>
#include <aws/connect/model/DeleteTaskTemplateRequest.h>
#include <aws/connect/model/DeleteUseCaseRequest.h>
#include <aws/connect/model/DeleteUserRequest.h>
#include <aws/connect/model/DeleteUserHierarchyGroupRequest.h>
#include <aws/connect/model/DeleteVocabularyRequest.h>
#include <aws/connect/model/DescribeAgentStatusRequest.h>
#include <aws/connect/model/DescribeContactRequest.h>
#include <aws/connect/model/DescribeContactFlowRequest.h>
#include <aws/connect/model/DescribeContactFlowModuleRequest.h>
#include <aws/connect/model/DescribeHoursOfOperationRequest.h>
#include <aws/connect/model/DescribeInstanceRequest.h>
#include <aws/connect/model/DescribeInstanceAttributeRequest.h>
#include <aws/connect/model/DescribeInstanceStorageConfigRequest.h>
#include <aws/connect/model/DescribePhoneNumberRequest.h>
#include <aws/connect/model/DescribeQueueRequest.h>
#include <aws/connect/model/DescribeQuickConnectRequest.h>
#include <aws/connect/model/DescribeRoutingProfileRequest.h>
#include <aws/connect/model/DescribeSecurityProfileRequest.h>
#include <aws/connect/model/DescribeUserRequest.h>
#include <aws/connect/model/DescribeUserHierarchyGroupRequest.h>
#include <aws/connect/model/DescribeUserHierarchyStructureRequest.h>
#include <aws/connect/model/DescribeVocabularyRequest.h>
#include <aws/connect/model/DisassociateApprovedOriginRequest.h>
#include <aws/connect/model/DisassociateBotRequest.h>
#include <aws/connect/model/DisassociateInstanceStorageConfigRequest.h>
#include <aws/connect/model/DisassociateLambdaFunctionRequest.h>
#include <aws/connect/model/DisassociateLexBotRequest.h>
#include <aws/connect/model/DisassociatePhoneNumberContactFlowRequest.h>
#include <aws/connect/model/DisassociateQueueQuickConnectsRequest.h>
#include <aws/connect/model/DisassociateRoutingProfileQueuesRequest.h>
#include <aws/connect/model/DisassociateSecurityKeyRequest.h>
#include <aws/connect/model/GetContactAttributesRequest.h>
#include <aws/connect/model/GetCurrentMetricDataRequest.h>
#include <aws/connect/model/GetCurrentUserDataRequest.h>
#include <aws/connect/model/GetFederationTokenRequest.h>
#include <aws/connect/model/GetMetricDataRequest.h>
#include <aws/connect/model/GetTaskTemplateRequest.h>
#include <aws/connect/model/ListAgentStatusesRequest.h>
#include <aws/connect/model/ListApprovedOriginsRequest.h>
#include <aws/connect/model/ListBotsRequest.h>
#include <aws/connect/model/ListContactFlowModulesRequest.h>
#include <aws/connect/model/ListContactFlowsRequest.h>
#include <aws/connect/model/ListContactReferencesRequest.h>
#include <aws/connect/model/ListDefaultVocabulariesRequest.h>
#include <aws/connect/model/ListHoursOfOperationsRequest.h>
#include <aws/connect/model/ListInstanceAttributesRequest.h>
#include <aws/connect/model/ListInstanceStorageConfigsRequest.h>
#include <aws/connect/model/ListInstancesRequest.h>
#include <aws/connect/model/ListIntegrationAssociationsRequest.h>
#include <aws/connect/model/ListLambdaFunctionsRequest.h>
#include <aws/connect/model/ListLexBotsRequest.h>
#include <aws/connect/model/ListPhoneNumbersRequest.h>
#include <aws/connect/model/ListPhoneNumbersV2Request.h>
#include <aws/connect/model/ListPromptsRequest.h>
#include <aws/connect/model/ListQueueQuickConnectsRequest.h>
#include <aws/connect/model/ListQueuesRequest.h>
#include <aws/connect/model/ListQuickConnectsRequest.h>
#include <aws/connect/model/ListRoutingProfileQueuesRequest.h>
#include <aws/connect/model/ListRoutingProfilesRequest.h>
#include <aws/connect/model/ListSecurityKeysRequest.h>
#include <aws/connect/model/ListSecurityProfilePermissionsRequest.h>
#include <aws/connect/model/ListSecurityProfilesRequest.h>
#include <aws/connect/model/ListTagsForResourceRequest.h>
#include <aws/connect/model/ListTaskTemplatesRequest.h>
#include <aws/connect/model/ListUseCasesRequest.h>
#include <aws/connect/model/ListUserHierarchyGroupsRequest.h>
#include <aws/connect/model/ListUsersRequest.h>
#include <aws/connect/model/PutUserStatusRequest.h>
#include <aws/connect/model/ReleasePhoneNumberRequest.h>
#include <aws/connect/model/ResumeContactRecordingRequest.h>
#include <aws/connect/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/connect/model/SearchSecurityProfilesRequest.h>
#include <aws/connect/model/SearchUsersRequest.h>
#include <aws/connect/model/SearchVocabulariesRequest.h>
#include <aws/connect/model/StartChatContactRequest.h>
#include <aws/connect/model/StartContactRecordingRequest.h>
#include <aws/connect/model/StartContactStreamingRequest.h>
#include <aws/connect/model/StartOutboundVoiceContactRequest.h>
#include <aws/connect/model/StartTaskContactRequest.h>
#include <aws/connect/model/StopContactRequest.h>
#include <aws/connect/model/StopContactRecordingRequest.h>
#include <aws/connect/model/StopContactStreamingRequest.h>
#include <aws/connect/model/SuspendContactRecordingRequest.h>
#include <aws/connect/model/TagResourceRequest.h>
#include <aws/connect/model/TransferContactRequest.h>
#include <aws/connect/model/UntagResourceRequest.h>
#include <aws/connect/model/UpdateAgentStatusRequest.h>
#include <aws/connect/model/UpdateContactRequest.h>
#include <aws/connect/model/UpdateContactAttributesRequest.h>
#include <aws/connect/model/UpdateContactFlowContentRequest.h>
#include <aws/connect/model/UpdateContactFlowMetadataRequest.h>
#include <aws/connect/model/UpdateContactFlowModuleContentRequest.h>
#include <aws/connect/model/UpdateContactFlowModuleMetadataRequest.h>
#include <aws/connect/model/UpdateContactFlowNameRequest.h>
#include <aws/connect/model/UpdateContactScheduleRequest.h>
#include <aws/connect/model/UpdateHoursOfOperationRequest.h>
#include <aws/connect/model/UpdateInstanceAttributeRequest.h>
#include <aws/connect/model/UpdateInstanceStorageConfigRequest.h>
#include <aws/connect/model/UpdatePhoneNumberRequest.h>
#include <aws/connect/model/UpdateQueueHoursOfOperationRequest.h>
#include <aws/connect/model/UpdateQueueMaxContactsRequest.h>
#include <aws/connect/model/UpdateQueueNameRequest.h>
#include <aws/connect/model/UpdateQueueOutboundCallerConfigRequest.h>
#include <aws/connect/model/UpdateQueueStatusRequest.h>
#include <aws/connect/model/UpdateQuickConnectConfigRequest.h>
#include <aws/connect/model/UpdateQuickConnectNameRequest.h>
#include <aws/connect/model/UpdateRoutingProfileConcurrencyRequest.h>
#include <aws/connect/model/UpdateRoutingProfileDefaultOutboundQueueRequest.h>
#include <aws/connect/model/UpdateRoutingProfileNameRequest.h>
#include <aws/connect/model/UpdateRoutingProfileQueuesRequest.h>
#include <aws/connect/model/UpdateSecurityProfileRequest.h>
#include <aws/connect/model/UpdateTaskTemplateRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectClient::ConnectClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectClient::ConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectClient::~ConnectClient()
{
}

void ConnectClient::init(const Client::ClientConfiguration& config)
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/approved-origin");
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

AssociateBotOutcome ConnectClient::AssociateBot(const AssociateBotRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateBot", "Required field: InstanceId, is not set");
    return AssociateBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/bot");
  return AssociateBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateBotOutcomeCallable ConnectClient::AssociateBotCallable(const AssociateBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateBotAsync(const AssociateBotRequest& request, const AssociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateBotAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateBotAsyncHelper(const AssociateBotRequest& request, const AssociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateBot(request), context);
}

AssociateDefaultVocabularyOutcome ConnectClient::AssociateDefaultVocabulary(const AssociateDefaultVocabularyRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateDefaultVocabulary", "Required field: InstanceId, is not set");
    return AssociateDefaultVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.LanguageCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateDefaultVocabulary", "Required field: LanguageCode, is not set");
    return AssociateDefaultVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LanguageCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/default-vocabulary/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(VocabularyLanguageCodeMapper::GetNameForVocabularyLanguageCode(request.GetLanguageCode()));
  return AssociateDefaultVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateDefaultVocabularyOutcomeCallable ConnectClient::AssociateDefaultVocabularyCallable(const AssociateDefaultVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDefaultVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDefaultVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateDefaultVocabularyAsync(const AssociateDefaultVocabularyRequest& request, const AssociateDefaultVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDefaultVocabularyAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateDefaultVocabularyAsyncHelper(const AssociateDefaultVocabularyRequest& request, const AssociateDefaultVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDefaultVocabulary(request), context);
}

AssociateInstanceStorageConfigOutcome ConnectClient::AssociateInstanceStorageConfig(const AssociateInstanceStorageConfigRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateInstanceStorageConfig", "Required field: InstanceId, is not set");
    return AssociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/storage-config");
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/lambda-function");
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/lex-bot");
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

AssociatePhoneNumberContactFlowOutcome ConnectClient::AssociatePhoneNumberContactFlow(const AssociatePhoneNumberContactFlowRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberContactFlow", "Required field: PhoneNumberId, is not set");
    return AssociatePhoneNumberContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/phone-number/");
  uri.AddPathSegment(request.GetPhoneNumberId());
  uri.AddPathSegments("/contact-flow");
  return AssociatePhoneNumberContactFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociatePhoneNumberContactFlowOutcomeCallable ConnectClient::AssociatePhoneNumberContactFlowCallable(const AssociatePhoneNumberContactFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePhoneNumberContactFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePhoneNumberContactFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociatePhoneNumberContactFlowAsync(const AssociatePhoneNumberContactFlowRequest& request, const AssociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociatePhoneNumberContactFlowAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociatePhoneNumberContactFlowAsyncHelper(const AssociatePhoneNumberContactFlowRequest& request, const AssociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociatePhoneNumberContactFlow(request), context);
}

AssociateQueueQuickConnectsOutcome ConnectClient::AssociateQueueQuickConnects(const AssociateQueueQuickConnectsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateQueueQuickConnects", "Required field: InstanceId, is not set");
    return AssociateQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateQueueQuickConnects", "Required field: QueueId, is not set");
    return AssociateQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  uri.AddPathSegments("/associate-quick-connects");
  return AssociateQueueQuickConnectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateQueueQuickConnectsOutcomeCallable ConnectClient::AssociateQueueQuickConnectsCallable(const AssociateQueueQuickConnectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateQueueQuickConnectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateQueueQuickConnects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::AssociateQueueQuickConnectsAsync(const AssociateQueueQuickConnectsRequest& request, const AssociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateQueueQuickConnectsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::AssociateQueueQuickConnectsAsyncHelper(const AssociateQueueQuickConnectsRequest& request, const AssociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateQueueQuickConnects(request), context);
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
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetRoutingProfileId());
  uri.AddPathSegments("/associate-queues");
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/security-key");
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

ClaimPhoneNumberOutcome ConnectClient::ClaimPhoneNumber(const ClaimPhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/phone-number/claim");
  return ClaimPhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ClaimPhoneNumberOutcomeCallable ConnectClient::ClaimPhoneNumberCallable(const ClaimPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClaimPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClaimPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ClaimPhoneNumberAsync(const ClaimPhoneNumberRequest& request, const ClaimPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ClaimPhoneNumberAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ClaimPhoneNumberAsyncHelper(const ClaimPhoneNumberRequest& request, const ClaimPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ClaimPhoneNumber(request), context);
}

CreateAgentStatusOutcome ConnectClient::CreateAgentStatus(const CreateAgentStatusRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAgentStatus", "Required field: InstanceId, is not set");
    return CreateAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/agent-status/");
  uri.AddPathSegment(request.GetInstanceId());
  return CreateAgentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateAgentStatusOutcomeCallable ConnectClient::CreateAgentStatusCallable(const CreateAgentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAgentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAgentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateAgentStatusAsync(const CreateAgentStatusRequest& request, const CreateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAgentStatusAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateAgentStatusAsyncHelper(const CreateAgentStatusRequest& request, const CreateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAgentStatus(request), context);
}

CreateContactFlowOutcome ConnectClient::CreateContactFlow(const CreateContactFlowRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContactFlow", "Required field: InstanceId, is not set");
    return CreateContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flows/");
  uri.AddPathSegment(request.GetInstanceId());
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

CreateContactFlowModuleOutcome ConnectClient::CreateContactFlowModule(const CreateContactFlowModuleRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContactFlowModule", "Required field: InstanceId, is not set");
    return CreateContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flow-modules/");
  uri.AddPathSegment(request.GetInstanceId());
  return CreateContactFlowModuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateContactFlowModuleOutcomeCallable ConnectClient::CreateContactFlowModuleCallable(const CreateContactFlowModuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactFlowModuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContactFlowModule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateContactFlowModuleAsync(const CreateContactFlowModuleRequest& request, const CreateContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateContactFlowModuleAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateContactFlowModuleAsyncHelper(const CreateContactFlowModuleRequest& request, const CreateContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateContactFlowModule(request), context);
}

CreateHoursOfOperationOutcome ConnectClient::CreateHoursOfOperation(const CreateHoursOfOperationRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateHoursOfOperation", "Required field: InstanceId, is not set");
    return CreateHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/hours-of-operations/");
  uri.AddPathSegment(request.GetInstanceId());
  return CreateHoursOfOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateHoursOfOperationOutcomeCallable ConnectClient::CreateHoursOfOperationCallable(const CreateHoursOfOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHoursOfOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHoursOfOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateHoursOfOperationAsync(const CreateHoursOfOperationRequest& request, const CreateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHoursOfOperationAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateHoursOfOperationAsyncHelper(const CreateHoursOfOperationRequest& request, const CreateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHoursOfOperation(request), context);
}

CreateInstanceOutcome ConnectClient::CreateInstance(const CreateInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance");
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

CreateIntegrationAssociationOutcome ConnectClient::CreateIntegrationAssociation(const CreateIntegrationAssociationRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntegrationAssociation", "Required field: InstanceId, is not set");
    return CreateIntegrationAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/integration-associations");
  return CreateIntegrationAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateIntegrationAssociationOutcomeCallable ConnectClient::CreateIntegrationAssociationCallable(const CreateIntegrationAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIntegrationAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIntegrationAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateIntegrationAssociationAsync(const CreateIntegrationAssociationRequest& request, const CreateIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIntegrationAssociationAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateIntegrationAssociationAsyncHelper(const CreateIntegrationAssociationRequest& request, const CreateIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIntegrationAssociation(request), context);
}

CreateQueueOutcome ConnectClient::CreateQueue(const CreateQueueRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQueue", "Required field: InstanceId, is not set");
    return CreateQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  return CreateQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateQueueOutcomeCallable ConnectClient::CreateQueueCallable(const CreateQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateQueueAsync(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateQueueAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateQueueAsyncHelper(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateQueue(request), context);
}

CreateQuickConnectOutcome ConnectClient::CreateQuickConnect(const CreateQuickConnectRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQuickConnect", "Required field: InstanceId, is not set");
    return CreateQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quick-connects/");
  uri.AddPathSegment(request.GetInstanceId());
  return CreateQuickConnectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateQuickConnectOutcomeCallable ConnectClient::CreateQuickConnectCallable(const CreateQuickConnectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQuickConnectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQuickConnect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateQuickConnectAsync(const CreateQuickConnectRequest& request, const CreateQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateQuickConnectAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateQuickConnectAsyncHelper(const CreateQuickConnectRequest& request, const CreateQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateQuickConnect(request), context);
}

CreateRoutingProfileOutcome ConnectClient::CreateRoutingProfile(const CreateRoutingProfileRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoutingProfile", "Required field: InstanceId, is not set");
    return CreateRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
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

CreateSecurityProfileOutcome ConnectClient::CreateSecurityProfile(const CreateSecurityProfileRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSecurityProfile", "Required field: InstanceId, is not set");
    return CreateSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  return CreateSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityProfileOutcomeCallable ConnectClient::CreateSecurityProfileCallable(const CreateSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateSecurityProfileAsync(const CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSecurityProfileAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateSecurityProfileAsyncHelper(const CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSecurityProfile(request), context);
}

CreateTaskTemplateOutcome ConnectClient::CreateTaskTemplate(const CreateTaskTemplateRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTaskTemplate", "Required field: InstanceId, is not set");
    return CreateTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/task/template");
  return CreateTaskTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateTaskTemplateOutcomeCallable ConnectClient::CreateTaskTemplateCallable(const CreateTaskTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTaskTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTaskTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateTaskTemplateAsync(const CreateTaskTemplateRequest& request, const CreateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTaskTemplateAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateTaskTemplateAsyncHelper(const CreateTaskTemplateRequest& request, const CreateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTaskTemplate(request), context);
}

CreateUseCaseOutcome ConnectClient::CreateUseCase(const CreateUseCaseRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUseCase", "Required field: InstanceId, is not set");
    return CreateUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.IntegrationAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUseCase", "Required field: IntegrationAssociationId, is not set");
    return CreateUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationAssociationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/integration-associations/");
  uri.AddPathSegment(request.GetIntegrationAssociationId());
  uri.AddPathSegments("/use-cases");
  return CreateUseCaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateUseCaseOutcomeCallable ConnectClient::CreateUseCaseCallable(const CreateUseCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUseCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUseCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateUseCaseAsync(const CreateUseCaseRequest& request, const CreateUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUseCaseAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateUseCaseAsyncHelper(const CreateUseCaseRequest& request, const CreateUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUseCase(request), context);
}

CreateUserOutcome ConnectClient::CreateUser(const CreateUserRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: InstanceId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
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
  uri.AddPathSegments("/user-hierarchy-groups/");
  uri.AddPathSegment(request.GetInstanceId());
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

CreateVocabularyOutcome ConnectClient::CreateVocabulary(const CreateVocabularyRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVocabulary", "Required field: InstanceId, is not set");
    return CreateVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vocabulary/");
  uri.AddPathSegment(request.GetInstanceId());
  return CreateVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVocabularyOutcomeCallable ConnectClient::CreateVocabularyCallable(const CreateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::CreateVocabularyAsync(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVocabularyAsyncHelper( request, handler, context ); } );
}

void ConnectClient::CreateVocabularyAsyncHelper(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVocabulary(request), context);
}

DeleteContactFlowOutcome ConnectClient::DeleteContactFlow(const DeleteContactFlowRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContactFlow", "Required field: InstanceId, is not set");
    return DeleteContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContactFlow", "Required field: ContactFlowId, is not set");
    return DeleteContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flows/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowId());
  return DeleteContactFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactFlowOutcomeCallable ConnectClient::DeleteContactFlowCallable(const DeleteContactFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContactFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteContactFlowAsync(const DeleteContactFlowRequest& request, const DeleteContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteContactFlowAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteContactFlowAsyncHelper(const DeleteContactFlowRequest& request, const DeleteContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteContactFlow(request), context);
}

DeleteContactFlowModuleOutcome ConnectClient::DeleteContactFlowModule(const DeleteContactFlowModuleRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModule", "Required field: InstanceId, is not set");
    return DeleteContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModule", "Required field: ContactFlowModuleId, is not set");
    return DeleteContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flow-modules/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowModuleId());
  return DeleteContactFlowModuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactFlowModuleOutcomeCallable ConnectClient::DeleteContactFlowModuleCallable(const DeleteContactFlowModuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactFlowModuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContactFlowModule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteContactFlowModuleAsync(const DeleteContactFlowModuleRequest& request, const DeleteContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteContactFlowModuleAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteContactFlowModuleAsyncHelper(const DeleteContactFlowModuleRequest& request, const DeleteContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteContactFlowModule(request), context);
}

DeleteHoursOfOperationOutcome ConnectClient::DeleteHoursOfOperation(const DeleteHoursOfOperationRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHoursOfOperation", "Required field: InstanceId, is not set");
    return DeleteHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHoursOfOperation", "Required field: HoursOfOperationId, is not set");
    return DeleteHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HoursOfOperationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/hours-of-operations/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetHoursOfOperationId());
  return DeleteHoursOfOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteHoursOfOperationOutcomeCallable ConnectClient::DeleteHoursOfOperationCallable(const DeleteHoursOfOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHoursOfOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHoursOfOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteHoursOfOperationAsync(const DeleteHoursOfOperationRequest& request, const DeleteHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHoursOfOperationAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteHoursOfOperationAsyncHelper(const DeleteHoursOfOperationRequest& request, const DeleteHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHoursOfOperation(request), context);
}

DeleteInstanceOutcome ConnectClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInstance", "Required field: InstanceId, is not set");
    return DeleteInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
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

DeleteIntegrationAssociationOutcome ConnectClient::DeleteIntegrationAssociation(const DeleteIntegrationAssociationRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationAssociation", "Required field: InstanceId, is not set");
    return DeleteIntegrationAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.IntegrationAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationAssociation", "Required field: IntegrationAssociationId, is not set");
    return DeleteIntegrationAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationAssociationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/integration-associations/");
  uri.AddPathSegment(request.GetIntegrationAssociationId());
  return DeleteIntegrationAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationAssociationOutcomeCallable ConnectClient::DeleteIntegrationAssociationCallable(const DeleteIntegrationAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegrationAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteIntegrationAssociationAsync(const DeleteIntegrationAssociationRequest& request, const DeleteIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntegrationAssociationAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteIntegrationAssociationAsyncHelper(const DeleteIntegrationAssociationRequest& request, const DeleteIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntegrationAssociation(request), context);
}

DeleteQuickConnectOutcome ConnectClient::DeleteQuickConnect(const DeleteQuickConnectRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQuickConnect", "Required field: InstanceId, is not set");
    return DeleteQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QuickConnectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQuickConnect", "Required field: QuickConnectId, is not set");
    return DeleteQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickConnectId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quick-connects/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQuickConnectId());
  return DeleteQuickConnectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteQuickConnectOutcomeCallable ConnectClient::DeleteQuickConnectCallable(const DeleteQuickConnectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQuickConnectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQuickConnect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteQuickConnectAsync(const DeleteQuickConnectRequest& request, const DeleteQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteQuickConnectAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteQuickConnectAsyncHelper(const DeleteQuickConnectRequest& request, const DeleteQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteQuickConnect(request), context);
}

DeleteSecurityProfileOutcome ConnectClient::DeleteSecurityProfile(const DeleteSecurityProfileRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSecurityProfile", "Required field: InstanceId, is not set");
    return DeleteSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.SecurityProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSecurityProfile", "Required field: SecurityProfileId, is not set");
    return DeleteSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetSecurityProfileId());
  return DeleteSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityProfileOutcomeCallable ConnectClient::DeleteSecurityProfileCallable(const DeleteSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteSecurityProfileAsync(const DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSecurityProfileAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteSecurityProfileAsyncHelper(const DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSecurityProfile(request), context);
}

DeleteTaskTemplateOutcome ConnectClient::DeleteTaskTemplate(const DeleteTaskTemplateRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTaskTemplate", "Required field: InstanceId, is not set");
    return DeleteTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.TaskTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTaskTemplate", "Required field: TaskTemplateId, is not set");
    return DeleteTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskTemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/task/template/");
  uri.AddPathSegment(request.GetTaskTemplateId());
  return DeleteTaskTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTaskTemplateOutcomeCallable ConnectClient::DeleteTaskTemplateCallable(const DeleteTaskTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTaskTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTaskTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteTaskTemplateAsync(const DeleteTaskTemplateRequest& request, const DeleteTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTaskTemplateAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteTaskTemplateAsyncHelper(const DeleteTaskTemplateRequest& request, const DeleteTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTaskTemplate(request), context);
}

DeleteUseCaseOutcome ConnectClient::DeleteUseCase(const DeleteUseCaseRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUseCase", "Required field: InstanceId, is not set");
    return DeleteUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.IntegrationAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUseCase", "Required field: IntegrationAssociationId, is not set");
    return DeleteUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationAssociationId]", false));
  }
  if (!request.UseCaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUseCase", "Required field: UseCaseId, is not set");
    return DeleteUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UseCaseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/integration-associations/");
  uri.AddPathSegment(request.GetIntegrationAssociationId());
  uri.AddPathSegments("/use-cases/");
  uri.AddPathSegment(request.GetUseCaseId());
  return DeleteUseCaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUseCaseOutcomeCallable ConnectClient::DeleteUseCaseCallable(const DeleteUseCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUseCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUseCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteUseCaseAsync(const DeleteUseCaseRequest& request, const DeleteUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUseCaseAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteUseCaseAsyncHelper(const DeleteUseCaseRequest& request, const DeleteUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUseCase(request), context);
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
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetUserId());
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
  uri.AddPathSegments("/user-hierarchy-groups/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetHierarchyGroupId());
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

DeleteVocabularyOutcome ConnectClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVocabulary", "Required field: InstanceId, is not set");
    return DeleteVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.VocabularyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVocabulary", "Required field: VocabularyId, is not set");
    return DeleteVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VocabularyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vocabulary-remove/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetVocabularyId());
  return DeleteVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVocabularyOutcomeCallable ConnectClient::DeleteVocabularyCallable(const DeleteVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DeleteVocabularyAsync(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVocabularyAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DeleteVocabularyAsyncHelper(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVocabulary(request), context);
}

DescribeAgentStatusOutcome ConnectClient::DescribeAgentStatus(const DescribeAgentStatusRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAgentStatus", "Required field: InstanceId, is not set");
    return DescribeAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AgentStatusIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAgentStatus", "Required field: AgentStatusId, is not set");
    return DescribeAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentStatusId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/agent-status/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetAgentStatusId());
  return DescribeAgentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAgentStatusOutcomeCallable ConnectClient::DescribeAgentStatusCallable(const DescribeAgentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAgentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAgentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeAgentStatusAsync(const DescribeAgentStatusRequest& request, const DescribeAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAgentStatusAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeAgentStatusAsyncHelper(const DescribeAgentStatusRequest& request, const DescribeAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAgentStatus(request), context);
}

DescribeContactOutcome ConnectClient::DescribeContact(const DescribeContactRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContact", "Required field: InstanceId, is not set");
    return DescribeContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContact", "Required field: ContactId, is not set");
    return DescribeContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contacts/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactId());
  return DescribeContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeContactOutcomeCallable ConnectClient::DescribeContactCallable(const DescribeContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeContactAsync(const DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeContactAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeContactAsyncHelper(const DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeContact(request), context);
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
  uri.AddPathSegments("/contact-flows/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowId());
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

DescribeContactFlowModuleOutcome ConnectClient::DescribeContactFlowModule(const DescribeContactFlowModuleRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContactFlowModule", "Required field: InstanceId, is not set");
    return DescribeContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContactFlowModule", "Required field: ContactFlowModuleId, is not set");
    return DescribeContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flow-modules/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowModuleId());
  return DescribeContactFlowModuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeContactFlowModuleOutcomeCallable ConnectClient::DescribeContactFlowModuleCallable(const DescribeContactFlowModuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContactFlowModuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContactFlowModule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeContactFlowModuleAsync(const DescribeContactFlowModuleRequest& request, const DescribeContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeContactFlowModuleAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeContactFlowModuleAsyncHelper(const DescribeContactFlowModuleRequest& request, const DescribeContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeContactFlowModule(request), context);
}

DescribeHoursOfOperationOutcome ConnectClient::DescribeHoursOfOperation(const DescribeHoursOfOperationRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeHoursOfOperation", "Required field: InstanceId, is not set");
    return DescribeHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeHoursOfOperation", "Required field: HoursOfOperationId, is not set");
    return DescribeHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HoursOfOperationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/hours-of-operations/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetHoursOfOperationId());
  return DescribeHoursOfOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeHoursOfOperationOutcomeCallable ConnectClient::DescribeHoursOfOperationCallable(const DescribeHoursOfOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHoursOfOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHoursOfOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeHoursOfOperationAsync(const DescribeHoursOfOperationRequest& request, const DescribeHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHoursOfOperationAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeHoursOfOperationAsyncHelper(const DescribeHoursOfOperationRequest& request, const DescribeHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHoursOfOperation(request), context);
}

DescribeInstanceOutcome ConnectClient::DescribeInstance(const DescribeInstanceRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstance", "Required field: InstanceId, is not set");
    return DescribeInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/attribute/");
  uri.AddPathSegment(InstanceAttributeTypeMapper::GetNameForInstanceAttributeType(request.GetAttributeType()));
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/storage-config/");
  uri.AddPathSegment(request.GetAssociationId());
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

DescribePhoneNumberOutcome ConnectClient::DescribePhoneNumber(const DescribePhoneNumberRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePhoneNumber", "Required field: PhoneNumberId, is not set");
    return DescribePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/phone-number/");
  uri.AddPathSegment(request.GetPhoneNumberId());
  return DescribePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePhoneNumberOutcomeCallable ConnectClient::DescribePhoneNumberCallable(const DescribePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribePhoneNumberAsync(const DescribePhoneNumberRequest& request, const DescribePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePhoneNumberAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribePhoneNumberAsyncHelper(const DescribePhoneNumberRequest& request, const DescribePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePhoneNumber(request), context);
}

DescribeQueueOutcome ConnectClient::DescribeQueue(const DescribeQueueRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeQueue", "Required field: InstanceId, is not set");
    return DescribeQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeQueue", "Required field: QueueId, is not set");
    return DescribeQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  return DescribeQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeQueueOutcomeCallable ConnectClient::DescribeQueueCallable(const DescribeQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeQueueAsync(const DescribeQueueRequest& request, const DescribeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeQueueAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeQueueAsyncHelper(const DescribeQueueRequest& request, const DescribeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeQueue(request), context);
}

DescribeQuickConnectOutcome ConnectClient::DescribeQuickConnect(const DescribeQuickConnectRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeQuickConnect", "Required field: InstanceId, is not set");
    return DescribeQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QuickConnectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeQuickConnect", "Required field: QuickConnectId, is not set");
    return DescribeQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickConnectId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quick-connects/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQuickConnectId());
  return DescribeQuickConnectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeQuickConnectOutcomeCallable ConnectClient::DescribeQuickConnectCallable(const DescribeQuickConnectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQuickConnectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQuickConnect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeQuickConnectAsync(const DescribeQuickConnectRequest& request, const DescribeQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeQuickConnectAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeQuickConnectAsyncHelper(const DescribeQuickConnectRequest& request, const DescribeQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeQuickConnect(request), context);
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
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetRoutingProfileId());
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

DescribeSecurityProfileOutcome ConnectClient::DescribeSecurityProfile(const DescribeSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSecurityProfile", "Required field: SecurityProfileId, is not set");
    return DescribeSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSecurityProfile", "Required field: InstanceId, is not set");
    return DescribeSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetSecurityProfileId());
  return DescribeSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecurityProfileOutcomeCallable ConnectClient::DescribeSecurityProfileCallable(const DescribeSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeSecurityProfileAsync(const DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSecurityProfileAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeSecurityProfileAsyncHelper(const DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecurityProfile(request), context);
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
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetUserId());
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
  uri.AddPathSegments("/user-hierarchy-groups/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetHierarchyGroupId());
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
  uri.AddPathSegments("/user-hierarchy-structure/");
  uri.AddPathSegment(request.GetInstanceId());
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

DescribeVocabularyOutcome ConnectClient::DescribeVocabulary(const DescribeVocabularyRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVocabulary", "Required field: InstanceId, is not set");
    return DescribeVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.VocabularyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVocabulary", "Required field: VocabularyId, is not set");
    return DescribeVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VocabularyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vocabulary/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetVocabularyId());
  return DescribeVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVocabularyOutcomeCallable ConnectClient::DescribeVocabularyCallable(const DescribeVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DescribeVocabularyAsync(const DescribeVocabularyRequest& request, const DescribeVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVocabularyAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DescribeVocabularyAsyncHelper(const DescribeVocabularyRequest& request, const DescribeVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVocabulary(request), context);
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/approved-origin");
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

DisassociateBotOutcome ConnectClient::DisassociateBot(const DisassociateBotRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateBot", "Required field: InstanceId, is not set");
    return DisassociateBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/bot");
  return DisassociateBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateBotOutcomeCallable ConnectClient::DisassociateBotCallable(const DisassociateBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociateBotAsync(const DisassociateBotRequest& request, const DisassociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateBotAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociateBotAsyncHelper(const DisassociateBotRequest& request, const DisassociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateBot(request), context);
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/storage-config/");
  uri.AddPathSegment(request.GetAssociationId());
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/lambda-function");
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/lex-bot");
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

DisassociatePhoneNumberContactFlowOutcome ConnectClient::DisassociatePhoneNumberContactFlow(const DisassociatePhoneNumberContactFlowRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberContactFlow", "Required field: PhoneNumberId, is not set");
    return DisassociatePhoneNumberContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberContactFlow", "Required field: InstanceId, is not set");
    return DisassociatePhoneNumberContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/phone-number/");
  uri.AddPathSegment(request.GetPhoneNumberId());
  uri.AddPathSegments("/contact-flow");
  return DisassociatePhoneNumberContactFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePhoneNumberContactFlowOutcomeCallable ConnectClient::DisassociatePhoneNumberContactFlowCallable(const DisassociatePhoneNumberContactFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePhoneNumberContactFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePhoneNumberContactFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociatePhoneNumberContactFlowAsync(const DisassociatePhoneNumberContactFlowRequest& request, const DisassociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociatePhoneNumberContactFlowAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociatePhoneNumberContactFlowAsyncHelper(const DisassociatePhoneNumberContactFlowRequest& request, const DisassociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociatePhoneNumberContactFlow(request), context);
}

DisassociateQueueQuickConnectsOutcome ConnectClient::DisassociateQueueQuickConnects(const DisassociateQueueQuickConnectsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateQueueQuickConnects", "Required field: InstanceId, is not set");
    return DisassociateQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateQueueQuickConnects", "Required field: QueueId, is not set");
    return DisassociateQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  uri.AddPathSegments("/disassociate-quick-connects");
  return DisassociateQueueQuickConnectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateQueueQuickConnectsOutcomeCallable ConnectClient::DisassociateQueueQuickConnectsCallable(const DisassociateQueueQuickConnectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateQueueQuickConnectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateQueueQuickConnects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::DisassociateQueueQuickConnectsAsync(const DisassociateQueueQuickConnectsRequest& request, const DisassociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateQueueQuickConnectsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::DisassociateQueueQuickConnectsAsyncHelper(const DisassociateQueueQuickConnectsRequest& request, const DisassociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateQueueQuickConnects(request), context);
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
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetRoutingProfileId());
  uri.AddPathSegments("/disassociate-queues");
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/security-key/");
  uri.AddPathSegment(request.GetAssociationId());
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
  uri.AddPathSegments("/contact/attributes/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetInitialContactId());
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
  uri.AddPathSegments("/metrics/current/");
  uri.AddPathSegment(request.GetInstanceId());
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

GetCurrentUserDataOutcome ConnectClient::GetCurrentUserData(const GetCurrentUserDataRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCurrentUserData", "Required field: InstanceId, is not set");
    return GetCurrentUserDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/metrics/userdata/");
  uri.AddPathSegment(request.GetInstanceId());
  return GetCurrentUserDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCurrentUserDataOutcomeCallable ConnectClient::GetCurrentUserDataCallable(const GetCurrentUserDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCurrentUserDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCurrentUserData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::GetCurrentUserDataAsync(const GetCurrentUserDataRequest& request, const GetCurrentUserDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCurrentUserDataAsyncHelper( request, handler, context ); } );
}

void ConnectClient::GetCurrentUserDataAsyncHelper(const GetCurrentUserDataRequest& request, const GetCurrentUserDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCurrentUserData(request), context);
}

GetFederationTokenOutcome ConnectClient::GetFederationToken(const GetFederationTokenRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFederationToken", "Required field: InstanceId, is not set");
    return GetFederationTokenOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/federate/");
  uri.AddPathSegment(request.GetInstanceId());
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
  uri.AddPathSegments("/metrics/historical/");
  uri.AddPathSegment(request.GetInstanceId());
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

GetTaskTemplateOutcome ConnectClient::GetTaskTemplate(const GetTaskTemplateRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTaskTemplate", "Required field: InstanceId, is not set");
    return GetTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.TaskTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTaskTemplate", "Required field: TaskTemplateId, is not set");
    return GetTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskTemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/task/template/");
  uri.AddPathSegment(request.GetTaskTemplateId());
  return GetTaskTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTaskTemplateOutcomeCallable ConnectClient::GetTaskTemplateCallable(const GetTaskTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTaskTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTaskTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::GetTaskTemplateAsync(const GetTaskTemplateRequest& request, const GetTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTaskTemplateAsyncHelper( request, handler, context ); } );
}

void ConnectClient::GetTaskTemplateAsyncHelper(const GetTaskTemplateRequest& request, const GetTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTaskTemplate(request), context);
}

ListAgentStatusesOutcome ConnectClient::ListAgentStatuses(const ListAgentStatusesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAgentStatuses", "Required field: InstanceId, is not set");
    return ListAgentStatusesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/agent-status/");
  uri.AddPathSegment(request.GetInstanceId());
  return ListAgentStatusesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAgentStatusesOutcomeCallable ConnectClient::ListAgentStatusesCallable(const ListAgentStatusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAgentStatusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAgentStatuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListAgentStatusesAsync(const ListAgentStatusesRequest& request, const ListAgentStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAgentStatusesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListAgentStatusesAsyncHelper(const ListAgentStatusesRequest& request, const ListAgentStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAgentStatuses(request), context);
}

ListApprovedOriginsOutcome ConnectClient::ListApprovedOrigins(const ListApprovedOriginsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApprovedOrigins", "Required field: InstanceId, is not set");
    return ListApprovedOriginsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/approved-origins");
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

ListBotsOutcome ConnectClient::ListBots(const ListBotsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: InstanceId, is not set");
    return ListBotsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.LexVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: LexVersion, is not set");
    return ListBotsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LexVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/bots");
  return ListBotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBotsOutcomeCallable ConnectClient::ListBotsCallable(const ListBotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListBotsAsync(const ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBotsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListBotsAsyncHelper(const ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBots(request), context);
}

ListContactFlowModulesOutcome ConnectClient::ListContactFlowModules(const ListContactFlowModulesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactFlowModules", "Required field: InstanceId, is not set");
    return ListContactFlowModulesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flow-modules-summary/");
  uri.AddPathSegment(request.GetInstanceId());
  return ListContactFlowModulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactFlowModulesOutcomeCallable ConnectClient::ListContactFlowModulesCallable(const ListContactFlowModulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContactFlowModulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContactFlowModules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListContactFlowModulesAsync(const ListContactFlowModulesRequest& request, const ListContactFlowModulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListContactFlowModulesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListContactFlowModulesAsyncHelper(const ListContactFlowModulesRequest& request, const ListContactFlowModulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListContactFlowModules(request), context);
}

ListContactFlowsOutcome ConnectClient::ListContactFlows(const ListContactFlowsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactFlows", "Required field: InstanceId, is not set");
    return ListContactFlowsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flows-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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

ListContactReferencesOutcome ConnectClient::ListContactReferences(const ListContactReferencesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactReferences", "Required field: InstanceId, is not set");
    return ListContactReferencesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactReferences", "Required field: ContactId, is not set");
    return ListContactReferencesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  if (!request.ReferenceTypesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactReferences", "Required field: ReferenceTypes, is not set");
    return ListContactReferencesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReferenceTypes]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/references/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactId());
  return ListContactReferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactReferencesOutcomeCallable ConnectClient::ListContactReferencesCallable(const ListContactReferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContactReferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContactReferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListContactReferencesAsync(const ListContactReferencesRequest& request, const ListContactReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListContactReferencesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListContactReferencesAsyncHelper(const ListContactReferencesRequest& request, const ListContactReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListContactReferences(request), context);
}

ListDefaultVocabulariesOutcome ConnectClient::ListDefaultVocabularies(const ListDefaultVocabulariesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDefaultVocabularies", "Required field: InstanceId, is not set");
    return ListDefaultVocabulariesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/default-vocabulary-summary/");
  uri.AddPathSegment(request.GetInstanceId());
  return ListDefaultVocabulariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDefaultVocabulariesOutcomeCallable ConnectClient::ListDefaultVocabulariesCallable(const ListDefaultVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDefaultVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDefaultVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListDefaultVocabulariesAsync(const ListDefaultVocabulariesRequest& request, const ListDefaultVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDefaultVocabulariesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListDefaultVocabulariesAsyncHelper(const ListDefaultVocabulariesRequest& request, const ListDefaultVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDefaultVocabularies(request), context);
}

ListHoursOfOperationsOutcome ConnectClient::ListHoursOfOperations(const ListHoursOfOperationsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHoursOfOperations", "Required field: InstanceId, is not set");
    return ListHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/hours-of-operations-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/attributes");
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/storage-configs");
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
  uri.AddPathSegments("/instance");
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

ListIntegrationAssociationsOutcome ConnectClient::ListIntegrationAssociations(const ListIntegrationAssociationsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntegrationAssociations", "Required field: InstanceId, is not set");
    return ListIntegrationAssociationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/integration-associations");
  return ListIntegrationAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIntegrationAssociationsOutcomeCallable ConnectClient::ListIntegrationAssociationsCallable(const ListIntegrationAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIntegrationAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIntegrationAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListIntegrationAssociationsAsync(const ListIntegrationAssociationsRequest& request, const ListIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIntegrationAssociationsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListIntegrationAssociationsAsyncHelper(const ListIntegrationAssociationsRequest& request, const ListIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIntegrationAssociations(request), context);
}

ListLambdaFunctionsOutcome ConnectClient::ListLambdaFunctions(const ListLambdaFunctionsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLambdaFunctions", "Required field: InstanceId, is not set");
    return ListLambdaFunctionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/lambda-functions");
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/lex-bots");
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
  uri.AddPathSegments("/phone-numbers-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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

ListPhoneNumbersV2Outcome ConnectClient::ListPhoneNumbersV2(const ListPhoneNumbersV2Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/phone-number/list");
  return ListPhoneNumbersV2Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPhoneNumbersV2OutcomeCallable ConnectClient::ListPhoneNumbersV2Callable(const ListPhoneNumbersV2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPhoneNumbersV2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPhoneNumbersV2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListPhoneNumbersV2Async(const ListPhoneNumbersV2Request& request, const ListPhoneNumbersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPhoneNumbersV2AsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListPhoneNumbersV2AsyncHelper(const ListPhoneNumbersV2Request& request, const ListPhoneNumbersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPhoneNumbersV2(request), context);
}

ListPromptsOutcome ConnectClient::ListPrompts(const ListPromptsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrompts", "Required field: InstanceId, is not set");
    return ListPromptsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prompts-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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

ListQueueQuickConnectsOutcome ConnectClient::ListQueueQuickConnects(const ListQueueQuickConnectsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueueQuickConnects", "Required field: InstanceId, is not set");
    return ListQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueueQuickConnects", "Required field: QueueId, is not set");
    return ListQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  uri.AddPathSegments("/quick-connects");
  return ListQueueQuickConnectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQueueQuickConnectsOutcomeCallable ConnectClient::ListQueueQuickConnectsCallable(const ListQueueQuickConnectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueueQuickConnectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueueQuickConnects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListQueueQuickConnectsAsync(const ListQueueQuickConnectsRequest& request, const ListQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQueueQuickConnectsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListQueueQuickConnectsAsyncHelper(const ListQueueQuickConnectsRequest& request, const ListQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQueueQuickConnects(request), context);
}

ListQueuesOutcome ConnectClient::ListQueues(const ListQueuesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueues", "Required field: InstanceId, is not set");
    return ListQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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

ListQuickConnectsOutcome ConnectClient::ListQuickConnects(const ListQuickConnectsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQuickConnects", "Required field: InstanceId, is not set");
    return ListQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quick-connects/");
  uri.AddPathSegment(request.GetInstanceId());
  return ListQuickConnectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQuickConnectsOutcomeCallable ConnectClient::ListQuickConnectsCallable(const ListQuickConnectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQuickConnectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQuickConnects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListQuickConnectsAsync(const ListQuickConnectsRequest& request, const ListQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQuickConnectsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListQuickConnectsAsyncHelper(const ListQuickConnectsRequest& request, const ListQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQuickConnects(request), context);
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
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetRoutingProfileId());
  uri.AddPathSegments("/queues");
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
  uri.AddPathSegments("/routing-profiles-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/security-keys");
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

ListSecurityProfilePermissionsOutcome ConnectClient::ListSecurityProfilePermissions(const ListSecurityProfilePermissionsRequest& request) const
{
  if (!request.SecurityProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityProfilePermissions", "Required field: SecurityProfileId, is not set");
    return ListSecurityProfilePermissionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityProfilePermissions", "Required field: InstanceId, is not set");
    return ListSecurityProfilePermissionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles-permissions/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetSecurityProfileId());
  return ListSecurityProfilePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityProfilePermissionsOutcomeCallable ConnectClient::ListSecurityProfilePermissionsCallable(const ListSecurityProfilePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityProfilePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityProfilePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListSecurityProfilePermissionsAsync(const ListSecurityProfilePermissionsRequest& request, const ListSecurityProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSecurityProfilePermissionsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListSecurityProfilePermissionsAsyncHelper(const ListSecurityProfilePermissionsRequest& request, const ListSecurityProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSecurityProfilePermissions(request), context);
}

ListSecurityProfilesOutcome ConnectClient::ListSecurityProfiles(const ListSecurityProfilesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityProfiles", "Required field: InstanceId, is not set");
    return ListSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
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

ListTaskTemplatesOutcome ConnectClient::ListTaskTemplates(const ListTaskTemplatesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTaskTemplates", "Required field: InstanceId, is not set");
    return ListTaskTemplatesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/task/template");
  return ListTaskTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTaskTemplatesOutcomeCallable ConnectClient::ListTaskTemplatesCallable(const ListTaskTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTaskTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTaskTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListTaskTemplatesAsync(const ListTaskTemplatesRequest& request, const ListTaskTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTaskTemplatesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListTaskTemplatesAsyncHelper(const ListTaskTemplatesRequest& request, const ListTaskTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTaskTemplates(request), context);
}

ListUseCasesOutcome ConnectClient::ListUseCases(const ListUseCasesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUseCases", "Required field: InstanceId, is not set");
    return ListUseCasesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.IntegrationAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUseCases", "Required field: IntegrationAssociationId, is not set");
    return ListUseCasesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationAssociationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/integration-associations/");
  uri.AddPathSegment(request.GetIntegrationAssociationId());
  uri.AddPathSegments("/use-cases");
  return ListUseCasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUseCasesOutcomeCallable ConnectClient::ListUseCasesCallable(const ListUseCasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUseCasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUseCases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ListUseCasesAsync(const ListUseCasesRequest& request, const ListUseCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUseCasesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ListUseCasesAsyncHelper(const ListUseCasesRequest& request, const ListUseCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUseCases(request), context);
}

ListUserHierarchyGroupsOutcome ConnectClient::ListUserHierarchyGroups(const ListUserHierarchyGroupsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserHierarchyGroups", "Required field: InstanceId, is not set");
    return ListUserHierarchyGroupsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user-hierarchy-groups-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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
  uri.AddPathSegments("/users-summary/");
  uri.AddPathSegment(request.GetInstanceId());
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

PutUserStatusOutcome ConnectClient::PutUserStatus(const PutUserStatusRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutUserStatus", "Required field: UserId, is not set");
    return PutUserStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutUserStatus", "Required field: InstanceId, is not set");
    return PutUserStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/status");
  return PutUserStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutUserStatusOutcomeCallable ConnectClient::PutUserStatusCallable(const PutUserStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutUserStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutUserStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::PutUserStatusAsync(const PutUserStatusRequest& request, const PutUserStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutUserStatusAsyncHelper( request, handler, context ); } );
}

void ConnectClient::PutUserStatusAsyncHelper(const PutUserStatusRequest& request, const PutUserStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutUserStatus(request), context);
}

ReleasePhoneNumberOutcome ConnectClient::ReleasePhoneNumber(const ReleasePhoneNumberRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReleasePhoneNumber", "Required field: PhoneNumberId, is not set");
    return ReleasePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/phone-number/");
  uri.AddPathSegment(request.GetPhoneNumberId());
  return ReleasePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ReleasePhoneNumberOutcomeCallable ConnectClient::ReleasePhoneNumberCallable(const ReleasePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReleasePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReleasePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::ReleasePhoneNumberAsync(const ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReleasePhoneNumberAsyncHelper( request, handler, context ); } );
}

void ConnectClient::ReleasePhoneNumberAsyncHelper(const ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReleasePhoneNumber(request), context);
}

ResumeContactRecordingOutcome ConnectClient::ResumeContactRecording(const ResumeContactRecordingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/resume-recording");
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

SearchAvailablePhoneNumbersOutcome ConnectClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/phone-number/search-available");
  return SearchAvailablePhoneNumbersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchAvailablePhoneNumbersOutcomeCallable ConnectClient::SearchAvailablePhoneNumbersCallable(const SearchAvailablePhoneNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAvailablePhoneNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAvailablePhoneNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::SearchAvailablePhoneNumbersAsync(const SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchAvailablePhoneNumbersAsyncHelper( request, handler, context ); } );
}

void ConnectClient::SearchAvailablePhoneNumbersAsyncHelper(const SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchAvailablePhoneNumbers(request), context);
}

SearchSecurityProfilesOutcome ConnectClient::SearchSecurityProfiles(const SearchSecurityProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/search-security-profiles");
  return SearchSecurityProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchSecurityProfilesOutcomeCallable ConnectClient::SearchSecurityProfilesCallable(const SearchSecurityProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSecurityProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSecurityProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::SearchSecurityProfilesAsync(const SearchSecurityProfilesRequest& request, const SearchSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchSecurityProfilesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::SearchSecurityProfilesAsyncHelper(const SearchSecurityProfilesRequest& request, const SearchSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchSecurityProfiles(request), context);
}

SearchUsersOutcome ConnectClient::SearchUsers(const SearchUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/search-users");
  return SearchUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchUsersOutcomeCallable ConnectClient::SearchUsersCallable(const SearchUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::SearchUsersAsync(const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchUsersAsyncHelper( request, handler, context ); } );
}

void ConnectClient::SearchUsersAsyncHelper(const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchUsers(request), context);
}

SearchVocabulariesOutcome ConnectClient::SearchVocabularies(const SearchVocabulariesRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchVocabularies", "Required field: InstanceId, is not set");
    return SearchVocabulariesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vocabulary-summary/");
  uri.AddPathSegment(request.GetInstanceId());
  return SearchVocabulariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchVocabulariesOutcomeCallable ConnectClient::SearchVocabulariesCallable(const SearchVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::SearchVocabulariesAsync(const SearchVocabulariesRequest& request, const SearchVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchVocabulariesAsyncHelper( request, handler, context ); } );
}

void ConnectClient::SearchVocabulariesAsyncHelper(const SearchVocabulariesRequest& request, const SearchVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchVocabularies(request), context);
}

StartChatContactOutcome ConnectClient::StartChatContact(const StartChatContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/chat");
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
  uri.AddPathSegments("/contact/start-recording");
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

StartContactStreamingOutcome ConnectClient::StartContactStreaming(const StartContactStreamingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/start-streaming");
  return StartContactStreamingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartContactStreamingOutcomeCallable ConnectClient::StartContactStreamingCallable(const StartContactStreamingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartContactStreamingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartContactStreaming(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::StartContactStreamingAsync(const StartContactStreamingRequest& request, const StartContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartContactStreamingAsyncHelper( request, handler, context ); } );
}

void ConnectClient::StartContactStreamingAsyncHelper(const StartContactStreamingRequest& request, const StartContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartContactStreaming(request), context);
}

StartOutboundVoiceContactOutcome ConnectClient::StartOutboundVoiceContact(const StartOutboundVoiceContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/outbound-voice");
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

StartTaskContactOutcome ConnectClient::StartTaskContact(const StartTaskContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/task");
  return StartTaskContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartTaskContactOutcomeCallable ConnectClient::StartTaskContactCallable(const StartTaskContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTaskContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTaskContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::StartTaskContactAsync(const StartTaskContactRequest& request, const StartTaskContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTaskContactAsyncHelper( request, handler, context ); } );
}

void ConnectClient::StartTaskContactAsyncHelper(const StartTaskContactRequest& request, const StartTaskContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTaskContact(request), context);
}

StopContactOutcome ConnectClient::StopContact(const StopContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/stop");
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
  uri.AddPathSegments("/contact/stop-recording");
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

StopContactStreamingOutcome ConnectClient::StopContactStreaming(const StopContactStreamingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/stop-streaming");
  return StopContactStreamingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopContactStreamingOutcomeCallable ConnectClient::StopContactStreamingCallable(const StopContactStreamingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopContactStreamingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopContactStreaming(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::StopContactStreamingAsync(const StopContactStreamingRequest& request, const StopContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopContactStreamingAsyncHelper( request, handler, context ); } );
}

void ConnectClient::StopContactStreamingAsyncHelper(const StopContactStreamingRequest& request, const StopContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopContactStreaming(request), context);
}

SuspendContactRecordingOutcome ConnectClient::SuspendContactRecording(const SuspendContactRecordingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/suspend-recording");
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
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
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

TransferContactOutcome ConnectClient::TransferContact(const TransferContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/transfer");
  return TransferContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransferContactOutcomeCallable ConnectClient::TransferContactCallable(const TransferContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransferContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransferContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::TransferContactAsync(const TransferContactRequest& request, const TransferContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TransferContactAsyncHelper( request, handler, context ); } );
}

void ConnectClient::TransferContactAsyncHelper(const TransferContactRequest& request, const TransferContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TransferContact(request), context);
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
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
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

UpdateAgentStatusOutcome ConnectClient::UpdateAgentStatus(const UpdateAgentStatusRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAgentStatus", "Required field: InstanceId, is not set");
    return UpdateAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AgentStatusIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAgentStatus", "Required field: AgentStatusId, is not set");
    return UpdateAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentStatusId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/agent-status/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetAgentStatusId());
  return UpdateAgentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAgentStatusOutcomeCallable ConnectClient::UpdateAgentStatusCallable(const UpdateAgentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAgentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAgentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateAgentStatusAsync(const UpdateAgentStatusRequest& request, const UpdateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAgentStatusAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateAgentStatusAsyncHelper(const UpdateAgentStatusRequest& request, const UpdateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAgentStatus(request), context);
}

UpdateContactOutcome ConnectClient::UpdateContact(const UpdateContactRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: InstanceId, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: ContactId, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contacts/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactId());
  return UpdateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactOutcomeCallable ConnectClient::UpdateContactCallable(const UpdateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateContactAsyncHelper(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContact(request), context);
}

UpdateContactAttributesOutcome ConnectClient::UpdateContactAttributes(const UpdateContactAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/attributes");
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
  uri.AddPathSegments("/contact-flows/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowId());
  uri.AddPathSegments("/content");
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

UpdateContactFlowMetadataOutcome ConnectClient::UpdateContactFlowMetadata(const UpdateContactFlowMetadataRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowMetadata", "Required field: InstanceId, is not set");
    return UpdateContactFlowMetadataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowMetadata", "Required field: ContactFlowId, is not set");
    return UpdateContactFlowMetadataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flows/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowId());
  uri.AddPathSegments("/metadata");
  return UpdateContactFlowMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowMetadataOutcomeCallable ConnectClient::UpdateContactFlowMetadataCallable(const UpdateContactFlowMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactFlowMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactFlowMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateContactFlowMetadataAsync(const UpdateContactFlowMetadataRequest& request, const UpdateContactFlowMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactFlowMetadataAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateContactFlowMetadataAsyncHelper(const UpdateContactFlowMetadataRequest& request, const UpdateContactFlowMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContactFlowMetadata(request), context);
}

UpdateContactFlowModuleContentOutcome ConnectClient::UpdateContactFlowModuleContent(const UpdateContactFlowModuleContentRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowModuleContent", "Required field: InstanceId, is not set");
    return UpdateContactFlowModuleContentOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowModuleContent", "Required field: ContactFlowModuleId, is not set");
    return UpdateContactFlowModuleContentOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flow-modules/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowModuleId());
  uri.AddPathSegments("/content");
  return UpdateContactFlowModuleContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowModuleContentOutcomeCallable ConnectClient::UpdateContactFlowModuleContentCallable(const UpdateContactFlowModuleContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactFlowModuleContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactFlowModuleContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateContactFlowModuleContentAsync(const UpdateContactFlowModuleContentRequest& request, const UpdateContactFlowModuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactFlowModuleContentAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateContactFlowModuleContentAsyncHelper(const UpdateContactFlowModuleContentRequest& request, const UpdateContactFlowModuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContactFlowModuleContent(request), context);
}

UpdateContactFlowModuleMetadataOutcome ConnectClient::UpdateContactFlowModuleMetadata(const UpdateContactFlowModuleMetadataRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowModuleMetadata", "Required field: InstanceId, is not set");
    return UpdateContactFlowModuleMetadataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactFlowModuleMetadata", "Required field: ContactFlowModuleId, is not set");
    return UpdateContactFlowModuleMetadataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact-flow-modules/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowModuleId());
  uri.AddPathSegments("/metadata");
  return UpdateContactFlowModuleMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowModuleMetadataOutcomeCallable ConnectClient::UpdateContactFlowModuleMetadataCallable(const UpdateContactFlowModuleMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactFlowModuleMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactFlowModuleMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateContactFlowModuleMetadataAsync(const UpdateContactFlowModuleMetadataRequest& request, const UpdateContactFlowModuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactFlowModuleMetadataAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateContactFlowModuleMetadataAsyncHelper(const UpdateContactFlowModuleMetadataRequest& request, const UpdateContactFlowModuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContactFlowModuleMetadata(request), context);
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
  uri.AddPathSegments("/contact-flows/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetContactFlowId());
  uri.AddPathSegments("/name");
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

UpdateContactScheduleOutcome ConnectClient::UpdateContactSchedule(const UpdateContactScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/contact/schedule");
  return UpdateContactScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactScheduleOutcomeCallable ConnectClient::UpdateContactScheduleCallable(const UpdateContactScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateContactScheduleAsync(const UpdateContactScheduleRequest& request, const UpdateContactScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactScheduleAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateContactScheduleAsyncHelper(const UpdateContactScheduleRequest& request, const UpdateContactScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContactSchedule(request), context);
}

UpdateHoursOfOperationOutcome ConnectClient::UpdateHoursOfOperation(const UpdateHoursOfOperationRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateHoursOfOperation", "Required field: InstanceId, is not set");
    return UpdateHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateHoursOfOperation", "Required field: HoursOfOperationId, is not set");
    return UpdateHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HoursOfOperationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/hours-of-operations/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetHoursOfOperationId());
  return UpdateHoursOfOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateHoursOfOperationOutcomeCallable ConnectClient::UpdateHoursOfOperationCallable(const UpdateHoursOfOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHoursOfOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHoursOfOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateHoursOfOperationAsync(const UpdateHoursOfOperationRequest& request, const UpdateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateHoursOfOperationAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateHoursOfOperationAsyncHelper(const UpdateHoursOfOperationRequest& request, const UpdateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateHoursOfOperation(request), context);
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/attribute/");
  uri.AddPathSegment(InstanceAttributeTypeMapper::GetNameForInstanceAttributeType(request.GetAttributeType()));
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
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/storage-config/");
  uri.AddPathSegment(request.GetAssociationId());
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

UpdatePhoneNumberOutcome ConnectClient::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePhoneNumber", "Required field: PhoneNumberId, is not set");
    return UpdatePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/phone-number/");
  uri.AddPathSegment(request.GetPhoneNumberId());
  return UpdatePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePhoneNumberOutcomeCallable ConnectClient::UpdatePhoneNumberCallable(const UpdatePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdatePhoneNumberAsync(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePhoneNumberAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdatePhoneNumberAsyncHelper(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePhoneNumber(request), context);
}

UpdateQueueHoursOfOperationOutcome ConnectClient::UpdateQueueHoursOfOperation(const UpdateQueueHoursOfOperationRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueHoursOfOperation", "Required field: InstanceId, is not set");
    return UpdateQueueHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueHoursOfOperation", "Required field: QueueId, is not set");
    return UpdateQueueHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  uri.AddPathSegments("/hours-of-operation");
  return UpdateQueueHoursOfOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueHoursOfOperationOutcomeCallable ConnectClient::UpdateQueueHoursOfOperationCallable(const UpdateQueueHoursOfOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQueueHoursOfOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQueueHoursOfOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateQueueHoursOfOperationAsync(const UpdateQueueHoursOfOperationRequest& request, const UpdateQueueHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQueueHoursOfOperationAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateQueueHoursOfOperationAsyncHelper(const UpdateQueueHoursOfOperationRequest& request, const UpdateQueueHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQueueHoursOfOperation(request), context);
}

UpdateQueueMaxContactsOutcome ConnectClient::UpdateQueueMaxContacts(const UpdateQueueMaxContactsRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueMaxContacts", "Required field: InstanceId, is not set");
    return UpdateQueueMaxContactsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueMaxContacts", "Required field: QueueId, is not set");
    return UpdateQueueMaxContactsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  uri.AddPathSegments("/max-contacts");
  return UpdateQueueMaxContactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueMaxContactsOutcomeCallable ConnectClient::UpdateQueueMaxContactsCallable(const UpdateQueueMaxContactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQueueMaxContactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQueueMaxContacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateQueueMaxContactsAsync(const UpdateQueueMaxContactsRequest& request, const UpdateQueueMaxContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQueueMaxContactsAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateQueueMaxContactsAsyncHelper(const UpdateQueueMaxContactsRequest& request, const UpdateQueueMaxContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQueueMaxContacts(request), context);
}

UpdateQueueNameOutcome ConnectClient::UpdateQueueName(const UpdateQueueNameRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueName", "Required field: InstanceId, is not set");
    return UpdateQueueNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueName", "Required field: QueueId, is not set");
    return UpdateQueueNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  uri.AddPathSegments("/name");
  return UpdateQueueNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueNameOutcomeCallable ConnectClient::UpdateQueueNameCallable(const UpdateQueueNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQueueNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQueueName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateQueueNameAsync(const UpdateQueueNameRequest& request, const UpdateQueueNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQueueNameAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateQueueNameAsyncHelper(const UpdateQueueNameRequest& request, const UpdateQueueNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQueueName(request), context);
}

UpdateQueueOutboundCallerConfigOutcome ConnectClient::UpdateQueueOutboundCallerConfig(const UpdateQueueOutboundCallerConfigRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueOutboundCallerConfig", "Required field: InstanceId, is not set");
    return UpdateQueueOutboundCallerConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueOutboundCallerConfig", "Required field: QueueId, is not set");
    return UpdateQueueOutboundCallerConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  uri.AddPathSegments("/outbound-caller-config");
  return UpdateQueueOutboundCallerConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueOutboundCallerConfigOutcomeCallable ConnectClient::UpdateQueueOutboundCallerConfigCallable(const UpdateQueueOutboundCallerConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQueueOutboundCallerConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQueueOutboundCallerConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateQueueOutboundCallerConfigAsync(const UpdateQueueOutboundCallerConfigRequest& request, const UpdateQueueOutboundCallerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQueueOutboundCallerConfigAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateQueueOutboundCallerConfigAsyncHelper(const UpdateQueueOutboundCallerConfigRequest& request, const UpdateQueueOutboundCallerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQueueOutboundCallerConfig(request), context);
}

UpdateQueueStatusOutcome ConnectClient::UpdateQueueStatus(const UpdateQueueStatusRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueStatus", "Required field: InstanceId, is not set");
    return UpdateQueueStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueStatus", "Required field: QueueId, is not set");
    return UpdateQueueStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/queues/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQueueId());
  uri.AddPathSegments("/status");
  return UpdateQueueStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueStatusOutcomeCallable ConnectClient::UpdateQueueStatusCallable(const UpdateQueueStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQueueStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQueueStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateQueueStatusAsync(const UpdateQueueStatusRequest& request, const UpdateQueueStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQueueStatusAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateQueueStatusAsyncHelper(const UpdateQueueStatusRequest& request, const UpdateQueueStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQueueStatus(request), context);
}

UpdateQuickConnectConfigOutcome ConnectClient::UpdateQuickConnectConfig(const UpdateQuickConnectConfigRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQuickConnectConfig", "Required field: InstanceId, is not set");
    return UpdateQuickConnectConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QuickConnectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQuickConnectConfig", "Required field: QuickConnectId, is not set");
    return UpdateQuickConnectConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickConnectId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quick-connects/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQuickConnectId());
  uri.AddPathSegments("/config");
  return UpdateQuickConnectConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQuickConnectConfigOutcomeCallable ConnectClient::UpdateQuickConnectConfigCallable(const UpdateQuickConnectConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQuickConnectConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQuickConnectConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateQuickConnectConfigAsync(const UpdateQuickConnectConfigRequest& request, const UpdateQuickConnectConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQuickConnectConfigAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateQuickConnectConfigAsyncHelper(const UpdateQuickConnectConfigRequest& request, const UpdateQuickConnectConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQuickConnectConfig(request), context);
}

UpdateQuickConnectNameOutcome ConnectClient::UpdateQuickConnectName(const UpdateQuickConnectNameRequest& request) const
{
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQuickConnectName", "Required field: InstanceId, is not set");
    return UpdateQuickConnectNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QuickConnectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQuickConnectName", "Required field: QuickConnectId, is not set");
    return UpdateQuickConnectNameOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickConnectId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quick-connects/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetQuickConnectId());
  uri.AddPathSegments("/name");
  return UpdateQuickConnectNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQuickConnectNameOutcomeCallable ConnectClient::UpdateQuickConnectNameCallable(const UpdateQuickConnectNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQuickConnectNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQuickConnectName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateQuickConnectNameAsync(const UpdateQuickConnectNameRequest& request, const UpdateQuickConnectNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQuickConnectNameAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateQuickConnectNameAsyncHelper(const UpdateQuickConnectNameRequest& request, const UpdateQuickConnectNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQuickConnectName(request), context);
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
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetRoutingProfileId());
  uri.AddPathSegments("/concurrency");
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
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetRoutingProfileId());
  uri.AddPathSegments("/default-outbound-queue");
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
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetRoutingProfileId());
  uri.AddPathSegments("/name");
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
  uri.AddPathSegments("/routing-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetRoutingProfileId());
  uri.AddPathSegments("/queues");
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

UpdateSecurityProfileOutcome ConnectClient::UpdateSecurityProfile(const UpdateSecurityProfileRequest& request) const
{
  if (!request.SecurityProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSecurityProfile", "Required field: SecurityProfileId, is not set");
    return UpdateSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSecurityProfile", "Required field: InstanceId, is not set");
    return UpdateSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/security-profiles/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetSecurityProfileId());
  return UpdateSecurityProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecurityProfileOutcomeCallable ConnectClient::UpdateSecurityProfileCallable(const UpdateSecurityProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecurityProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateSecurityProfileAsync(const UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSecurityProfileAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateSecurityProfileAsyncHelper(const UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSecurityProfile(request), context);
}

UpdateTaskTemplateOutcome ConnectClient::UpdateTaskTemplate(const UpdateTaskTemplateRequest& request) const
{
  if (!request.TaskTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTaskTemplate", "Required field: TaskTemplateId, is not set");
    return UpdateTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskTemplateId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTaskTemplate", "Required field: InstanceId, is not set");
    return UpdateTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegments("/task/template/");
  uri.AddPathSegment(request.GetTaskTemplateId());
  return UpdateTaskTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTaskTemplateOutcomeCallable ConnectClient::UpdateTaskTemplateCallable(const UpdateTaskTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTaskTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTaskTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClient::UpdateTaskTemplateAsync(const UpdateTaskTemplateRequest& request, const UpdateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTaskTemplateAsyncHelper( request, handler, context ); } );
}

void ConnectClient::UpdateTaskTemplateAsyncHelper(const UpdateTaskTemplateRequest& request, const UpdateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTaskTemplate(request), context);
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
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/hierarchy");
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
  uri.AddPathSegments("/user-hierarchy-groups/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetHierarchyGroupId());
  uri.AddPathSegments("/name");
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
  uri.AddPathSegments("/user-hierarchy-structure/");
  uri.AddPathSegment(request.GetInstanceId());
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
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/identity-info");
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
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/phone-config");
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
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/routing-profile");
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
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetInstanceId());
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/security-profiles");
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

