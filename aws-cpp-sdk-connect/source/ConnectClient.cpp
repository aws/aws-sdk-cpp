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
#include <aws/connect/model/SearchQueuesRequest.h>
#include <aws/connect/model/SearchRoutingProfilesRequest.h>
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
  AWSClient::SetServiceClientName("Connect");
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

void ConnectClientAssociateApprovedOriginAsyncHelper(ConnectClient const * const clientThis, const AssociateApprovedOriginRequest& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateApprovedOrigin(request), context);
}

void ConnectClient::AssociateApprovedOriginAsync(const AssociateApprovedOriginRequest& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateApprovedOriginAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociateBotAsyncHelper(ConnectClient const * const clientThis, const AssociateBotRequest& request, const AssociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateBot(request), context);
}

void ConnectClient::AssociateBotAsync(const AssociateBotRequest& request, const AssociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateBotAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociateDefaultVocabularyAsyncHelper(ConnectClient const * const clientThis, const AssociateDefaultVocabularyRequest& request, const AssociateDefaultVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateDefaultVocabulary(request), context);
}

void ConnectClient::AssociateDefaultVocabularyAsync(const AssociateDefaultVocabularyRequest& request, const AssociateDefaultVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateDefaultVocabularyAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociateInstanceStorageConfigAsyncHelper(ConnectClient const * const clientThis, const AssociateInstanceStorageConfigRequest& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateInstanceStorageConfig(request), context);
}

void ConnectClient::AssociateInstanceStorageConfigAsync(const AssociateInstanceStorageConfigRequest& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateInstanceStorageConfigAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociateLambdaFunctionAsyncHelper(ConnectClient const * const clientThis, const AssociateLambdaFunctionRequest& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateLambdaFunction(request), context);
}

void ConnectClient::AssociateLambdaFunctionAsync(const AssociateLambdaFunctionRequest& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateLambdaFunctionAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociateLexBotAsyncHelper(ConnectClient const * const clientThis, const AssociateLexBotRequest& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateLexBot(request), context);
}

void ConnectClient::AssociateLexBotAsync(const AssociateLexBotRequest& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateLexBotAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociatePhoneNumberContactFlowAsyncHelper(ConnectClient const * const clientThis, const AssociatePhoneNumberContactFlowRequest& request, const AssociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociatePhoneNumberContactFlow(request), context);
}

void ConnectClient::AssociatePhoneNumberContactFlowAsync(const AssociatePhoneNumberContactFlowRequest& request, const AssociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociatePhoneNumberContactFlowAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociateQueueQuickConnectsAsyncHelper(ConnectClient const * const clientThis, const AssociateQueueQuickConnectsRequest& request, const AssociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateQueueQuickConnects(request), context);
}

void ConnectClient::AssociateQueueQuickConnectsAsync(const AssociateQueueQuickConnectsRequest& request, const AssociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateQueueQuickConnectsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociateRoutingProfileQueuesAsyncHelper(ConnectClient const * const clientThis, const AssociateRoutingProfileQueuesRequest& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateRoutingProfileQueues(request), context);
}

void ConnectClient::AssociateRoutingProfileQueuesAsync(const AssociateRoutingProfileQueuesRequest& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateRoutingProfileQueuesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientAssociateSecurityKeyAsyncHelper(ConnectClient const * const clientThis, const AssociateSecurityKeyRequest& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateSecurityKey(request), context);
}

void ConnectClient::AssociateSecurityKeyAsync(const AssociateSecurityKeyRequest& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientAssociateSecurityKeyAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientClaimPhoneNumberAsyncHelper(ConnectClient const * const clientThis, const ClaimPhoneNumberRequest& request, const ClaimPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ClaimPhoneNumber(request), context);
}

void ConnectClient::ClaimPhoneNumberAsync(const ClaimPhoneNumberRequest& request, const ClaimPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientClaimPhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateAgentStatusAsyncHelper(ConnectClient const * const clientThis, const CreateAgentStatusRequest& request, const CreateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAgentStatus(request), context);
}

void ConnectClient::CreateAgentStatusAsync(const CreateAgentStatusRequest& request, const CreateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateAgentStatusAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateContactFlowAsyncHelper(ConnectClient const * const clientThis, const CreateContactFlowRequest& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContactFlow(request), context);
}

void ConnectClient::CreateContactFlowAsync(const CreateContactFlowRequest& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateContactFlowAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateContactFlowModuleAsyncHelper(ConnectClient const * const clientThis, const CreateContactFlowModuleRequest& request, const CreateContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContactFlowModule(request), context);
}

void ConnectClient::CreateContactFlowModuleAsync(const CreateContactFlowModuleRequest& request, const CreateContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateContactFlowModuleAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateHoursOfOperationAsyncHelper(ConnectClient const * const clientThis, const CreateHoursOfOperationRequest& request, const CreateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHoursOfOperation(request), context);
}

void ConnectClient::CreateHoursOfOperationAsync(const CreateHoursOfOperationRequest& request, const CreateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateHoursOfOperationAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateInstanceAsyncHelper(ConnectClient const * const clientThis, const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInstance(request), context);
}

void ConnectClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateInstanceAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateIntegrationAssociationAsyncHelper(ConnectClient const * const clientThis, const CreateIntegrationAssociationRequest& request, const CreateIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIntegrationAssociation(request), context);
}

void ConnectClient::CreateIntegrationAssociationAsync(const CreateIntegrationAssociationRequest& request, const CreateIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateIntegrationAssociationAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateQueueAsyncHelper(ConnectClient const * const clientThis, const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateQueue(request), context);
}

void ConnectClient::CreateQueueAsync(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateQueueAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateQuickConnectAsyncHelper(ConnectClient const * const clientThis, const CreateQuickConnectRequest& request, const CreateQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateQuickConnect(request), context);
}

void ConnectClient::CreateQuickConnectAsync(const CreateQuickConnectRequest& request, const CreateQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateQuickConnectAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateRoutingProfileAsyncHelper(ConnectClient const * const clientThis, const CreateRoutingProfileRequest& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRoutingProfile(request), context);
}

void ConnectClient::CreateRoutingProfileAsync(const CreateRoutingProfileRequest& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateRoutingProfileAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateSecurityProfileAsyncHelper(ConnectClient const * const clientThis, const CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSecurityProfile(request), context);
}

void ConnectClient::CreateSecurityProfileAsync(const CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateSecurityProfileAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateTaskTemplateAsyncHelper(ConnectClient const * const clientThis, const CreateTaskTemplateRequest& request, const CreateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTaskTemplate(request), context);
}

void ConnectClient::CreateTaskTemplateAsync(const CreateTaskTemplateRequest& request, const CreateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateTaskTemplateAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateUseCaseAsyncHelper(ConnectClient const * const clientThis, const CreateUseCaseRequest& request, const CreateUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUseCase(request), context);
}

void ConnectClient::CreateUseCaseAsync(const CreateUseCaseRequest& request, const CreateUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateUseCaseAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateUserAsyncHelper(ConnectClient const * const clientThis, const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUser(request), context);
}

void ConnectClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateUserAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateUserHierarchyGroupAsyncHelper(ConnectClient const * const clientThis, const CreateUserHierarchyGroupRequest& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUserHierarchyGroup(request), context);
}

void ConnectClient::CreateUserHierarchyGroupAsync(const CreateUserHierarchyGroupRequest& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateUserHierarchyGroupAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientCreateVocabularyAsyncHelper(ConnectClient const * const clientThis, const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVocabulary(request), context);
}

void ConnectClient::CreateVocabularyAsync(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientCreateVocabularyAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteContactFlowAsyncHelper(ConnectClient const * const clientThis, const DeleteContactFlowRequest& request, const DeleteContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContactFlow(request), context);
}

void ConnectClient::DeleteContactFlowAsync(const DeleteContactFlowRequest& request, const DeleteContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteContactFlowAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteContactFlowModuleAsyncHelper(ConnectClient const * const clientThis, const DeleteContactFlowModuleRequest& request, const DeleteContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContactFlowModule(request), context);
}

void ConnectClient::DeleteContactFlowModuleAsync(const DeleteContactFlowModuleRequest& request, const DeleteContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteContactFlowModuleAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteHoursOfOperationAsyncHelper(ConnectClient const * const clientThis, const DeleteHoursOfOperationRequest& request, const DeleteHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHoursOfOperation(request), context);
}

void ConnectClient::DeleteHoursOfOperationAsync(const DeleteHoursOfOperationRequest& request, const DeleteHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteHoursOfOperationAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteInstanceAsyncHelper(ConnectClient const * const clientThis, const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInstance(request), context);
}

void ConnectClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteInstanceAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteIntegrationAssociationAsyncHelper(ConnectClient const * const clientThis, const DeleteIntegrationAssociationRequest& request, const DeleteIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIntegrationAssociation(request), context);
}

void ConnectClient::DeleteIntegrationAssociationAsync(const DeleteIntegrationAssociationRequest& request, const DeleteIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteIntegrationAssociationAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteQuickConnectAsyncHelper(ConnectClient const * const clientThis, const DeleteQuickConnectRequest& request, const DeleteQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteQuickConnect(request), context);
}

void ConnectClient::DeleteQuickConnectAsync(const DeleteQuickConnectRequest& request, const DeleteQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteQuickConnectAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteSecurityProfileAsyncHelper(ConnectClient const * const clientThis, const DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSecurityProfile(request), context);
}

void ConnectClient::DeleteSecurityProfileAsync(const DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteSecurityProfileAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteTaskTemplateAsyncHelper(ConnectClient const * const clientThis, const DeleteTaskTemplateRequest& request, const DeleteTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTaskTemplate(request), context);
}

void ConnectClient::DeleteTaskTemplateAsync(const DeleteTaskTemplateRequest& request, const DeleteTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteTaskTemplateAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteUseCaseAsyncHelper(ConnectClient const * const clientThis, const DeleteUseCaseRequest& request, const DeleteUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUseCase(request), context);
}

void ConnectClient::DeleteUseCaseAsync(const DeleteUseCaseRequest& request, const DeleteUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteUseCaseAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteUserAsyncHelper(ConnectClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void ConnectClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteUserAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteUserHierarchyGroupAsyncHelper(ConnectClient const * const clientThis, const DeleteUserHierarchyGroupRequest& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserHierarchyGroup(request), context);
}

void ConnectClient::DeleteUserHierarchyGroupAsync(const DeleteUserHierarchyGroupRequest& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteUserHierarchyGroupAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDeleteVocabularyAsyncHelper(ConnectClient const * const clientThis, const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVocabulary(request), context);
}

void ConnectClient::DeleteVocabularyAsync(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDeleteVocabularyAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeAgentStatusAsyncHelper(ConnectClient const * const clientThis, const DescribeAgentStatusRequest& request, const DescribeAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAgentStatus(request), context);
}

void ConnectClient::DescribeAgentStatusAsync(const DescribeAgentStatusRequest& request, const DescribeAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeAgentStatusAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeContactAsyncHelper(ConnectClient const * const clientThis, const DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeContact(request), context);
}

void ConnectClient::DescribeContactAsync(const DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeContactAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeContactFlowAsyncHelper(ConnectClient const * const clientThis, const DescribeContactFlowRequest& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeContactFlow(request), context);
}

void ConnectClient::DescribeContactFlowAsync(const DescribeContactFlowRequest& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeContactFlowAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeContactFlowModuleAsyncHelper(ConnectClient const * const clientThis, const DescribeContactFlowModuleRequest& request, const DescribeContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeContactFlowModule(request), context);
}

void ConnectClient::DescribeContactFlowModuleAsync(const DescribeContactFlowModuleRequest& request, const DescribeContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeContactFlowModuleAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeHoursOfOperationAsyncHelper(ConnectClient const * const clientThis, const DescribeHoursOfOperationRequest& request, const DescribeHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeHoursOfOperation(request), context);
}

void ConnectClient::DescribeHoursOfOperationAsync(const DescribeHoursOfOperationRequest& request, const DescribeHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeHoursOfOperationAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeInstanceAsyncHelper(ConnectClient const * const clientThis, const DescribeInstanceRequest& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstance(request), context);
}

void ConnectClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeInstanceAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeInstanceAttributeAsyncHelper(ConnectClient const * const clientThis, const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstanceAttribute(request), context);
}

void ConnectClient::DescribeInstanceAttributeAsync(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeInstanceAttributeAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeInstanceStorageConfigAsyncHelper(ConnectClient const * const clientThis, const DescribeInstanceStorageConfigRequest& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstanceStorageConfig(request), context);
}

void ConnectClient::DescribeInstanceStorageConfigAsync(const DescribeInstanceStorageConfigRequest& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeInstanceStorageConfigAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribePhoneNumberAsyncHelper(ConnectClient const * const clientThis, const DescribePhoneNumberRequest& request, const DescribePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePhoneNumber(request), context);
}

void ConnectClient::DescribePhoneNumberAsync(const DescribePhoneNumberRequest& request, const DescribePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribePhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeQueueAsyncHelper(ConnectClient const * const clientThis, const DescribeQueueRequest& request, const DescribeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeQueue(request), context);
}

void ConnectClient::DescribeQueueAsync(const DescribeQueueRequest& request, const DescribeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeQueueAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeQuickConnectAsyncHelper(ConnectClient const * const clientThis, const DescribeQuickConnectRequest& request, const DescribeQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeQuickConnect(request), context);
}

void ConnectClient::DescribeQuickConnectAsync(const DescribeQuickConnectRequest& request, const DescribeQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeQuickConnectAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeRoutingProfileAsyncHelper(ConnectClient const * const clientThis, const DescribeRoutingProfileRequest& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRoutingProfile(request), context);
}

void ConnectClient::DescribeRoutingProfileAsync(const DescribeRoutingProfileRequest& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeRoutingProfileAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeSecurityProfileAsyncHelper(ConnectClient const * const clientThis, const DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSecurityProfile(request), context);
}

void ConnectClient::DescribeSecurityProfileAsync(const DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeSecurityProfileAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeUserAsyncHelper(ConnectClient const * const clientThis, const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUser(request), context);
}

void ConnectClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeUserAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeUserHierarchyGroupAsyncHelper(ConnectClient const * const clientThis, const DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUserHierarchyGroup(request), context);
}

void ConnectClient::DescribeUserHierarchyGroupAsync(const DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeUserHierarchyGroupAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeUserHierarchyStructureAsyncHelper(ConnectClient const * const clientThis, const DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUserHierarchyStructure(request), context);
}

void ConnectClient::DescribeUserHierarchyStructureAsync(const DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeUserHierarchyStructureAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDescribeVocabularyAsyncHelper(ConnectClient const * const clientThis, const DescribeVocabularyRequest& request, const DescribeVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVocabulary(request), context);
}

void ConnectClient::DescribeVocabularyAsync(const DescribeVocabularyRequest& request, const DescribeVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDescribeVocabularyAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociateApprovedOriginAsyncHelper(ConnectClient const * const clientThis, const DisassociateApprovedOriginRequest& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateApprovedOrigin(request), context);
}

void ConnectClient::DisassociateApprovedOriginAsync(const DisassociateApprovedOriginRequest& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociateApprovedOriginAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociateBotAsyncHelper(ConnectClient const * const clientThis, const DisassociateBotRequest& request, const DisassociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateBot(request), context);
}

void ConnectClient::DisassociateBotAsync(const DisassociateBotRequest& request, const DisassociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociateBotAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociateInstanceStorageConfigAsyncHelper(ConnectClient const * const clientThis, const DisassociateInstanceStorageConfigRequest& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateInstanceStorageConfig(request), context);
}

void ConnectClient::DisassociateInstanceStorageConfigAsync(const DisassociateInstanceStorageConfigRequest& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociateInstanceStorageConfigAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociateLambdaFunctionAsyncHelper(ConnectClient const * const clientThis, const DisassociateLambdaFunctionRequest& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateLambdaFunction(request), context);
}

void ConnectClient::DisassociateLambdaFunctionAsync(const DisassociateLambdaFunctionRequest& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociateLambdaFunctionAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociateLexBotAsyncHelper(ConnectClient const * const clientThis, const DisassociateLexBotRequest& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateLexBot(request), context);
}

void ConnectClient::DisassociateLexBotAsync(const DisassociateLexBotRequest& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociateLexBotAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociatePhoneNumberContactFlowAsyncHelper(ConnectClient const * const clientThis, const DisassociatePhoneNumberContactFlowRequest& request, const DisassociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociatePhoneNumberContactFlow(request), context);
}

void ConnectClient::DisassociatePhoneNumberContactFlowAsync(const DisassociatePhoneNumberContactFlowRequest& request, const DisassociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociatePhoneNumberContactFlowAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociateQueueQuickConnectsAsyncHelper(ConnectClient const * const clientThis, const DisassociateQueueQuickConnectsRequest& request, const DisassociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateQueueQuickConnects(request), context);
}

void ConnectClient::DisassociateQueueQuickConnectsAsync(const DisassociateQueueQuickConnectsRequest& request, const DisassociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociateQueueQuickConnectsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociateRoutingProfileQueuesAsyncHelper(ConnectClient const * const clientThis, const DisassociateRoutingProfileQueuesRequest& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateRoutingProfileQueues(request), context);
}

void ConnectClient::DisassociateRoutingProfileQueuesAsync(const DisassociateRoutingProfileQueuesRequest& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociateRoutingProfileQueuesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientDisassociateSecurityKeyAsyncHelper(ConnectClient const * const clientThis, const DisassociateSecurityKeyRequest& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateSecurityKey(request), context);
}

void ConnectClient::DisassociateSecurityKeyAsync(const DisassociateSecurityKeyRequest& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientDisassociateSecurityKeyAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientGetContactAttributesAsyncHelper(ConnectClient const * const clientThis, const GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContactAttributes(request), context);
}

void ConnectClient::GetContactAttributesAsync(const GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientGetContactAttributesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientGetCurrentMetricDataAsyncHelper(ConnectClient const * const clientThis, const GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCurrentMetricData(request), context);
}

void ConnectClient::GetCurrentMetricDataAsync(const GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientGetCurrentMetricDataAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientGetCurrentUserDataAsyncHelper(ConnectClient const * const clientThis, const GetCurrentUserDataRequest& request, const GetCurrentUserDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCurrentUserData(request), context);
}

void ConnectClient::GetCurrentUserDataAsync(const GetCurrentUserDataRequest& request, const GetCurrentUserDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientGetCurrentUserDataAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientGetFederationTokenAsyncHelper(ConnectClient const * const clientThis, const GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFederationToken(request), context);
}

void ConnectClient::GetFederationTokenAsync(const GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientGetFederationTokenAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientGetMetricDataAsyncHelper(ConnectClient const * const clientThis, const GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMetricData(request), context);
}

void ConnectClient::GetMetricDataAsync(const GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientGetMetricDataAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientGetTaskTemplateAsyncHelper(ConnectClient const * const clientThis, const GetTaskTemplateRequest& request, const GetTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTaskTemplate(request), context);
}

void ConnectClient::GetTaskTemplateAsync(const GetTaskTemplateRequest& request, const GetTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientGetTaskTemplateAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListAgentStatusesAsyncHelper(ConnectClient const * const clientThis, const ListAgentStatusesRequest& request, const ListAgentStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAgentStatuses(request), context);
}

void ConnectClient::ListAgentStatusesAsync(const ListAgentStatusesRequest& request, const ListAgentStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListAgentStatusesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListApprovedOriginsAsyncHelper(ConnectClient const * const clientThis, const ListApprovedOriginsRequest& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApprovedOrigins(request), context);
}

void ConnectClient::ListApprovedOriginsAsync(const ListApprovedOriginsRequest& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListApprovedOriginsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListBotsAsyncHelper(ConnectClient const * const clientThis, const ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBots(request), context);
}

void ConnectClient::ListBotsAsync(const ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListBotsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListContactFlowModulesAsyncHelper(ConnectClient const * const clientThis, const ListContactFlowModulesRequest& request, const ListContactFlowModulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContactFlowModules(request), context);
}

void ConnectClient::ListContactFlowModulesAsync(const ListContactFlowModulesRequest& request, const ListContactFlowModulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListContactFlowModulesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListContactFlowsAsyncHelper(ConnectClient const * const clientThis, const ListContactFlowsRequest& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContactFlows(request), context);
}

void ConnectClient::ListContactFlowsAsync(const ListContactFlowsRequest& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListContactFlowsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListContactReferencesAsyncHelper(ConnectClient const * const clientThis, const ListContactReferencesRequest& request, const ListContactReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContactReferences(request), context);
}

void ConnectClient::ListContactReferencesAsync(const ListContactReferencesRequest& request, const ListContactReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListContactReferencesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListDefaultVocabulariesAsyncHelper(ConnectClient const * const clientThis, const ListDefaultVocabulariesRequest& request, const ListDefaultVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDefaultVocabularies(request), context);
}

void ConnectClient::ListDefaultVocabulariesAsync(const ListDefaultVocabulariesRequest& request, const ListDefaultVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListDefaultVocabulariesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListHoursOfOperationsAsyncHelper(ConnectClient const * const clientThis, const ListHoursOfOperationsRequest& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHoursOfOperations(request), context);
}

void ConnectClient::ListHoursOfOperationsAsync(const ListHoursOfOperationsRequest& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListHoursOfOperationsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListInstanceAttributesAsyncHelper(ConnectClient const * const clientThis, const ListInstanceAttributesRequest& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceAttributes(request), context);
}

void ConnectClient::ListInstanceAttributesAsync(const ListInstanceAttributesRequest& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListInstanceAttributesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListInstanceStorageConfigsAsyncHelper(ConnectClient const * const clientThis, const ListInstanceStorageConfigsRequest& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceStorageConfigs(request), context);
}

void ConnectClient::ListInstanceStorageConfigsAsync(const ListInstanceStorageConfigsRequest& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListInstanceStorageConfigsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListInstancesAsyncHelper(ConnectClient const * const clientThis, const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstances(request), context);
}

void ConnectClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListInstancesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListIntegrationAssociationsAsyncHelper(ConnectClient const * const clientThis, const ListIntegrationAssociationsRequest& request, const ListIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIntegrationAssociations(request), context);
}

void ConnectClient::ListIntegrationAssociationsAsync(const ListIntegrationAssociationsRequest& request, const ListIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListIntegrationAssociationsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListLambdaFunctionsAsyncHelper(ConnectClient const * const clientThis, const ListLambdaFunctionsRequest& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLambdaFunctions(request), context);
}

void ConnectClient::ListLambdaFunctionsAsync(const ListLambdaFunctionsRequest& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListLambdaFunctionsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListLexBotsAsyncHelper(ConnectClient const * const clientThis, const ListLexBotsRequest& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLexBots(request), context);
}

void ConnectClient::ListLexBotsAsync(const ListLexBotsRequest& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListLexBotsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListPhoneNumbersAsyncHelper(ConnectClient const * const clientThis, const ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPhoneNumbers(request), context);
}

void ConnectClient::ListPhoneNumbersAsync(const ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListPhoneNumbersAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListPhoneNumbersV2AsyncHelper(ConnectClient const * const clientThis, const ListPhoneNumbersV2Request& request, const ListPhoneNumbersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPhoneNumbersV2(request), context);
}

void ConnectClient::ListPhoneNumbersV2Async(const ListPhoneNumbersV2Request& request, const ListPhoneNumbersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListPhoneNumbersV2AsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListPromptsAsyncHelper(ConnectClient const * const clientThis, const ListPromptsRequest& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPrompts(request), context);
}

void ConnectClient::ListPromptsAsync(const ListPromptsRequest& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListPromptsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListQueueQuickConnectsAsyncHelper(ConnectClient const * const clientThis, const ListQueueQuickConnectsRequest& request, const ListQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQueueQuickConnects(request), context);
}

void ConnectClient::ListQueueQuickConnectsAsync(const ListQueueQuickConnectsRequest& request, const ListQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListQueueQuickConnectsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListQueuesAsyncHelper(ConnectClient const * const clientThis, const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQueues(request), context);
}

void ConnectClient::ListQueuesAsync(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListQueuesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListQuickConnectsAsyncHelper(ConnectClient const * const clientThis, const ListQuickConnectsRequest& request, const ListQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQuickConnects(request), context);
}

void ConnectClient::ListQuickConnectsAsync(const ListQuickConnectsRequest& request, const ListQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListQuickConnectsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListRoutingProfileQueuesAsyncHelper(ConnectClient const * const clientThis, const ListRoutingProfileQueuesRequest& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRoutingProfileQueues(request), context);
}

void ConnectClient::ListRoutingProfileQueuesAsync(const ListRoutingProfileQueuesRequest& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListRoutingProfileQueuesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListRoutingProfilesAsyncHelper(ConnectClient const * const clientThis, const ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRoutingProfiles(request), context);
}

void ConnectClient::ListRoutingProfilesAsync(const ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListRoutingProfilesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListSecurityKeysAsyncHelper(ConnectClient const * const clientThis, const ListSecurityKeysRequest& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSecurityKeys(request), context);
}

void ConnectClient::ListSecurityKeysAsync(const ListSecurityKeysRequest& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListSecurityKeysAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListSecurityProfilePermissionsAsyncHelper(ConnectClient const * const clientThis, const ListSecurityProfilePermissionsRequest& request, const ListSecurityProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSecurityProfilePermissions(request), context);
}

void ConnectClient::ListSecurityProfilePermissionsAsync(const ListSecurityProfilePermissionsRequest& request, const ListSecurityProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListSecurityProfilePermissionsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListSecurityProfilesAsyncHelper(ConnectClient const * const clientThis, const ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSecurityProfiles(request), context);
}

void ConnectClient::ListSecurityProfilesAsync(const ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListSecurityProfilesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListTagsForResourceAsyncHelper(ConnectClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ConnectClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListTaskTemplatesAsyncHelper(ConnectClient const * const clientThis, const ListTaskTemplatesRequest& request, const ListTaskTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTaskTemplates(request), context);
}

void ConnectClient::ListTaskTemplatesAsync(const ListTaskTemplatesRequest& request, const ListTaskTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListTaskTemplatesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListUseCasesAsyncHelper(ConnectClient const * const clientThis, const ListUseCasesRequest& request, const ListUseCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUseCases(request), context);
}

void ConnectClient::ListUseCasesAsync(const ListUseCasesRequest& request, const ListUseCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListUseCasesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListUserHierarchyGroupsAsyncHelper(ConnectClient const * const clientThis, const ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUserHierarchyGroups(request), context);
}

void ConnectClient::ListUserHierarchyGroupsAsync(const ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListUserHierarchyGroupsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientListUsersAsyncHelper(ConnectClient const * const clientThis, const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUsers(request), context);
}

void ConnectClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientListUsersAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientPutUserStatusAsyncHelper(ConnectClient const * const clientThis, const PutUserStatusRequest& request, const PutUserStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutUserStatus(request), context);
}

void ConnectClient::PutUserStatusAsync(const PutUserStatusRequest& request, const PutUserStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientPutUserStatusAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientReleasePhoneNumberAsyncHelper(ConnectClient const * const clientThis, const ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReleasePhoneNumber(request), context);
}

void ConnectClient::ReleasePhoneNumberAsync(const ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientReleasePhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientResumeContactRecordingAsyncHelper(ConnectClient const * const clientThis, const ResumeContactRecordingRequest& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResumeContactRecording(request), context);
}

void ConnectClient::ResumeContactRecordingAsync(const ResumeContactRecordingRequest& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientResumeContactRecordingAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientSearchAvailablePhoneNumbersAsyncHelper(ConnectClient const * const clientThis, const SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchAvailablePhoneNumbers(request), context);
}

void ConnectClient::SearchAvailablePhoneNumbersAsync(const SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientSearchAvailablePhoneNumbersAsyncHelper( this, request, handler, context ); } );
}

SearchQueuesOutcome ConnectClient::SearchQueues(const SearchQueuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/search-queues");
  return SearchQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchQueuesOutcomeCallable ConnectClient::SearchQueuesCallable(const SearchQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClientSearchQueuesAsyncHelper(ConnectClient const * const clientThis, const SearchQueuesRequest& request, const SearchQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchQueues(request), context);
}

void ConnectClient::SearchQueuesAsync(const SearchQueuesRequest& request, const SearchQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientSearchQueuesAsyncHelper( this, request, handler, context ); } );
}

SearchRoutingProfilesOutcome ConnectClient::SearchRoutingProfiles(const SearchRoutingProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/search-routing-profiles");
  return SearchRoutingProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchRoutingProfilesOutcomeCallable ConnectClient::SearchRoutingProfilesCallable(const SearchRoutingProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchRoutingProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchRoutingProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectClientSearchRoutingProfilesAsyncHelper(ConnectClient const * const clientThis, const SearchRoutingProfilesRequest& request, const SearchRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchRoutingProfiles(request), context);
}

void ConnectClient::SearchRoutingProfilesAsync(const SearchRoutingProfilesRequest& request, const SearchRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientSearchRoutingProfilesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientSearchSecurityProfilesAsyncHelper(ConnectClient const * const clientThis, const SearchSecurityProfilesRequest& request, const SearchSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchSecurityProfiles(request), context);
}

void ConnectClient::SearchSecurityProfilesAsync(const SearchSecurityProfilesRequest& request, const SearchSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientSearchSecurityProfilesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientSearchUsersAsyncHelper(ConnectClient const * const clientThis, const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchUsers(request), context);
}

void ConnectClient::SearchUsersAsync(const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientSearchUsersAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientSearchVocabulariesAsyncHelper(ConnectClient const * const clientThis, const SearchVocabulariesRequest& request, const SearchVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchVocabularies(request), context);
}

void ConnectClient::SearchVocabulariesAsync(const SearchVocabulariesRequest& request, const SearchVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientSearchVocabulariesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientStartChatContactAsyncHelper(ConnectClient const * const clientThis, const StartChatContactRequest& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartChatContact(request), context);
}

void ConnectClient::StartChatContactAsync(const StartChatContactRequest& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientStartChatContactAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientStartContactRecordingAsyncHelper(ConnectClient const * const clientThis, const StartContactRecordingRequest& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartContactRecording(request), context);
}

void ConnectClient::StartContactRecordingAsync(const StartContactRecordingRequest& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientStartContactRecordingAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientStartContactStreamingAsyncHelper(ConnectClient const * const clientThis, const StartContactStreamingRequest& request, const StartContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartContactStreaming(request), context);
}

void ConnectClient::StartContactStreamingAsync(const StartContactStreamingRequest& request, const StartContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientStartContactStreamingAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientStartOutboundVoiceContactAsyncHelper(ConnectClient const * const clientThis, const StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartOutboundVoiceContact(request), context);
}

void ConnectClient::StartOutboundVoiceContactAsync(const StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientStartOutboundVoiceContactAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientStartTaskContactAsyncHelper(ConnectClient const * const clientThis, const StartTaskContactRequest& request, const StartTaskContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTaskContact(request), context);
}

void ConnectClient::StartTaskContactAsync(const StartTaskContactRequest& request, const StartTaskContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientStartTaskContactAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientStopContactAsyncHelper(ConnectClient const * const clientThis, const StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopContact(request), context);
}

void ConnectClient::StopContactAsync(const StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientStopContactAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientStopContactRecordingAsyncHelper(ConnectClient const * const clientThis, const StopContactRecordingRequest& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopContactRecording(request), context);
}

void ConnectClient::StopContactRecordingAsync(const StopContactRecordingRequest& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientStopContactRecordingAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientStopContactStreamingAsyncHelper(ConnectClient const * const clientThis, const StopContactStreamingRequest& request, const StopContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopContactStreaming(request), context);
}

void ConnectClient::StopContactStreamingAsync(const StopContactStreamingRequest& request, const StopContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientStopContactStreamingAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientSuspendContactRecordingAsyncHelper(ConnectClient const * const clientThis, const SuspendContactRecordingRequest& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SuspendContactRecording(request), context);
}

void ConnectClient::SuspendContactRecordingAsync(const SuspendContactRecordingRequest& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientSuspendContactRecordingAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientTagResourceAsyncHelper(ConnectClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ConnectClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientTransferContactAsyncHelper(ConnectClient const * const clientThis, const TransferContactRequest& request, const TransferContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TransferContact(request), context);
}

void ConnectClient::TransferContactAsync(const TransferContactRequest& request, const TransferContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientTransferContactAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUntagResourceAsyncHelper(ConnectClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ConnectClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateAgentStatusAsyncHelper(ConnectClient const * const clientThis, const UpdateAgentStatusRequest& request, const UpdateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAgentStatus(request), context);
}

void ConnectClient::UpdateAgentStatusAsync(const UpdateAgentStatusRequest& request, const UpdateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateAgentStatusAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateContactAsyncHelper(ConnectClient const * const clientThis, const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContact(request), context);
}

void ConnectClient::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateContactAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateContactAttributesAsyncHelper(ConnectClient const * const clientThis, const UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactAttributes(request), context);
}

void ConnectClient::UpdateContactAttributesAsync(const UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateContactAttributesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateContactFlowContentAsyncHelper(ConnectClient const * const clientThis, const UpdateContactFlowContentRequest& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactFlowContent(request), context);
}

void ConnectClient::UpdateContactFlowContentAsync(const UpdateContactFlowContentRequest& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateContactFlowContentAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateContactFlowMetadataAsyncHelper(ConnectClient const * const clientThis, const UpdateContactFlowMetadataRequest& request, const UpdateContactFlowMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactFlowMetadata(request), context);
}

void ConnectClient::UpdateContactFlowMetadataAsync(const UpdateContactFlowMetadataRequest& request, const UpdateContactFlowMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateContactFlowMetadataAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateContactFlowModuleContentAsyncHelper(ConnectClient const * const clientThis, const UpdateContactFlowModuleContentRequest& request, const UpdateContactFlowModuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactFlowModuleContent(request), context);
}

void ConnectClient::UpdateContactFlowModuleContentAsync(const UpdateContactFlowModuleContentRequest& request, const UpdateContactFlowModuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateContactFlowModuleContentAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateContactFlowModuleMetadataAsyncHelper(ConnectClient const * const clientThis, const UpdateContactFlowModuleMetadataRequest& request, const UpdateContactFlowModuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactFlowModuleMetadata(request), context);
}

void ConnectClient::UpdateContactFlowModuleMetadataAsync(const UpdateContactFlowModuleMetadataRequest& request, const UpdateContactFlowModuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateContactFlowModuleMetadataAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateContactFlowNameAsyncHelper(ConnectClient const * const clientThis, const UpdateContactFlowNameRequest& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactFlowName(request), context);
}

void ConnectClient::UpdateContactFlowNameAsync(const UpdateContactFlowNameRequest& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateContactFlowNameAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateContactScheduleAsyncHelper(ConnectClient const * const clientThis, const UpdateContactScheduleRequest& request, const UpdateContactScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactSchedule(request), context);
}

void ConnectClient::UpdateContactScheduleAsync(const UpdateContactScheduleRequest& request, const UpdateContactScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateContactScheduleAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateHoursOfOperationAsyncHelper(ConnectClient const * const clientThis, const UpdateHoursOfOperationRequest& request, const UpdateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateHoursOfOperation(request), context);
}

void ConnectClient::UpdateHoursOfOperationAsync(const UpdateHoursOfOperationRequest& request, const UpdateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateHoursOfOperationAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateInstanceAttributeAsyncHelper(ConnectClient const * const clientThis, const UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInstanceAttribute(request), context);
}

void ConnectClient::UpdateInstanceAttributeAsync(const UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateInstanceAttributeAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateInstanceStorageConfigAsyncHelper(ConnectClient const * const clientThis, const UpdateInstanceStorageConfigRequest& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInstanceStorageConfig(request), context);
}

void ConnectClient::UpdateInstanceStorageConfigAsync(const UpdateInstanceStorageConfigRequest& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateInstanceStorageConfigAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdatePhoneNumberAsyncHelper(ConnectClient const * const clientThis, const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePhoneNumber(request), context);
}

void ConnectClient::UpdatePhoneNumberAsync(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdatePhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateQueueHoursOfOperationAsyncHelper(ConnectClient const * const clientThis, const UpdateQueueHoursOfOperationRequest& request, const UpdateQueueHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQueueHoursOfOperation(request), context);
}

void ConnectClient::UpdateQueueHoursOfOperationAsync(const UpdateQueueHoursOfOperationRequest& request, const UpdateQueueHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateQueueHoursOfOperationAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateQueueMaxContactsAsyncHelper(ConnectClient const * const clientThis, const UpdateQueueMaxContactsRequest& request, const UpdateQueueMaxContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQueueMaxContacts(request), context);
}

void ConnectClient::UpdateQueueMaxContactsAsync(const UpdateQueueMaxContactsRequest& request, const UpdateQueueMaxContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateQueueMaxContactsAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateQueueNameAsyncHelper(ConnectClient const * const clientThis, const UpdateQueueNameRequest& request, const UpdateQueueNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQueueName(request), context);
}

void ConnectClient::UpdateQueueNameAsync(const UpdateQueueNameRequest& request, const UpdateQueueNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateQueueNameAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateQueueOutboundCallerConfigAsyncHelper(ConnectClient const * const clientThis, const UpdateQueueOutboundCallerConfigRequest& request, const UpdateQueueOutboundCallerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQueueOutboundCallerConfig(request), context);
}

void ConnectClient::UpdateQueueOutboundCallerConfigAsync(const UpdateQueueOutboundCallerConfigRequest& request, const UpdateQueueOutboundCallerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateQueueOutboundCallerConfigAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateQueueStatusAsyncHelper(ConnectClient const * const clientThis, const UpdateQueueStatusRequest& request, const UpdateQueueStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQueueStatus(request), context);
}

void ConnectClient::UpdateQueueStatusAsync(const UpdateQueueStatusRequest& request, const UpdateQueueStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateQueueStatusAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateQuickConnectConfigAsyncHelper(ConnectClient const * const clientThis, const UpdateQuickConnectConfigRequest& request, const UpdateQuickConnectConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQuickConnectConfig(request), context);
}

void ConnectClient::UpdateQuickConnectConfigAsync(const UpdateQuickConnectConfigRequest& request, const UpdateQuickConnectConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateQuickConnectConfigAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateQuickConnectNameAsyncHelper(ConnectClient const * const clientThis, const UpdateQuickConnectNameRequest& request, const UpdateQuickConnectNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQuickConnectName(request), context);
}

void ConnectClient::UpdateQuickConnectNameAsync(const UpdateQuickConnectNameRequest& request, const UpdateQuickConnectNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateQuickConnectNameAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateRoutingProfileConcurrencyAsyncHelper(ConnectClient const * const clientThis, const UpdateRoutingProfileConcurrencyRequest& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRoutingProfileConcurrency(request), context);
}

void ConnectClient::UpdateRoutingProfileConcurrencyAsync(const UpdateRoutingProfileConcurrencyRequest& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateRoutingProfileConcurrencyAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateRoutingProfileDefaultOutboundQueueAsyncHelper(ConnectClient const * const clientThis, const UpdateRoutingProfileDefaultOutboundQueueRequest& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRoutingProfileDefaultOutboundQueue(request), context);
}

void ConnectClient::UpdateRoutingProfileDefaultOutboundQueueAsync(const UpdateRoutingProfileDefaultOutboundQueueRequest& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateRoutingProfileDefaultOutboundQueueAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateRoutingProfileNameAsyncHelper(ConnectClient const * const clientThis, const UpdateRoutingProfileNameRequest& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRoutingProfileName(request), context);
}

void ConnectClient::UpdateRoutingProfileNameAsync(const UpdateRoutingProfileNameRequest& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateRoutingProfileNameAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateRoutingProfileQueuesAsyncHelper(ConnectClient const * const clientThis, const UpdateRoutingProfileQueuesRequest& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRoutingProfileQueues(request), context);
}

void ConnectClient::UpdateRoutingProfileQueuesAsync(const UpdateRoutingProfileQueuesRequest& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateRoutingProfileQueuesAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateSecurityProfileAsyncHelper(ConnectClient const * const clientThis, const UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSecurityProfile(request), context);
}

void ConnectClient::UpdateSecurityProfileAsync(const UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateSecurityProfileAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateTaskTemplateAsyncHelper(ConnectClient const * const clientThis, const UpdateTaskTemplateRequest& request, const UpdateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTaskTemplate(request), context);
}

void ConnectClient::UpdateTaskTemplateAsync(const UpdateTaskTemplateRequest& request, const UpdateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateTaskTemplateAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateUserHierarchyAsyncHelper(ConnectClient const * const clientThis, const UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserHierarchy(request), context);
}

void ConnectClient::UpdateUserHierarchyAsync(const UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateUserHierarchyAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateUserHierarchyGroupNameAsyncHelper(ConnectClient const * const clientThis, const UpdateUserHierarchyGroupNameRequest& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserHierarchyGroupName(request), context);
}

void ConnectClient::UpdateUserHierarchyGroupNameAsync(const UpdateUserHierarchyGroupNameRequest& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateUserHierarchyGroupNameAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateUserHierarchyStructureAsyncHelper(ConnectClient const * const clientThis, const UpdateUserHierarchyStructureRequest& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserHierarchyStructure(request), context);
}

void ConnectClient::UpdateUserHierarchyStructureAsync(const UpdateUserHierarchyStructureRequest& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateUserHierarchyStructureAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateUserIdentityInfoAsyncHelper(ConnectClient const * const clientThis, const UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserIdentityInfo(request), context);
}

void ConnectClient::UpdateUserIdentityInfoAsync(const UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateUserIdentityInfoAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateUserPhoneConfigAsyncHelper(ConnectClient const * const clientThis, const UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserPhoneConfig(request), context);
}

void ConnectClient::UpdateUserPhoneConfigAsync(const UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateUserPhoneConfigAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateUserRoutingProfileAsyncHelper(ConnectClient const * const clientThis, const UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserRoutingProfile(request), context);
}

void ConnectClient::UpdateUserRoutingProfileAsync(const UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateUserRoutingProfileAsyncHelper( this, request, handler, context ); } );
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

void ConnectClientUpdateUserSecurityProfilesAsyncHelper(ConnectClient const * const clientThis, const UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserSecurityProfiles(request), context);
}

void ConnectClient::UpdateUserSecurityProfilesAsync(const UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectClientUpdateUserSecurityProfilesAsyncHelper( this, request, handler, context ); } );
}

