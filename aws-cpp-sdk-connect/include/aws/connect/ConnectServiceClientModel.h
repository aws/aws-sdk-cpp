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
#include <aws/connect/model/AssociateDefaultVocabularyResult.h>
#include <aws/connect/model/AssociateInstanceStorageConfigResult.h>
#include <aws/connect/model/AssociateSecurityKeyResult.h>
#include <aws/connect/model/ClaimPhoneNumberResult.h>
#include <aws/connect/model/CreateAgentStatusResult.h>
#include <aws/connect/model/CreateContactFlowResult.h>
#include <aws/connect/model/CreateContactFlowModuleResult.h>
#include <aws/connect/model/CreateHoursOfOperationResult.h>
#include <aws/connect/model/CreateInstanceResult.h>
#include <aws/connect/model/CreateIntegrationAssociationResult.h>
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
#include <aws/connect/model/CreateVocabularyResult.h>
#include <aws/connect/model/DeleteContactFlowModuleResult.h>
#include <aws/connect/model/DeleteTaskTemplateResult.h>
#include <aws/connect/model/DeleteTrafficDistributionGroupResult.h>
#include <aws/connect/model/DeleteVocabularyResult.h>
#include <aws/connect/model/DescribeAgentStatusResult.h>
#include <aws/connect/model/DescribeContactResult.h>
#include <aws/connect/model/DescribeContactFlowResult.h>
#include <aws/connect/model/DescribeContactFlowModuleResult.h>
#include <aws/connect/model/DescribeHoursOfOperationResult.h>
#include <aws/connect/model/DescribeInstanceResult.h>
#include <aws/connect/model/DescribeInstanceAttributeResult.h>
#include <aws/connect/model/DescribeInstanceStorageConfigResult.h>
#include <aws/connect/model/DescribePhoneNumberResult.h>
#include <aws/connect/model/DescribeQueueResult.h>
#include <aws/connect/model/DescribeQuickConnectResult.h>
#include <aws/connect/model/DescribeRoutingProfileResult.h>
#include <aws/connect/model/DescribeRuleResult.h>
#include <aws/connect/model/DescribeSecurityProfileResult.h>
#include <aws/connect/model/DescribeTrafficDistributionGroupResult.h>
#include <aws/connect/model/DescribeUserResult.h>
#include <aws/connect/model/DescribeUserHierarchyGroupResult.h>
#include <aws/connect/model/DescribeUserHierarchyStructureResult.h>
#include <aws/connect/model/DescribeVocabularyResult.h>
#include <aws/connect/model/DismissUserContactResult.h>
#include <aws/connect/model/GetContactAttributesResult.h>
#include <aws/connect/model/GetCurrentMetricDataResult.h>
#include <aws/connect/model/GetCurrentUserDataResult.h>
#include <aws/connect/model/GetFederationTokenResult.h>
#include <aws/connect/model/GetMetricDataResult.h>
#include <aws/connect/model/GetTaskTemplateResult.h>
#include <aws/connect/model/GetTrafficDistributionResult.h>
#include <aws/connect/model/ListAgentStatusesResult.h>
#include <aws/connect/model/ListApprovedOriginsResult.h>
#include <aws/connect/model/ListBotsResult.h>
#include <aws/connect/model/ListContactFlowModulesResult.h>
#include <aws/connect/model/ListContactFlowsResult.h>
#include <aws/connect/model/ListContactReferencesResult.h>
#include <aws/connect/model/ListDefaultVocabulariesResult.h>
#include <aws/connect/model/ListHoursOfOperationsResult.h>
#include <aws/connect/model/ListInstanceAttributesResult.h>
#include <aws/connect/model/ListInstanceStorageConfigsResult.h>
#include <aws/connect/model/ListInstancesResult.h>
#include <aws/connect/model/ListIntegrationAssociationsResult.h>
#include <aws/connect/model/ListLambdaFunctionsResult.h>
#include <aws/connect/model/ListLexBotsResult.h>
#include <aws/connect/model/ListPhoneNumbersResult.h>
#include <aws/connect/model/ListPhoneNumbersV2Result.h>
#include <aws/connect/model/ListPromptsResult.h>
#include <aws/connect/model/ListQueueQuickConnectsResult.h>
#include <aws/connect/model/ListQueuesResult.h>
#include <aws/connect/model/ListQuickConnectsResult.h>
#include <aws/connect/model/ListRoutingProfileQueuesResult.h>
#include <aws/connect/model/ListRoutingProfilesResult.h>
#include <aws/connect/model/ListRulesResult.h>
#include <aws/connect/model/ListSecurityKeysResult.h>
#include <aws/connect/model/ListSecurityProfilePermissionsResult.h>
#include <aws/connect/model/ListSecurityProfilesResult.h>
#include <aws/connect/model/ListTagsForResourceResult.h>
#include <aws/connect/model/ListTaskTemplatesResult.h>
#include <aws/connect/model/ListTrafficDistributionGroupsResult.h>
#include <aws/connect/model/ListUseCasesResult.h>
#include <aws/connect/model/ListUserHierarchyGroupsResult.h>
#include <aws/connect/model/ListUsersResult.h>
#include <aws/connect/model/MonitorContactResult.h>
#include <aws/connect/model/PutUserStatusResult.h>
#include <aws/connect/model/ReplicateInstanceResult.h>
#include <aws/connect/model/ResumeContactRecordingResult.h>
#include <aws/connect/model/SearchAvailablePhoneNumbersResult.h>
#include <aws/connect/model/SearchQueuesResult.h>
#include <aws/connect/model/SearchRoutingProfilesResult.h>
#include <aws/connect/model/SearchSecurityProfilesResult.h>
#include <aws/connect/model/SearchUsersResult.h>
#include <aws/connect/model/SearchVocabulariesResult.h>
#include <aws/connect/model/StartChatContactResult.h>
#include <aws/connect/model/StartContactRecordingResult.h>
#include <aws/connect/model/StartContactStreamingResult.h>
#include <aws/connect/model/StartOutboundVoiceContactResult.h>
#include <aws/connect/model/StartTaskContactResult.h>
#include <aws/connect/model/StopContactResult.h>
#include <aws/connect/model/StopContactRecordingResult.h>
#include <aws/connect/model/StopContactStreamingResult.h>
#include <aws/connect/model/SuspendContactRecordingResult.h>
#include <aws/connect/model/TransferContactResult.h>
#include <aws/connect/model/UpdateContactResult.h>
#include <aws/connect/model/UpdateContactAttributesResult.h>
#include <aws/connect/model/UpdateContactFlowModuleContentResult.h>
#include <aws/connect/model/UpdateContactFlowModuleMetadataResult.h>
#include <aws/connect/model/UpdateContactScheduleResult.h>
#include <aws/connect/model/UpdateParticipantRoleConfigResult.h>
#include <aws/connect/model/UpdatePhoneNumberResult.h>
#include <aws/connect/model/UpdateTaskTemplateResult.h>
#include <aws/connect/model/UpdateTrafficDistributionResult.h>
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
      class AssociateApprovedOriginRequest;
      class AssociateBotRequest;
      class AssociateDefaultVocabularyRequest;
      class AssociateInstanceStorageConfigRequest;
      class AssociateLambdaFunctionRequest;
      class AssociateLexBotRequest;
      class AssociatePhoneNumberContactFlowRequest;
      class AssociateQueueQuickConnectsRequest;
      class AssociateRoutingProfileQueuesRequest;
      class AssociateSecurityKeyRequest;
      class ClaimPhoneNumberRequest;
      class CreateAgentStatusRequest;
      class CreateContactFlowRequest;
      class CreateContactFlowModuleRequest;
      class CreateHoursOfOperationRequest;
      class CreateInstanceRequest;
      class CreateIntegrationAssociationRequest;
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
      class CreateVocabularyRequest;
      class DeleteContactFlowRequest;
      class DeleteContactFlowModuleRequest;
      class DeleteHoursOfOperationRequest;
      class DeleteInstanceRequest;
      class DeleteIntegrationAssociationRequest;
      class DeleteQuickConnectRequest;
      class DeleteRuleRequest;
      class DeleteSecurityProfileRequest;
      class DeleteTaskTemplateRequest;
      class DeleteTrafficDistributionGroupRequest;
      class DeleteUseCaseRequest;
      class DeleteUserRequest;
      class DeleteUserHierarchyGroupRequest;
      class DeleteVocabularyRequest;
      class DescribeAgentStatusRequest;
      class DescribeContactRequest;
      class DescribeContactFlowRequest;
      class DescribeContactFlowModuleRequest;
      class DescribeHoursOfOperationRequest;
      class DescribeInstanceRequest;
      class DescribeInstanceAttributeRequest;
      class DescribeInstanceStorageConfigRequest;
      class DescribePhoneNumberRequest;
      class DescribeQueueRequest;
      class DescribeQuickConnectRequest;
      class DescribeRoutingProfileRequest;
      class DescribeRuleRequest;
      class DescribeSecurityProfileRequest;
      class DescribeTrafficDistributionGroupRequest;
      class DescribeUserRequest;
      class DescribeUserHierarchyGroupRequest;
      class DescribeUserHierarchyStructureRequest;
      class DescribeVocabularyRequest;
      class DisassociateApprovedOriginRequest;
      class DisassociateBotRequest;
      class DisassociateInstanceStorageConfigRequest;
      class DisassociateLambdaFunctionRequest;
      class DisassociateLexBotRequest;
      class DisassociatePhoneNumberContactFlowRequest;
      class DisassociateQueueQuickConnectsRequest;
      class DisassociateRoutingProfileQueuesRequest;
      class DisassociateSecurityKeyRequest;
      class DismissUserContactRequest;
      class GetContactAttributesRequest;
      class GetCurrentMetricDataRequest;
      class GetCurrentUserDataRequest;
      class GetFederationTokenRequest;
      class GetMetricDataRequest;
      class GetTaskTemplateRequest;
      class GetTrafficDistributionRequest;
      class ListAgentStatusesRequest;
      class ListApprovedOriginsRequest;
      class ListBotsRequest;
      class ListContactFlowModulesRequest;
      class ListContactFlowsRequest;
      class ListContactReferencesRequest;
      class ListDefaultVocabulariesRequest;
      class ListHoursOfOperationsRequest;
      class ListInstanceAttributesRequest;
      class ListInstanceStorageConfigsRequest;
      class ListInstancesRequest;
      class ListIntegrationAssociationsRequest;
      class ListLambdaFunctionsRequest;
      class ListLexBotsRequest;
      class ListPhoneNumbersRequest;
      class ListPhoneNumbersV2Request;
      class ListPromptsRequest;
      class ListQueueQuickConnectsRequest;
      class ListQueuesRequest;
      class ListQuickConnectsRequest;
      class ListRoutingProfileQueuesRequest;
      class ListRoutingProfilesRequest;
      class ListRulesRequest;
      class ListSecurityKeysRequest;
      class ListSecurityProfilePermissionsRequest;
      class ListSecurityProfilesRequest;
      class ListTagsForResourceRequest;
      class ListTaskTemplatesRequest;
      class ListTrafficDistributionGroupsRequest;
      class ListUseCasesRequest;
      class ListUserHierarchyGroupsRequest;
      class ListUsersRequest;
      class MonitorContactRequest;
      class PutUserStatusRequest;
      class ReleasePhoneNumberRequest;
      class ReplicateInstanceRequest;
      class ResumeContactRecordingRequest;
      class SearchAvailablePhoneNumbersRequest;
      class SearchQueuesRequest;
      class SearchRoutingProfilesRequest;
      class SearchSecurityProfilesRequest;
      class SearchUsersRequest;
      class SearchVocabulariesRequest;
      class StartChatContactRequest;
      class StartContactRecordingRequest;
      class StartContactStreamingRequest;
      class StartOutboundVoiceContactRequest;
      class StartTaskContactRequest;
      class StopContactRequest;
      class StopContactRecordingRequest;
      class StopContactStreamingRequest;
      class SuspendContactRecordingRequest;
      class TagResourceRequest;
      class TransferContactRequest;
      class UntagResourceRequest;
      class UpdateAgentStatusRequest;
      class UpdateContactRequest;
      class UpdateContactAttributesRequest;
      class UpdateContactFlowContentRequest;
      class UpdateContactFlowMetadataRequest;
      class UpdateContactFlowModuleContentRequest;
      class UpdateContactFlowModuleMetadataRequest;
      class UpdateContactFlowNameRequest;
      class UpdateContactScheduleRequest;
      class UpdateHoursOfOperationRequest;
      class UpdateInstanceAttributeRequest;
      class UpdateInstanceStorageConfigRequest;
      class UpdateParticipantRoleConfigRequest;
      class UpdatePhoneNumberRequest;
      class UpdateQueueHoursOfOperationRequest;
      class UpdateQueueMaxContactsRequest;
      class UpdateQueueNameRequest;
      class UpdateQueueOutboundCallerConfigRequest;
      class UpdateQueueStatusRequest;
      class UpdateQuickConnectConfigRequest;
      class UpdateQuickConnectNameRequest;
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
      class UpdateUserRoutingProfileRequest;
      class UpdateUserSecurityProfilesRequest;
      /* End of service model forward declarations required in ConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateApprovedOriginOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateBotOutcome;
      typedef Aws::Utils::Outcome<AssociateDefaultVocabularyResult, ConnectError> AssociateDefaultVocabularyOutcome;
      typedef Aws::Utils::Outcome<AssociateInstanceStorageConfigResult, ConnectError> AssociateInstanceStorageConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateLambdaFunctionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateLexBotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociatePhoneNumberContactFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateQueueQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateRoutingProfileQueuesOutcome;
      typedef Aws::Utils::Outcome<AssociateSecurityKeyResult, ConnectError> AssociateSecurityKeyOutcome;
      typedef Aws::Utils::Outcome<ClaimPhoneNumberResult, ConnectError> ClaimPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<CreateAgentStatusResult, ConnectError> CreateAgentStatusOutcome;
      typedef Aws::Utils::Outcome<CreateContactFlowResult, ConnectError> CreateContactFlowOutcome;
      typedef Aws::Utils::Outcome<CreateContactFlowModuleResult, ConnectError> CreateContactFlowModuleOutcome;
      typedef Aws::Utils::Outcome<CreateHoursOfOperationResult, ConnectError> CreateHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceResult, ConnectError> CreateInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateIntegrationAssociationResult, ConnectError> CreateIntegrationAssociationOutcome;
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
      typedef Aws::Utils::Outcome<CreateVocabularyResult, ConnectError> CreateVocabularyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteContactFlowOutcome;
      typedef Aws::Utils::Outcome<DeleteContactFlowModuleResult, ConnectError> DeleteContactFlowModuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteIntegrationAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteQuickConnectOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteTaskTemplateResult, ConnectError> DeleteTaskTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficDistributionGroupResult, ConnectError> DeleteTrafficDistributionGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteUseCaseOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteUserHierarchyGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteVocabularyResult, ConnectError> DeleteVocabularyOutcome;
      typedef Aws::Utils::Outcome<DescribeAgentStatusResult, ConnectError> DescribeAgentStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeContactResult, ConnectError> DescribeContactOutcome;
      typedef Aws::Utils::Outcome<DescribeContactFlowResult, ConnectError> DescribeContactFlowOutcome;
      typedef Aws::Utils::Outcome<DescribeContactFlowModuleResult, ConnectError> DescribeContactFlowModuleOutcome;
      typedef Aws::Utils::Outcome<DescribeHoursOfOperationResult, ConnectError> DescribeHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceResult, ConnectError> DescribeInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceAttributeResult, ConnectError> DescribeInstanceAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceStorageConfigResult, ConnectError> DescribeInstanceStorageConfigOutcome;
      typedef Aws::Utils::Outcome<DescribePhoneNumberResult, ConnectError> DescribePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<DescribeQueueResult, ConnectError> DescribeQueueOutcome;
      typedef Aws::Utils::Outcome<DescribeQuickConnectResult, ConnectError> DescribeQuickConnectOutcome;
      typedef Aws::Utils::Outcome<DescribeRoutingProfileResult, ConnectError> DescribeRoutingProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleResult, ConnectError> DescribeRuleOutcome;
      typedef Aws::Utils::Outcome<DescribeSecurityProfileResult, ConnectError> DescribeSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeTrafficDistributionGroupResult, ConnectError> DescribeTrafficDistributionGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeUserResult, ConnectError> DescribeUserOutcome;
      typedef Aws::Utils::Outcome<DescribeUserHierarchyGroupResult, ConnectError> DescribeUserHierarchyGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeUserHierarchyStructureResult, ConnectError> DescribeUserHierarchyStructureOutcome;
      typedef Aws::Utils::Outcome<DescribeVocabularyResult, ConnectError> DescribeVocabularyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateApprovedOriginOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateBotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateInstanceStorageConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateLambdaFunctionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateLexBotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociatePhoneNumberContactFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateQueueQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateRoutingProfileQueuesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateSecurityKeyOutcome;
      typedef Aws::Utils::Outcome<DismissUserContactResult, ConnectError> DismissUserContactOutcome;
      typedef Aws::Utils::Outcome<GetContactAttributesResult, ConnectError> GetContactAttributesOutcome;
      typedef Aws::Utils::Outcome<GetCurrentMetricDataResult, ConnectError> GetCurrentMetricDataOutcome;
      typedef Aws::Utils::Outcome<GetCurrentUserDataResult, ConnectError> GetCurrentUserDataOutcome;
      typedef Aws::Utils::Outcome<GetFederationTokenResult, ConnectError> GetFederationTokenOutcome;
      typedef Aws::Utils::Outcome<GetMetricDataResult, ConnectError> GetMetricDataOutcome;
      typedef Aws::Utils::Outcome<GetTaskTemplateResult, ConnectError> GetTaskTemplateOutcome;
      typedef Aws::Utils::Outcome<GetTrafficDistributionResult, ConnectError> GetTrafficDistributionOutcome;
      typedef Aws::Utils::Outcome<ListAgentStatusesResult, ConnectError> ListAgentStatusesOutcome;
      typedef Aws::Utils::Outcome<ListApprovedOriginsResult, ConnectError> ListApprovedOriginsOutcome;
      typedef Aws::Utils::Outcome<ListBotsResult, ConnectError> ListBotsOutcome;
      typedef Aws::Utils::Outcome<ListContactFlowModulesResult, ConnectError> ListContactFlowModulesOutcome;
      typedef Aws::Utils::Outcome<ListContactFlowsResult, ConnectError> ListContactFlowsOutcome;
      typedef Aws::Utils::Outcome<ListContactReferencesResult, ConnectError> ListContactReferencesOutcome;
      typedef Aws::Utils::Outcome<ListDefaultVocabulariesResult, ConnectError> ListDefaultVocabulariesOutcome;
      typedef Aws::Utils::Outcome<ListHoursOfOperationsResult, ConnectError> ListHoursOfOperationsOutcome;
      typedef Aws::Utils::Outcome<ListInstanceAttributesResult, ConnectError> ListInstanceAttributesOutcome;
      typedef Aws::Utils::Outcome<ListInstanceStorageConfigsResult, ConnectError> ListInstanceStorageConfigsOutcome;
      typedef Aws::Utils::Outcome<ListInstancesResult, ConnectError> ListInstancesOutcome;
      typedef Aws::Utils::Outcome<ListIntegrationAssociationsResult, ConnectError> ListIntegrationAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListLambdaFunctionsResult, ConnectError> ListLambdaFunctionsOutcome;
      typedef Aws::Utils::Outcome<ListLexBotsResult, ConnectError> ListLexBotsOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumbersResult, ConnectError> ListPhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumbersV2Result, ConnectError> ListPhoneNumbersV2Outcome;
      typedef Aws::Utils::Outcome<ListPromptsResult, ConnectError> ListPromptsOutcome;
      typedef Aws::Utils::Outcome<ListQueueQuickConnectsResult, ConnectError> ListQueueQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<ListQueuesResult, ConnectError> ListQueuesOutcome;
      typedef Aws::Utils::Outcome<ListQuickConnectsResult, ConnectError> ListQuickConnectsOutcome;
      typedef Aws::Utils::Outcome<ListRoutingProfileQueuesResult, ConnectError> ListRoutingProfileQueuesOutcome;
      typedef Aws::Utils::Outcome<ListRoutingProfilesResult, ConnectError> ListRoutingProfilesOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, ConnectError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListSecurityKeysResult, ConnectError> ListSecurityKeysOutcome;
      typedef Aws::Utils::Outcome<ListSecurityProfilePermissionsResult, ConnectError> ListSecurityProfilePermissionsOutcome;
      typedef Aws::Utils::Outcome<ListSecurityProfilesResult, ConnectError> ListSecurityProfilesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTaskTemplatesResult, ConnectError> ListTaskTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListTrafficDistributionGroupsResult, ConnectError> ListTrafficDistributionGroupsOutcome;
      typedef Aws::Utils::Outcome<ListUseCasesResult, ConnectError> ListUseCasesOutcome;
      typedef Aws::Utils::Outcome<ListUserHierarchyGroupsResult, ConnectError> ListUserHierarchyGroupsOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, ConnectError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<MonitorContactResult, ConnectError> MonitorContactOutcome;
      typedef Aws::Utils::Outcome<PutUserStatusResult, ConnectError> PutUserStatusOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> ReleasePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<ReplicateInstanceResult, ConnectError> ReplicateInstanceOutcome;
      typedef Aws::Utils::Outcome<ResumeContactRecordingResult, ConnectError> ResumeContactRecordingOutcome;
      typedef Aws::Utils::Outcome<SearchAvailablePhoneNumbersResult, ConnectError> SearchAvailablePhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<SearchQueuesResult, ConnectError> SearchQueuesOutcome;
      typedef Aws::Utils::Outcome<SearchRoutingProfilesResult, ConnectError> SearchRoutingProfilesOutcome;
      typedef Aws::Utils::Outcome<SearchSecurityProfilesResult, ConnectError> SearchSecurityProfilesOutcome;
      typedef Aws::Utils::Outcome<SearchUsersResult, ConnectError> SearchUsersOutcome;
      typedef Aws::Utils::Outcome<SearchVocabulariesResult, ConnectError> SearchVocabulariesOutcome;
      typedef Aws::Utils::Outcome<StartChatContactResult, ConnectError> StartChatContactOutcome;
      typedef Aws::Utils::Outcome<StartContactRecordingResult, ConnectError> StartContactRecordingOutcome;
      typedef Aws::Utils::Outcome<StartContactStreamingResult, ConnectError> StartContactStreamingOutcome;
      typedef Aws::Utils::Outcome<StartOutboundVoiceContactResult, ConnectError> StartOutboundVoiceContactOutcome;
      typedef Aws::Utils::Outcome<StartTaskContactResult, ConnectError> StartTaskContactOutcome;
      typedef Aws::Utils::Outcome<StopContactResult, ConnectError> StopContactOutcome;
      typedef Aws::Utils::Outcome<StopContactRecordingResult, ConnectError> StopContactRecordingOutcome;
      typedef Aws::Utils::Outcome<StopContactStreamingResult, ConnectError> StopContactStreamingOutcome;
      typedef Aws::Utils::Outcome<SuspendContactRecordingResult, ConnectError> SuspendContactRecordingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TransferContactResult, ConnectError> TransferContactOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateAgentStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateContactResult, ConnectError> UpdateContactOutcome;
      typedef Aws::Utils::Outcome<UpdateContactAttributesResult, ConnectError> UpdateContactAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateContactFlowContentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateContactFlowMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateContactFlowModuleContentResult, ConnectError> UpdateContactFlowModuleContentOutcome;
      typedef Aws::Utils::Outcome<UpdateContactFlowModuleMetadataResult, ConnectError> UpdateContactFlowModuleMetadataOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateContactFlowNameOutcome;
      typedef Aws::Utils::Outcome<UpdateContactScheduleResult, ConnectError> UpdateContactScheduleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateInstanceAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateInstanceStorageConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateParticipantRoleConfigResult, ConnectError> UpdateParticipantRoleConfigOutcome;
      typedef Aws::Utils::Outcome<UpdatePhoneNumberResult, ConnectError> UpdatePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueHoursOfOperationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueMaxContactsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueOutboundCallerConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQueueStatusOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQuickConnectConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateQuickConnectNameOutcome;
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
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserRoutingProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserSecurityProfilesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateApprovedOriginOutcome> AssociateApprovedOriginOutcomeCallable;
      typedef std::future<AssociateBotOutcome> AssociateBotOutcomeCallable;
      typedef std::future<AssociateDefaultVocabularyOutcome> AssociateDefaultVocabularyOutcomeCallable;
      typedef std::future<AssociateInstanceStorageConfigOutcome> AssociateInstanceStorageConfigOutcomeCallable;
      typedef std::future<AssociateLambdaFunctionOutcome> AssociateLambdaFunctionOutcomeCallable;
      typedef std::future<AssociateLexBotOutcome> AssociateLexBotOutcomeCallable;
      typedef std::future<AssociatePhoneNumberContactFlowOutcome> AssociatePhoneNumberContactFlowOutcomeCallable;
      typedef std::future<AssociateQueueQuickConnectsOutcome> AssociateQueueQuickConnectsOutcomeCallable;
      typedef std::future<AssociateRoutingProfileQueuesOutcome> AssociateRoutingProfileQueuesOutcomeCallable;
      typedef std::future<AssociateSecurityKeyOutcome> AssociateSecurityKeyOutcomeCallable;
      typedef std::future<ClaimPhoneNumberOutcome> ClaimPhoneNumberOutcomeCallable;
      typedef std::future<CreateAgentStatusOutcome> CreateAgentStatusOutcomeCallable;
      typedef std::future<CreateContactFlowOutcome> CreateContactFlowOutcomeCallable;
      typedef std::future<CreateContactFlowModuleOutcome> CreateContactFlowModuleOutcomeCallable;
      typedef std::future<CreateHoursOfOperationOutcome> CreateHoursOfOperationOutcomeCallable;
      typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
      typedef std::future<CreateIntegrationAssociationOutcome> CreateIntegrationAssociationOutcomeCallable;
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
      typedef std::future<CreateVocabularyOutcome> CreateVocabularyOutcomeCallable;
      typedef std::future<DeleteContactFlowOutcome> DeleteContactFlowOutcomeCallable;
      typedef std::future<DeleteContactFlowModuleOutcome> DeleteContactFlowModuleOutcomeCallable;
      typedef std::future<DeleteHoursOfOperationOutcome> DeleteHoursOfOperationOutcomeCallable;
      typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
      typedef std::future<DeleteIntegrationAssociationOutcome> DeleteIntegrationAssociationOutcomeCallable;
      typedef std::future<DeleteQuickConnectOutcome> DeleteQuickConnectOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<DeleteSecurityProfileOutcome> DeleteSecurityProfileOutcomeCallable;
      typedef std::future<DeleteTaskTemplateOutcome> DeleteTaskTemplateOutcomeCallable;
      typedef std::future<DeleteTrafficDistributionGroupOutcome> DeleteTrafficDistributionGroupOutcomeCallable;
      typedef std::future<DeleteUseCaseOutcome> DeleteUseCaseOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DeleteUserHierarchyGroupOutcome> DeleteUserHierarchyGroupOutcomeCallable;
      typedef std::future<DeleteVocabularyOutcome> DeleteVocabularyOutcomeCallable;
      typedef std::future<DescribeAgentStatusOutcome> DescribeAgentStatusOutcomeCallable;
      typedef std::future<DescribeContactOutcome> DescribeContactOutcomeCallable;
      typedef std::future<DescribeContactFlowOutcome> DescribeContactFlowOutcomeCallable;
      typedef std::future<DescribeContactFlowModuleOutcome> DescribeContactFlowModuleOutcomeCallable;
      typedef std::future<DescribeHoursOfOperationOutcome> DescribeHoursOfOperationOutcomeCallable;
      typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
      typedef std::future<DescribeInstanceAttributeOutcome> DescribeInstanceAttributeOutcomeCallable;
      typedef std::future<DescribeInstanceStorageConfigOutcome> DescribeInstanceStorageConfigOutcomeCallable;
      typedef std::future<DescribePhoneNumberOutcome> DescribePhoneNumberOutcomeCallable;
      typedef std::future<DescribeQueueOutcome> DescribeQueueOutcomeCallable;
      typedef std::future<DescribeQuickConnectOutcome> DescribeQuickConnectOutcomeCallable;
      typedef std::future<DescribeRoutingProfileOutcome> DescribeRoutingProfileOutcomeCallable;
      typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
      typedef std::future<DescribeSecurityProfileOutcome> DescribeSecurityProfileOutcomeCallable;
      typedef std::future<DescribeTrafficDistributionGroupOutcome> DescribeTrafficDistributionGroupOutcomeCallable;
      typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
      typedef std::future<DescribeUserHierarchyGroupOutcome> DescribeUserHierarchyGroupOutcomeCallable;
      typedef std::future<DescribeUserHierarchyStructureOutcome> DescribeUserHierarchyStructureOutcomeCallable;
      typedef std::future<DescribeVocabularyOutcome> DescribeVocabularyOutcomeCallable;
      typedef std::future<DisassociateApprovedOriginOutcome> DisassociateApprovedOriginOutcomeCallable;
      typedef std::future<DisassociateBotOutcome> DisassociateBotOutcomeCallable;
      typedef std::future<DisassociateInstanceStorageConfigOutcome> DisassociateInstanceStorageConfigOutcomeCallable;
      typedef std::future<DisassociateLambdaFunctionOutcome> DisassociateLambdaFunctionOutcomeCallable;
      typedef std::future<DisassociateLexBotOutcome> DisassociateLexBotOutcomeCallable;
      typedef std::future<DisassociatePhoneNumberContactFlowOutcome> DisassociatePhoneNumberContactFlowOutcomeCallable;
      typedef std::future<DisassociateQueueQuickConnectsOutcome> DisassociateQueueQuickConnectsOutcomeCallable;
      typedef std::future<DisassociateRoutingProfileQueuesOutcome> DisassociateRoutingProfileQueuesOutcomeCallable;
      typedef std::future<DisassociateSecurityKeyOutcome> DisassociateSecurityKeyOutcomeCallable;
      typedef std::future<DismissUserContactOutcome> DismissUserContactOutcomeCallable;
      typedef std::future<GetContactAttributesOutcome> GetContactAttributesOutcomeCallable;
      typedef std::future<GetCurrentMetricDataOutcome> GetCurrentMetricDataOutcomeCallable;
      typedef std::future<GetCurrentUserDataOutcome> GetCurrentUserDataOutcomeCallable;
      typedef std::future<GetFederationTokenOutcome> GetFederationTokenOutcomeCallable;
      typedef std::future<GetMetricDataOutcome> GetMetricDataOutcomeCallable;
      typedef std::future<GetTaskTemplateOutcome> GetTaskTemplateOutcomeCallable;
      typedef std::future<GetTrafficDistributionOutcome> GetTrafficDistributionOutcomeCallable;
      typedef std::future<ListAgentStatusesOutcome> ListAgentStatusesOutcomeCallable;
      typedef std::future<ListApprovedOriginsOutcome> ListApprovedOriginsOutcomeCallable;
      typedef std::future<ListBotsOutcome> ListBotsOutcomeCallable;
      typedef std::future<ListContactFlowModulesOutcome> ListContactFlowModulesOutcomeCallable;
      typedef std::future<ListContactFlowsOutcome> ListContactFlowsOutcomeCallable;
      typedef std::future<ListContactReferencesOutcome> ListContactReferencesOutcomeCallable;
      typedef std::future<ListDefaultVocabulariesOutcome> ListDefaultVocabulariesOutcomeCallable;
      typedef std::future<ListHoursOfOperationsOutcome> ListHoursOfOperationsOutcomeCallable;
      typedef std::future<ListInstanceAttributesOutcome> ListInstanceAttributesOutcomeCallable;
      typedef std::future<ListInstanceStorageConfigsOutcome> ListInstanceStorageConfigsOutcomeCallable;
      typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
      typedef std::future<ListIntegrationAssociationsOutcome> ListIntegrationAssociationsOutcomeCallable;
      typedef std::future<ListLambdaFunctionsOutcome> ListLambdaFunctionsOutcomeCallable;
      typedef std::future<ListLexBotsOutcome> ListLexBotsOutcomeCallable;
      typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
      typedef std::future<ListPhoneNumbersV2Outcome> ListPhoneNumbersV2OutcomeCallable;
      typedef std::future<ListPromptsOutcome> ListPromptsOutcomeCallable;
      typedef std::future<ListQueueQuickConnectsOutcome> ListQueueQuickConnectsOutcomeCallable;
      typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
      typedef std::future<ListQuickConnectsOutcome> ListQuickConnectsOutcomeCallable;
      typedef std::future<ListRoutingProfileQueuesOutcome> ListRoutingProfileQueuesOutcomeCallable;
      typedef std::future<ListRoutingProfilesOutcome> ListRoutingProfilesOutcomeCallable;
      typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
      typedef std::future<ListSecurityKeysOutcome> ListSecurityKeysOutcomeCallable;
      typedef std::future<ListSecurityProfilePermissionsOutcome> ListSecurityProfilePermissionsOutcomeCallable;
      typedef std::future<ListSecurityProfilesOutcome> ListSecurityProfilesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTaskTemplatesOutcome> ListTaskTemplatesOutcomeCallable;
      typedef std::future<ListTrafficDistributionGroupsOutcome> ListTrafficDistributionGroupsOutcomeCallable;
      typedef std::future<ListUseCasesOutcome> ListUseCasesOutcomeCallable;
      typedef std::future<ListUserHierarchyGroupsOutcome> ListUserHierarchyGroupsOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<MonitorContactOutcome> MonitorContactOutcomeCallable;
      typedef std::future<PutUserStatusOutcome> PutUserStatusOutcomeCallable;
      typedef std::future<ReleasePhoneNumberOutcome> ReleasePhoneNumberOutcomeCallable;
      typedef std::future<ReplicateInstanceOutcome> ReplicateInstanceOutcomeCallable;
      typedef std::future<ResumeContactRecordingOutcome> ResumeContactRecordingOutcomeCallable;
      typedef std::future<SearchAvailablePhoneNumbersOutcome> SearchAvailablePhoneNumbersOutcomeCallable;
      typedef std::future<SearchQueuesOutcome> SearchQueuesOutcomeCallable;
      typedef std::future<SearchRoutingProfilesOutcome> SearchRoutingProfilesOutcomeCallable;
      typedef std::future<SearchSecurityProfilesOutcome> SearchSecurityProfilesOutcomeCallable;
      typedef std::future<SearchUsersOutcome> SearchUsersOutcomeCallable;
      typedef std::future<SearchVocabulariesOutcome> SearchVocabulariesOutcomeCallable;
      typedef std::future<StartChatContactOutcome> StartChatContactOutcomeCallable;
      typedef std::future<StartContactRecordingOutcome> StartContactRecordingOutcomeCallable;
      typedef std::future<StartContactStreamingOutcome> StartContactStreamingOutcomeCallable;
      typedef std::future<StartOutboundVoiceContactOutcome> StartOutboundVoiceContactOutcomeCallable;
      typedef std::future<StartTaskContactOutcome> StartTaskContactOutcomeCallable;
      typedef std::future<StopContactOutcome> StopContactOutcomeCallable;
      typedef std::future<StopContactRecordingOutcome> StopContactRecordingOutcomeCallable;
      typedef std::future<StopContactStreamingOutcome> StopContactStreamingOutcomeCallable;
      typedef std::future<SuspendContactRecordingOutcome> SuspendContactRecordingOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TransferContactOutcome> TransferContactOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAgentStatusOutcome> UpdateAgentStatusOutcomeCallable;
      typedef std::future<UpdateContactOutcome> UpdateContactOutcomeCallable;
      typedef std::future<UpdateContactAttributesOutcome> UpdateContactAttributesOutcomeCallable;
      typedef std::future<UpdateContactFlowContentOutcome> UpdateContactFlowContentOutcomeCallable;
      typedef std::future<UpdateContactFlowMetadataOutcome> UpdateContactFlowMetadataOutcomeCallable;
      typedef std::future<UpdateContactFlowModuleContentOutcome> UpdateContactFlowModuleContentOutcomeCallable;
      typedef std::future<UpdateContactFlowModuleMetadataOutcome> UpdateContactFlowModuleMetadataOutcomeCallable;
      typedef std::future<UpdateContactFlowNameOutcome> UpdateContactFlowNameOutcomeCallable;
      typedef std::future<UpdateContactScheduleOutcome> UpdateContactScheduleOutcomeCallable;
      typedef std::future<UpdateHoursOfOperationOutcome> UpdateHoursOfOperationOutcomeCallable;
      typedef std::future<UpdateInstanceAttributeOutcome> UpdateInstanceAttributeOutcomeCallable;
      typedef std::future<UpdateInstanceStorageConfigOutcome> UpdateInstanceStorageConfigOutcomeCallable;
      typedef std::future<UpdateParticipantRoleConfigOutcome> UpdateParticipantRoleConfigOutcomeCallable;
      typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
      typedef std::future<UpdateQueueHoursOfOperationOutcome> UpdateQueueHoursOfOperationOutcomeCallable;
      typedef std::future<UpdateQueueMaxContactsOutcome> UpdateQueueMaxContactsOutcomeCallable;
      typedef std::future<UpdateQueueNameOutcome> UpdateQueueNameOutcomeCallable;
      typedef std::future<UpdateQueueOutboundCallerConfigOutcome> UpdateQueueOutboundCallerConfigOutcomeCallable;
      typedef std::future<UpdateQueueStatusOutcome> UpdateQueueStatusOutcomeCallable;
      typedef std::future<UpdateQuickConnectConfigOutcome> UpdateQuickConnectConfigOutcomeCallable;
      typedef std::future<UpdateQuickConnectNameOutcome> UpdateQuickConnectNameOutcomeCallable;
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
      typedef std::future<UpdateUserRoutingProfileOutcome> UpdateUserRoutingProfileOutcomeCallable;
      typedef std::future<UpdateUserSecurityProfilesOutcome> UpdateUserSecurityProfilesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConnectClient*, const Model::AssociateApprovedOriginRequest&, const Model::AssociateApprovedOriginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApprovedOriginResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateBotRequest&, const Model::AssociateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateDefaultVocabularyRequest&, const Model::AssociateDefaultVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDefaultVocabularyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateInstanceStorageConfigRequest&, const Model::AssociateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateLambdaFunctionRequest&, const Model::AssociateLambdaFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLambdaFunctionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateLexBotRequest&, const Model::AssociateLexBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLexBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociatePhoneNumberContactFlowRequest&, const Model::AssociatePhoneNumberContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumberContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateQueueQuickConnectsRequest&, const Model::AssociateQueueQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateQueueQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateRoutingProfileQueuesRequest&, const Model::AssociateRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateSecurityKeyRequest&, const Model::AssociateSecurityKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSecurityKeyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ClaimPhoneNumberRequest&, const Model::ClaimPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClaimPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateAgentStatusRequest&, const Model::CreateAgentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgentStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateContactFlowRequest&, const Model::CreateContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateContactFlowModuleRequest&, const Model::CreateContactFlowModuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactFlowModuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateHoursOfOperationRequest&, const Model::CreateHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateInstanceRequest&, const Model::CreateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateIntegrationAssociationRequest&, const Model::CreateIntegrationAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationAssociationResponseReceivedHandler;
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
    typedef std::function<void(const ConnectClient*, const Model::CreateVocabularyRequest&, const Model::CreateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteContactFlowRequest&, const Model::DeleteContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteContactFlowModuleRequest&, const Model::DeleteContactFlowModuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactFlowModuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteHoursOfOperationRequest&, const Model::DeleteHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteIntegrationAssociationRequest&, const Model::DeleteIntegrationAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteQuickConnectRequest&, const Model::DeleteQuickConnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQuickConnectResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteSecurityProfileRequest&, const Model::DeleteSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteTaskTemplateRequest&, const Model::DeleteTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTaskTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteTrafficDistributionGroupRequest&, const Model::DeleteTrafficDistributionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficDistributionGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUseCaseRequest&, const Model::DeleteUseCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUseCaseResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUserHierarchyGroupRequest&, const Model::DeleteUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteVocabularyRequest&, const Model::DeleteVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeAgentStatusRequest&, const Model::DescribeAgentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeContactRequest&, const Model::DescribeContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeContactFlowRequest&, const Model::DescribeContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeContactFlowModuleRequest&, const Model::DescribeContactFlowModuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactFlowModuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeHoursOfOperationRequest&, const Model::DescribeHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceRequest&, const Model::DescribeInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceAttributeRequest&, const Model::DescribeInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceStorageConfigRequest&, const Model::DescribeInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribePhoneNumberRequest&, const Model::DescribePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeQueueRequest&, const Model::DescribeQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQueueResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeQuickConnectRequest&, const Model::DescribeQuickConnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQuickConnectResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeRoutingProfileRequest&, const Model::DescribeRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeRuleRequest&, const Model::DescribeRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeSecurityProfileRequest&, const Model::DescribeSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeTrafficDistributionGroupRequest&, const Model::DescribeTrafficDistributionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrafficDistributionGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserHierarchyGroupRequest&, const Model::DescribeUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserHierarchyStructureRequest&, const Model::DescribeUserHierarchyStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserHierarchyStructureResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeVocabularyRequest&, const Model::DescribeVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVocabularyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateApprovedOriginRequest&, const Model::DisassociateApprovedOriginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApprovedOriginResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateBotRequest&, const Model::DisassociateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateInstanceStorageConfigRequest&, const Model::DisassociateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateLambdaFunctionRequest&, const Model::DisassociateLambdaFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLambdaFunctionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateLexBotRequest&, const Model::DisassociateLexBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLexBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociatePhoneNumberContactFlowRequest&, const Model::DisassociatePhoneNumberContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumberContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateQueueQuickConnectsRequest&, const Model::DisassociateQueueQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateQueueQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateRoutingProfileQueuesRequest&, const Model::DisassociateRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateSecurityKeyRequest&, const Model::DisassociateSecurityKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSecurityKeyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DismissUserContactRequest&, const Model::DismissUserContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DismissUserContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetContactAttributesRequest&, const Model::GetContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetCurrentMetricDataRequest&, const Model::GetCurrentMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetCurrentUserDataRequest&, const Model::GetCurrentUserDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentUserDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetFederationTokenRequest&, const Model::GetFederationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFederationTokenResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetMetricDataRequest&, const Model::GetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetTaskTemplateRequest&, const Model::GetTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaskTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetTrafficDistributionRequest&, const Model::GetTrafficDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficDistributionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListAgentStatusesRequest&, const Model::ListAgentStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentStatusesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListApprovedOriginsRequest&, const Model::ListApprovedOriginsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApprovedOriginsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListBotsRequest&, const Model::ListBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListContactFlowModulesRequest&, const Model::ListContactFlowModulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactFlowModulesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListContactFlowsRequest&, const Model::ListContactFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactFlowsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListContactReferencesRequest&, const Model::ListContactReferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactReferencesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListDefaultVocabulariesRequest&, const Model::ListDefaultVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDefaultVocabulariesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListHoursOfOperationsRequest&, const Model::ListHoursOfOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHoursOfOperationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstanceAttributesRequest&, const Model::ListInstanceAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstanceStorageConfigsRequest&, const Model::ListInstanceStorageConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceStorageConfigsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListIntegrationAssociationsRequest&, const Model::ListIntegrationAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntegrationAssociationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListLambdaFunctionsRequest&, const Model::ListLambdaFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLambdaFunctionsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListLexBotsRequest&, const Model::ListLexBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLexBotsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPhoneNumbersRequest&, const Model::ListPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPhoneNumbersV2Request&, const Model::ListPhoneNumbersV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersV2ResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPromptsRequest&, const Model::ListPromptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPromptsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListQueueQuickConnectsRequest&, const Model::ListQueueQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueueQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListQuickConnectsRequest&, const Model::ListQuickConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQuickConnectsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRoutingProfileQueuesRequest&, const Model::ListRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRoutingProfilesRequest&, const Model::ListRoutingProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityKeysRequest&, const Model::ListSecurityKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityKeysResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfilePermissionsRequest&, const Model::ListSecurityProfilePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilePermissionsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfilesRequest&, const Model::ListSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTaskTemplatesRequest&, const Model::ListTaskTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskTemplatesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTrafficDistributionGroupsRequest&, const Model::ListTrafficDistributionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficDistributionGroupsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUseCasesRequest&, const Model::ListUseCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUseCasesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUserHierarchyGroupsRequest&, const Model::ListUserHierarchyGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserHierarchyGroupsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::MonitorContactRequest&, const Model::MonitorContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MonitorContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::PutUserStatusRequest&, const Model::PutUserStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUserStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ReleasePhoneNumberRequest&, const Model::ReleasePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleasePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ReplicateInstanceRequest&, const Model::ReplicateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplicateInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ResumeContactRecordingRequest&, const Model::ResumeContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchAvailablePhoneNumbersRequest&, const Model::SearchAvailablePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAvailablePhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchQueuesRequest&, const Model::SearchQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchRoutingProfilesRequest&, const Model::SearchRoutingProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchRoutingProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchSecurityProfilesRequest&, const Model::SearchSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchUsersRequest&, const Model::SearchUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchUsersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchVocabulariesRequest&, const Model::SearchVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchVocabulariesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartChatContactRequest&, const Model::StartChatContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChatContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartContactRecordingRequest&, const Model::StartContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartContactStreamingRequest&, const Model::StartContactStreamingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContactStreamingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartOutboundVoiceContactRequest&, const Model::StartOutboundVoiceContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOutboundVoiceContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartTaskContactRequest&, const Model::StartTaskContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTaskContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactRequest&, const Model::StopContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactRecordingRequest&, const Model::StopContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactStreamingRequest&, const Model::StopContactStreamingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactStreamingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SuspendContactRecordingRequest&, const Model::SuspendContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuspendContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::TransferContactRequest&, const Model::TransferContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateAgentStatusRequest&, const Model::UpdateAgentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactRequest&, const Model::UpdateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactAttributesRequest&, const Model::UpdateContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowContentRequest&, const Model::UpdateContactFlowContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowContentResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowMetadataRequest&, const Model::UpdateContactFlowMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowMetadataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowModuleContentRequest&, const Model::UpdateContactFlowModuleContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowModuleContentResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowModuleMetadataRequest&, const Model::UpdateContactFlowModuleMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowModuleMetadataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowNameRequest&, const Model::UpdateContactFlowNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactScheduleRequest&, const Model::UpdateContactScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactScheduleResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateHoursOfOperationRequest&, const Model::UpdateHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateInstanceAttributeRequest&, const Model::UpdateInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateInstanceStorageConfigRequest&, const Model::UpdateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateParticipantRoleConfigRequest&, const Model::UpdateParticipantRoleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateParticipantRoleConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdatePhoneNumberRequest&, const Model::UpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueHoursOfOperationRequest&, const Model::UpdateQueueHoursOfOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueHoursOfOperationResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueMaxContactsRequest&, const Model::UpdateQueueMaxContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueMaxContactsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueNameRequest&, const Model::UpdateQueueNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueOutboundCallerConfigRequest&, const Model::UpdateQueueOutboundCallerConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueOutboundCallerConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQueueStatusRequest&, const Model::UpdateQueueStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQuickConnectConfigRequest&, const Model::UpdateQuickConnectConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuickConnectConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateQuickConnectNameRequest&, const Model::UpdateQuickConnectNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuickConnectNameResponseReceivedHandler;
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
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserRoutingProfileRequest&, const Model::UpdateUserRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserSecurityProfilesRequest&, const Model::UpdateUserSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSecurityProfilesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Connect
} // namespace Aws
