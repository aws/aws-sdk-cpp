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

#include <aws/connect/ConnectClient.h>
#include <aws/connect/ConnectErrorMarshaller.h>
#include <aws/connect/ConnectEndpointProvider.h>
#include <aws/connect/model/ActivateEvaluationFormRequest.h>
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
#include <aws/connect/model/CreateEvaluationFormRequest.h>
#include <aws/connect/model/CreateHoursOfOperationRequest.h>
#include <aws/connect/model/CreateInstanceRequest.h>
#include <aws/connect/model/CreateIntegrationAssociationRequest.h>
#include <aws/connect/model/CreateParticipantRequest.h>
#include <aws/connect/model/CreateQueueRequest.h>
#include <aws/connect/model/CreateQuickConnectRequest.h>
#include <aws/connect/model/CreateRoutingProfileRequest.h>
#include <aws/connect/model/CreateRuleRequest.h>
#include <aws/connect/model/CreateSecurityProfileRequest.h>
#include <aws/connect/model/CreateTaskTemplateRequest.h>
#include <aws/connect/model/CreateTrafficDistributionGroupRequest.h>
#include <aws/connect/model/CreateUseCaseRequest.h>
#include <aws/connect/model/CreateUserRequest.h>
#include <aws/connect/model/CreateUserHierarchyGroupRequest.h>
#include <aws/connect/model/CreateVocabularyRequest.h>
#include <aws/connect/model/DeactivateEvaluationFormRequest.h>
#include <aws/connect/model/DeleteContactEvaluationRequest.h>
#include <aws/connect/model/DeleteContactFlowRequest.h>
#include <aws/connect/model/DeleteContactFlowModuleRequest.h>
#include <aws/connect/model/DeleteEvaluationFormRequest.h>
#include <aws/connect/model/DeleteHoursOfOperationRequest.h>
#include <aws/connect/model/DeleteInstanceRequest.h>
#include <aws/connect/model/DeleteIntegrationAssociationRequest.h>
#include <aws/connect/model/DeleteQuickConnectRequest.h>
#include <aws/connect/model/DeleteRuleRequest.h>
#include <aws/connect/model/DeleteSecurityProfileRequest.h>
#include <aws/connect/model/DeleteTaskTemplateRequest.h>
#include <aws/connect/model/DeleteTrafficDistributionGroupRequest.h>
#include <aws/connect/model/DeleteUseCaseRequest.h>
#include <aws/connect/model/DeleteUserRequest.h>
#include <aws/connect/model/DeleteUserHierarchyGroupRequest.h>
#include <aws/connect/model/DeleteVocabularyRequest.h>
#include <aws/connect/model/DescribeAgentStatusRequest.h>
#include <aws/connect/model/DescribeContactRequest.h>
#include <aws/connect/model/DescribeContactEvaluationRequest.h>
#include <aws/connect/model/DescribeContactFlowRequest.h>
#include <aws/connect/model/DescribeContactFlowModuleRequest.h>
#include <aws/connect/model/DescribeEvaluationFormRequest.h>
#include <aws/connect/model/DescribeHoursOfOperationRequest.h>
#include <aws/connect/model/DescribeInstanceRequest.h>
#include <aws/connect/model/DescribeInstanceAttributeRequest.h>
#include <aws/connect/model/DescribeInstanceStorageConfigRequest.h>
#include <aws/connect/model/DescribePhoneNumberRequest.h>
#include <aws/connect/model/DescribeQueueRequest.h>
#include <aws/connect/model/DescribeQuickConnectRequest.h>
#include <aws/connect/model/DescribeRoutingProfileRequest.h>
#include <aws/connect/model/DescribeRuleRequest.h>
#include <aws/connect/model/DescribeSecurityProfileRequest.h>
#include <aws/connect/model/DescribeTrafficDistributionGroupRequest.h>
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
#include <aws/connect/model/DismissUserContactRequest.h>
#include <aws/connect/model/GetContactAttributesRequest.h>
#include <aws/connect/model/GetCurrentMetricDataRequest.h>
#include <aws/connect/model/GetCurrentUserDataRequest.h>
#include <aws/connect/model/GetFederationTokenRequest.h>
#include <aws/connect/model/GetMetricDataRequest.h>
#include <aws/connect/model/GetMetricDataV2Request.h>
#include <aws/connect/model/GetTaskTemplateRequest.h>
#include <aws/connect/model/GetTrafficDistributionRequest.h>
#include <aws/connect/model/ListAgentStatusesRequest.h>
#include <aws/connect/model/ListApprovedOriginsRequest.h>
#include <aws/connect/model/ListBotsRequest.h>
#include <aws/connect/model/ListContactEvaluationsRequest.h>
#include <aws/connect/model/ListContactFlowModulesRequest.h>
#include <aws/connect/model/ListContactFlowsRequest.h>
#include <aws/connect/model/ListContactReferencesRequest.h>
#include <aws/connect/model/ListDefaultVocabulariesRequest.h>
#include <aws/connect/model/ListEvaluationFormVersionsRequest.h>
#include <aws/connect/model/ListEvaluationFormsRequest.h>
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
#include <aws/connect/model/ListRulesRequest.h>
#include <aws/connect/model/ListSecurityKeysRequest.h>
#include <aws/connect/model/ListSecurityProfilePermissionsRequest.h>
#include <aws/connect/model/ListSecurityProfilesRequest.h>
#include <aws/connect/model/ListTagsForResourceRequest.h>
#include <aws/connect/model/ListTaskTemplatesRequest.h>
#include <aws/connect/model/ListTrafficDistributionGroupsRequest.h>
#include <aws/connect/model/ListUseCasesRequest.h>
#include <aws/connect/model/ListUserHierarchyGroupsRequest.h>
#include <aws/connect/model/ListUsersRequest.h>
#include <aws/connect/model/MonitorContactRequest.h>
#include <aws/connect/model/PutUserStatusRequest.h>
#include <aws/connect/model/ReleasePhoneNumberRequest.h>
#include <aws/connect/model/ReplicateInstanceRequest.h>
#include <aws/connect/model/ResumeContactRecordingRequest.h>
#include <aws/connect/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/connect/model/SearchQueuesRequest.h>
#include <aws/connect/model/SearchRoutingProfilesRequest.h>
#include <aws/connect/model/SearchSecurityProfilesRequest.h>
#include <aws/connect/model/SearchUsersRequest.h>
#include <aws/connect/model/SearchVocabulariesRequest.h>
#include <aws/connect/model/StartChatContactRequest.h>
#include <aws/connect/model/StartContactEvaluationRequest.h>
#include <aws/connect/model/StartContactRecordingRequest.h>
#include <aws/connect/model/StartContactStreamingRequest.h>
#include <aws/connect/model/StartOutboundVoiceContactRequest.h>
#include <aws/connect/model/StartTaskContactRequest.h>
#include <aws/connect/model/StopContactRequest.h>
#include <aws/connect/model/StopContactRecordingRequest.h>
#include <aws/connect/model/StopContactStreamingRequest.h>
#include <aws/connect/model/SubmitContactEvaluationRequest.h>
#include <aws/connect/model/SuspendContactRecordingRequest.h>
#include <aws/connect/model/TagResourceRequest.h>
#include <aws/connect/model/TransferContactRequest.h>
#include <aws/connect/model/UntagResourceRequest.h>
#include <aws/connect/model/UpdateAgentStatusRequest.h>
#include <aws/connect/model/UpdateContactRequest.h>
#include <aws/connect/model/UpdateContactAttributesRequest.h>
#include <aws/connect/model/UpdateContactEvaluationRequest.h>
#include <aws/connect/model/UpdateContactFlowContentRequest.h>
#include <aws/connect/model/UpdateContactFlowMetadataRequest.h>
#include <aws/connect/model/UpdateContactFlowModuleContentRequest.h>
#include <aws/connect/model/UpdateContactFlowModuleMetadataRequest.h>
#include <aws/connect/model/UpdateContactFlowNameRequest.h>
#include <aws/connect/model/UpdateContactScheduleRequest.h>
#include <aws/connect/model/UpdateEvaluationFormRequest.h>
#include <aws/connect/model/UpdateHoursOfOperationRequest.h>
#include <aws/connect/model/UpdateInstanceAttributeRequest.h>
#include <aws/connect/model/UpdateInstanceStorageConfigRequest.h>
#include <aws/connect/model/UpdateParticipantRoleConfigRequest.h>
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
#include <aws/connect/model/UpdateRuleRequest.h>
#include <aws/connect/model/UpdateSecurityProfileRequest.h>
#include <aws/connect/model/UpdateTaskTemplateRequest.h>
#include <aws/connect/model/UpdateTrafficDistributionRequest.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ConnectClient::SERVICE_NAME = "connect";
const char* ConnectClient::ALLOCATION_TAG = "ConnectClient";

ConnectClient::ConnectClient(const Connect::ConnectClientConfiguration& clientConfiguration,
                             std::shared_ptr<ConnectEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const AWSCredentials& credentials,
                             std::shared_ptr<ConnectEndpointProviderBase> endpointProvider,
                             const Connect::ConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ConnectEndpointProviderBase> endpointProvider,
                             const Connect::ConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ConnectClient::ConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ConnectClient::~ConnectClient()
{
}

std::shared_ptr<ConnectEndpointProviderBase>& ConnectClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ConnectClient::init(const Connect::ConnectClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Connect");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ConnectClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ActivateEvaluationFormOutcome ConnectClient::ActivateEvaluationForm(const ActivateEvaluationFormRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateEvaluationForm", "Required field: InstanceId, is not set");
    return ActivateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateEvaluationForm", "Required field: EvaluationFormId, is not set");
    return ActivateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationFormId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/activate");
  return ActivateEvaluationFormOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateApprovedOriginOutcome ConnectClient::AssociateApprovedOrigin(const AssociateApprovedOriginRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateApprovedOrigin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateApprovedOrigin", "Required field: InstanceId, is not set");
    return AssociateApprovedOriginOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateApprovedOrigin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/approved-origin");
  return AssociateApprovedOriginOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateBotOutcome ConnectClient::AssociateBot(const AssociateBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateBot", "Required field: InstanceId, is not set");
    return AssociateBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bot");
  return AssociateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateDefaultVocabularyOutcome ConnectClient::AssociateDefaultVocabulary(const AssociateDefaultVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDefaultVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDefaultVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/default-vocabulary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(VocabularyLanguageCodeMapper::GetNameForVocabularyLanguageCode(request.GetLanguageCode()));
  return AssociateDefaultVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateInstanceStorageConfigOutcome ConnectClient::AssociateInstanceStorageConfig(const AssociateInstanceStorageConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateInstanceStorageConfig", "Required field: InstanceId, is not set");
    return AssociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage-config");
  return AssociateInstanceStorageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateLambdaFunctionOutcome ConnectClient::AssociateLambdaFunction(const AssociateLambdaFunctionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateLambdaFunction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLambdaFunction", "Required field: InstanceId, is not set");
    return AssociateLambdaFunctionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateLambdaFunction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lambda-function");
  return AssociateLambdaFunctionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateLexBotOutcome ConnectClient::AssociateLexBot(const AssociateLexBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateLexBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLexBot", "Required field: InstanceId, is not set");
    return AssociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateLexBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lex-bot");
  return AssociateLexBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociatePhoneNumberContactFlowOutcome ConnectClient::AssociatePhoneNumberContactFlow(const AssociatePhoneNumberContactFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePhoneNumberContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberContactFlow", "Required field: PhoneNumberId, is not set");
    return AssociatePhoneNumberContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePhoneNumberContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow");
  return AssociatePhoneNumberContactFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateQueueQuickConnectsOutcome ConnectClient::AssociateQueueQuickConnects(const AssociateQueueQuickConnectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associate-quick-connects");
  return AssociateQueueQuickConnectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateRoutingProfileQueuesOutcome ConnectClient::AssociateRoutingProfileQueues(const AssociateRoutingProfileQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associate-queues");
  return AssociateRoutingProfileQueuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateSecurityKeyOutcome ConnectClient::AssociateSecurityKey(const AssociateSecurityKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSecurityKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateSecurityKey", "Required field: InstanceId, is not set");
    return AssociateSecurityKeyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSecurityKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-key");
  return AssociateSecurityKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ClaimPhoneNumberOutcome ConnectClient::ClaimPhoneNumber(const ClaimPhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ClaimPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ClaimPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/claim");
  return ClaimPhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAgentStatusOutcome ConnectClient::CreateAgentStatus(const CreateAgentStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAgentStatus", "Required field: InstanceId, is not set");
    return CreateAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateAgentStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateContactFlowOutcome ConnectClient::CreateContactFlow(const CreateContactFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContactFlow", "Required field: InstanceId, is not set");
    return CreateContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateContactFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateContactFlowModuleOutcome ConnectClient::CreateContactFlowModule(const CreateContactFlowModuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContactFlowModule", "Required field: InstanceId, is not set");
    return CreateContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateContactFlowModuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateEvaluationFormOutcome ConnectClient::CreateEvaluationForm(const CreateEvaluationFormRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEvaluationForm", "Required field: InstanceId, is not set");
    return CreateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateEvaluationFormOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateHoursOfOperationOutcome ConnectClient::CreateHoursOfOperation(const CreateHoursOfOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateHoursOfOperation", "Required field: InstanceId, is not set");
    return CreateHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateHoursOfOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceOutcome ConnectClient::CreateInstance(const CreateInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance");
  return CreateInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateIntegrationAssociationOutcome ConnectClient::CreateIntegrationAssociation(const CreateIntegrationAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIntegrationAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntegrationAssociation", "Required field: InstanceId, is not set");
    return CreateIntegrationAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIntegrationAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations");
  return CreateIntegrationAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateParticipantOutcome ConnectClient::CreateParticipant(const CreateParticipantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateParticipant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateParticipant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/create-participant");
  return CreateParticipantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateQueueOutcome ConnectClient::CreateQueue(const CreateQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQueue", "Required field: InstanceId, is not set");
    return CreateQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateQueueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateQuickConnectOutcome ConnectClient::CreateQuickConnect(const CreateQuickConnectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQuickConnect", "Required field: InstanceId, is not set");
    return CreateQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateQuickConnectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateRoutingProfileOutcome ConnectClient::CreateRoutingProfile(const CreateRoutingProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoutingProfile", "Required field: InstanceId, is not set");
    return CreateRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateRoutingProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleOutcome ConnectClient::CreateRule(const CreateRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: InstanceId, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityProfileOutcome ConnectClient::CreateSecurityProfile(const CreateSecurityProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSecurityProfile", "Required field: InstanceId, is not set");
    return CreateSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateSecurityProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateTaskTemplateOutcome ConnectClient::CreateTaskTemplate(const CreateTaskTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTaskTemplate", "Required field: InstanceId, is not set");
    return CreateTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task/template");
  return CreateTaskTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateTrafficDistributionGroupOutcome ConnectClient::CreateTrafficDistributionGroup(const CreateTrafficDistributionGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficDistributionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficDistributionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group");
  return CreateTrafficDistributionGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateUseCaseOutcome ConnectClient::CreateUseCase(const CreateUseCaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases");
  return CreateUseCaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcome ConnectClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: InstanceId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateUserHierarchyGroupOutcome ConnectClient::CreateUserHierarchyGroup(const CreateUserHierarchyGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserHierarchyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUserHierarchyGroup", "Required field: InstanceId, is not set");
    return CreateUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserHierarchyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateUserHierarchyGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVocabularyOutcome ConnectClient::CreateVocabulary(const CreateVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVocabulary", "Required field: InstanceId, is not set");
    return CreateVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return CreateVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivateEvaluationFormOutcome ConnectClient::DeactivateEvaluationForm(const DeactivateEvaluationFormRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateEvaluationForm", "Required field: InstanceId, is not set");
    return DeactivateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateEvaluationForm", "Required field: EvaluationFormId, is not set");
    return DeactivateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationFormId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deactivate");
  return DeactivateEvaluationFormOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactEvaluationOutcome ConnectClient::DeleteContactEvaluation(const DeleteContactEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContactEvaluation", "Required field: InstanceId, is not set");
    return DeleteContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContactEvaluation", "Required field: EvaluationId, is not set");
    return DeleteContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
  return DeleteContactEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactFlowOutcome ConnectClient::DeleteContactFlow(const DeleteContactFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
  return DeleteContactFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactFlowModuleOutcome ConnectClient::DeleteContactFlowModule(const DeleteContactFlowModuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
  return DeleteContactFlowModuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEvaluationFormOutcome ConnectClient::DeleteEvaluationForm(const DeleteEvaluationFormRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEvaluationForm", "Required field: InstanceId, is not set");
    return DeleteEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEvaluationForm", "Required field: EvaluationFormId, is not set");
    return DeleteEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationFormId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
  return DeleteEvaluationFormOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteHoursOfOperationOutcome ConnectClient::DeleteHoursOfOperation(const DeleteHoursOfOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
  return DeleteHoursOfOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceOutcome ConnectClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInstance", "Required field: InstanceId, is not set");
    return DeleteInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return DeleteInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationAssociationOutcome ConnectClient::DeleteIntegrationAssociation(const DeleteIntegrationAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIntegrationAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIntegrationAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
  return DeleteIntegrationAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteQuickConnectOutcome ConnectClient::DeleteQuickConnect(const DeleteQuickConnectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickConnectId());
  return DeleteQuickConnectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcome ConnectClient::DeleteRule(const DeleteRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: InstanceId, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: RuleId, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
  return DeleteRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityProfileOutcome ConnectClient::DeleteSecurityProfile(const DeleteSecurityProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  return DeleteSecurityProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTaskTemplateOutcome ConnectClient::DeleteTaskTemplate(const DeleteTaskTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task/template/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskTemplateId());
  return DeleteTaskTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrafficDistributionGroupOutcome ConnectClient::DeleteTrafficDistributionGroup(const DeleteTrafficDistributionGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficDistributionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrafficDistributionGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrafficDistributionGroup", "Required field: TrafficDistributionGroupId, is not set");
    return DeleteTrafficDistributionGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficDistributionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
  return DeleteTrafficDistributionGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUseCaseOutcome ConnectClient::DeleteUseCase(const DeleteUseCaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUseCaseId());
  return DeleteUseCaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcome ConnectClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserHierarchyGroupOutcome ConnectClient::DeleteUserHierarchyGroup(const DeleteUserHierarchyGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserHierarchyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserHierarchyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHierarchyGroupId());
  return DeleteUserHierarchyGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVocabularyOutcome ConnectClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary-remove/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVocabularyId());
  return DeleteVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAgentStatusOutcome ConnectClient::DescribeAgentStatus(const DescribeAgentStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentStatusId());
  return DescribeAgentStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeContactOutcome ConnectClient::DescribeContact(const DescribeContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  return DescribeContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeContactEvaluationOutcome ConnectClient::DescribeContactEvaluation(const DescribeContactEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContactEvaluation", "Required field: InstanceId, is not set");
    return DescribeContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContactEvaluation", "Required field: EvaluationId, is not set");
    return DescribeContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
  return DescribeContactEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeContactFlowOutcome ConnectClient::DescribeContactFlow(const DescribeContactFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
  return DescribeContactFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeContactFlowModuleOutcome ConnectClient::DescribeContactFlowModule(const DescribeContactFlowModuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
  return DescribeContactFlowModuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeEvaluationFormOutcome ConnectClient::DescribeEvaluationForm(const DescribeEvaluationFormRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEvaluationForm", "Required field: InstanceId, is not set");
    return DescribeEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEvaluationForm", "Required field: EvaluationFormId, is not set");
    return DescribeEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationFormId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
  return DescribeEvaluationFormOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeHoursOfOperationOutcome ConnectClient::DescribeHoursOfOperation(const DescribeHoursOfOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
  return DescribeHoursOfOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceOutcome ConnectClient::DescribeInstance(const DescribeInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstance", "Required field: InstanceId, is not set");
    return DescribeInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return DescribeInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceAttributeOutcome ConnectClient::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute/");
  endpointResolutionOutcome.GetResult().AddPathSegment(InstanceAttributeTypeMapper::GetNameForInstanceAttributeType(request.GetAttributeType()));
  return DescribeInstanceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceStorageConfigOutcome ConnectClient::DescribeInstanceStorageConfig(const DescribeInstanceStorageConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage-config/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  return DescribeInstanceStorageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePhoneNumberOutcome ConnectClient::DescribePhoneNumber(const DescribePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePhoneNumber", "Required field: PhoneNumberId, is not set");
    return DescribePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return DescribePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeQueueOutcome ConnectClient::DescribeQueue(const DescribeQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  return DescribeQueueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeQuickConnectOutcome ConnectClient::DescribeQuickConnect(const DescribeQuickConnectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickConnectId());
  return DescribeQuickConnectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRoutingProfileOutcome ConnectClient::DescribeRoutingProfile(const DescribeRoutingProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  return DescribeRoutingProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuleOutcome ConnectClient::DescribeRule(const DescribeRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRule", "Required field: InstanceId, is not set");
    return DescribeRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRule", "Required field: RuleId, is not set");
    return DescribeRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
  return DescribeRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecurityProfileOutcome ConnectClient::DescribeSecurityProfile(const DescribeSecurityProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  return DescribeSecurityProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrafficDistributionGroupOutcome ConnectClient::DescribeTrafficDistributionGroup(const DescribeTrafficDistributionGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficDistributionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrafficDistributionGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTrafficDistributionGroup", "Required field: TrafficDistributionGroupId, is not set");
    return DescribeTrafficDistributionGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficDistributionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
  return DescribeTrafficDistributionGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcome ConnectClient::DescribeUser(const DescribeUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  return DescribeUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserHierarchyGroupOutcome ConnectClient::DescribeUserHierarchyGroup(const DescribeUserHierarchyGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserHierarchyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserHierarchyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHierarchyGroupId());
  return DescribeUserHierarchyGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserHierarchyStructureOutcome ConnectClient::DescribeUserHierarchyStructure(const DescribeUserHierarchyStructureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserHierarchyStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUserHierarchyStructure", "Required field: InstanceId, is not set");
    return DescribeUserHierarchyStructureOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserHierarchyStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-structure/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return DescribeUserHierarchyStructureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVocabularyOutcome ConnectClient::DescribeVocabulary(const DescribeVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVocabularyId());
  return DescribeVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApprovedOriginOutcome ConnectClient::DisassociateApprovedOrigin(const DisassociateApprovedOriginRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateApprovedOrigin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateApprovedOrigin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/approved-origin");
  return DisassociateApprovedOriginOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateBotOutcome ConnectClient::DisassociateBot(const DisassociateBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateBot", "Required field: InstanceId, is not set");
    return DisassociateBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bot");
  return DisassociateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateInstanceStorageConfigOutcome ConnectClient::DisassociateInstanceStorageConfig(const DisassociateInstanceStorageConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage-config/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  return DisassociateInstanceStorageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateLambdaFunctionOutcome ConnectClient::DisassociateLambdaFunction(const DisassociateLambdaFunctionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateLambdaFunction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateLambdaFunction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lambda-function");
  return DisassociateLambdaFunctionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateLexBotOutcome ConnectClient::DisassociateLexBot(const DisassociateLexBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateLexBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateLexBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lex-bot");
  return DisassociateLexBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePhoneNumberContactFlowOutcome ConnectClient::DisassociatePhoneNumberContactFlow(const DisassociatePhoneNumberContactFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePhoneNumberContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePhoneNumberContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow");
  return DisassociatePhoneNumberContactFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateQueueQuickConnectsOutcome ConnectClient::DisassociateQueueQuickConnects(const DisassociateQueueQuickConnectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-quick-connects");
  return DisassociateQueueQuickConnectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateRoutingProfileQueuesOutcome ConnectClient::DisassociateRoutingProfileQueues(const DisassociateRoutingProfileQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-queues");
  return DisassociateRoutingProfileQueuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateSecurityKeyOutcome ConnectClient::DisassociateSecurityKey(const DisassociateSecurityKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateSecurityKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateSecurityKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-key/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  return DisassociateSecurityKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DismissUserContactOutcome ConnectClient::DismissUserContact(const DismissUserContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DismissUserContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DismissUserContact", "Required field: UserId, is not set");
    return DismissUserContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DismissUserContact", "Required field: InstanceId, is not set");
    return DismissUserContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DismissUserContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact");
  return DismissUserContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactAttributesOutcome ConnectClient::GetContactAttributes(const GetContactAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContactAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContactAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/attributes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInitialContactId());
  return GetContactAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCurrentMetricDataOutcome ConnectClient::GetCurrentMetricData(const GetCurrentMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCurrentMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCurrentMetricData", "Required field: InstanceId, is not set");
    return GetCurrentMetricDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCurrentMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/current/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return GetCurrentMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCurrentUserDataOutcome ConnectClient::GetCurrentUserData(const GetCurrentUserDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCurrentUserData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCurrentUserData", "Required field: InstanceId, is not set");
    return GetCurrentUserDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCurrentUserData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/userdata/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return GetCurrentUserDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFederationTokenOutcome ConnectClient::GetFederationToken(const GetFederationTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFederationToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFederationToken", "Required field: InstanceId, is not set");
    return GetFederationTokenOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFederationToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user/federate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return GetFederationTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMetricDataOutcome ConnectClient::GetMetricData(const GetMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMetricData", "Required field: InstanceId, is not set");
    return GetMetricDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/historical/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return GetMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMetricDataV2Outcome ConnectClient::GetMetricDataV2(const GetMetricDataV2Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetricDataV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMetricDataV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/data");
  return GetMetricDataV2Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTaskTemplateOutcome ConnectClient::GetTaskTemplate(const GetTaskTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task/template/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskTemplateId());
  return GetTaskTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTrafficDistributionOutcome ConnectClient::GetTrafficDistribution(const GetTrafficDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrafficDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrafficDistribution", "Required field: Id, is not set");
    return GetTrafficDistributionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrafficDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetTrafficDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAgentStatusesOutcome ConnectClient::ListAgentStatuses(const ListAgentStatusesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAgentStatuses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAgentStatuses", "Required field: InstanceId, is not set");
    return ListAgentStatusesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAgentStatuses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListAgentStatusesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApprovedOriginsOutcome ConnectClient::ListApprovedOrigins(const ListApprovedOriginsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApprovedOrigins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApprovedOrigins", "Required field: InstanceId, is not set");
    return ListApprovedOriginsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApprovedOrigins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/approved-origins");
  return ListApprovedOriginsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBotsOutcome ConnectClient::ListBots(const ListBotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots");
  return ListBotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactEvaluationsOutcome ConnectClient::ListContactEvaluations(const ListContactEvaluationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContactEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactEvaluations", "Required field: InstanceId, is not set");
    return ListContactEvaluationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactEvaluations", "Required field: ContactId, is not set");
    return ListContactEvaluationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContactEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListContactEvaluationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactFlowModulesOutcome ConnectClient::ListContactFlowModules(const ListContactFlowModulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContactFlowModules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactFlowModules", "Required field: InstanceId, is not set");
    return ListContactFlowModulesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContactFlowModules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListContactFlowModulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactFlowsOutcome ConnectClient::ListContactFlows(const ListContactFlowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContactFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContactFlows", "Required field: InstanceId, is not set");
    return ListContactFlowsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContactFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListContactFlowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactReferencesOutcome ConnectClient::ListContactReferences(const ListContactReferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContactReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContactReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/references/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  return ListContactReferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDefaultVocabulariesOutcome ConnectClient::ListDefaultVocabularies(const ListDefaultVocabulariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDefaultVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDefaultVocabularies", "Required field: InstanceId, is not set");
    return ListDefaultVocabulariesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDefaultVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/default-vocabulary-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListDefaultVocabulariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEvaluationFormVersionsOutcome ConnectClient::ListEvaluationFormVersions(const ListEvaluationFormVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEvaluationFormVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEvaluationFormVersions", "Required field: InstanceId, is not set");
    return ListEvaluationFormVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEvaluationFormVersions", "Required field: EvaluationFormId, is not set");
    return ListEvaluationFormVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationFormId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEvaluationFormVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListEvaluationFormVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEvaluationFormsOutcome ConnectClient::ListEvaluationForms(const ListEvaluationFormsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEvaluationForms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEvaluationForms", "Required field: InstanceId, is not set");
    return ListEvaluationFormsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEvaluationForms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListEvaluationFormsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListHoursOfOperationsOutcome ConnectClient::ListHoursOfOperations(const ListHoursOfOperationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHoursOfOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHoursOfOperations", "Required field: InstanceId, is not set");
    return ListHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHoursOfOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListHoursOfOperationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceAttributesOutcome ConnectClient::ListInstanceAttributes(const ListInstanceAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstanceAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInstanceAttributes", "Required field: InstanceId, is not set");
    return ListInstanceAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstanceAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attributes");
  return ListInstanceAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceStorageConfigsOutcome ConnectClient::ListInstanceStorageConfigs(const ListInstanceStorageConfigsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstanceStorageConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstanceStorageConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage-configs");
  return ListInstanceStorageConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcome ConnectClient::ListInstances(const ListInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance");
  return ListInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIntegrationAssociationsOutcome ConnectClient::ListIntegrationAssociations(const ListIntegrationAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIntegrationAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntegrationAssociations", "Required field: InstanceId, is not set");
    return ListIntegrationAssociationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIntegrationAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations");
  return ListIntegrationAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLambdaFunctionsOutcome ConnectClient::ListLambdaFunctions(const ListLambdaFunctionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLambdaFunctions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLambdaFunctions", "Required field: InstanceId, is not set");
    return ListLambdaFunctionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLambdaFunctions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lambda-functions");
  return ListLambdaFunctionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLexBotsOutcome ConnectClient::ListLexBots(const ListLexBotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLexBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLexBots", "Required field: InstanceId, is not set");
    return ListLexBotsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLexBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lex-bots");
  return ListLexBotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPhoneNumbersOutcome ConnectClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPhoneNumbers", "Required field: InstanceId, is not set");
    return ListPhoneNumbersOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListPhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPhoneNumbersV2Outcome ConnectClient::ListPhoneNumbersV2(const ListPhoneNumbersV2Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumbersV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumbersV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/list");
  return ListPhoneNumbersV2Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPromptsOutcome ConnectClient::ListPrompts(const ListPromptsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrompts", "Required field: InstanceId, is not set");
    return ListPromptsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/prompts-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListPromptsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQueueQuickConnectsOutcome ConnectClient::ListQueueQuickConnects(const ListQueueQuickConnectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects");
  return ListQueueQuickConnectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQueuesOutcome ConnectClient::ListQueues(const ListQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueues", "Required field: InstanceId, is not set");
    return ListQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListQueuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQuickConnectsOutcome ConnectClient::ListQuickConnects(const ListQuickConnectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQuickConnects", "Required field: InstanceId, is not set");
    return ListQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListQuickConnectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoutingProfileQueuesOutcome ConnectClient::ListRoutingProfileQueues(const ListRoutingProfileQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues");
  return ListRoutingProfileQueuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoutingProfilesOutcome ConnectClient::ListRoutingProfiles(const ListRoutingProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoutingProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutingProfiles", "Required field: InstanceId, is not set");
    return ListRoutingProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoutingProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListRoutingProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcome ConnectClient::ListRules(const ListRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: InstanceId, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityKeysOutcome ConnectClient::ListSecurityKeys(const ListSecurityKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityKeys", "Required field: InstanceId, is not set");
    return ListSecurityKeysOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-keys");
  return ListSecurityKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityProfilePermissionsOutcome ConnectClient::ListSecurityProfilePermissions(const ListSecurityProfilePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityProfilePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityProfilePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-permissions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  return ListSecurityProfilePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityProfilesOutcome ConnectClient::ListSecurityProfiles(const ListSecurityProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityProfiles", "Required field: InstanceId, is not set");
    return ListSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListSecurityProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome ConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTaskTemplatesOutcome ConnectClient::ListTaskTemplates(const ListTaskTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTaskTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTaskTemplates", "Required field: InstanceId, is not set");
    return ListTaskTemplatesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTaskTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task/template");
  return ListTaskTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTrafficDistributionGroupsOutcome ConnectClient::ListTrafficDistributionGroups(const ListTrafficDistributionGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrafficDistributionGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrafficDistributionGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-groups");
  return ListTrafficDistributionGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUseCasesOutcome ConnectClient::ListUseCases(const ListUseCasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUseCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUseCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases");
  return ListUseCasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserHierarchyGroupsOutcome ConnectClient::ListUserHierarchyGroups(const ListUserHierarchyGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserHierarchyGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserHierarchyGroups", "Required field: InstanceId, is not set");
    return ListUserHierarchyGroupsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserHierarchyGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListUserHierarchyGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcome ConnectClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: InstanceId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

MonitorContactOutcome ConnectClient::MonitorContact(const MonitorContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MonitorContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MonitorContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/monitor");
  return MonitorContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutUserStatusOutcome ConnectClient::PutUserStatus(const PutUserStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutUserStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutUserStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return PutUserStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ReleasePhoneNumberOutcome ConnectClient::ReleasePhoneNumber(const ReleasePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleasePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReleasePhoneNumber", "Required field: PhoneNumberId, is not set");
    return ReleasePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleasePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return ReleasePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ReplicateInstanceOutcome ConnectClient::ReplicateInstance(const ReplicateInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplicateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReplicateInstance", "Required field: InstanceId, is not set");
    return ReplicateInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplicateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/replicate");
  return ReplicateInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeContactRecordingOutcome ConnectClient::ResumeContactRecording(const ResumeContactRecordingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/resume-recording");
  return ResumeContactRecordingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchAvailablePhoneNumbersOutcome ConnectClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/search-available");
  return SearchAvailablePhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchQueuesOutcome ConnectClient::SearchQueues(const SearchQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search-queues");
  return SearchQueuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchRoutingProfilesOutcome ConnectClient::SearchRoutingProfiles(const SearchRoutingProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchRoutingProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchRoutingProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search-routing-profiles");
  return SearchRoutingProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchSecurityProfilesOutcome ConnectClient::SearchSecurityProfiles(const SearchSecurityProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search-security-profiles");
  return SearchSecurityProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchUsersOutcome ConnectClient::SearchUsers(const SearchUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search-users");
  return SearchUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchVocabulariesOutcome ConnectClient::SearchVocabularies(const SearchVocabulariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchVocabularies", "Required field: InstanceId, is not set");
    return SearchVocabulariesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary-summary/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return SearchVocabulariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartChatContactOutcome ConnectClient::StartChatContact(const StartChatContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartChatContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartChatContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/chat");
  return StartChatContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartContactEvaluationOutcome ConnectClient::StartContactEvaluation(const StartContactEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartContactEvaluation", "Required field: InstanceId, is not set");
    return StartContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return StartContactEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartContactRecordingOutcome ConnectClient::StartContactRecording(const StartContactRecordingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/start-recording");
  return StartContactRecordingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartContactStreamingOutcome ConnectClient::StartContactStreaming(const StartContactStreamingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContactStreaming, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContactStreaming, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/start-streaming");
  return StartContactStreamingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartOutboundVoiceContactOutcome ConnectClient::StartOutboundVoiceContact(const StartOutboundVoiceContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartOutboundVoiceContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartOutboundVoiceContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/outbound-voice");
  return StartOutboundVoiceContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartTaskContactOutcome ConnectClient::StartTaskContact(const StartTaskContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTaskContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTaskContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/task");
  return StartTaskContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StopContactOutcome ConnectClient::StopContact(const StopContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop");
  return StopContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopContactRecordingOutcome ConnectClient::StopContactRecording(const StopContactRecordingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop-recording");
  return StopContactRecordingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopContactStreamingOutcome ConnectClient::StopContactStreaming(const StopContactStreamingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopContactStreaming, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopContactStreaming, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop-streaming");
  return StopContactStreamingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitContactEvaluationOutcome ConnectClient::SubmitContactEvaluation(const SubmitContactEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubmitContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubmitContactEvaluation", "Required field: InstanceId, is not set");
    return SubmitContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubmitContactEvaluation", "Required field: EvaluationId, is not set");
    return SubmitContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubmitContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/submit");
  return SubmitContactEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SuspendContactRecordingOutcome ConnectClient::SuspendContactRecording(const SuspendContactRecordingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SuspendContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SuspendContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/suspend-recording");
  return SuspendContactRecordingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome ConnectClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransferContactOutcome ConnectClient::TransferContact(const TransferContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransferContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TransferContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/transfer");
  return TransferContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome ConnectClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateAgentStatusOutcome ConnectClient::UpdateAgentStatus(const UpdateAgentStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentStatusId());
  return UpdateAgentStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactOutcome ConnectClient::UpdateContact(const UpdateContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  return UpdateContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactAttributesOutcome ConnectClient::UpdateContactAttributes(const UpdateContactAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/attributes");
  return UpdateContactAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactEvaluationOutcome ConnectClient::UpdateContactEvaluation(const UpdateContactEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactEvaluation", "Required field: InstanceId, is not set");
    return UpdateContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactEvaluation", "Required field: EvaluationId, is not set");
    return UpdateContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
  return UpdateContactEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowContentOutcome ConnectClient::UpdateContactFlowContent(const UpdateContactFlowContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactFlowContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactFlowContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/content");
  return UpdateContactFlowContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowMetadataOutcome ConnectClient::UpdateContactFlowMetadata(const UpdateContactFlowMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactFlowMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactFlowMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  return UpdateContactFlowMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowModuleContentOutcome ConnectClient::UpdateContactFlowModuleContent(const UpdateContactFlowModuleContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactFlowModuleContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactFlowModuleContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/content");
  return UpdateContactFlowModuleContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowModuleMetadataOutcome ConnectClient::UpdateContactFlowModuleMetadata(const UpdateContactFlowModuleMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactFlowModuleMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactFlowModuleMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  return UpdateContactFlowModuleMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactFlowNameOutcome ConnectClient::UpdateContactFlowName(const UpdateContactFlowNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactFlowName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactFlowName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/name");
  return UpdateContactFlowNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactScheduleOutcome ConnectClient::UpdateContactSchedule(const UpdateContactScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/schedule");
  return UpdateContactScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEvaluationFormOutcome ConnectClient::UpdateEvaluationForm(const UpdateEvaluationFormRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEvaluationForm", "Required field: InstanceId, is not set");
    return UpdateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEvaluationForm", "Required field: EvaluationFormId, is not set");
    return UpdateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluationFormId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
  return UpdateEvaluationFormOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateHoursOfOperationOutcome ConnectClient::UpdateHoursOfOperation(const UpdateHoursOfOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
  return UpdateHoursOfOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceAttributeOutcome ConnectClient::UpdateInstanceAttribute(const UpdateInstanceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute/");
  endpointResolutionOutcome.GetResult().AddPathSegment(InstanceAttributeTypeMapper::GetNameForInstanceAttributeType(request.GetAttributeType()));
  return UpdateInstanceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceStorageConfigOutcome ConnectClient::UpdateInstanceStorageConfig(const UpdateInstanceStorageConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage-config/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  return UpdateInstanceStorageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateParticipantRoleConfigOutcome ConnectClient::UpdateParticipantRoleConfig(const UpdateParticipantRoleConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateParticipantRoleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateParticipantRoleConfig", "Required field: InstanceId, is not set");
    return UpdateParticipantRoleConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateParticipantRoleConfig", "Required field: ContactId, is not set");
    return UpdateParticipantRoleConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateParticipantRoleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/participant-role-config/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  return UpdateParticipantRoleConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePhoneNumberOutcome ConnectClient::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePhoneNumber", "Required field: PhoneNumberId, is not set");
    return UpdatePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return UpdatePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueHoursOfOperationOutcome ConnectClient::UpdateQueueHoursOfOperation(const UpdateQueueHoursOfOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueueHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueueHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operation");
  return UpdateQueueHoursOfOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueMaxContactsOutcome ConnectClient::UpdateQueueMaxContacts(const UpdateQueueMaxContactsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueueMaxContacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueueMaxContacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/max-contacts");
  return UpdateQueueMaxContactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueNameOutcome ConnectClient::UpdateQueueName(const UpdateQueueNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueueName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueueName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/name");
  return UpdateQueueNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueOutboundCallerConfigOutcome ConnectClient::UpdateQueueOutboundCallerConfig(const UpdateQueueOutboundCallerConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueueOutboundCallerConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueueOutboundCallerConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-caller-config");
  return UpdateQueueOutboundCallerConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueStatusOutcome ConnectClient::UpdateQueueStatus(const UpdateQueueStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueueStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueueStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return UpdateQueueStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQuickConnectConfigOutcome ConnectClient::UpdateQuickConnectConfig(const UpdateQuickConnectConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQuickConnectConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQuickConnectConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickConnectId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateQuickConnectConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQuickConnectNameOutcome ConnectClient::UpdateQuickConnectName(const UpdateQuickConnectNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQuickConnectName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQuickConnectName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickConnectId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/name");
  return UpdateQuickConnectNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingProfileConcurrencyOutcome ConnectClient::UpdateRoutingProfileConcurrency(const UpdateRoutingProfileConcurrencyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoutingProfileConcurrency, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoutingProfileConcurrency, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/concurrency");
  return UpdateRoutingProfileConcurrencyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingProfileDefaultOutboundQueueOutcome ConnectClient::UpdateRoutingProfileDefaultOutboundQueue(const UpdateRoutingProfileDefaultOutboundQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoutingProfileDefaultOutboundQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoutingProfileDefaultOutboundQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/default-outbound-queue");
  return UpdateRoutingProfileDefaultOutboundQueueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingProfileNameOutcome ConnectClient::UpdateRoutingProfileName(const UpdateRoutingProfileNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoutingProfileName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoutingProfileName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/name");
  return UpdateRoutingProfileNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingProfileQueuesOutcome ConnectClient::UpdateRoutingProfileQueues(const UpdateRoutingProfileQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/queues");
  return UpdateRoutingProfileQueuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleOutcome ConnectClient::UpdateRule(const UpdateRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: RuleId, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleId]", false));
  }
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: InstanceId, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
  return UpdateRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecurityProfileOutcome ConnectClient::UpdateSecurityProfile(const UpdateSecurityProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  return UpdateSecurityProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTaskTemplateOutcome ConnectClient::UpdateTaskTemplate(const UpdateTaskTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task/template/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskTemplateId());
  return UpdateTaskTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrafficDistributionOutcome ConnectClient::UpdateTrafficDistribution(const UpdateTrafficDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrafficDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrafficDistribution", "Required field: Id, is not set");
    return UpdateTrafficDistributionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrafficDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateTrafficDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserHierarchyOutcome ConnectClient::UpdateUserHierarchy(const UpdateUserHierarchyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserHierarchy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserHierarchy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hierarchy");
  return UpdateUserHierarchyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserHierarchyGroupNameOutcome ConnectClient::UpdateUserHierarchyGroupName(const UpdateUserHierarchyGroupNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserHierarchyGroupName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserHierarchyGroupName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHierarchyGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/name");
  return UpdateUserHierarchyGroupNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserHierarchyStructureOutcome ConnectClient::UpdateUserHierarchyStructure(const UpdateUserHierarchyStructureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserHierarchyStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserHierarchyStructure", "Required field: InstanceId, is not set");
    return UpdateUserHierarchyStructureOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserHierarchyStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-structure/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  return UpdateUserHierarchyStructureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserIdentityInfoOutcome ConnectClient::UpdateUserIdentityInfo(const UpdateUserIdentityInfoRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserIdentityInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserIdentityInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identity-info");
  return UpdateUserIdentityInfoOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserPhoneConfigOutcome ConnectClient::UpdateUserPhoneConfig(const UpdateUserPhoneConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserPhoneConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserPhoneConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-config");
  return UpdateUserPhoneConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserRoutingProfileOutcome ConnectClient::UpdateUserRoutingProfile(const UpdateUserRoutingProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profile");
  return UpdateUserRoutingProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserSecurityProfilesOutcome ConnectClient::UpdateUserSecurityProfiles(const UpdateUserSecurityProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles");
  return UpdateUserSecurityProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

