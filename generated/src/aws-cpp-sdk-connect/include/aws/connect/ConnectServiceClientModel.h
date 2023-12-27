/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/connect/ConnectErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/connect/ConnectEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ConnectClient header */
#include <aws/connect/model/ActivateEvaluationFormResult.h>
#include <aws/connect/model/AssociateAnalyticsDataSetResult.h>
#include <aws/connect/model/AssociateDefaultVocabularyResult.h>
#include <aws/connect/model/AssociateFlowResult.h>
#include <aws/connect/model/AssociateInstanceStorageConfigResult.h>
#include <aws/connect/model/AssociateSecurityKeyResult.h>
#include <aws/connect/model/AssociateTrafficDistributionGroupUserResult.h>
#include <aws/connect/model/BatchAssociateAnalyticsDataSetResult.h>
#include <aws/connect/model/BatchDisassociateAnalyticsDataSetResult.h>
#include <aws/connect/model/BatchGetFlowAssociationResult.h>
#include <aws/connect/model/BatchPutContactResult.h>
#include <aws/connect/model/ClaimPhoneNumberResult.h>
#include <aws/connect/model/CreateAgentStatusResult.h>
#include <aws/connect/model/CreateContactFlowResult.h>
#include <aws/connect/model/CreateContactFlowModuleResult.h>
#include <aws/connect/model/CreateEvaluationFormResult.h>
#include <aws/connect/model/CreateHoursOfOperationResult.h>
#include <aws/connect/model/CreateInstanceResult.h>
#include <aws/connect/model/CreateIntegrationAssociationResult.h>
#include <aws/connect/model/CreateParticipantResult.h>
#include <aws/connect/model/CreatePersistentContactAssociationResult.h>
#include <aws/connect/model/CreatePromptResult.h>
#include <aws/connect/model/CreateQueueResult.h>
#include <aws/connect/model/CreateQuickConnectResult.h>
#include <aws/connect/model/CreateRoutingProfileResult.h>
#include <aws/connect/model/CreateRuleResult.h>
#include <aws/connect/model/CreateSecurityProfileResult.h>
#include <aws/connect/model/CreateTaskTemplateResult.h>
#include <aws/connect/model/CreateTrafficDistributionGroupResult.h>
#include <aws/connect/model/CreateUseCaseResult.h>
#include <aws/connect/model/CreateUserResult.h>
#include <aws/connect/model/CreateUserHierarchyGroupResult.h>
#include <aws/connect/model/CreateViewResult.h>
#include <aws/connect/model/CreateViewVersionResult.h>
#include <aws/connect/model/CreateVocabularyResult.h>
#include <aws/connect/model/DeactivateEvaluationFormResult.h>
#include <aws/connect/model/DeleteContactFlowResult.h>
#include <aws/connect/model/DeleteContactFlowModuleResult.h>
#include <aws/connect/model/DeleteTaskTemplateResult.h>
#include <aws/connect/model/DeleteTrafficDistributionGroupResult.h>
#include <aws/connect/model/DeleteViewResult.h>
#include <aws/connect/model/DeleteViewVersionResult.h>
#include <aws/connect/model/DeleteVocabularyResult.h>
#include <aws/connect/model/DescribeAgentStatusResult.h>
#include <aws/connect/model/DescribeContactResult.h>
#include <aws/connect/model/DescribeContactEvaluationResult.h>
#include <aws/connect/model/DescribeContactFlowResult.h>
#include <aws/connect/model/DescribeContactFlowModuleResult.h>
#include <aws/connect/model/DescribeEvaluationFormResult.h>
#include <aws/connect/model/DescribeHoursOfOperationResult.h>
#include <aws/connect/model/DescribeInstanceResult.h>
#include <aws/connect/model/DescribeInstanceAttributeResult.h>
#include <aws/connect/model/DescribeInstanceStorageConfigResult.h>
#include <aws/connect/model/DescribePhoneNumberResult.h>
#include <aws/connect/model/DescribePredefinedAttributeResult.h>
#include <aws/connect/model/DescribePromptResult.h>
#include <aws/connect/model/DescribeQueueResult.h>
#include <aws/connect/model/DescribeQuickConnectResult.h>
#include <aws/connect/model/DescribeRoutingProfileResult.h>
#include <aws/connect/model/DescribeRuleResult.h>
#include <aws/connect/model/DescribeSecurityProfileResult.h>
#include <aws/connect/model/DescribeTrafficDistributionGroupResult.h>
#include <aws/connect/model/DescribeUserResult.h>
#include <aws/connect/model/DescribeUserHierarchyGroupResult.h>
#include <aws/connect/model/DescribeUserHierarchyStructureResult.h>
#include <aws/connect/model/DescribeViewResult.h>
#include <aws/connect/model/DescribeVocabularyResult.h>
#include <aws/connect/model/DisassociateFlowResult.h>
#include <aws/connect/model/DisassociateTrafficDistributionGroupUserResult.h>
#include <aws/connect/model/DismissUserContactResult.h>
#include <aws/connect/model/GetContactAttributesResult.h>
#include <aws/connect/model/GetCurrentMetricDataResult.h>
#include <aws/connect/model/GetCurrentUserDataResult.h>
#include <aws/connect/model/GetFederationTokenResult.h>
#include <aws/connect/model/GetFlowAssociationResult.h>
#include <aws/connect/model/GetMetricDataResult.h>
#include <aws/connect/model/GetMetricDataV2Result.h>
#include <aws/connect/model/GetPromptFileResult.h>
#include <aws/connect/model/GetTaskTemplateResult.h>
#include <aws/connect/model/GetTrafficDistributionResult.h>
#include <aws/connect/model/ImportPhoneNumberResult.h>
#include <aws/connect/model/ListAgentStatusesResult.h>
#include <aws/connect/model/ListAnalyticsDataAssociationsResult.h>
#include <aws/connect/model/ListApprovedOriginsResult.h>
#include <aws/connect/model/ListBotsResult.h>
#include <aws/connect/model/ListContactEvaluationsResult.h>
#include <aws/connect/model/ListContactFlowModulesResult.h>
#include <aws/connect/model/ListContactFlowsResult.h>
#include <aws/connect/model/ListContactReferencesResult.h>
#include <aws/connect/model/ListDefaultVocabulariesResult.h>
#include <aws/connect/model/ListEvaluationFormVersionsResult.h>
#include <aws/connect/model/ListEvaluationFormsResult.h>
#include <aws/connect/model/ListFlowAssociationsResult.h>
#include <aws/connect/model/ListHoursOfOperationsResult.h>
#include <aws/connect/model/ListInstanceAttributesResult.h>
#include <aws/connect/model/ListInstanceStorageConfigsResult.h>
#include <aws/connect/model/ListInstancesResult.h>
#include <aws/connect/model/ListIntegrationAssociationsResult.h>
#include <aws/connect/model/ListLambdaFunctionsResult.h>
#include <aws/connect/model/ListLexBotsResult.h>
#include <aws/connect/model/ListPhoneNumbersResult.h>
#include <aws/connect/model/ListPhoneNumbersV2Result.h>
#include <aws/connect/model/ListPredefinedAttributesResult.h>
#include <aws/connect/model/ListPromptsResult.h>
#include <aws/connect/model/ListQueueQuickConnectsResult.h>
#include <aws/connect/model/ListQueuesResult.h>
#include <aws/connect/model/ListQuickConnectsResult.h>
#include <aws/connect/model/ListRealtimeContactAnalysisSegmentsV2Result.h>
#include <aws/connect/model/ListRoutingProfileQueuesResult.h>
#include <aws/connect/model/ListRoutingProfilesResult.h>
#include <aws/connect/model/ListRulesResult.h>
#include <aws/connect/model/ListSecurityKeysResult.h>
#include <aws/connect/model/ListSecurityProfileApplicationsResult.h>
#include <aws/connect/model/ListSecurityProfilePermissionsResult.h>
#include <aws/connect/model/ListSecurityProfilesResult.h>
#include <aws/connect/model/ListTagsForResourceResult.h>
#include <aws/connect/model/ListTaskTemplatesResult.h>
#include <aws/connect/model/ListTrafficDistributionGroupUsersResult.h>
#include <aws/connect/model/ListTrafficDistributionGroupsResult.h>
#include <aws/connect/model/ListUseCasesResult.h>
#include <aws/connect/model/ListUserHierarchyGroupsResult.h>
#include <aws/connect/model/ListUserProficienciesResult.h>
#include <aws/connect/model/ListUsersResult.h>
#include <aws/connect/model/ListViewVersionsResult.h>
#include <aws/connect/model/ListViewsResult.h>
#include <aws/connect/model/MonitorContactResult.h>
#include <aws/connect/model/PauseContactResult.h>
#include <aws/connect/model/PutUserStatusResult.h>
#include <aws/connect/model/ReplicateInstanceResult.h>
#include <aws/connect/model/ResumeContactResult.h>
#include <aws/connect/model/ResumeContactRecordingResult.h>
#include <aws/connect/model/SearchAvailablePhoneNumbersResult.h>
#include <aws/connect/model/SearchContactsResult.h>
#include <aws/connect/model/SearchHoursOfOperationsResult.h>
#include <aws/connect/model/SearchPredefinedAttributesResult.h>
#include <aws/connect/model/SearchPromptsResult.h>
#include <aws/connect/model/SearchQueuesResult.h>
#include <aws/connect/model/SearchQuickConnectsResult.h>
#include <aws/connect/model/SearchResourceTagsResult.h>
#include <aws/connect/model/SearchRoutingProfilesResult.h>
#include <aws/connect/model/SearchSecurityProfilesResult.h>
#include <aws/connect/model/SearchUsersResult.h>
#include <aws/connect/model/SearchVocabulariesResult.h>
#include <aws/connect/model/SendChatIntegrationEventResult.h>
#include <aws/connect/model/StartChatContactResult.h>
#include <aws/connect/model/StartContactEvaluationResult.h>
#include <aws/connect/model/StartContactRecordingResult.h>
#include <aws/connect/model/StartContactStreamingResult.h>
#include <aws/connect/model/StartOutboundVoiceContactResult.h>
#include <aws/connect/model/StartTaskContactResult.h>
#include <aws/connect/model/StartWebRTCContactResult.h>
#include <aws/connect/model/StopContactResult.h>
#include <aws/connect/model/StopContactRecordingResult.h>
#include <aws/connect/model/StopContactStreamingResult.h>
#include <aws/connect/model/SubmitContactEvaluationResult.h>
#include <aws/connect/model/SuspendContactRecordingResult.h>
#include <aws/connect/model/TagContactResult.h>
#include <aws/connect/model/TransferContactResult.h>
#include <aws/connect/model/UntagContactResult.h>
#include <aws/connect/model/UpdateContactResult.h>
#include <aws/connect/model/UpdateContactAttributesResult.h>
#include <aws/connect/model/UpdateContactEvaluationResult.h>
#include <aws/connect/model/UpdateContactFlowContentResult.h>
#include <aws/connect/model/UpdateContactFlowMetadataResult.h>
#include <aws/connect/model/UpdateContactFlowModuleContentResult.h>
#include <aws/connect/model/UpdateContactFlowModuleMetadataResult.h>
#include <aws/connect/model/UpdateContactFlowNameResult.h>
#include <aws/connect/model/UpdateContactRoutingDataResult.h>
#include <aws/connect/model/UpdateContactScheduleResult.h>
#include <aws/connect/model/UpdateEvaluationFormResult.h>
#include <aws/connect/model/UpdateParticipantRoleConfigResult.h>
#include <aws/connect/model/UpdatePhoneNumberResult.h>
#include <aws/connect/model/UpdatePromptResult.h>
#include <aws/connect/model/UpdateTaskTemplateResult.h>
#include <aws/connect/model/UpdateTrafficDistributionResult.h>
#include <aws/connect/model/UpdateViewContentResult.h>
#include <aws/connect/model/UpdateViewMetadataResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ConnectClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Connect
  {
    using ConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ConnectEndpointProviderBase = Aws::Connect::Endpoint::ConnectEndpointProviderBase;
    using ConnectEndpointProvider = Aws::Connect::Endpoint::ConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ConnectClient header */
      class ActivateEvaluationFormRequest;
      class AssociateAnalyticsDataSetRequest;
      class AssociateApprovedOriginRequest;
      class AssociateBotRequest;
      class AssociateDefaultVocabularyRequest;
      class AssociateFlowRequest;
      class AssociateInstanceStorageConfigRequest;
      class AssociateLambdaFunctionRequest;
      class AssociateLexBotRequest;
      class AssociatePhoneNumberContactFlowRequest;
      class AssociateQueueQuickConnectsRequest;
      class AssociateRoutingProfileQueuesRequest;
      class AssociateSecurityKeyRequest;
      class AssociateTrafficDistributionGroupUserRequest;
      class AssociateUserProficienciesRequest;
      class BatchAssociateAnalyticsDataSetRequest;
      class BatchDisassociateAnalyticsDataSetRequest;
      class BatchGetFlowAssociationRequest;
      class BatchPutContactRequest;
      class ClaimPhoneNumberRequest;
      class CreateAgentStatusRequest;
      class CreateContactFlowRequest;
      class CreateContactFlowModuleRequest;
      class CreateEvaluationFormRequest;
      class CreateHoursOfOperationRequest;
      class CreateInstanceRequest;
      class CreateIntegrationAssociationRequest;
      class CreateParticipantRequest;
      class CreatePersistentContactAssociationRequest;
      class CreatePredefinedAttributeRequest;
      class CreatePromptRequest;
      class CreateQueueRequest;
      class CreateQuickConnectRequest;
      class CreateRoutingProfileRequest;
      class CreateRuleRequest;
      class CreateSecurityProfileRequest;
      class CreateTaskTemplateRequest;
      class CreateTrafficDistributionGroupRequest;
      class CreateUseCaseRequest;
      class CreateUserRequest;
      class CreateUserHierarchyGroupRequest;
      class CreateViewRequest;
      class CreateViewVersionRequest;
      class CreateVocabularyRequest;
      class DeactivateEvaluationFormRequest;
      class DeleteContactEvaluationRequest;
      class DeleteContactFlowRequest;
      class DeleteContactFlowModuleRequest;
      class DeleteEvaluationFormRequest;
      class DeleteHoursOfOperationRequest;
      class DeleteInstanceRequest;
      class DeleteIntegrationAssociationRequest;
      class DeletePredefinedAttributeRequest;
      class DeletePromptRequest;
      class DeleteQueueRequest;
      class DeleteQuickConnectRequest;
      class DeleteRoutingProfileRequest;
      class DeleteRuleRequest;
      class DeleteSecurityProfileRequest;
      class DeleteTaskTemplateRequest;
      class DeleteTrafficDistributionGroupRequest;
      class DeleteUseCaseRequest;
      class DeleteUserRequest;
      class DeleteUserHierarchyGroupRequest;
      class DeleteViewRequest;
      class DeleteViewVersionRequest;
      class DeleteVocabularyRequest;
      class DescribeAgentStatusRequest;
      class DescribeContactRequest;
      class DescribeContactEvaluationRequest;
      class DescribeContactFlowRequest;
      class DescribeContactFlowModuleRequest;
      class DescribeEvaluationFormRequest;
      class DescribeHoursOfOperationRequest;
      class DescribeInstanceRequest;
      class DescribeInstanceAttributeRequest;
      class DescribeInstanceStorageConfigRequest;
      class DescribePhoneNumberRequest;
      class DescribePredefinedAttributeRequest;
      class DescribePromptRequest;
      class DescribeQueueRequest;
      class DescribeQuickConnectRequest;
      class DescribeRoutingProfileRequest;
      class DescribeRuleRequest;
      class DescribeSecurityProfileRequest;
      class DescribeTrafficDistributionGroupRequest;
      class DescribeUserRequest;
      class DescribeUserHierarchyGroupRequest;
      class DescribeUserHierarchyStructureRequest;
      class DescribeViewRequest;
      class DescribeVocabularyRequest;
      class DisassociateAnalyticsDataSetRequest;
      class DisassociateApprovedOriginRequest;
      class DisassociateBotRequest;
      class DisassociateFlowRequest;
      class DisassociateInstanceStorageConfigRequest;
      class DisassociateLambdaFunctionRequest;
      class DisassociateLexBotRequest;
      class DisassociatePhoneNumberContactFlowRequest;
      class DisassociateQueueQuickConnectsRequest;
      class DisassociateRoutingProfileQueuesRequest;
      class DisassociateSecurityKeyRequest;
      class DisassociateTrafficDistributionGroupUserRequest;
      class DisassociateUserProficienciesRequest;
      class DismissUserContactRequest;
      class GetContactAttributesRequest;
      class GetCurrentMetricDataRequest;
      class GetCurrentUserDataRequest;
      class GetFederationTokenRequest;
      class GetFlowAssociationRequest;
      class GetMetricDataRequest;
      class GetMetricDataV2Request;
      class GetPromptFileRequest;
      class GetTaskTemplateRequest;
      class GetTrafficDistributionRequest;
      class ImportPhoneNumberRequest;
      class ListAgentStatusesRequest;
      class ListAnalyticsDataAssociationsRequest;
      class ListApprovedOriginsRequest;
      class ListBotsRequest;
      class ListContactEvaluationsRequest;
      class ListContactFlowModulesRequest;
      class ListContactFlowsRequest;
      class ListContactReferencesRequest;
      class ListDefaultVocabulariesRequest;
      class ListEvaluationFormVersionsRequest;
      class ListEvaluationFormsRequest;
      class ListFlowAssociationsRequest;
      class ListHoursOfOperationsRequest;
      class ListInstanceAttributesRequest;
      class ListInstanceStorageConfigsRequest;
      class ListInstancesRequest;
      class ListIntegrationAssociationsRequest;
      class ListLambdaFunctionsRequest;
      class ListLexBotsRequest;
      class ListPhoneNumbersRequest;
      class ListPhoneNumbersV2Request;
      class ListPredefinedAttributesRequest;
      class ListPromptsRequest;
      class ListQueueQuickConnectsRequest;
      class ListQueuesRequest;
      class ListQuickConnectsRequest;
      class ListRealtimeContactAnalysisSegmentsV2Request;
      class ListRoutingProfileQueuesRequest;
      class ListRoutingProfilesRequest;
      class ListRulesRequest;
      class ListSecurityKeysRequest;
      class ListSecurityProfileApplicationsRequest;
      class ListSecurityProfilePermissionsRequest;
      class ListSecurityProfilesRequest;
      class ListTagsForResourceRequest;
      class ListTaskTemplatesRequest;
      class ListTrafficDistributionGroupUsersRequest;
      class ListTrafficDistributionGroupsRequest;
      class ListUseCasesRequest;
      class ListUserHierarchyGroupsRequest;
      class ListUserProficienciesRequest;
      class ListUsersRequest;
      class ListViewVersionsRequest;
      class ListViewsRequest;
      class MonitorContactRequest;
      class PauseContactRequest;
      class PutUserStatusRequest;
      class ReleasePhoneNumberRequest;
      class ReplicateInstanceRequest;
      class ResumeContactRequest;
      class ResumeContactRecordingRequest;
      class SearchAvailablePhoneNumbersRequest;
      class SearchContactsRequest;
      class SearchHoursOfOperationsRequest;
      class SearchPredefinedAttributesRequest;
      class SearchPromptsRequest;
      class SearchQueuesRequest;
      class SearchQuickConnectsRequest;
      class SearchResourceTagsRequest;
      class SearchRoutingProfilesRequest;
      class SearchSecurityProfilesRequest;
      class SearchUsersRequest;
      class SearchVocabulariesRequest;
      class SendChatIntegrationEventRequest;
      class StartChatContactRequest;
      class StartContactEvaluationRequest;
      class StartContactRecordingRequest;
      class StartContactStreamingRequest;
      class StartOutboundVoiceContactRequest;
      class StartTaskContactRequest;
      class StartWebRTCContactRequest;
      class StopContactRequest;
      class StopContactRecordingRequest;
      class StopContactStreamingRequest;
      class SubmitContactEvaluationRequest;
      class SuspendContactRecordingRequest;
      class TagContactRequest;
      class TagResourceRequest;
      class TransferContactRequest;
      class UntagContactRequest;
      class UntagResourceRequest;
      class UpdateAgentStatusRequest;
      class UpdateContactRequest;
      class UpdateContactAttributesRequest;
      class UpdateContactEvaluationRequest;
      class UpdateContactFlowContentRequest;
      class UpdateContactFlowMetadataRequest;
      class UpdateContactFlowModuleContentRequest;
      class UpdateContactFlowModuleMetadataRequest;
      class UpdateContactFlowNameRequest;
      class UpdateContactRoutingDataRequest;
      class UpdateContactScheduleRequest;
      class UpdateEvaluationFormRequest;
      class UpdateHoursOfOperationRequest;
      class UpdateInstanceAttributeRequest;
      class UpdateInstanceStorageConfigRequest;
      class UpdateParticipantRoleConfigRequest;
      class UpdatePhoneNumberRequest;
      class UpdatePhoneNumberMetadataRequest;
      class UpdatePredefinedAttributeRequest;
      class UpdatePromptRequest;
      class UpdateQueueHoursOfOperationRequest;
      class UpdateQueueMaxContactsRequest;
      class UpdateQueueNameRequest;
      class UpdateQueueOutboundCallerConfigRequest;
      class UpdateQueueStatusRequest;
      class UpdateQuickConnectConfigRequest;
      class UpdateQuickConnectNameRequest;
      class UpdateRoutingProfileAgentAvailabilityTimerRequest;
      class UpdateRoutingProfileConcurrencyRequest;
      class UpdateRoutingProfileDefaultOutboundQueueRequest;
      class UpdateRoutingProfileNameRequest;
      class UpdateRoutingProfileQueuesRequest;
      class UpdateRuleRequest;
      class UpdateSecurityProfileRequest;
      class UpdateTaskTemplateRequest;
      class UpdateTrafficDistributionRequest;
      class UpdateUserHierarchyRequest;
      class UpdateUserHierarchyGroupNameRequest;
      class UpdateUserHierarchyStructureRequest;
      class UpdateUserIdentityInfoRequest;
      class UpdateUserPhoneConfigRequest;
      class UpdateUserProficienciesRequest;
      class UpdateUserRoutingProfileRequest;
      class UpdateUserSecurityProfilesRequest;
      class UpdateViewContentRequest;
      class UpdateViewMetadataRequest;
      /* End of service model forward declarations required in ConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ActivateEvaluationFormResult, ConnectError> ActivateEvaluationFormOutcome;
      typedef Aws::Utils::Outcome<AssociateAnalyticsDataSetResult, ConnectError> AssociateAnalyticsDataSetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateApprovedOriginOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateBotOutcome;
      typedef Aws::Utils::Outcome<AssociateDefaultVocabularyResult, ConnectError> AssociateDefaultVocabularyOutcome;
      typedef Aws::Utils::Outcome<AssociateFlowResult, ConnectError> AssociateFlowOutcome;
      typedef Aws::Utils::Outcome<AssociateInstanceStorageConfigResult, ConnectError> AssociateInstanceStorageConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateLambdaFunctionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateLexBotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociatePhoneNumberContactFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateQueueQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateRoutingProfileQueuesOutcome;
      typedef Aws::Utils::Outcome<AssociateSecurityKeyResult, ConnectError> AssociateSecurityKeyOutcome;
      typedef Aws::Utils::Outcome<AssociateTrafficDistributionGroupUserResult, ConnectError> AssociateTrafficDistributionGroupUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateUserProficienciesOutcome;
      typedef Aws::Utils::Outcome<BatchAssociateAnalyticsDataSetResult, ConnectError> BatchAssociateAnalyticsDataSetOutcome;
      typedef Aws::Utils::Outcome<BatchDisassociateAnalyticsDataSetResult, ConnectError> BatchDisassociateAnalyticsDataSetOutcome;
      typedef Aws::Utils::Outcome<BatchGetFlowAssociationResult, ConnectError> BatchGetFlowAssociationOutcome;
      typedef Aws::Utils::Outcome<BatchPutContactResult, ConnectError> BatchPutContactOutcome;
      typedef Aws::Utils::Outcome<ClaimPhoneNumberResult, ConnectError> ClaimPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<CreateAgentStatusResult, ConnectError> CreateAgentStatusOutcome;
      typedef Aws::Utils::Outcome<CreateContactFlowResult, ConnectError> CreateContactFlowOutcome;
      typedef Aws::Utils::Outcome<CreateContactFlowModuleResult, ConnectError> CreateContactFlowModuleOutcome;
      typedef Aws::Utils::Outcome<CreateEvaluationFormResult, ConnectError> CreateEvaluationFormOutcome;
      typedef Aws::Utils::Outcome<CreateHoursOfOperationResult, ConnectError> CreateHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceResult, ConnectError> CreateInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateIntegrationAssociationResult, ConnectError> CreateIntegrationAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateParticipantResult, ConnectError> CreateParticipantOutcome;
      typedef Aws::Utils::Outcome<CreatePersistentContactAssociationResult, ConnectError> CreatePersistentContactAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> CreatePredefinedAttributeOutcome;
      typedef Aws::Utils::Outcome<CreatePromptResult, ConnectError> CreatePromptOutcome;
      typedef Aws::Utils::Outcome<CreateQueueResult, ConnectError> CreateQueueOutcome;
      typedef Aws::Utils::Outcome<CreateQuickConnectResult, ConnectError> CreateQuickConnectOutcome;
      typedef Aws::Utils::Outcome<CreateRoutingProfileResult, ConnectError> CreateRoutingProfileOutcome;
      typedef Aws::Utils::Outcome<CreateRuleResult, ConnectError> CreateRuleOutcome;
      typedef Aws::Utils::Outcome<CreateSecurityProfileResult, ConnectError> CreateSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<CreateTaskTemplateResult, ConnectError> CreateTaskTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficDistributionGroupResult, ConnectError> CreateTrafficDistributionGroupOutcome;
      typedef Aws::Utils::Outcome<CreateUseCaseResult, ConnectError> CreateUseCaseOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, ConnectError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<CreateUserHierarchyGroupResult, ConnectError> CreateUserHierarchyGroupOutcome;
      typedef Aws::Utils::Outcome<CreateViewResult, ConnectError> CreateViewOutcome;
      typedef Aws::Utils::Outcome<CreateViewVersionResult, ConnectError> CreateViewVersionOutcome;
      typedef Aws::Utils::Outcome<CreateVocabularyResult, ConnectError> CreateVocabularyOutcome;
      typedef Aws::Utils::Outcome<DeactivateEvaluationFormResult, ConnectError> DeactivateEvaluationFormOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteContactEvaluationOutcome;
      typedef Aws::Utils::Outcome<DeleteContactFlowResult, ConnectError> DeleteContactFlowOutcome;
      typedef Aws::Utils::Outcome<DeleteContactFlowModuleResult, ConnectError> DeleteContactFlowModuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteEvaluationFormOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteIntegrationAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeletePredefinedAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeletePromptOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteQueueOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteQuickConnectOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteRoutingProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteTaskTemplateResult, ConnectError> DeleteTaskTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficDistributionGroupResult, ConnectError> DeleteTrafficDistributionGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteUseCaseOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteUserHierarchyGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteViewResult, ConnectError> DeleteViewOutcome;
      typedef Aws::Utils::Outcome<DeleteViewVersionResult, ConnectError> DeleteViewVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteVocabularyResult, ConnectError> DeleteVocabularyOutcome;
      typedef Aws::Utils::Outcome<DescribeAgentStatusResult, ConnectError> DescribeAgentStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeContactResult, ConnectError> DescribeContactOutcome;
      typedef Aws::Utils::Outcome<DescribeContactEvaluationResult, ConnectError> DescribeContactEvaluationOutcome;
      typedef Aws::Utils::Outcome<DescribeContactFlowResult, ConnectError> DescribeContactFlowOutcome;
      typedef Aws::Utils::Outcome<DescribeContactFlowModuleResult, ConnectError> DescribeContactFlowModuleOutcome;
      typedef Aws::Utils::Outcome<DescribeEvaluationFormResult, ConnectError> DescribeEvaluationFormOutcome;
      typedef Aws::Utils::Outcome<DescribeHoursOfOperationResult, ConnectError> DescribeHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceResult, ConnectError> DescribeInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceAttributeResult, ConnectError> DescribeInstanceAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceStorageConfigResult, ConnectError> DescribeInstanceStorageConfigOutcome;
      typedef Aws::Utils::Outcome<DescribePhoneNumberResult, ConnectError> DescribePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<DescribePredefinedAttributeResult, ConnectError> DescribePredefinedAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribePromptResult, ConnectError> DescribePromptOutcome;
      typedef Aws::Utils::Outcome<DescribeQueueResult, ConnectError> DescribeQueueOutcome;
      typedef Aws::Utils::Outcome<DescribeQuickConnectResult, ConnectError> DescribeQuickConnectOutcome;
      typedef Aws::Utils::Outcome<DescribeRoutingProfileResult, ConnectError> DescribeRoutingProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleResult, ConnectError> DescribeRuleOutcome;
      typedef Aws::Utils::Outcome<DescribeSecurityProfileResult, ConnectError> DescribeSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeTrafficDistributionGroupResult, ConnectError> DescribeTrafficDistributionGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeUserResult, ConnectError> DescribeUserOutcome;
      typedef Aws::Utils::Outcome<DescribeUserHierarchyGroupResult, ConnectError> DescribeUserHierarchyGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeUserHierarchyStructureResult, ConnectError> DescribeUserHierarchyStructureOutcome;
      typedef Aws::Utils::Outcome<DescribeViewResult, ConnectError> DescribeViewOutcome;
      typedef Aws::Utils::Outcome<DescribeVocabularyResult, ConnectError> DescribeVocabularyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateAnalyticsDataSetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateApprovedOriginOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateBotOutcome;
      typedef Aws::Utils::Outcome<DisassociateFlowResult, ConnectError> DisassociateFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateInstanceStorageConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateLambdaFunctionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateLexBotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociatePhoneNumberContactFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateQueueQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateRoutingProfileQueuesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateSecurityKeyOutcome;
      typedef Aws::Utils::Outcome<DisassociateTrafficDistributionGroupUserResult, ConnectError> DisassociateTrafficDistributionGroupUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateUserProficienciesOutcome;
      typedef Aws::Utils::Outcome<DismissUserContactResult, ConnectError> DismissUserContactOutcome;
      typedef Aws::Utils::Outcome<GetContactAttributesResult, ConnectError> GetContactAttributesOutcome;
      typedef Aws::Utils::Outcome<GetCurrentMetricDataResult, ConnectError> GetCurrentMetricDataOutcome;
      typedef Aws::Utils::Outcome<GetCurrentUserDataResult, ConnectError> GetCurrentUserDataOutcome;
      typedef Aws::Utils::Outcome<GetFederationTokenResult, ConnectError> GetFederationTokenOutcome;
      typedef Aws::Utils::Outcome<GetFlowAssociationResult, ConnectError> GetFlowAssociationOutcome;
      typedef Aws::Utils::Outcome<GetMetricDataResult, ConnectError> GetMetricDataOutcome;
      typedef Aws::Utils::Outcome<GetMetricDataV2Result, ConnectError> GetMetricDataV2Outcome;
      typedef Aws::Utils::Outcome<GetPromptFileResult, ConnectError> GetPromptFileOutcome;
      typedef Aws::Utils::Outcome<GetTaskTemplateResult, ConnectError> GetTaskTemplateOutcome;
      typedef Aws::Utils::Outcome<GetTrafficDistributionResult, ConnectError> GetTrafficDistributionOutcome;
      typedef Aws::Utils::Outcome<ImportPhoneNumberResult, ConnectError> ImportPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<ListAgentStatusesResult, ConnectError> ListAgentStatusesOutcome;
      typedef Aws::Utils::Outcome<ListAnalyticsDataAssociationsResult, ConnectError> ListAnalyticsDataAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListApprovedOriginsResult, ConnectError> ListApprovedOriginsOutcome;
      typedef Aws::Utils::Outcome<ListBotsResult, ConnectError> ListBotsOutcome;
      typedef Aws::Utils::Outcome<ListContactEvaluationsResult, ConnectError> ListContactEvaluationsOutcome;
      typedef Aws::Utils::Outcome<ListContactFlowModulesResult, ConnectError> ListContactFlowModulesOutcome;
      typedef Aws::Utils::Outcome<ListContactFlowsResult, ConnectError> ListContactFlowsOutcome;
      typedef Aws::Utils::Outcome<ListContactReferencesResult, ConnectError> ListContactReferencesOutcome;
      typedef Aws::Utils::Outcome<ListDefaultVocabulariesResult, ConnectError> ListDefaultVocabulariesOutcome;
      typedef Aws::Utils::Outcome<ListEvaluationFormVersionsResult, ConnectError> ListEvaluationFormVersionsOutcome;
      typedef Aws::Utils::Outcome<ListEvaluationFormsResult, ConnectError> ListEvaluationFormsOutcome;
      typedef Aws::Utils::Outcome<ListFlowAssociationsResult, ConnectError> ListFlowAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListHoursOfOperationsResult, ConnectError> ListHoursOfOperationsOutcome;
      typedef Aws::Utils::Outcome<ListInstanceAttributesResult, ConnectError> ListInstanceAttributesOutcome;
      typedef Aws::Utils::Outcome<ListInstanceStorageConfigsResult, ConnectError> ListInstanceStorageConfigsOutcome;
      typedef Aws::Utils::Outcome<ListInstancesResult, ConnectError> ListInstancesOutcome;
      typedef Aws::Utils::Outcome<ListIntegrationAssociationsResult, ConnectError> ListIntegrationAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListLambdaFunctionsResult, ConnectError> ListLambdaFunctionsOutcome;
      typedef Aws::Utils::Outcome<ListLexBotsResult, ConnectError> ListLexBotsOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumbersResult, ConnectError> ListPhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumbersV2Result, ConnectError> ListPhoneNumbersV2Outcome;
      typedef Aws::Utils::Outcome<ListPredefinedAttributesResult, ConnectError> ListPredefinedAttributesOutcome;
      typedef Aws::Utils::Outcome<ListPromptsResult, ConnectError> ListPromptsOutcome;
      typedef Aws::Utils::Outcome<ListQueueQuickConnectsResult, ConnectError> ListQueueQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<ListQueuesResult, ConnectError> ListQueuesOutcome;
      typedef Aws::Utils::Outcome<ListQuickConnectsResult, ConnectError> ListQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<ListRealtimeContactAnalysisSegmentsV2Result, ConnectError> ListRealtimeContactAnalysisSegmentsV2Outcome;
      typedef Aws::Utils::Outcome<ListRoutingProfileQueuesResult, ConnectError> ListRoutingProfileQueuesOutcome;
      typedef Aws::Utils::Outcome<ListRoutingProfilesResult, ConnectError> ListRoutingProfilesOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, ConnectError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListSecurityKeysResult, ConnectError> ListSecurityKeysOutcome;
      typedef Aws::Utils::Outcome<ListSecurityProfileApplicationsResult, ConnectError> ListSecurityProfileApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListSecurityProfilePermissionsResult, ConnectError> ListSecurityProfilePermissionsOutcome;
      typedef Aws::Utils::Outcome<ListSecurityProfilesResult, ConnectError> ListSecurityProfilesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTaskTemplatesResult, ConnectError> ListTaskTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListTrafficDistributionGroupUsersResult, ConnectError> ListTrafficDistributionGroupUsersOutcome;
      typedef Aws::Utils::Outcome<ListTrafficDistributionGroupsResult, ConnectError> ListTrafficDistributionGroupsOutcome;
      typedef Aws::Utils::Outcome<ListUseCasesResult, ConnectError> ListUseCasesOutcome;
      typedef Aws::Utils::Outcome<ListUserHierarchyGroupsResult, ConnectError> ListUserHierarchyGroupsOutcome;
      typedef Aws::Utils::Outcome<ListUserProficienciesResult, ConnectError> ListUserProficienciesOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, ConnectError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<ListViewVersionsResult, ConnectError> ListViewVersionsOutcome;
      typedef Aws::Utils::Outcome<ListViewsResult, ConnectError> ListViewsOutcome;
      typedef Aws::Utils::Outcome<MonitorContactResult, ConnectError> MonitorContactOutcome;
      typedef Aws::Utils::Outcome<PauseContactResult, ConnectError> PauseContactOutcome;
      typedef Aws::Utils::Outcome<PutUserStatusResult, ConnectError> PutUserStatusOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> ReleasePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<ReplicateInstanceResult, ConnectError> ReplicateInstanceOutcome;
      typedef Aws::Utils::Outcome<ResumeContactResult, ConnectError> ResumeContactOutcome;
      typedef Aws::Utils::Outcome<ResumeContactRecordingResult, ConnectError> ResumeContactRecordingOutcome;
      typedef Aws::Utils::Outcome<SearchAvailablePhoneNumbersResult, ConnectError> SearchAvailablePhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<SearchContactsResult, ConnectError> SearchContactsOutcome;
      typedef Aws::Utils::Outcome<SearchHoursOfOperationsResult, ConnectError> SearchHoursOfOperationsOutcome;
      typedef Aws::Utils::Outcome<SearchPredefinedAttributesResult, ConnectError> SearchPredefinedAttributesOutcome;
      typedef Aws::Utils::Outcome<SearchPromptsResult, ConnectError> SearchPromptsOutcome;
      typedef Aws::Utils::Outcome<SearchQueuesResult, ConnectError> SearchQueuesOutcome;
      typedef Aws::Utils::Outcome<SearchQuickConnectsResult, ConnectError> SearchQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<SearchResourceTagsResult, ConnectError> SearchResourceTagsOutcome;
      typedef Aws::Utils::Outcome<SearchRoutingProfilesResult, ConnectError> SearchRoutingProfilesOutcome;
      typedef Aws::Utils::Outcome<SearchSecurityProfilesResult, ConnectError> SearchSecurityProfilesOutcome;
      typedef Aws::Utils::Outcome<SearchUsersResult, ConnectError> SearchUsersOutcome;
      typedef Aws::Utils::Outcome<SearchVocabulariesResult, ConnectError> SearchVocabulariesOutcome;
      typedef Aws::Utils::Outcome<SendChatIntegrationEventResult, ConnectError> SendChatIntegrationEventOutcome;
      typedef Aws::Utils::Outcome<StartChatContactResult, ConnectError> StartChatContactOutcome;
      typedef Aws::Utils::Outcome<StartContactEvaluationResult, ConnectError> StartContactEvaluationOutcome;
      typedef Aws::Utils::Outcome<StartContactRecordingResult, ConnectError> StartContactRecordingOutcome;
      typedef Aws::Utils::Outcome<StartContactStreamingResult, ConnectError> StartContactStreamingOutcome;
      typedef Aws::Utils::Outcome<StartOutboundVoiceContactResult, ConnectError> StartOutboundVoiceContactOutcome;
      typedef Aws::Utils::Outcome<StartTaskContactResult, ConnectError> StartTaskContactOutcome;
      typedef Aws::Utils::Outcome<StartWebRTCContactResult, ConnectError> StartWebRTCContactOutcome;
      typedef Aws::Utils::Outcome<StopContactResult, ConnectError> StopContactOutcome;
      typedef Aws::Utils::Outcome<StopContactRecordingResult, ConnectError> StopContactRecordingOutcome;
      typedef Aws::Utils::Outcome<StopContactStreamingResult, ConnectError> StopContactStreamingOutcome;
      typedef Aws::Utils::Outcome<SubmitContactEvaluationResult, ConnectError> SubmitContactEvaluationOutcome;
      typedef Aws::Utils::Outcome<SuspendContactRecordingResult, ConnectError> SuspendContactRecordingOutcome;
      typedef Aws::Utils::Outcome<TagContactResult, ConnectError> TagContactOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TransferContactResult, ConnectError> TransferContactOutcome;
      typedef Aws::Utils::Outcome<UntagContactResult, ConnectError> UntagContactOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateAgentStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateContactResult, ConnectError> UpdateContactOutcome;
      typedef Aws::Utils::Outcome<UpdateContactAttributesResult, ConnectError> UpdateContactAttributesOutcome;
      typedef Aws::Utils::Outcome<UpdateContactEvaluationResult, ConnectError> UpdateContactEvaluationOutcome;
      typedef Aws::Utils::Outcome<UpdateContactFlowContentResult, ConnectError> UpdateContactFlowContentOutcome;
      typedef Aws::Utils::Outcome<UpdateContactFlowMetadataResult, ConnectError> UpdateContactFlowMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateContactFlowModuleContentResult, ConnectError> UpdateContactFlowModuleContentOutcome;
      typedef Aws::Utils::Outcome<UpdateContactFlowModuleMetadataResult, ConnectError> UpdateContactFlowModuleMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateContactFlowNameResult, ConnectError> UpdateContactFlowNameOutcome;
      typedef Aws::Utils::Outcome<UpdateContactRoutingDataResult, ConnectError> UpdateContactRoutingDataOutcome;
      typedef Aws::Utils::Outcome<UpdateContactScheduleResult, ConnectError> UpdateContactScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateEvaluationFormResult, ConnectError> UpdateEvaluationFormOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateInstanceAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateInstanceStorageConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateParticipantRoleConfigResult, ConnectError> UpdateParticipantRoleConfigOutcome;
      typedef Aws::Utils::Outcome<UpdatePhoneNumberResult, ConnectError> UpdatePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdatePhoneNumberMetadataOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdatePredefinedAttributeOutcome;
      typedef Aws::Utils::Outcome<UpdatePromptResult, ConnectError> UpdatePromptOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueMaxContactsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueOutboundCallerConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueStatusOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQuickConnectConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQuickConnectNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileAgentAvailabilityTimerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileConcurrencyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileDefaultOutboundQueueOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileQueuesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateTaskTemplateResult, ConnectError> UpdateTaskTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateTrafficDistributionResult, ConnectError> UpdateTrafficDistributionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyGroupNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyStructureOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserIdentityInfoOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserPhoneConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserProficienciesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserRoutingProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserSecurityProfilesOutcome;
      typedef Aws::Utils::Outcome<UpdateViewContentResult, ConnectError> UpdateViewContentOutcome;
      typedef Aws::Utils::Outcome<UpdateViewMetadataResult, ConnectError> UpdateViewMetadataOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateEvaluationFormOutcome> ActivateEvaluationFormOutcomeCallable;
      typedef std::future<AssociateAnalyticsDataSetOutcome> AssociateAnalyticsDataSetOutcomeCallable;
      typedef std::future<AssociateApprovedOriginOutcome> AssociateApprovedOriginOutcomeCallable;
      typedef std::future<AssociateBotOutcome> AssociateBotOutcomeCallable;
      typedef std::future<AssociateDefaultVocabularyOutcome> AssociateDefaultVocabularyOutcomeCallable;
      typedef std::future<AssociateFlowOutcome> AssociateFlowOutcomeCallable;
      typedef std::future<AssociateInstanceStorageConfigOutcome> AssociateInstanceStorageConfigOutcomeCallable;
      typedef std::future<AssociateLambdaFunctionOutcome> AssociateLambdaFunctionOutcomeCallable;
      typedef std::future<AssociateLexBotOutcome> AssociateLexBotOutcomeCallable;
      typedef std::future<AssociatePhoneNumberContactFlowOutcome> AssociatePhoneNumberContactFlowOutcomeCallable;
      typedef std::future<AssociateQueueQuickConnectsOutcome> AssociateQueueQuickConnectsOutcomeCallable;
      typedef std::future<AssociateRoutingProfileQueuesOutcome> AssociateRoutingProfileQueuesOutcomeCallable;
      typedef std::future<AssociateSecurityKeyOutcome> AssociateSecurityKeyOutcomeCallable;
      typedef std::future<AssociateTrafficDistributionGroupUserOutcome> AssociateTrafficDistributionGroupUserOutcomeCallable;
      typedef std::future<AssociateUserProficienciesOutcome> AssociateUserProficienciesOutcomeCallable;
      typedef std::future<BatchAssociateAnalyticsDataSetOutcome> BatchAssociateAnalyticsDataSetOutcomeCallable;
      typedef std::future<BatchDisassociateAnalyticsDataSetOutcome> BatchDisassociateAnalyticsDataSetOutcomeCallable;
      typedef std::future<BatchGetFlowAssociationOutcome> BatchGetFlowAssociationOutcomeCallable;
      typedef std::future<BatchPutContactOutcome> BatchPutContactOutcomeCallable;
      typedef std::future<ClaimPhoneNumberOutcome> ClaimPhoneNumberOutcomeCallable;
      typedef std::future<CreateAgentStatusOutcome> CreateAgentStatusOutcomeCallable;
      typedef std::future<CreateContactFlowOutcome> CreateContactFlowOutcomeCallable;
      typedef std::future<CreateContactFlowModuleOutcome> CreateContactFlowModuleOutcomeCallable;
      typedef std::future<CreateEvaluationFormOutcome> CreateEvaluationFormOutcomeCallable;
      typedef std::future<CreateHoursOfOperationOutcome> CreateHoursOfOperationOutcomeCallable;
      typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
      typedef std::future<CreateIntegrationAssociationOutcome> CreateIntegrationAssociationOutcomeCallable;
      typedef std::future<CreateParticipantOutcome> CreateParticipantOutcomeCallable;
      typedef std::future<CreatePersistentContactAssociationOutcome> CreatePersistentContactAssociationOutcomeCallable;
      typedef std::future<CreatePredefinedAttributeOutcome> CreatePredefinedAttributeOutcomeCallable;
      typedef std::future<CreatePromptOutcome> CreatePromptOutcomeCallable;
      typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
      typedef std::future<CreateQuickConnectOutcome> CreateQuickConnectOutcomeCallable;
      typedef std::future<CreateRoutingProfileOutcome> CreateRoutingProfileOutcomeCallable;
      typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
      typedef std::future<CreateSecurityProfileOutcome> CreateSecurityProfileOutcomeCallable;
      typedef std::future<CreateTaskTemplateOutcome> CreateTaskTemplateOutcomeCallable;
      typedef std::future<CreateTrafficDistributionGroupOutcome> CreateTrafficDistributionGroupOutcomeCallable;
      typedef std::future<CreateUseCaseOutcome> CreateUseCaseOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<CreateUserHierarchyGroupOutcome> CreateUserHierarchyGroupOutcomeCallable;
      typedef std::future<CreateViewOutcome> CreateViewOutcomeCallable;
      typedef std::future<CreateViewVersionOutcome> CreateViewVersionOutcomeCallable;
      typedef std::future<CreateVocabularyOutcome> CreateVocabularyOutcomeCallable;
      typedef std::future<DeactivateEvaluationFormOutcome> DeactivateEvaluationFormOutcomeCallable;
      typedef std::future<DeleteContactEvaluationOutcome> DeleteContactEvaluationOutcomeCallable;
      typedef std::future<DeleteContactFlowOutcome> DeleteContactFlowOutcomeCallable;
      typedef std::future<DeleteContactFlowModuleOutcome> DeleteContactFlowModuleOutcomeCallable;
      typedef std::future<DeleteEvaluationFormOutcome> DeleteEvaluationFormOutcomeCallable;
      typedef std::future<DeleteHoursOfOperationOutcome> DeleteHoursOfOperationOutcomeCallable;
      typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
      typedef std::future<DeleteIntegrationAssociationOutcome> DeleteIntegrationAssociationOutcomeCallable;
      typedef std::future<DeletePredefinedAttributeOutcome> DeletePredefinedAttributeOutcomeCallable;
      typedef std::future<DeletePromptOutcome> DeletePromptOutcomeCallable;
      typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
      typedef std::future<DeleteQuickConnectOutcome> DeleteQuickConnectOutcomeCallable;
      typedef std::future<DeleteRoutingProfileOutcome> DeleteRoutingProfileOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<DeleteSecurityProfileOutcome> DeleteSecurityProfileOutcomeCallable;
      typedef std::future<DeleteTaskTemplateOutcome> DeleteTaskTemplateOutcomeCallable;
      typedef std::future<DeleteTrafficDistributionGroupOutcome> DeleteTrafficDistributionGroupOutcomeCallable;
      typedef std::future<DeleteUseCaseOutcome> DeleteUseCaseOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DeleteUserHierarchyGroupOutcome> DeleteUserHierarchyGroupOutcomeCallable;
      typedef std::future<DeleteViewOutcome> DeleteViewOutcomeCallable;
      typedef std::future<DeleteViewVersionOutcome> DeleteViewVersionOutcomeCallable;
      typedef std::future<DeleteVocabularyOutcome> DeleteVocabularyOutcomeCallable;
      typedef std::future<DescribeAgentStatusOutcome> DescribeAgentStatusOutcomeCallable;
      typedef std::future<DescribeContactOutcome> DescribeContactOutcomeCallable;
      typedef std::future<DescribeContactEvaluationOutcome> DescribeContactEvaluationOutcomeCallable;
      typedef std::future<DescribeContactFlowOutcome> DescribeContactFlowOutcomeCallable;
      typedef std::future<DescribeContactFlowModuleOutcome> DescribeContactFlowModuleOutcomeCallable;
      typedef std::future<DescribeEvaluationFormOutcome> DescribeEvaluationFormOutcomeCallable;
      typedef std::future<DescribeHoursOfOperationOutcome> DescribeHoursOfOperationOutcomeCallable;
      typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
      typedef std::future<DescribeInstanceAttributeOutcome> DescribeInstanceAttributeOutcomeCallable;
      typedef std::future<DescribeInstanceStorageConfigOutcome> DescribeInstanceStorageConfigOutcomeCallable;
      typedef std::future<DescribePhoneNumberOutcome> DescribePhoneNumberOutcomeCallable;
      typedef std::future<DescribePredefinedAttributeOutcome> DescribePredefinedAttributeOutcomeCallable;
      typedef std::future<DescribePromptOutcome> DescribePromptOutcomeCallable;
      typedef std::future<DescribeQueueOutcome> DescribeQueueOutcomeCallable;
      typedef std::future<DescribeQuickConnectOutcome> DescribeQuickConnectOutcomeCallable;
      typedef std::future<DescribeRoutingProfileOutcome> DescribeRoutingProfileOutcomeCallable;
      typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
      typedef std::future<DescribeSecurityProfileOutcome> DescribeSecurityProfileOutcomeCallable;
      typedef std::future<DescribeTrafficDistributionGroupOutcome> DescribeTrafficDistributionGroupOutcomeCallable;
      typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
      typedef std::future<DescribeUserHierarchyGroupOutcome> DescribeUserHierarchyGroupOutcomeCallable;
      typedef std::future<DescribeUserHierarchyStructureOutcome> DescribeUserHierarchyStructureOutcomeCallable;
      typedef std::future<DescribeViewOutcome> DescribeViewOutcomeCallable;
      typedef std::future<DescribeVocabularyOutcome> DescribeVocabularyOutcomeCallable;
      typedef std::future<DisassociateAnalyticsDataSetOutcome> DisassociateAnalyticsDataSetOutcomeCallable;
      typedef std::future<DisassociateApprovedOriginOutcome> DisassociateApprovedOriginOutcomeCallable;
      typedef std::future<DisassociateBotOutcome> DisassociateBotOutcomeCallable;
      typedef std::future<DisassociateFlowOutcome> DisassociateFlowOutcomeCallable;
      typedef std::future<DisassociateInstanceStorageConfigOutcome> DisassociateInstanceStorageConfigOutcomeCallable;
      typedef std::future<DisassociateLambdaFunctionOutcome> DisassociateLambdaFunctionOutcomeCallable;
      typedef std::future<DisassociateLexBotOutcome> DisassociateLexBotOutcomeCallable;
      typedef std::future<DisassociatePhoneNumberContactFlowOutcome> DisassociatePhoneNumberContactFlowOutcomeCallable;
      typedef std::future<DisassociateQueueQuickConnectsOutcome> DisassociateQueueQuickConnectsOutcomeCallable;
      typedef std::future<DisassociateRoutingProfileQueuesOutcome> DisassociateRoutingProfileQueuesOutcomeCallable;
      typedef std::future<DisassociateSecurityKeyOutcome> DisassociateSecurityKeyOutcomeCallable;
      typedef std::future<DisassociateTrafficDistributionGroupUserOutcome> DisassociateTrafficDistributionGroupUserOutcomeCallable;
      typedef std::future<DisassociateUserProficienciesOutcome> DisassociateUserProficienciesOutcomeCallable;
      typedef std::future<DismissUserContactOutcome> DismissUserContactOutcomeCallable;
      typedef std::future<GetContactAttributesOutcome> GetContactAttributesOutcomeCallable;
      typedef std::future<GetCurrentMetricDataOutcome> GetCurrentMetricDataOutcomeCallable;
      typedef std::future<GetCurrentUserDataOutcome> GetCurrentUserDataOutcomeCallable;
      typedef std::future<GetFederationTokenOutcome> GetFederationTokenOutcomeCallable;
      typedef std::future<GetFlowAssociationOutcome> GetFlowAssociationOutcomeCallable;
      typedef std::future<GetMetricDataOutcome> GetMetricDataOutcomeCallable;
      typedef std::future<GetMetricDataV2Outcome> GetMetricDataV2OutcomeCallable;
      typedef std::future<GetPromptFileOutcome> GetPromptFileOutcomeCallable;
      typedef std::future<GetTaskTemplateOutcome> GetTaskTemplateOutcomeCallable;
      typedef std::future<GetTrafficDistributionOutcome> GetTrafficDistributionOutcomeCallable;
      typedef std::future<ImportPhoneNumberOutcome> ImportPhoneNumberOutcomeCallable;
      typedef std::future<ListAgentStatusesOutcome> ListAgentStatusesOutcomeCallable;
      typedef std::future<ListAnalyticsDataAssociationsOutcome> ListAnalyticsDataAssociationsOutcomeCallable;
      typedef std::future<ListApprovedOriginsOutcome> ListApprovedOriginsOutcomeCallable;
      typedef std::future<ListBotsOutcome> ListBotsOutcomeCallable;
      typedef std::future<ListContactEvaluationsOutcome> ListContactEvaluationsOutcomeCallable;
      typedef std::future<ListContactFlowModulesOutcome> ListContactFlowModulesOutcomeCallable;
      typedef std::future<ListContactFlowsOutcome> ListContactFlowsOutcomeCallable;
      typedef std::future<ListContactReferencesOutcome> ListContactReferencesOutcomeCallable;
      typedef std::future<ListDefaultVocabulariesOutcome> ListDefaultVocabulariesOutcomeCallable;
      typedef std::future<ListEvaluationFormVersionsOutcome> ListEvaluationFormVersionsOutcomeCallable;
      typedef std::future<ListEvaluationFormsOutcome> ListEvaluationFormsOutcomeCallable;
      typedef std::future<ListFlowAssociationsOutcome> ListFlowAssociationsOutcomeCallable;
      typedef std::future<ListHoursOfOperationsOutcome> ListHoursOfOperationsOutcomeCallable;
      typedef std::future<ListInstanceAttributesOutcome> ListInstanceAttributesOutcomeCallable;
      typedef std::future<ListInstanceStorageConfigsOutcome> ListInstanceStorageConfigsOutcomeCallable;
      typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
      typedef std::future<ListIntegrationAssociationsOutcome> ListIntegrationAssociationsOutcomeCallable;
      typedef std::future<ListLambdaFunctionsOutcome> ListLambdaFunctionsOutcomeCallable;
      typedef std::future<ListLexBotsOutcome> ListLexBotsOutcomeCallable;
      typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
      typedef std::future<ListPhoneNumbersV2Outcome> ListPhoneNumbersV2OutcomeCallable;
      typedef std::future<ListPredefinedAttributesOutcome> ListPredefinedAttributesOutcomeCallable;
      typedef std::future<ListPromptsOutcome> ListPromptsOutcomeCallable;
      typedef std::future<ListQueueQuickConnectsOutcome> ListQueueQuickConnectsOutcomeCallable;
      typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
      typedef std::future<ListQuickConnectsOutcome> ListQuickConnectsOutcomeCallable;
      typedef std::future<ListRealtimeContactAnalysisSegmentsV2Outcome> ListRealtimeContactAnalysisSegmentsV2OutcomeCallable;
      typedef std::future<ListRoutingProfileQueuesOutcome> ListRoutingProfileQueuesOutcomeCallable;
      typedef std::future<ListRoutingProfilesOutcome> ListRoutingProfilesOutcomeCallable;
      typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
      typedef std::future<ListSecurityKeysOutcome> ListSecurityKeysOutcomeCallable;
      typedef std::future<ListSecurityProfileApplicationsOutcome> ListSecurityProfileApplicationsOutcomeCallable;
      typedef std::future<ListSecurityProfilePermissionsOutcome> ListSecurityProfilePermissionsOutcomeCallable;
      typedef std::future<ListSecurityProfilesOutcome> ListSecurityProfilesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTaskTemplatesOutcome> ListTaskTemplatesOutcomeCallable;
      typedef std::future<ListTrafficDistributionGroupUsersOutcome> ListTrafficDistributionGroupUsersOutcomeCallable;
      typedef std::future<ListTrafficDistributionGroupsOutcome> ListTrafficDistributionGroupsOutcomeCallable;
      typedef std::future<ListUseCasesOutcome> ListUseCasesOutcomeCallable;
      typedef std::future<ListUserHierarchyGroupsOutcome> ListUserHierarchyGroupsOutcomeCallable;
      typedef std::future<ListUserProficienciesOutcome> ListUserProficienciesOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<ListViewVersionsOutcome> ListViewVersionsOutcomeCallable;
      typedef std::future<ListViewsOutcome> ListViewsOutcomeCallable;
      typedef std::future<MonitorContactOutcome> MonitorContactOutcomeCallable;
      typedef std::future<PauseContactOutcome> PauseContactOutcomeCallable;
      typedef std::future<PutUserStatusOutcome> PutUserStatusOutcomeCallable;
      typedef std::future<ReleasePhoneNumberOutcome> ReleasePhoneNumberOutcomeCallable;
      typedef std::future<ReplicateInstanceOutcome> ReplicateInstanceOutcomeCallable;
      typedef std::future<ResumeContactOutcome> ResumeContactOutcomeCallable;
      typedef std::future<ResumeContactRecordingOutcome> ResumeContactRecordingOutcomeCallable;
      typedef std::future<SearchAvailablePhoneNumbersOutcome> SearchAvailablePhoneNumbersOutcomeCallable;
      typedef std::future<SearchContactsOutcome> SearchContactsOutcomeCallable;
      typedef std::future<SearchHoursOfOperationsOutcome> SearchHoursOfOperationsOutcomeCallable;
      typedef std::future<SearchPredefinedAttributesOutcome> SearchPredefinedAttributesOutcomeCallable;
      typedef std::future<SearchPromptsOutcome> SearchPromptsOutcomeCallable;
      typedef std::future<SearchQueuesOutcome> SearchQueuesOutcomeCallable;
      typedef std::future<SearchQuickConnectsOutcome> SearchQuickConnectsOutcomeCallable;
      typedef std::future<SearchResourceTagsOutcome> SearchResourceTagsOutcomeCallable;
      typedef std::future<SearchRoutingProfilesOutcome> SearchRoutingProfilesOutcomeCallable;
      typedef std::future<SearchSecurityProfilesOutcome> SearchSecurityProfilesOutcomeCallable;
      typedef std::future<SearchUsersOutcome> SearchUsersOutcomeCallable;
      typedef std::future<SearchVocabulariesOutcome> SearchVocabulariesOutcomeCallable;
      typedef std::future<SendChatIntegrationEventOutcome> SendChatIntegrationEventOutcomeCallable;
      typedef std::future<StartChatContactOutcome> StartChatContactOutcomeCallable;
      typedef std::future<StartContactEvaluationOutcome> StartContactEvaluationOutcomeCallable;
      typedef std::future<StartContactRecordingOutcome> StartContactRecordingOutcomeCallable;
      typedef std::future<StartContactStreamingOutcome> StartContactStreamingOutcomeCallable;
      typedef std::future<StartOutboundVoiceContactOutcome> StartOutboundVoiceContactOutcomeCallable;
      typedef std::future<StartTaskContactOutcome> StartTaskContactOutcomeCallable;
      typedef std::future<StartWebRTCContactOutcome> StartWebRTCContactOutcomeCallable;
      typedef std::future<StopContactOutcome> StopContactOutcomeCallable;
      typedef std::future<StopContactRecordingOutcome> StopContactRecordingOutcomeCallable;
      typedef std::future<StopContactStreamingOutcome> StopContactStreamingOutcomeCallable;
      typedef std::future<SubmitContactEvaluationOutcome> SubmitContactEvaluationOutcomeCallable;
      typedef std::future<SuspendContactRecordingOutcome> SuspendContactRecordingOutcomeCallable;
      typedef std::future<TagContactOutcome> TagContactOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TransferContactOutcome> TransferContactOutcomeCallable;
      typedef std::future<UntagContactOutcome> UntagContactOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAgentStatusOutcome> UpdateAgentStatusOutcomeCallable;
      typedef std::future<UpdateContactOutcome> UpdateContactOutcomeCallable;
      typedef std::future<UpdateContactAttributesOutcome> UpdateContactAttributesOutcomeCallable;
      typedef std::future<UpdateContactEvaluationOutcome> UpdateContactEvaluationOutcomeCallable;
      typedef std::future<UpdateContactFlowContentOutcome> UpdateContactFlowContentOutcomeCallable;
      typedef std::future<UpdateContactFlowMetadataOutcome> UpdateContactFlowMetadataOutcomeCallable;
      typedef std::future<UpdateContactFlowModuleContentOutcome> UpdateContactFlowModuleContentOutcomeCallable;
      typedef std::future<UpdateContactFlowModuleMetadataOutcome> UpdateContactFlowModuleMetadataOutcomeCallable;
      typedef std::future<UpdateContactFlowNameOutcome> UpdateContactFlowNameOutcomeCallable;
      typedef std::future<UpdateContactRoutingDataOutcome> UpdateContactRoutingDataOutcomeCallable;
      typedef std::future<UpdateContactScheduleOutcome> UpdateContactScheduleOutcomeCallable;
      typedef std::future<UpdateEvaluationFormOutcome> UpdateEvaluationFormOutcomeCallable;
      typedef std::future<UpdateHoursOfOperationOutcome> UpdateHoursOfOperationOutcomeCallable;
      typedef std::future<UpdateInstanceAttributeOutcome> UpdateInstanceAttributeOutcomeCallable;
      typedef std::future<UpdateInstanceStorageConfigOutcome> UpdateInstanceStorageConfigOutcomeCallable;
      typedef std::future<UpdateParticipantRoleConfigOutcome> UpdateParticipantRoleConfigOutcomeCallable;
      typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
      typedef std::future<UpdatePhoneNumberMetadataOutcome> UpdatePhoneNumberMetadataOutcomeCallable;
      typedef std::future<UpdatePredefinedAttributeOutcome> UpdatePredefinedAttributeOutcomeCallable;
      typedef std::future<UpdatePromptOutcome> UpdatePromptOutcomeCallable;
      typedef std::future<UpdateQueueHoursOfOperationOutcome> UpdateQueueHoursOfOperationOutcomeCallable;
      typedef std::future<UpdateQueueMaxContactsOutcome> UpdateQueueMaxContactsOutcomeCallable;
      typedef std::future<UpdateQueueNameOutcome> UpdateQueueNameOutcomeCallable;
      typedef std::future<UpdateQueueOutboundCallerConfigOutcome> UpdateQueueOutboundCallerConfigOutcomeCallable;
      typedef std::future<UpdateQueueStatusOutcome> UpdateQueueStatusOutcomeCallable;
      typedef std::future<UpdateQuickConnectConfigOutcome> UpdateQuickConnectConfigOutcomeCallable;
      typedef std::future<UpdateQuickConnectNameOutcome> UpdateQuickConnectNameOutcomeCallable;
      typedef std::future<UpdateRoutingProfileAgentAvailabilityTimerOutcome> UpdateRoutingProfileAgentAvailabilityTimerOutcomeCallable;
      typedef std::future<UpdateRoutingProfileConcurrencyOutcome> UpdateRoutingProfileConcurrencyOutcomeCallable;
      typedef std::future<UpdateRoutingProfileDefaultOutboundQueueOutcome> UpdateRoutingProfileDefaultOutboundQueueOutcomeCallable;
      typedef std::future<UpdateRoutingProfileNameOutcome> UpdateRoutingProfileNameOutcomeCallable;
      typedef std::future<UpdateRoutingProfileQueuesOutcome> UpdateRoutingProfileQueuesOutcomeCallable;
      typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
      typedef std::future<UpdateSecurityProfileOutcome> UpdateSecurityProfileOutcomeCallable;
      typedef std::future<UpdateTaskTemplateOutcome> UpdateTaskTemplateOutcomeCallable;
      typedef std::future<UpdateTrafficDistributionOutcome> UpdateTrafficDistributionOutcomeCallable;
      typedef std::future<UpdateUserHierarchyOutcome> UpdateUserHierarchyOutcomeCallable;
      typedef std::future<UpdateUserHierarchyGroupNameOutcome> UpdateUserHierarchyGroupNameOutcomeCallable;
      typedef std::future<UpdateUserHierarchyStructureOutcome> UpdateUserHierarchyStructureOutcomeCallable;
      typedef std::future<UpdateUserIdentityInfoOutcome> UpdateUserIdentityInfoOutcomeCallable;
      typedef std::future<UpdateUserPhoneConfigOutcome> UpdateUserPhoneConfigOutcomeCallable;
      typedef std::future<UpdateUserProficienciesOutcome> UpdateUserProficienciesOutcomeCallable;
      typedef std::future<UpdateUserRoutingProfileOutcome> UpdateUserRoutingProfileOutcomeCallable;
      typedef std::future<UpdateUserSecurityProfilesOutcome> UpdateUserSecurityProfilesOutcomeCallable;
      typedef std::future<UpdateViewContentOutcome> UpdateViewContentOutcomeCallable;
      typedef std::future<UpdateViewMetadataOutcome> UpdateViewMetadataOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConnectClient*, const Model::ActivateEvaluationFormRequest&, const Model::ActivateEvaluationFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateEvaluationFormResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateAnalyticsDataSetRequest&, const Model::AssociateAnalyticsDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAnalyticsDataSetResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateApprovedOriginRequest&, const Model::AssociateApprovedOriginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApprovedOriginResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateBotRequest&, const Model::AssociateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateDefaultVocabularyRequest&, const Model::AssociateDefaultVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDefaultVocabularyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateFlowRequest&, const Model::AssociateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateInstanceStorageConfigRequest&, const Model::AssociateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateLambdaFunctionRequest&, const Model::AssociateLambdaFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLambdaFunctionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateLexBotRequest&, const Model::AssociateLexBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLexBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociatePhoneNumberContactFlowRequest&, const Model::AssociatePhoneNumberContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumberContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateQueueQuickConnectsRequest&, const Model::AssociateQueueQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateQueueQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateRoutingProfileQueuesRequest&, const Model::AssociateRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateSecurityKeyRequest&, const Model::AssociateSecurityKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSecurityKeyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateTrafficDistributionGroupUserRequest&, const Model::AssociateTrafficDistributionGroupUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrafficDistributionGroupUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateUserProficienciesRequest&, const Model::AssociateUserProficienciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateUserProficienciesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::BatchAssociateAnalyticsDataSetRequest&, const Model::BatchAssociateAnalyticsDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateAnalyticsDataSetResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::BatchDisassociateAnalyticsDataSetRequest&, const Model::BatchDisassociateAnalyticsDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateAnalyticsDataSetResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::BatchGetFlowAssociationRequest&, const Model::BatchGetFlowAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetFlowAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::BatchPutContactRequest&, const Model::BatchPutContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ClaimPhoneNumberRequest&, const Model::ClaimPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClaimPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateAgentStatusRequest&, const Model::CreateAgentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgentStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateContactFlowRequest&, const Model::CreateContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateContactFlowModuleRequest&, const Model::CreateContactFlowModuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactFlowModuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateEvaluationFormRequest&, const Model::CreateEvaluationFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEvaluationFormResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateHoursOfOperationRequest&, const Model::CreateHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateInstanceRequest&, const Model::CreateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateIntegrationAssociationRequest&, const Model::CreateIntegrationAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateParticipantRequest&, const Model::CreateParticipantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParticipantResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreatePersistentContactAssociationRequest&, const Model::CreatePersistentContactAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePersistentContactAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreatePredefinedAttributeRequest&, const Model::CreatePredefinedAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePredefinedAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreatePromptRequest&, const Model::CreatePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePromptResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateQueueRequest&, const Model::CreateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateQuickConnectRequest&, const Model::CreateQuickConnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQuickConnectResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateRoutingProfileRequest&, const Model::CreateRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateSecurityProfileRequest&, const Model::CreateSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateTaskTemplateRequest&, const Model::CreateTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTaskTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateTrafficDistributionGroupRequest&, const Model::CreateTrafficDistributionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficDistributionGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateUseCaseRequest&, const Model::CreateUseCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUseCaseResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateUserHierarchyGroupRequest&, const Model::CreateUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateViewRequest&, const Model::CreateViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateViewResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateViewVersionRequest&, const Model::CreateViewVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateViewVersionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateVocabularyRequest&, const Model::CreateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeactivateEvaluationFormRequest&, const Model::DeactivateEvaluationFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateEvaluationFormResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteContactEvaluationRequest&, const Model::DeleteContactEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteContactFlowRequest&, const Model::DeleteContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteContactFlowModuleRequest&, const Model::DeleteContactFlowModuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactFlowModuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteEvaluationFormRequest&, const Model::DeleteEvaluationFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEvaluationFormResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteHoursOfOperationRequest&, const Model::DeleteHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteIntegrationAssociationRequest&, const Model::DeleteIntegrationAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeletePredefinedAttributeRequest&, const Model::DeletePredefinedAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePredefinedAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeletePromptRequest&, const Model::DeletePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePromptResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteQueueRequest&, const Model::DeleteQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteQuickConnectRequest&, const Model::DeleteQuickConnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQuickConnectResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteRoutingProfileRequest&, const Model::DeleteRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteSecurityProfileRequest&, const Model::DeleteSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteTaskTemplateRequest&, const Model::DeleteTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTaskTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteTrafficDistributionGroupRequest&, const Model::DeleteTrafficDistributionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficDistributionGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUseCaseRequest&, const Model::DeleteUseCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUseCaseResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUserHierarchyGroupRequest&, const Model::DeleteUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteViewRequest&, const Model::DeleteViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteViewResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteViewVersionRequest&, const Model::DeleteViewVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteViewVersionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteVocabularyRequest&, const Model::DeleteVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeAgentStatusRequest&, const Model::DescribeAgentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeContactRequest&, const Model::DescribeContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeContactEvaluationRequest&, const Model::DescribeContactEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeContactFlowRequest&, const Model::DescribeContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeContactFlowModuleRequest&, const Model::DescribeContactFlowModuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactFlowModuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeEvaluationFormRequest&, const Model::DescribeEvaluationFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEvaluationFormResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeHoursOfOperationRequest&, const Model::DescribeHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceRequest&, const Model::DescribeInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceAttributeRequest&, const Model::DescribeInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceStorageConfigRequest&, const Model::DescribeInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribePhoneNumberRequest&, const Model::DescribePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribePredefinedAttributeRequest&, const Model::DescribePredefinedAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePredefinedAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribePromptRequest&, const Model::DescribePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePromptResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeQueueRequest&, const Model::DescribeQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQueueResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeQuickConnectRequest&, const Model::DescribeQuickConnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQuickConnectResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeRoutingProfileRequest&, const Model::DescribeRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeRuleRequest&, const Model::DescribeRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeSecurityProfileRequest&, const Model::DescribeSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeTrafficDistributionGroupRequest&, const Model::DescribeTrafficDistributionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrafficDistributionGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserHierarchyGroupRequest&, const Model::DescribeUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserHierarchyStructureRequest&, const Model::DescribeUserHierarchyStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserHierarchyStructureResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeViewRequest&, const Model::DescribeViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeViewResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeVocabularyRequest&, const Model::DescribeVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVocabularyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateAnalyticsDataSetRequest&, const Model::DisassociateAnalyticsDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAnalyticsDataSetResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateApprovedOriginRequest&, const Model::DisassociateApprovedOriginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApprovedOriginResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateBotRequest&, const Model::DisassociateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateFlowRequest&, const Model::DisassociateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateInstanceStorageConfigRequest&, const Model::DisassociateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateLambdaFunctionRequest&, const Model::DisassociateLambdaFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLambdaFunctionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateLexBotRequest&, const Model::DisassociateLexBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLexBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociatePhoneNumberContactFlowRequest&, const Model::DisassociatePhoneNumberContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumberContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateQueueQuickConnectsRequest&, const Model::DisassociateQueueQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateQueueQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateRoutingProfileQueuesRequest&, const Model::DisassociateRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateSecurityKeyRequest&, const Model::DisassociateSecurityKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSecurityKeyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateTrafficDistributionGroupUserRequest&, const Model::DisassociateTrafficDistributionGroupUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTrafficDistributionGroupUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateUserProficienciesRequest&, const Model::DisassociateUserProficienciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateUserProficienciesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DismissUserContactRequest&, const Model::DismissUserContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DismissUserContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetContactAttributesRequest&, const Model::GetContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetCurrentMetricDataRequest&, const Model::GetCurrentMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetCurrentUserDataRequest&, const Model::GetCurrentUserDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentUserDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetFederationTokenRequest&, const Model::GetFederationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFederationTokenResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetFlowAssociationRequest&, const Model::GetFlowAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFlowAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetMetricDataRequest&, const Model::GetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetMetricDataV2Request&, const Model::GetMetricDataV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataV2ResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetPromptFileRequest&, const Model::GetPromptFileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPromptFileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetTaskTemplateRequest&, const Model::GetTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaskTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetTrafficDistributionRequest&, const Model::GetTrafficDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficDistributionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ImportPhoneNumberRequest&, const Model::ImportPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListAgentStatusesRequest&, const Model::ListAgentStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentStatusesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListAnalyticsDataAssociationsRequest&, const Model::ListAnalyticsDataAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalyticsDataAssociationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListApprovedOriginsRequest&, const Model::ListApprovedOriginsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApprovedOriginsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListBotsRequest&, const Model::ListBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListContactEvaluationsRequest&, const Model::ListContactEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactEvaluationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListContactFlowModulesRequest&, const Model::ListContactFlowModulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactFlowModulesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListContactFlowsRequest&, const Model::ListContactFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactFlowsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListContactReferencesRequest&, const Model::ListContactReferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactReferencesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListDefaultVocabulariesRequest&, const Model::ListDefaultVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDefaultVocabulariesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListEvaluationFormVersionsRequest&, const Model::ListEvaluationFormVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEvaluationFormVersionsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListEvaluationFormsRequest&, const Model::ListEvaluationFormsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEvaluationFormsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListFlowAssociationsRequest&, const Model::ListFlowAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowAssociationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListHoursOfOperationsRequest&, const Model::ListHoursOfOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHoursOfOperationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstanceAttributesRequest&, const Model::ListInstanceAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstanceStorageConfigsRequest&, const Model::ListInstanceStorageConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceStorageConfigsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListIntegrationAssociationsRequest&, const Model::ListIntegrationAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntegrationAssociationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListLambdaFunctionsRequest&, const Model::ListLambdaFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLambdaFunctionsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListLexBotsRequest&, const Model::ListLexBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLexBotsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPhoneNumbersRequest&, const Model::ListPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPhoneNumbersV2Request&, const Model::ListPhoneNumbersV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersV2ResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPredefinedAttributesRequest&, const Model::ListPredefinedAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPredefinedAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPromptsRequest&, const Model::ListPromptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPromptsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListQueueQuickConnectsRequest&, const Model::ListQueueQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueueQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListQuickConnectsRequest&, const Model::ListQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRealtimeContactAnalysisSegmentsV2Request&, const Model::ListRealtimeContactAnalysisSegmentsV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRealtimeContactAnalysisSegmentsV2ResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRoutingProfileQueuesRequest&, const Model::ListRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRoutingProfilesRequest&, const Model::ListRoutingProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityKeysRequest&, const Model::ListSecurityKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityKeysResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfileApplicationsRequest&, const Model::ListSecurityProfileApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfileApplicationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfilePermissionsRequest&, const Model::ListSecurityProfilePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilePermissionsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfilesRequest&, const Model::ListSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTaskTemplatesRequest&, const Model::ListTaskTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskTemplatesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTrafficDistributionGroupUsersRequest&, const Model::ListTrafficDistributionGroupUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficDistributionGroupUsersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTrafficDistributionGroupsRequest&, const Model::ListTrafficDistributionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficDistributionGroupsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUseCasesRequest&, const Model::ListUseCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUseCasesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUserHierarchyGroupsRequest&, const Model::ListUserHierarchyGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserHierarchyGroupsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUserProficienciesRequest&, const Model::ListUserProficienciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserProficienciesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListViewVersionsRequest&, const Model::ListViewVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListViewVersionsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListViewsRequest&, const Model::ListViewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListViewsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::MonitorContactRequest&, const Model::MonitorContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MonitorContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::PauseContactRequest&, const Model::PauseContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PauseContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::PutUserStatusRequest&, const Model::PutUserStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUserStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ReleasePhoneNumberRequest&, const Model::ReleasePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleasePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ReplicateInstanceRequest&, const Model::ReplicateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplicateInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ResumeContactRequest&, const Model::ResumeContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ResumeContactRecordingRequest&, const Model::ResumeContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchAvailablePhoneNumbersRequest&, const Model::SearchAvailablePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAvailablePhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchContactsRequest&, const Model::SearchContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchContactsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchHoursOfOperationsRequest&, const Model::SearchHoursOfOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchHoursOfOperationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchPredefinedAttributesRequest&, const Model::SearchPredefinedAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchPredefinedAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchPromptsRequest&, const Model::SearchPromptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchPromptsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchQueuesRequest&, const Model::SearchQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchQuickConnectsRequest&, const Model::SearchQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchResourceTagsRequest&, const Model::SearchResourceTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResourceTagsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchRoutingProfilesRequest&, const Model::SearchRoutingProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchRoutingProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchSecurityProfilesRequest&, const Model::SearchSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchUsersRequest&, const Model::SearchUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchUsersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchVocabulariesRequest&, const Model::SearchVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchVocabulariesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SendChatIntegrationEventRequest&, const Model::SendChatIntegrationEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendChatIntegrationEventResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartChatContactRequest&, const Model::StartChatContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChatContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartContactEvaluationRequest&, const Model::StartContactEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContactEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartContactRecordingRequest&, const Model::StartContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartContactStreamingRequest&, const Model::StartContactStreamingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContactStreamingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartOutboundVoiceContactRequest&, const Model::StartOutboundVoiceContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOutboundVoiceContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartTaskContactRequest&, const Model::StartTaskContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTaskContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartWebRTCContactRequest&, const Model::StartWebRTCContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWebRTCContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactRequest&, const Model::StopContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactRecordingRequest&, const Model::StopContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactStreamingRequest&, const Model::StopContactStreamingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactStreamingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SubmitContactEvaluationRequest&, const Model::SubmitContactEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitContactEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SuspendContactRecordingRequest&, const Model::SuspendContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuspendContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::TagContactRequest&, const Model::TagContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::TransferContactRequest&, const Model::TransferContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UntagContactRequest&, const Model::UntagContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateAgentStatusRequest&, const Model::UpdateAgentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactRequest&, const Model::UpdateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactAttributesRequest&, const Model::UpdateContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactEvaluationRequest&, const Model::UpdateContactEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowContentRequest&, const Model::UpdateContactFlowContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowContentResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowMetadataRequest&, const Model::UpdateContactFlowMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowMetadataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowModuleContentRequest&, const Model::UpdateContactFlowModuleContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowModuleContentResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowModuleMetadataRequest&, const Model::UpdateContactFlowModuleMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowModuleMetadataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowNameRequest&, const Model::UpdateContactFlowNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactRoutingDataRequest&, const Model::UpdateContactRoutingDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactRoutingDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactScheduleRequest&, const Model::UpdateContactScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactScheduleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateEvaluationFormRequest&, const Model::UpdateEvaluationFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEvaluationFormResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateHoursOfOperationRequest&, const Model::UpdateHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateInstanceAttributeRequest&, const Model::UpdateInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateInstanceStorageConfigRequest&, const Model::UpdateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateParticipantRoleConfigRequest&, const Model::UpdateParticipantRoleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateParticipantRoleConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdatePhoneNumberRequest&, const Model::UpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdatePhoneNumberMetadataRequest&, const Model::UpdatePhoneNumberMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberMetadataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdatePredefinedAttributeRequest&, const Model::UpdatePredefinedAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePredefinedAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdatePromptRequest&, const Model::UpdatePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePromptResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueHoursOfOperationRequest&, const Model::UpdateQueueHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueMaxContactsRequest&, const Model::UpdateQueueMaxContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueMaxContactsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueNameRequest&, const Model::UpdateQueueNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueOutboundCallerConfigRequest&, const Model::UpdateQueueOutboundCallerConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueOutboundCallerConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueStatusRequest&, const Model::UpdateQueueStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQuickConnectConfigRequest&, const Model::UpdateQuickConnectConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuickConnectConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQuickConnectNameRequest&, const Model::UpdateQuickConnectNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuickConnectNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileAgentAvailabilityTimerRequest&, const Model::UpdateRoutingProfileAgentAvailabilityTimerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileAgentAvailabilityTimerResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileConcurrencyRequest&, const Model::UpdateRoutingProfileConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileConcurrencyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileDefaultOutboundQueueRequest&, const Model::UpdateRoutingProfileDefaultOutboundQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileNameRequest&, const Model::UpdateRoutingProfileNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileQueuesRequest&, const Model::UpdateRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRuleRequest&, const Model::UpdateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateSecurityProfileRequest&, const Model::UpdateSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateTaskTemplateRequest&, const Model::UpdateTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateTrafficDistributionRequest&, const Model::UpdateTrafficDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrafficDistributionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyRequest&, const Model::UpdateUserHierarchyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyGroupNameRequest&, const Model::UpdateUserHierarchyGroupNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyGroupNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyStructureRequest&, const Model::UpdateUserHierarchyStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyStructureResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserIdentityInfoRequest&, const Model::UpdateUserIdentityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserIdentityInfoResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserPhoneConfigRequest&, const Model::UpdateUserPhoneConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPhoneConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserProficienciesRequest&, const Model::UpdateUserProficienciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserProficienciesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserRoutingProfileRequest&, const Model::UpdateUserRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserSecurityProfilesRequest&, const Model::UpdateUserSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateViewContentRequest&, const Model::UpdateViewContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateViewContentResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateViewMetadataRequest&, const Model::UpdateViewMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateViewMetadataResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Connect
} // namespace Aws
