/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/connect/model/CreateSecurityProfileResult.h>
#include <aws/connect/model/CreateTaskTemplateResult.h>
#include <aws/connect/model/CreateUseCaseResult.h>
#include <aws/connect/model/CreateUserResult.h>
#include <aws/connect/model/CreateUserHierarchyGroupResult.h>
#include <aws/connect/model/CreateVocabularyResult.h>
#include <aws/connect/model/DeleteContactFlowModuleResult.h>
#include <aws/connect/model/DeleteTaskTemplateResult.h>
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
#include <aws/connect/model/DescribeSecurityProfileResult.h>
#include <aws/connect/model/DescribeUserResult.h>
#include <aws/connect/model/DescribeUserHierarchyGroupResult.h>
#include <aws/connect/model/DescribeUserHierarchyStructureResult.h>
#include <aws/connect/model/DescribeVocabularyResult.h>
#include <aws/connect/model/GetContactAttributesResult.h>
#include <aws/connect/model/GetCurrentMetricDataResult.h>
#include <aws/connect/model/GetCurrentUserDataResult.h>
#include <aws/connect/model/GetFederationTokenResult.h>
#include <aws/connect/model/GetMetricDataResult.h>
#include <aws/connect/model/GetTaskTemplateResult.h>
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
#include <aws/connect/model/ListSecurityKeysResult.h>
#include <aws/connect/model/ListSecurityProfilePermissionsResult.h>
#include <aws/connect/model/ListSecurityProfilesResult.h>
#include <aws/connect/model/ListTagsForResourceResult.h>
#include <aws/connect/model/ListTaskTemplatesResult.h>
#include <aws/connect/model/ListUseCasesResult.h>
#include <aws/connect/model/ListUserHierarchyGroupsResult.h>
#include <aws/connect/model/ListUsersResult.h>
#include <aws/connect/model/PutUserStatusResult.h>
#include <aws/connect/model/ResumeContactRecordingResult.h>
#include <aws/connect/model/SearchAvailablePhoneNumbersResult.h>
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
#include <aws/connect/model/UpdatePhoneNumberResult.h>
#include <aws/connect/model/UpdateTaskTemplateResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
        class CreateSecurityProfileRequest;
        class CreateTaskTemplateRequest;
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
        class DeleteSecurityProfileRequest;
        class DeleteTaskTemplateRequest;
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
        class DescribeSecurityProfileRequest;
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
        class GetContactAttributesRequest;
        class GetCurrentMetricDataRequest;
        class GetCurrentUserDataRequest;
        class GetFederationTokenRequest;
        class GetMetricDataRequest;
        class GetTaskTemplateRequest;
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
        class ListSecurityKeysRequest;
        class ListSecurityProfilePermissionsRequest;
        class ListSecurityProfilesRequest;
        class ListTagsForResourceRequest;
        class ListTaskTemplatesRequest;
        class ListUseCasesRequest;
        class ListUserHierarchyGroupsRequest;
        class ListUsersRequest;
        class PutUserStatusRequest;
        class ReleasePhoneNumberRequest;
        class ResumeContactRecordingRequest;
        class SearchAvailablePhoneNumbersRequest;
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
        class UpdateSecurityProfileRequest;
        class UpdateTaskTemplateRequest;
        class UpdateUserHierarchyRequest;
        class UpdateUserHierarchyGroupNameRequest;
        class UpdateUserHierarchyStructureRequest;
        class UpdateUserIdentityInfoRequest;
        class UpdateUserPhoneConfigRequest;
        class UpdateUserRoutingProfileRequest;
        class UpdateUserSecurityProfilesRequest;

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
        typedef Aws::Utils::Outcome<CreateSecurityProfileResult, ConnectError> CreateSecurityProfileOutcome;
        typedef Aws::Utils::Outcome<CreateTaskTemplateResult, ConnectError> CreateTaskTemplateOutcome;
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
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteSecurityProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteTaskTemplateResult, ConnectError> DeleteTaskTemplateOutcome;
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
        typedef Aws::Utils::Outcome<DescribeSecurityProfileResult, ConnectError> DescribeSecurityProfileOutcome;
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
        typedef Aws::Utils::Outcome<GetContactAttributesResult, ConnectError> GetContactAttributesOutcome;
        typedef Aws::Utils::Outcome<GetCurrentMetricDataResult, ConnectError> GetCurrentMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetCurrentUserDataResult, ConnectError> GetCurrentUserDataOutcome;
        typedef Aws::Utils::Outcome<GetFederationTokenResult, ConnectError> GetFederationTokenOutcome;
        typedef Aws::Utils::Outcome<GetMetricDataResult, ConnectError> GetMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetTaskTemplateResult, ConnectError> GetTaskTemplateOutcome;
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
        typedef Aws::Utils::Outcome<ListSecurityKeysResult, ConnectError> ListSecurityKeysOutcome;
        typedef Aws::Utils::Outcome<ListSecurityProfilePermissionsResult, ConnectError> ListSecurityProfilePermissionsOutcome;
        typedef Aws::Utils::Outcome<ListSecurityProfilesResult, ConnectError> ListSecurityProfilesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTaskTemplatesResult, ConnectError> ListTaskTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListUseCasesResult, ConnectError> ListUseCasesOutcome;
        typedef Aws::Utils::Outcome<ListUserHierarchyGroupsResult, ConnectError> ListUserHierarchyGroupsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, ConnectError> ListUsersOutcome;
        typedef Aws::Utils::Outcome<PutUserStatusResult, ConnectError> PutUserStatusOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> ReleasePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<ResumeContactRecordingResult, ConnectError> ResumeContactRecordingOutcome;
        typedef Aws::Utils::Outcome<SearchAvailablePhoneNumbersResult, ConnectError> SearchAvailablePhoneNumbersOutcome;
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
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateSecurityProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateTaskTemplateResult, ConnectError> UpdateTaskTemplateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyGroupNameOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyStructureOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserIdentityInfoOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserPhoneConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserRoutingProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserSecurityProfilesOutcome;

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
        typedef std::future<CreateSecurityProfileOutcome> CreateSecurityProfileOutcomeCallable;
        typedef std::future<CreateTaskTemplateOutcome> CreateTaskTemplateOutcomeCallable;
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
        typedef std::future<DeleteSecurityProfileOutcome> DeleteSecurityProfileOutcomeCallable;
        typedef std::future<DeleteTaskTemplateOutcome> DeleteTaskTemplateOutcomeCallable;
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
        typedef std::future<DescribeSecurityProfileOutcome> DescribeSecurityProfileOutcomeCallable;
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
        typedef std::future<GetContactAttributesOutcome> GetContactAttributesOutcomeCallable;
        typedef std::future<GetCurrentMetricDataOutcome> GetCurrentMetricDataOutcomeCallable;
        typedef std::future<GetCurrentUserDataOutcome> GetCurrentUserDataOutcomeCallable;
        typedef std::future<GetFederationTokenOutcome> GetFederationTokenOutcomeCallable;
        typedef std::future<GetMetricDataOutcome> GetMetricDataOutcomeCallable;
        typedef std::future<GetTaskTemplateOutcome> GetTaskTemplateOutcomeCallable;
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
        typedef std::future<ListSecurityKeysOutcome> ListSecurityKeysOutcomeCallable;
        typedef std::future<ListSecurityProfilePermissionsOutcome> ListSecurityProfilePermissionsOutcomeCallable;
        typedef std::future<ListSecurityProfilesOutcome> ListSecurityProfilesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTaskTemplatesOutcome> ListTaskTemplatesOutcomeCallable;
        typedef std::future<ListUseCasesOutcome> ListUseCasesOutcomeCallable;
        typedef std::future<ListUserHierarchyGroupsOutcome> ListUserHierarchyGroupsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<PutUserStatusOutcome> PutUserStatusOutcomeCallable;
        typedef std::future<ReleasePhoneNumberOutcome> ReleasePhoneNumberOutcomeCallable;
        typedef std::future<ResumeContactRecordingOutcome> ResumeContactRecordingOutcomeCallable;
        typedef std::future<SearchAvailablePhoneNumbersOutcome> SearchAvailablePhoneNumbersOutcomeCallable;
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
        typedef std::future<UpdateSecurityProfileOutcome> UpdateSecurityProfileOutcomeCallable;
        typedef std::future<UpdateTaskTemplateOutcome> UpdateTaskTemplateOutcomeCallable;
        typedef std::future<UpdateUserHierarchyOutcome> UpdateUserHierarchyOutcomeCallable;
        typedef std::future<UpdateUserHierarchyGroupNameOutcome> UpdateUserHierarchyGroupNameOutcomeCallable;
        typedef std::future<UpdateUserHierarchyStructureOutcome> UpdateUserHierarchyStructureOutcomeCallable;
        typedef std::future<UpdateUserIdentityInfoOutcome> UpdateUserIdentityInfoOutcomeCallable;
        typedef std::future<UpdateUserPhoneConfigOutcome> UpdateUserPhoneConfigOutcomeCallable;
        typedef std::future<UpdateUserRoutingProfileOutcome> UpdateUserRoutingProfileOutcomeCallable;
        typedef std::future<UpdateUserSecurityProfilesOutcome> UpdateUserSecurityProfilesOutcomeCallable;
} // namespace Model

  class ConnectClient;

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
    typedef std::function<void(const ConnectClient*, const Model::CreateSecurityProfileRequest&, const Model::CreateSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateTaskTemplateRequest&, const Model::CreateTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTaskTemplateResponseReceivedHandler;
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
    typedef std::function<void(const ConnectClient*, const Model::DeleteSecurityProfileRequest&, const Model::DeleteSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteTaskTemplateRequest&, const Model::DeleteTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTaskTemplateResponseReceivedHandler;
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
    typedef std::function<void(const ConnectClient*, const Model::DescribeSecurityProfileRequest&, const Model::DescribeSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityProfileResponseReceivedHandler;
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
    typedef std::function<void(const ConnectClient*, const Model::GetContactAttributesRequest&, const Model::GetContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetCurrentMetricDataRequest&, const Model::GetCurrentMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetCurrentUserDataRequest&, const Model::GetCurrentUserDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentUserDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetFederationTokenRequest&, const Model::GetFederationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFederationTokenResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetMetricDataRequest&, const Model::GetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetTaskTemplateRequest&, const Model::GetTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaskTemplateResponseReceivedHandler;
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
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityKeysRequest&, const Model::ListSecurityKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityKeysResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfilePermissionsRequest&, const Model::ListSecurityProfilePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilePermissionsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfilesRequest&, const Model::ListSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTaskTemplatesRequest&, const Model::ListTaskTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskTemplatesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUseCasesRequest&, const Model::ListUseCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUseCasesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUserHierarchyGroupsRequest&, const Model::ListUserHierarchyGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserHierarchyGroupsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::PutUserStatusRequest&, const Model::PutUserStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUserStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ReleasePhoneNumberRequest&, const Model::ReleasePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleasePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ResumeContactRecordingRequest&, const Model::ResumeContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SearchAvailablePhoneNumbersRequest&, const Model::SearchAvailablePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAvailablePhoneNumbersResponseReceivedHandler;
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
    typedef std::function<void(const ConnectClient*, const Model::UpdateSecurityProfileRequest&, const Model::UpdateSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateTaskTemplateRequest&, const Model::UpdateTaskTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyRequest&, const Model::UpdateUserHierarchyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyGroupNameRequest&, const Model::UpdateUserHierarchyGroupNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyGroupNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyStructureRequest&, const Model::UpdateUserHierarchyStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyStructureResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserIdentityInfoRequest&, const Model::UpdateUserIdentityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserIdentityInfoResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserPhoneConfigRequest&, const Model::UpdateUserPhoneConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPhoneConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserRoutingProfileRequest&, const Model::UpdateUserRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserSecurityProfilesRequest&, const Model::UpdateUserSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSecurityProfilesResponseReceivedHandler;

  /**
   * <p>Amazon Connect is a cloud-based contact center solution that you use to set
   * up and manage a customer contact center and provide reliable customer engagement
   * at any scale.</p> <p>Amazon Connect provides metrics and real-time reporting
   * that enable you to optimize contact routing. You can also resolve customer
   * issues more efficiently by getting customers in touch with the appropriate
   * agents.</p> <p>There are limits to the number of Amazon Connect resources that
   * you can create. There are also limits to the number of requests that you can
   * make per second. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
   * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
   * <p>You can connect programmatically to an Amazon Web Services service by using
   * an endpoint. For a list of Amazon Connect endpoints, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon
   * Connect Endpoints</a>.</p>  <p>Working with flows? Check out the <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
   * Connect Flow language</a>.</p> 
   */
  class AWS_CONNECT_API ConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ConnectClient();


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates an approved origin to an Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateApprovedOrigin">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApprovedOriginOutcome AssociateApprovedOrigin(const Model::AssociateApprovedOriginRequest& request) const;

        /**
         * A Callable wrapper for AssociateApprovedOrigin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateApprovedOriginOutcomeCallable AssociateApprovedOriginCallable(const Model::AssociateApprovedOriginRequest& request) const;

        /**
         * An Async wrapper for AssociateApprovedOrigin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateApprovedOriginAsync(const Model::AssociateApprovedOriginRequest& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Amazon Lex or Amazon Lex V2 bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBotOutcome AssociateBot(const Model::AssociateBotRequest& request) const;

        /**
         * A Callable wrapper for AssociateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateBotOutcomeCallable AssociateBotCallable(const Model::AssociateBotRequest& request) const;

        /**
         * An Async wrapper for AssociateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateBotAsync(const Model::AssociateBotRequest& request, const AssociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an existing vocabulary as the default. Contact Lens for Amazon
         * Connect uses the vocabulary in post-call and real-time analysis sessions for the
         * given language.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateDefaultVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDefaultVocabularyOutcome AssociateDefaultVocabulary(const Model::AssociateDefaultVocabularyRequest& request) const;

        /**
         * A Callable wrapper for AssociateDefaultVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDefaultVocabularyOutcomeCallable AssociateDefaultVocabularyCallable(const Model::AssociateDefaultVocabularyRequest& request) const;

        /**
         * An Async wrapper for AssociateDefaultVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDefaultVocabularyAsync(const Model::AssociateDefaultVocabularyRequest& request, const AssociateDefaultVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a storage resource type for the first time. You can
         * only associate one type of storage configuration in a single call. This means,
         * for example, that you can't define an instance with multiple S3 buckets for
         * storing chat transcripts.</p> <p>This API does not create a resource that
         * doesn't exist. It only associates it to the instance. Ensure that the resource
         * being specified in the storage configuration, like an S3 bucket, exists when
         * being used for association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateInstanceStorageConfigOutcome AssociateInstanceStorageConfig(const Model::AssociateInstanceStorageConfigRequest& request) const;

        /**
         * A Callable wrapper for AssociateInstanceStorageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateInstanceStorageConfigOutcomeCallable AssociateInstanceStorageConfigCallable(const Model::AssociateInstanceStorageConfigRequest& request) const;

        /**
         * An Async wrapper for AssociateInstanceStorageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateInstanceStorageConfigAsync(const Model::AssociateInstanceStorageConfigRequest& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Lambda function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLambdaFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLambdaFunctionOutcome AssociateLambdaFunction(const Model::AssociateLambdaFunctionRequest& request) const;

        /**
         * A Callable wrapper for AssociateLambdaFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLambdaFunctionOutcomeCallable AssociateLambdaFunctionCallable(const Model::AssociateLambdaFunctionRequest& request) const;

        /**
         * An Async wrapper for AssociateLambdaFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateLambdaFunctionAsync(const Model::AssociateLambdaFunctionRequest& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLexBot">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLexBotOutcome AssociateLexBot(const Model::AssociateLexBotRequest& request) const;

        /**
         * A Callable wrapper for AssociateLexBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLexBotOutcomeCallable AssociateLexBotCallable(const Model::AssociateLexBotRequest& request) const;

        /**
         * An Async wrapper for AssociateLexBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateLexBotAsync(const Model::AssociateLexBotRequest& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a flow with a phone number claimed to your Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociatePhoneNumberContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumberContactFlowOutcome AssociatePhoneNumberContactFlow(const Model::AssociatePhoneNumberContactFlowRequest& request) const;

        /**
         * A Callable wrapper for AssociatePhoneNumberContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePhoneNumberContactFlowOutcomeCallable AssociatePhoneNumberContactFlowCallable(const Model::AssociatePhoneNumberContactFlowRequest& request) const;

        /**
         * An Async wrapper for AssociatePhoneNumberContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumberContactFlowAsync(const Model::AssociatePhoneNumberContactFlowRequest& request, const AssociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a set of quick connects with a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateQueueQuickConnectsOutcome AssociateQueueQuickConnects(const Model::AssociateQueueQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for AssociateQueueQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateQueueQuickConnectsOutcomeCallable AssociateQueueQuickConnectsCallable(const Model::AssociateQueueQuickConnectsRequest& request) const;

        /**
         * An Async wrapper for AssociateQueueQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateQueueQuickConnectsAsync(const Model::AssociateQueueQuickConnectsRequest& request, const AssociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a set of queues with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRoutingProfileQueuesOutcome AssociateRoutingProfileQueues(const Model::AssociateRoutingProfileQueuesRequest& request) const;

        /**
         * A Callable wrapper for AssociateRoutingProfileQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateRoutingProfileQueuesOutcomeCallable AssociateRoutingProfileQueuesCallable(const Model::AssociateRoutingProfileQueuesRequest& request) const;

        /**
         * An Async wrapper for AssociateRoutingProfileQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateRoutingProfileQueuesAsync(const Model::AssociateRoutingProfileQueuesRequest& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a security key to the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateSecurityKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSecurityKeyOutcome AssociateSecurityKey(const Model::AssociateSecurityKeyRequest& request) const;

        /**
         * A Callable wrapper for AssociateSecurityKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSecurityKeyOutcomeCallable AssociateSecurityKeyCallable(const Model::AssociateSecurityKeyRequest& request) const;

        /**
         * An Async wrapper for AssociateSecurityKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSecurityKeyAsync(const Model::AssociateSecurityKeyRequest& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Claims an available phone number to your Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ClaimPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimPhoneNumberOutcome ClaimPhoneNumber(const Model::ClaimPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for ClaimPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClaimPhoneNumberOutcomeCallable ClaimPhoneNumberCallable(const Model::ClaimPhoneNumberRequest& request) const;

        /**
         * An Async wrapper for ClaimPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClaimPhoneNumberAsync(const Model::ClaimPhoneNumberRequest& request, const ClaimPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates an agent status for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentStatusOutcome CreateAgentStatus(const Model::CreateAgentStatusRequest& request) const;

        /**
         * A Callable wrapper for CreateAgentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAgentStatusOutcomeCallable CreateAgentStatusCallable(const Model::CreateAgentStatusRequest& request) const;

        /**
         * An Async wrapper for CreateAgentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAgentStatusAsync(const Model::CreateAgentStatusRequest& request, const CreateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a flow for the specified Amazon Connect instance.</p> <p>You can also
         * create and update flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactFlowOutcome CreateContactFlow(const Model::CreateContactFlowRequest& request) const;

        /**
         * A Callable wrapper for CreateContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactFlowOutcomeCallable CreateContactFlowCallable(const Model::CreateContactFlowRequest& request) const;

        /**
         * An Async wrapper for CreateContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactFlowAsync(const Model::CreateContactFlowRequest& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a flow module for the specified Amazon Connect instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactFlowModuleOutcome CreateContactFlowModule(const Model::CreateContactFlowModuleRequest& request) const;

        /**
         * A Callable wrapper for CreateContactFlowModule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactFlowModuleOutcomeCallable CreateContactFlowModuleCallable(const Model::CreateContactFlowModuleRequest& request) const;

        /**
         * An Async wrapper for CreateContactFlowModule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactFlowModuleAsync(const Model::CreateContactFlowModuleRequest& request, const CreateContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates hours of operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHoursOfOperationOutcome CreateHoursOfOperation(const Model::CreateHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for CreateHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHoursOfOperationOutcomeCallable CreateHoursOfOperationCallable(const Model::CreateHoursOfOperationRequest& request) const;

        /**
         * An Async wrapper for CreateHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHoursOfOperationAsync(const Model::CreateHoursOfOperationRequest& request, const CreateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Initiates an Amazon Connect instance with all the supported
         * channels enabled. It does not attach any storage, such as Amazon Simple Storage
         * Service (Amazon S3) or Amazon Kinesis. It also does not allow for any
         * configurations on features, such as Contact Lens for Amazon Connect. </p>
         * <p>Amazon Connect enforces a limit on the total number of instances that you can
         * create or delete in 30 days. If you exceed this limit, you will get an error
         * message indicating there has been an excessive number of attempts at creating or
         * deleting instances. You must wait 30 days before you can restart creating and
         * deleting instances in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Web Services resource association with an Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateIntegrationAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationAssociationOutcome CreateIntegrationAssociation(const Model::CreateIntegrationAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateIntegrationAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIntegrationAssociationOutcomeCallable CreateIntegrationAssociationCallable(const Model::CreateIntegrationAssociationRequest& request) const;

        /**
         * An Async wrapper for CreateIntegrationAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIntegrationAssociationAsync(const Model::CreateIntegrationAssociationRequest& request, const CreateIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates a new queue for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /**
         * A Callable wrapper for CreateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQueueOutcomeCallable CreateQueueCallable(const Model::CreateQueueRequest& request) const;

        /**
         * An Async wrapper for CreateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a quick connect for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQuickConnectOutcome CreateQuickConnect(const Model::CreateQuickConnectRequest& request) const;

        /**
         * A Callable wrapper for CreateQuickConnect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQuickConnectOutcomeCallable CreateQuickConnectCallable(const Model::CreateQuickConnectRequest& request) const;

        /**
         * An Async wrapper for CreateQuickConnect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQuickConnectAsync(const Model::CreateQuickConnectRequest& request, const CreateQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoutingProfileOutcome CreateRoutingProfile(const Model::CreateRoutingProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateRoutingProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoutingProfileOutcomeCallable CreateRoutingProfileCallable(const Model::CreateRoutingProfileRequest& request) const;

        /**
         * An Async wrapper for CreateRoutingProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoutingProfileAsync(const Model::CreateRoutingProfileRequest& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityProfileOutcome CreateSecurityProfile(const Model::CreateSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityProfileOutcomeCallable CreateSecurityProfileCallable(const Model::CreateSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for CreateSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityProfileAsync(const Model::CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new task template in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTaskTemplateOutcome CreateTaskTemplate(const Model::CreateTaskTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTaskTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTaskTemplateOutcomeCallable CreateTaskTemplateCallable(const Model::CreateTaskTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateTaskTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTaskTemplateAsync(const Model::CreateTaskTemplateRequest& request, const CreateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a use case for an integration association.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUseCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUseCaseOutcome CreateUseCase(const Model::CreateUseCaseRequest& request) const;

        /**
         * A Callable wrapper for CreateUseCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUseCaseOutcomeCallable CreateUseCaseCallable(const Model::CreateUseCaseRequest& request) const;

        /**
         * An Async wrapper for CreateUseCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUseCaseAsync(const Model::CreateUseCaseRequest& request, const CreateUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user account for the specified Amazon Connect instance.</p> <p>For
         * information about how to create user accounts using the Amazon Connect console,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/user-management.html">Add
         * Users</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserHierarchyGroupOutcome CreateUserHierarchyGroup(const Model::CreateUserHierarchyGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateUserHierarchyGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserHierarchyGroupOutcomeCallable CreateUserHierarchyGroupCallable(const Model::CreateUserHierarchyGroupRequest& request) const;

        /**
         * An Async wrapper for CreateUserHierarchyGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserHierarchyGroupAsync(const Model::CreateUserHierarchyGroupRequest& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom vocabulary associated with your Amazon Connect instance. You
         * can set a custom vocabulary to be your default vocabulary for a given language.
         * Contact Lens for Amazon Connect uses the default vocabulary in post-call and
         * real-time contact analysis sessions for that language.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyOutcome CreateVocabulary(const Model::CreateVocabularyRequest& request) const;

        /**
         * A Callable wrapper for CreateVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVocabularyOutcomeCallable CreateVocabularyCallable(const Model::CreateVocabularyRequest& request) const;

        /**
         * An Async wrapper for CreateVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVocabularyAsync(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a flow for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactFlowOutcome DeleteContactFlow(const Model::DeleteContactFlowRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactFlowOutcomeCallable DeleteContactFlowCallable(const Model::DeleteContactFlowRequest& request) const;

        /**
         * An Async wrapper for DeleteContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactFlowAsync(const Model::DeleteContactFlowRequest& request, const DeleteContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactFlowModuleOutcome DeleteContactFlowModule(const Model::DeleteContactFlowModuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactFlowModule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactFlowModuleOutcomeCallable DeleteContactFlowModuleCallable(const Model::DeleteContactFlowModuleRequest& request) const;

        /**
         * An Async wrapper for DeleteContactFlowModule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactFlowModuleAsync(const Model::DeleteContactFlowModuleRequest& request, const DeleteContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes an hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHoursOfOperationOutcome DeleteHoursOfOperation(const Model::DeleteHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for DeleteHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHoursOfOperationOutcomeCallable DeleteHoursOfOperationCallable(const Model::DeleteHoursOfOperationRequest& request) const;

        /**
         * An Async wrapper for DeleteHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHoursOfOperationAsync(const Model::DeleteHoursOfOperationRequest& request, const DeleteHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes the Amazon Connect instance.</p> <p>Amazon Connect
         * enforces a limit on the total number of instances that you can create or delete
         * in 30 days. If you exceed this limit, you will get an error message indicating
         * there has been an excessive number of attempts at creating or deleting
         * instances. You must wait 30 days before you can restart creating and deleting
         * instances in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Web Services resource association from an Amazon Connect
         * instance. The association must not have any use cases associated with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteIntegrationAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationAssociationOutcome DeleteIntegrationAssociation(const Model::DeleteIntegrationAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegrationAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntegrationAssociationOutcomeCallable DeleteIntegrationAssociationCallable(const Model::DeleteIntegrationAssociationRequest& request) const;

        /**
         * An Async wrapper for DeleteIntegrationAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntegrationAssociationAsync(const Model::DeleteIntegrationAssociationRequest& request, const DeleteIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a quick connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQuickConnectOutcome DeleteQuickConnect(const Model::DeleteQuickConnectRequest& request) const;

        /**
         * A Callable wrapper for DeleteQuickConnect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQuickConnectOutcomeCallable DeleteQuickConnectCallable(const Model::DeleteQuickConnectRequest& request) const;

        /**
         * An Async wrapper for DeleteQuickConnect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQuickConnectAsync(const Model::DeleteQuickConnectRequest& request, const DeleteQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityProfileOutcome DeleteSecurityProfile(const Model::DeleteSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityProfileOutcomeCallable DeleteSecurityProfileCallable(const Model::DeleteSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityProfileAsync(const Model::DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the task template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaskTemplateOutcome DeleteTaskTemplate(const Model::DeleteTaskTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTaskTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTaskTemplateOutcomeCallable DeleteTaskTemplateCallable(const Model::DeleteTaskTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteTaskTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTaskTemplateAsync(const Model::DeleteTaskTemplateRequest& request, const DeleteTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a use case from an integration association.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUseCase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUseCaseOutcome DeleteUseCase(const Model::DeleteUseCaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteUseCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUseCaseOutcomeCallable DeleteUseCaseCallable(const Model::DeleteUseCaseRequest& request) const;

        /**
         * An Async wrapper for DeleteUseCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUseCaseAsync(const Model::DeleteUseCaseRequest& request, const DeleteUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user account from the specified Amazon Connect instance.</p> <p>For
         * information about what happens to a user's data when their account is deleted,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-users.html">Delete
         * Users from Your Amazon Connect Instance</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing user hierarchy group. It must not be associated with any
         * agents or have any active child groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserHierarchyGroupOutcome DeleteUserHierarchyGroup(const Model::DeleteUserHierarchyGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserHierarchyGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserHierarchyGroupOutcomeCallable DeleteUserHierarchyGroupCallable(const Model::DeleteUserHierarchyGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteUserHierarchyGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserHierarchyGroupAsync(const Model::DeleteUserHierarchyGroupRequest& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the vocabulary that has the given identifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyOutcome DeleteVocabulary(const Model::DeleteVocabularyRequest& request) const;

        /**
         * A Callable wrapper for DeleteVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVocabularyOutcomeCallable DeleteVocabularyCallable(const Model::DeleteVocabularyRequest& request) const;

        /**
         * An Async wrapper for DeleteVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVocabularyAsync(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes an agent status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentStatusOutcome DescribeAgentStatus(const Model::DescribeAgentStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeAgentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgentStatusOutcomeCallable DescribeAgentStatusCallable(const Model::DescribeAgentStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeAgentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAgentStatusAsync(const Model::DescribeAgentStatusRequest& request, const DescribeAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified contact. </p>  <p>Contact
         * information remains available in Amazon Connect for 24 months, and then it is
         * deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactOutcome DescribeContact(const Model::DescribeContactRequest& request) const;

        /**
         * A Callable wrapper for DescribeContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContactOutcomeCallable DescribeContactCallable(const Model::DescribeContactRequest& request) const;

        /**
         * An Async wrapper for DescribeContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContactAsync(const Model::DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified flow.</p> <p>You can also create and update flows
         * using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactFlowOutcome DescribeContactFlow(const Model::DescribeContactFlowRequest& request) const;

        /**
         * A Callable wrapper for DescribeContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContactFlowOutcomeCallable DescribeContactFlowCallable(const Model::DescribeContactFlowRequest& request) const;

        /**
         * An Async wrapper for DescribeContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContactFlowAsync(const Model::DescribeContactFlowRequest& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactFlowModuleOutcome DescribeContactFlowModule(const Model::DescribeContactFlowModuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeContactFlowModule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContactFlowModuleOutcomeCallable DescribeContactFlowModuleCallable(const Model::DescribeContactFlowModuleRequest& request) const;

        /**
         * An Async wrapper for DescribeContactFlowModule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContactFlowModuleAsync(const Model::DescribeContactFlowModuleRequest& request, const DescribeContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHoursOfOperationOutcome DescribeHoursOfOperation(const Model::DescribeHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for DescribeHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHoursOfOperationOutcomeCallable DescribeHoursOfOperationCallable(const Model::DescribeHoursOfOperationRequest& request) const;

        /**
         * An Async wrapper for DescribeHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHoursOfOperationAsync(const Model::DescribeHoursOfOperationRequest& request, const DescribeHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns the current state of the specified instance identifier.
         * It tracks the instance while it is being created and returns an error status, if
         * applicable. </p> <p>If an instance is not created successfully, the instance
         * status reason field returns details relevant to the reason. The instance in a
         * failed state is returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request) const;

        /**
         * An Async wrapper for DescribeInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified instance attribute.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAttributeOutcome DescribeInstanceAttribute(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAttributeOutcomeCallable DescribeInstanceAttributeCallable(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAttributeAsync(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Retrieves the current storage configurations for the specified
         * resource type, association ID, and instance ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceStorageConfigOutcome DescribeInstanceStorageConfig(const Model::DescribeInstanceStorageConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceStorageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceStorageConfigOutcomeCallable DescribeInstanceStorageConfigCallable(const Model::DescribeInstanceStorageConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceStorageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceStorageConfigAsync(const Model::DescribeInstanceStorageConfigRequest& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details and status of a phone number that’s claimed to your Amazon
         * Connect instance</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePhoneNumberOutcome DescribePhoneNumber(const Model::DescribePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for DescribePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePhoneNumberOutcomeCallable DescribePhoneNumberCallable(const Model::DescribePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for DescribePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePhoneNumberAsync(const Model::DescribePhoneNumberRequest& request, const DescribePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueueOutcome DescribeQueue(const Model::DescribeQueueRequest& request) const;

        /**
         * A Callable wrapper for DescribeQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeQueueOutcomeCallable DescribeQueueCallable(const Model::DescribeQueueRequest& request) const;

        /**
         * An Async wrapper for DescribeQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeQueueAsync(const Model::DescribeQueueRequest& request, const DescribeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the quick connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQuickConnectOutcome DescribeQuickConnect(const Model::DescribeQuickConnectRequest& request) const;

        /**
         * A Callable wrapper for DescribeQuickConnect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeQuickConnectOutcomeCallable DescribeQuickConnectCallable(const Model::DescribeQuickConnectRequest& request) const;

        /**
         * An Async wrapper for DescribeQuickConnect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeQuickConnectAsync(const Model::DescribeQuickConnectRequest& request, const DescribeQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRoutingProfileOutcome DescribeRoutingProfile(const Model::DescribeRoutingProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeRoutingProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRoutingProfileOutcomeCallable DescribeRoutingProfileCallable(const Model::DescribeRoutingProfileRequest& request) const;

        /**
         * An Async wrapper for DescribeRoutingProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRoutingProfileAsync(const Model::DescribeRoutingProfileRequest& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Gets basic information about the security profle.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityProfileOutcome DescribeSecurityProfile(const Model::DescribeSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityProfileOutcomeCallable DescribeSecurityProfileCallable(const Model::DescribeSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for DescribeSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityProfileAsync(const Model::DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified user account. You can find the instance ID in the
         * console (it’s the final part of the ARN). The console does not display the user
         * IDs. Instead, list the users and note the IDs provided in the
         * output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyGroupOutcome DescribeUserHierarchyGroup(const Model::DescribeUserHierarchyGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserHierarchyGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserHierarchyGroupOutcomeCallable DescribeUserHierarchyGroupCallable(const Model::DescribeUserHierarchyGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeUserHierarchyGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserHierarchyGroupAsync(const Model::DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the hierarchy structure of the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyStructureOutcome DescribeUserHierarchyStructure(const Model::DescribeUserHierarchyStructureRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserHierarchyStructure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserHierarchyStructureOutcomeCallable DescribeUserHierarchyStructureCallable(const Model::DescribeUserHierarchyStructureRequest& request) const;

        /**
         * An Async wrapper for DescribeUserHierarchyStructure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserHierarchyStructureAsync(const Model::DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVocabularyOutcome DescribeVocabulary(const Model::DescribeVocabularyRequest& request) const;

        /**
         * A Callable wrapper for DescribeVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVocabularyOutcomeCallable DescribeVocabularyCallable(const Model::DescribeVocabularyRequest& request) const;

        /**
         * An Async wrapper for DescribeVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVocabularyAsync(const Model::DescribeVocabularyRequest& request, const DescribeVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes access to integrated applications from Amazon
         * Connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateApprovedOrigin">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApprovedOriginOutcome DisassociateApprovedOrigin(const Model::DisassociateApprovedOriginRequest& request) const;

        /**
         * A Callable wrapper for DisassociateApprovedOrigin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateApprovedOriginOutcomeCallable DisassociateApprovedOriginCallable(const Model::DisassociateApprovedOriginRequest& request) const;

        /**
         * An Async wrapper for DisassociateApprovedOrigin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateApprovedOriginAsync(const Model::DisassociateApprovedOriginRequest& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes authorization from the specified instance to access the
         * specified Amazon Lex or Amazon Lex V2 bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBotOutcome DisassociateBot(const Model::DisassociateBotRequest& request) const;

        /**
         * A Callable wrapper for DisassociateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateBotOutcomeCallable DisassociateBotCallable(const Model::DisassociateBotRequest& request) const;

        /**
         * An Async wrapper for DisassociateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateBotAsync(const Model::DisassociateBotRequest& request, const DisassociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Removes the storage type configurations for the specified
         * resource type and association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateInstanceStorageConfigOutcome DisassociateInstanceStorageConfig(const Model::DisassociateInstanceStorageConfigRequest& request) const;

        /**
         * A Callable wrapper for DisassociateInstanceStorageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateInstanceStorageConfigOutcomeCallable DisassociateInstanceStorageConfigCallable(const Model::DisassociateInstanceStorageConfigRequest& request) const;

        /**
         * An Async wrapper for DisassociateInstanceStorageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateInstanceStorageConfigAsync(const Model::DisassociateInstanceStorageConfigRequest& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Remove the Lambda function from the dropdown options available in
         * the relevant flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLambdaFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLambdaFunctionOutcome DisassociateLambdaFunction(const Model::DisassociateLambdaFunctionRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLambdaFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLambdaFunctionOutcomeCallable DisassociateLambdaFunctionCallable(const Model::DisassociateLambdaFunctionRequest& request) const;

        /**
         * An Async wrapper for DisassociateLambdaFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateLambdaFunctionAsync(const Model::DisassociateLambdaFunctionRequest& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes authorization from the specified instance to access the
         * specified Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLexBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLexBotOutcome DisassociateLexBot(const Model::DisassociateLexBotRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLexBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLexBotOutcomeCallable DisassociateLexBotCallable(const Model::DisassociateLexBotRequest& request) const;

        /**
         * An Async wrapper for DisassociateLexBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateLexBotAsync(const Model::DisassociateLexBotRequest& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the flow association from a phone number claimed to your Amazon
         * Connect instance, if a flow association exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociatePhoneNumberContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumberContactFlowOutcome DisassociatePhoneNumberContactFlow(const Model::DisassociatePhoneNumberContactFlowRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumberContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePhoneNumberContactFlowOutcomeCallable DisassociatePhoneNumberContactFlowCallable(const Model::DisassociatePhoneNumberContactFlowRequest& request) const;

        /**
         * An Async wrapper for DisassociatePhoneNumberContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumberContactFlowAsync(const Model::DisassociatePhoneNumberContactFlowRequest& request, const DisassociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Disassociates a set of quick connects from a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateQueueQuickConnectsOutcome DisassociateQueueQuickConnects(const Model::DisassociateQueueQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateQueueQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateQueueQuickConnectsOutcomeCallable DisassociateQueueQuickConnectsCallable(const Model::DisassociateQueueQuickConnectsRequest& request) const;

        /**
         * An Async wrapper for DisassociateQueueQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateQueueQuickConnectsAsync(const Model::DisassociateQueueQuickConnectsRequest& request, const DisassociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a set of queues from a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRoutingProfileQueuesOutcome DisassociateRoutingProfileQueues(const Model::DisassociateRoutingProfileQueuesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateRoutingProfileQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRoutingProfileQueuesOutcomeCallable DisassociateRoutingProfileQueuesCallable(const Model::DisassociateRoutingProfileQueuesRequest& request) const;

        /**
         * An Async wrapper for DisassociateRoutingProfileQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRoutingProfileQueuesAsync(const Model::DisassociateRoutingProfileQueuesRequest& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes the specified security key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateSecurityKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSecurityKeyOutcome DisassociateSecurityKey(const Model::DisassociateSecurityKeyRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSecurityKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSecurityKeyOutcomeCallable DisassociateSecurityKeyCallable(const Model::DisassociateSecurityKeyRequest& request) const;

        /**
         * An Async wrapper for DisassociateSecurityKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSecurityKeyAsync(const Model::DisassociateSecurityKeyRequest& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the contact attributes for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactAttributesOutcome GetContactAttributes(const Model::GetContactAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetContactAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactAttributesOutcomeCallable GetContactAttributesCallable(const Model::GetContactAttributesRequest& request) const;

        /**
         * An Async wrapper for GetContactAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactAttributesAsync(const Model::GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the real-time metric data from the specified Amazon Connect
         * instance.</p> <p>For a description of each metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentMetricDataOutcome GetCurrentMetricData(const Model::GetCurrentMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetCurrentMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCurrentMetricDataOutcomeCallable GetCurrentMetricDataCallable(const Model::GetCurrentMetricDataRequest& request) const;

        /**
         * An Async wrapper for GetCurrentMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCurrentMetricDataAsync(const Model::GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the real-time active user data from the specified Amazon Connect
         * instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentUserData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentUserDataOutcome GetCurrentUserData(const Model::GetCurrentUserDataRequest& request) const;

        /**
         * A Callable wrapper for GetCurrentUserData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCurrentUserDataOutcomeCallable GetCurrentUserDataCallable(const Model::GetCurrentUserDataRequest& request) const;

        /**
         * An Async wrapper for GetCurrentUserData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCurrentUserDataAsync(const Model::GetCurrentUserDataRequest& request, const GetCurrentUserDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a token for federation.</p>  <p>This API doesn't support root
         * users. If you try to invoke GetFederationToken with root credentials, an error
         * message similar to the following one appears: </p> <p> <code>Provided identity:
         * Principal: .... User: .... cannot be used for federation with Amazon
         * Connect</code> </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFederationTokenOutcome GetFederationToken(const Model::GetFederationTokenRequest& request) const;

        /**
         * A Callable wrapper for GetFederationToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFederationTokenOutcomeCallable GetFederationTokenCallable(const Model::GetFederationTokenRequest& request) const;

        /**
         * An Async wrapper for GetFederationToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFederationTokenAsync(const Model::GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets historical metric data from the specified Amazon Connect instance.</p>
         * <p>For a description of each historical metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataOutcome GetMetricData(const Model::GetMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetricDataOutcomeCallable GetMetricDataCallable(const Model::GetMetricDataRequest& request) const;

        /**
         * An Async wrapper for GetMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMetricDataAsync(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about a specific task template in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTaskTemplateOutcome GetTaskTemplate(const Model::GetTaskTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTaskTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTaskTemplateOutcomeCallable GetTaskTemplateCallable(const Model::GetTaskTemplateRequest& request) const;

        /**
         * An Async wrapper for GetTaskTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTaskTemplateAsync(const Model::GetTaskTemplateRequest& request, const GetTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists agent statuses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListAgentStatuses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentStatusesOutcome ListAgentStatuses(const Model::ListAgentStatusesRequest& request) const;

        /**
         * A Callable wrapper for ListAgentStatuses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAgentStatusesOutcomeCallable ListAgentStatusesCallable(const Model::ListAgentStatusesRequest& request) const;

        /**
         * An Async wrapper for ListAgentStatuses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAgentStatusesAsync(const Model::ListAgentStatusesRequest& request, const ListAgentStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all approved origins associated with
         * the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListApprovedOrigins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApprovedOriginsOutcome ListApprovedOrigins(const Model::ListApprovedOriginsRequest& request) const;

        /**
         * A Callable wrapper for ListApprovedOrigins that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApprovedOriginsOutcomeCallable ListApprovedOriginsCallable(const Model::ListApprovedOriginsRequest& request) const;

        /**
         * An Async wrapper for ListApprovedOrigins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApprovedOriginsAsync(const Model::ListApprovedOriginsRequest& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>For the specified version of Amazon Lex, returns a paginated list
         * of all the Amazon Lex bots currently associated with the instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

        /**
         * A Callable wrapper for ListBots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotsOutcomeCallable ListBotsCallable(const Model::ListBotsRequest& request) const;

        /**
         * An Async wrapper for ListBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotsAsync(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the flow modules for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlowModules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactFlowModulesOutcome ListContactFlowModules(const Model::ListContactFlowModulesRequest& request) const;

        /**
         * A Callable wrapper for ListContactFlowModules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactFlowModulesOutcomeCallable ListContactFlowModulesCallable(const Model::ListContactFlowModulesRequest& request) const;

        /**
         * An Async wrapper for ListContactFlowModules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactFlowModulesAsync(const Model::ListContactFlowModulesRequest& request, const ListContactFlowModulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the flows for the specified Amazon Connect
         * instance.</p> <p>You can also create and update flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p> <p>For more information about flows, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-contact-flows.html">Flows</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactFlowsOutcome ListContactFlows(const Model::ListContactFlowsRequest& request) const;

        /**
         * A Callable wrapper for ListContactFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactFlowsOutcomeCallable ListContactFlowsCallable(const Model::ListContactFlowsRequest& request) const;

        /**
         * An Async wrapper for ListContactFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactFlowsAsync(const Model::ListContactFlowsRequest& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>For the specified <code>referenceTypes</code>, returns a list of
         * references associated with the contact. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactReferencesOutcome ListContactReferences(const Model::ListContactReferencesRequest& request) const;

        /**
         * A Callable wrapper for ListContactReferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactReferencesOutcomeCallable ListContactReferencesCallable(const Model::ListContactReferencesRequest& request) const;

        /**
         * An Async wrapper for ListContactReferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactReferencesAsync(const Model::ListContactReferencesRequest& request, const ListContactReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the default vocabularies for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListDefaultVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDefaultVocabulariesOutcome ListDefaultVocabularies(const Model::ListDefaultVocabulariesRequest& request) const;

        /**
         * A Callable wrapper for ListDefaultVocabularies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDefaultVocabulariesOutcomeCallable ListDefaultVocabulariesCallable(const Model::ListDefaultVocabulariesRequest& request) const;

        /**
         * An Async wrapper for ListDefaultVocabularies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDefaultVocabulariesAsync(const Model::ListDefaultVocabulariesRequest& request, const ListDefaultVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the hours of operation for the specified Amazon
         * Connect instance.</p> <p>For more information about hours of operation, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-hours-operation.html">Set
         * the Hours of Operation for a Queue</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListHoursOfOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHoursOfOperationsOutcome ListHoursOfOperations(const Model::ListHoursOfOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListHoursOfOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHoursOfOperationsOutcomeCallable ListHoursOfOperationsCallable(const Model::ListHoursOfOperationsRequest& request) const;

        /**
         * An Async wrapper for ListHoursOfOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHoursOfOperationsAsync(const Model::ListHoursOfOperationsRequest& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all attribute types for the given
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceAttributesOutcome ListInstanceAttributes(const Model::ListInstanceAttributesRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceAttributesOutcomeCallable ListInstanceAttributesCallable(const Model::ListInstanceAttributesRequest& request) const;

        /**
         * An Async wrapper for ListInstanceAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceAttributesAsync(const Model::ListInstanceAttributesRequest& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of storage configs for the identified
         * instance and resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceStorageConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceStorageConfigsOutcome ListInstanceStorageConfigs(const Model::ListInstanceStorageConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceStorageConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceStorageConfigsOutcomeCallable ListInstanceStorageConfigsCallable(const Model::ListInstanceStorageConfigsRequest& request) const;

        /**
         * An Async wrapper for ListInstanceStorageConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceStorageConfigsAsync(const Model::ListInstanceStorageConfigsRequest& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Return a list of instances which are in active state,
         * creation-in-progress state, and failed state. Instances that aren't successfully
         * created (they are in a failed state) are returned only for 24 hours after the
         * CreateInstance API was invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the Amazon Web Services resource
         * associations for the specified Amazon Connect instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntegrationAssociationsOutcome ListIntegrationAssociations(const Model::ListIntegrationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListIntegrationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIntegrationAssociationsOutcomeCallable ListIntegrationAssociationsCallable(const Model::ListIntegrationAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListIntegrationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIntegrationAssociationsAsync(const Model::ListIntegrationAssociationsRequest& request, const ListIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all Lambda functions that display in
         * the dropdown options in the relevant flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLambdaFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLambdaFunctionsOutcome ListLambdaFunctions(const Model::ListLambdaFunctionsRequest& request) const;

        /**
         * A Callable wrapper for ListLambdaFunctions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLambdaFunctionsOutcomeCallable ListLambdaFunctionsCallable(const Model::ListLambdaFunctionsRequest& request) const;

        /**
         * An Async wrapper for ListLambdaFunctions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLambdaFunctionsAsync(const Model::ListLambdaFunctionsRequest& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all the Amazon Lex bots currently
         * associated with the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLexBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLexBotsOutcome ListLexBots(const Model::ListLexBotsRequest& request) const;

        /**
         * A Callable wrapper for ListLexBots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLexBotsOutcomeCallable ListLexBotsCallable(const Model::ListLexBotsRequest& request) const;

        /**
         * An Async wrapper for ListLexBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLexBotsAsync(const Model::ListLexBotsRequest& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the phone numbers for the specified Amazon Connect
         * instance. </p> <p>For more information about phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * An Async wrapper for ListPhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists phone numbers claimed to your Amazon Connect instance. </p> <p>For more
         * information about phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbersV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersV2Outcome ListPhoneNumbersV2(const Model::ListPhoneNumbersV2Request& request) const;

        /**
         * A Callable wrapper for ListPhoneNumbersV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumbersV2OutcomeCallable ListPhoneNumbersV2Callable(const Model::ListPhoneNumbersV2Request& request) const;

        /**
         * An Async wrapper for ListPhoneNumbersV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumbersV2Async(const Model::ListPhoneNumbersV2Request& request, const ListPhoneNumbersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the prompts for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPrompts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPromptsOutcome ListPrompts(const Model::ListPromptsRequest& request) const;

        /**
         * A Callable wrapper for ListPrompts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPromptsOutcomeCallable ListPromptsCallable(const Model::ListPromptsRequest& request) const;

        /**
         * An Async wrapper for ListPrompts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPromptsAsync(const Model::ListPromptsRequest& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists the quick connects associated with a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueueQuickConnectsOutcome ListQueueQuickConnects(const Model::ListQueueQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for ListQueueQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueueQuickConnectsOutcomeCallable ListQueueQuickConnectsCallable(const Model::ListQueueQuickConnectsRequest& request) const;

        /**
         * An Async wrapper for ListQueueQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueueQuickConnectsAsync(const Model::ListQueueQuickConnectsRequest& request, const ListQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the queues for the specified Amazon Connect
         * instance.</p> <p>If you do not specify a <code>QueueTypes</code> parameter, both
         * standard and agent queues are returned. This might cause an unexpected
         * truncation of results if you have more than 1000 agents and you limit the number
         * of results of the API call in code.</p> <p>For more information about queues,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-queues-standard-and-agent.html">Queues:
         * Standard and Agent</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueuesOutcomeCallable ListQueuesCallable(const Model::ListQueuesRequest& request) const;

        /**
         * An Async wrapper for ListQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the quick connects for the specified Amazon
         * Connect instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQuickConnectsOutcome ListQuickConnects(const Model::ListQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for ListQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQuickConnectsOutcomeCallable ListQuickConnectsCallable(const Model::ListQuickConnectsRequest& request) const;

        /**
         * An Async wrapper for ListQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQuickConnectsAsync(const Model::ListQuickConnectsRequest& request, const ListQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the queues associated with a routing profile.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfileQueuesOutcome ListRoutingProfileQueues(const Model::ListRoutingProfileQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListRoutingProfileQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutingProfileQueuesOutcomeCallable ListRoutingProfileQueuesCallable(const Model::ListRoutingProfileQueuesRequest& request) const;

        /**
         * An Async wrapper for ListRoutingProfileQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutingProfileQueuesAsync(const Model::ListRoutingProfileQueuesRequest& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the routing profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about routing profiles, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing.html">Routing
         * Profiles</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/routing-profiles.html">Create
         * a Routing Profile</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfilesOutcome ListRoutingProfiles(const Model::ListRoutingProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListRoutingProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutingProfilesOutcomeCallable ListRoutingProfilesCallable(const Model::ListRoutingProfilesRequest& request) const;

        /**
         * An Async wrapper for ListRoutingProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutingProfilesAsync(const Model::ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all security keys associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityKeysOutcome ListSecurityKeys(const Model::ListSecurityKeysRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityKeysOutcomeCallable ListSecurityKeysCallable(const Model::ListSecurityKeysRequest& request) const;

        /**
         * An Async wrapper for ListSecurityKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityKeysAsync(const Model::ListSecurityKeysRequest& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists the permissions granted to a security
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfilePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilePermissionsOutcome ListSecurityProfilePermissions(const Model::ListSecurityProfilePermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityProfilePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityProfilePermissionsOutcomeCallable ListSecurityProfilePermissionsCallable(const Model::ListSecurityProfilePermissionsRequest& request) const;

        /**
         * An Async wrapper for ListSecurityProfilePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityProfilePermissionsAsync(const Model::ListSecurityProfilePermissionsRequest& request, const ListSecurityProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the security profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about security profiles,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-security-profiles.html">Security
         * Profiles</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesOutcome ListSecurityProfiles(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityProfilesOutcomeCallable ListSecurityProfilesCallable(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * An Async wrapper for ListSecurityProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityProfilesAsync(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p> <p>For sample policies that
         * use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists task templates for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTaskTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskTemplatesOutcome ListTaskTemplates(const Model::ListTaskTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTaskTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTaskTemplatesOutcomeCallable ListTaskTemplatesCallable(const Model::ListTaskTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListTaskTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTaskTemplatesAsync(const Model::ListTaskTemplatesRequest& request, const ListTaskTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the use cases for the integration association. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUseCases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUseCasesOutcome ListUseCases(const Model::ListUseCasesRequest& request) const;

        /**
         * A Callable wrapper for ListUseCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUseCasesOutcomeCallable ListUseCasesCallable(const Model::ListUseCasesRequest& request) const;

        /**
         * An Async wrapper for ListUseCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUseCasesAsync(const Model::ListUseCasesRequest& request, const ListUseCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the hierarchy groups for the specified
         * Amazon Connect instance.</p> <p>For more information about agent hierarchies,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/agent-hierarchy.html">Set
         * Up Agent Hierarchies</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserHierarchyGroupsOutcome ListUserHierarchyGroups(const Model::ListUserHierarchyGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListUserHierarchyGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserHierarchyGroupsOutcomeCallable ListUserHierarchyGroupsCallable(const Model::ListUserHierarchyGroupsRequest& request) const;

        /**
         * An Async wrapper for ListUserHierarchyGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserHierarchyGroupsAsync(const Model::ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the users for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the current status of a user or agent in Amazon Connect. If the agent
         * is currently handling a contact, this sets the agent's next status.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-agent-status.html">Agent
         * status</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-next-status.html">Set
         * your next status</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PutUserStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUserStatusOutcome PutUserStatus(const Model::PutUserStatusRequest& request) const;

        /**
         * A Callable wrapper for PutUserStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutUserStatusOutcomeCallable PutUserStatusCallable(const Model::PutUserStatusRequest& request) const;

        /**
         * An Async wrapper for PutUserStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutUserStatusAsync(const Model::PutUserStatusRequest& request, const PutUserStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Releases a phone number previously claimed to an Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReleasePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleasePhoneNumberOutcome ReleasePhoneNumber(const Model::ReleasePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for ReleasePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleasePhoneNumberOutcomeCallable ReleasePhoneNumberCallable(const Model::ReleasePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for ReleasePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReleasePhoneNumberAsync(const Model::ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When a contact is being recorded, and the recording has been suspended using
         * SuspendContactRecording, this API resumes recording the call.</p> <p>Only voice
         * recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResumeContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeContactRecordingOutcome ResumeContactRecording(const Model::ResumeContactRecordingRequest& request) const;

        /**
         * A Callable wrapper for ResumeContactRecording that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeContactRecordingOutcomeCallable ResumeContactRecordingCallable(const Model::ResumeContactRecordingRequest& request) const;

        /**
         * An Async wrapper for ResumeContactRecording that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeContactRecordingAsync(const Model::ResumeContactRecordingRequest& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for available phone numbers that you can claim to your Amazon
         * Connect instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAvailablePhoneNumbersOutcome SearchAvailablePhoneNumbers(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for SearchAvailablePhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchAvailablePhoneNumbersOutcomeCallable SearchAvailablePhoneNumbersCallable(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * An Async wrapper for SearchAvailablePhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAvailablePhoneNumbersAsync(const Model::SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Searches security profiles in an Amazon Connect instance, with
         * optional filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSecurityProfilesOutcome SearchSecurityProfiles(const Model::SearchSecurityProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchSecurityProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchSecurityProfilesOutcomeCallable SearchSecurityProfilesCallable(const Model::SearchSecurityProfilesRequest& request) const;

        /**
         * An Async wrapper for SearchSecurityProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchSecurityProfilesAsync(const Model::SearchSecurityProfilesRequest& request, const SearchSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches users in an Amazon Connect instance, with optional
         * filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersOutcome SearchUsers(const Model::SearchUsersRequest& request) const;

        /**
         * A Callable wrapper for SearchUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchUsersOutcomeCallable SearchUsersCallable(const Model::SearchUsersRequest& request) const;

        /**
         * An Async wrapper for SearchUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchUsersAsync(const Model::SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for vocabularies within a specific Amazon Connect instance using
         * <code>State</code>, <code>NameStartsWith</code>, and
         * <code>LanguageCode</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchVocabulariesOutcome SearchVocabularies(const Model::SearchVocabulariesRequest& request) const;

        /**
         * A Callable wrapper for SearchVocabularies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchVocabulariesOutcomeCallable SearchVocabulariesCallable(const Model::SearchVocabulariesRequest& request) const;

        /**
         * An Async wrapper for SearchVocabularies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchVocabulariesAsync(const Model::SearchVocabulariesRequest& request, const SearchVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a flow to start a new chat for the customer. Response of this API
         * provides a token required to obtain credentials from the <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * API in the Amazon Connect Participant Service.</p> <p>When a new chat contact is
         * successfully created, clients must subscribe to the participant’s connection for
         * the created chat within 5 minutes. This is achieved by invoking <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * with WEBSOCKET and CONNECTION_CREDENTIALS. </p> <p>A 429 error occurs in the
         * following situations:</p> <ul> <li> <p>API rate limit is exceeded. API TPS
         * throttling returns a <code>TooManyRequests</code> exception.</p> </li> <li>
         * <p>The <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">quota
         * for concurrent active chats</a> is exceeded. Active chat throttling returns a
         * <code>LimitExceededException</code>.</p> </li> </ul> <p>If you use the
         * <code>ChatDurationInMinutes</code> parameter and receive a 400 error, your
         * account may not support the ability to configure custom chat durations. For more
         * information, contact Amazon Web Services Support. </p> <p>For more information
         * about chat, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat.html">Chat</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartChatContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChatContactOutcome StartChatContact(const Model::StartChatContactRequest& request) const;

        /**
         * A Callable wrapper for StartChatContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChatContactOutcomeCallable StartChatContactCallable(const Model::StartChatContactRequest& request) const;

        /**
         * An Async wrapper for StartChatContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChatContactAsync(const Model::StartChatContactRequest& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts recording the contact: </p> <ul> <li> <p>If the API is called
         * <i>before</i> the agent joins the call, recording starts when the agent joins
         * the call.</p> </li> <li> <p>If the API is called <i>after</i> the agent joins
         * the call, recording starts at the time of the API call.</p> </li> </ul>
         * <p>StartContactRecording is a one-time action. For example, if you use
         * StopContactRecording to stop recording an ongoing call, you can't use
         * StartContactRecording to restart it. For scenarios where the recording has
         * started and you want to suspend and resume it, such as when collecting sensitive
         * information (for example, a credit card number), use SuspendContactRecording and
         * ResumeContactRecording.</p> <p>You can use this API to override the recording
         * behavior configured in the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-recording-behavior.html">Set
         * recording behavior</a> block.</p> <p>Only voice recordings are supported at this
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContactRecordingOutcome StartContactRecording(const Model::StartContactRecordingRequest& request) const;

        /**
         * A Callable wrapper for StartContactRecording that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartContactRecordingOutcomeCallable StartContactRecordingCallable(const Model::StartContactRecordingRequest& request) const;

        /**
         * An Async wrapper for StartContactRecording that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartContactRecordingAsync(const Model::StartContactRecordingRequest& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Initiates real-time message streaming for a new chat contact.</p> <p> For
         * more information about message streaming, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-message-streaming.html">Enable
         * real-time chat message streaming</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactStreaming">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContactStreamingOutcome StartContactStreaming(const Model::StartContactStreamingRequest& request) const;

        /**
         * A Callable wrapper for StartContactStreaming that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartContactStreamingOutcomeCallable StartContactStreamingCallable(const Model::StartContactStreamingRequest& request) const;

        /**
         * An Async wrapper for StartContactStreaming that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartContactStreamingAsync(const Model::StartContactStreamingRequest& request, const StartContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Places an outbound call to a contact, and then initiates the flow. It
         * performs the actions in the flow that's specified (in
         * <code>ContactFlowId</code>).</p> <p>Agents do not initiate the outbound API,
         * which means that they do not dial the contact. If the flow places an outbound
         * call to a contact, and then puts the contact in queue, the call is then routed
         * to the agent, like any other inbound case.</p> <p>There is a 60-second dialing
         * timeout for this operation. If the call is not connected after 60 seconds, it
         * fails.</p>  <p>UK numbers with a 447 prefix are not allowed by default.
         * Before you can dial these UK mobile numbers, you must submit a service quota
         * increase request. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
         * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p>   <p>Campaign calls are not allowed by default. Before you can
         * make a call with <code>TrafficType</code> = <code>CAMPAIGN</code>, you must
         * submit a service quota increase request to the quota <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#outbound-communications-quotas">Amazon
         * Connect campaigns</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOutboundVoiceContactOutcome StartOutboundVoiceContact(const Model::StartOutboundVoiceContactRequest& request) const;

        /**
         * A Callable wrapper for StartOutboundVoiceContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOutboundVoiceContactOutcomeCallable StartOutboundVoiceContactCallable(const Model::StartOutboundVoiceContactRequest& request) const;

        /**
         * An Async wrapper for StartOutboundVoiceContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOutboundVoiceContactAsync(const Model::StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a flow to start a new task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartTaskContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTaskContactOutcome StartTaskContact(const Model::StartTaskContactRequest& request) const;

        /**
         * A Callable wrapper for StartTaskContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTaskContactOutcomeCallable StartTaskContactCallable(const Model::StartTaskContactRequest& request) const;

        /**
         * An Async wrapper for StartTaskContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTaskContactAsync(const Model::StartTaskContactRequest& request, const StartTaskContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ends the specified contact. This call does not work for the following
         * initiation methods:</p> <ul> <li> <p>DISCONNECT</p> </li> <li> <p>TRANSFER</p>
         * </li> <li> <p>QUEUE_TRANSFER</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactOutcome StopContact(const Model::StopContactRequest& request) const;

        /**
         * A Callable wrapper for StopContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopContactOutcomeCallable StopContactCallable(const Model::StopContactRequest& request) const;

        /**
         * An Async wrapper for StopContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopContactAsync(const Model::StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops recording a call when a contact is being recorded. StopContactRecording
         * is a one-time action. If you use StopContactRecording to stop recording an
         * ongoing call, you can't use StartContactRecording to restart it. For scenarios
         * where the recording has started and you want to suspend it for sensitive
         * information (for example, to collect a credit card number), and then restart it,
         * use SuspendContactRecording and ResumeContactRecording.</p> <p>Only voice
         * recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactRecordingOutcome StopContactRecording(const Model::StopContactRecordingRequest& request) const;

        /**
         * A Callable wrapper for StopContactRecording that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopContactRecordingOutcomeCallable StopContactRecordingCallable(const Model::StopContactRecordingRequest& request) const;

        /**
         * An Async wrapper for StopContactRecording that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopContactRecordingAsync(const Model::StopContactRecordingRequest& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Ends message streaming on a specified contact. To restart message streaming
         * on that contact, call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartContactStreaming.html">StartContactStreaming</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactStreaming">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactStreamingOutcome StopContactStreaming(const Model::StopContactStreamingRequest& request) const;

        /**
         * A Callable wrapper for StopContactStreaming that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopContactStreamingOutcomeCallable StopContactStreamingCallable(const Model::StopContactStreamingRequest& request) const;

        /**
         * An Async wrapper for StopContactStreaming that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopContactStreamingAsync(const Model::StopContactStreamingRequest& request, const StopContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When a contact is being recorded, this API suspends recording the call. For
         * example, you might suspend the call recording while collecting sensitive
         * information, such as a credit card number. Then use ResumeContactRecording to
         * restart recording. </p> <p>The period of time that the recording is suspended is
         * filled with silence in the final recording. </p> <p>Only voice recordings are
         * supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SuspendContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendContactRecordingOutcome SuspendContactRecording(const Model::SuspendContactRecordingRequest& request) const;

        /**
         * A Callable wrapper for SuspendContactRecording that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SuspendContactRecordingOutcomeCallable SuspendContactRecordingCallable(const Model::SuspendContactRecordingRequest& request) const;

        /**
         * An Async wrapper for SuspendContactRecording that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SuspendContactRecordingAsync(const Model::SuspendContactRecordingRequest& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p> <p>Some of the
         * supported resource types are agents, routing profiles, queues, quick connects,
         * contact flows, agent statuses, hours of operation, phone numbers, security
         * profiles, and task templates. For a complete list, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/tagging.html">Tagging
         * resources in Amazon Connect</a>.</p> <p>For sample policies that use tags, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transfers contacts from one agent or queue to another agent or queue at any
         * point after a contact is created. You can transfer a contact to another queue by
         * providing the flow which orchestrates the contact to the destination queue. This
         * gives you more control over contact handling and helps you adhere to the service
         * level agreement (SLA) guaranteed to your customers.</p> <p>Note the following
         * requirements:</p> <ul> <li> <p>Transfer is supported for only <code>TASK</code>
         * contacts.</p> </li> <li> <p>Do not use both <code>QueueId</code> and
         * <code>UserId</code> in the same call.</p> </li> <li> <p>The following flow types
         * are supported: Inbound flow, Transfer to agent flow, and Transfer to queue
         * flow.</p> </li> <li> <p>The <code>TransferContact</code> API can be called only
         * on active contacts.</p> </li> <li> <p>A contact cannot be transferred more than
         * 11 times.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TransferContact">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferContactOutcome TransferContact(const Model::TransferContactRequest& request) const;

        /**
         * A Callable wrapper for TransferContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferContactOutcomeCallable TransferContactCallable(const Model::TransferContactRequest& request) const;

        /**
         * An Async wrapper for TransferContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferContactAsync(const Model::TransferContactRequest& request, const TransferContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates agent status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentStatusOutcome UpdateAgentStatus(const Model::UpdateAgentStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAgentStatusOutcomeCallable UpdateAgentStatusCallable(const Model::UpdateAgentStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateAgentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAgentStatusAsync(const Model::UpdateAgentStatusRequest& request, const UpdateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Adds or updates user-defined contact information associated with
         * the specified contact. At least one field to be updated must be present in the
         * request.</p>  <p>You can add or update user-defined contact
         * information for both ongoing and completed contacts.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * A Callable wrapper for UpdateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactOutcomeCallable UpdateContactCallable(const Model::UpdateContactRequest& request) const;

        /**
         * An Async wrapper for UpdateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAsync(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates user-defined contact attributes associated with the
         * specified contact.</p> <p>You can create or update user-defined attributes for
         * both ongoing and completed contacts. For example, while the call is active, you
         * can update the customer's name or the reason the customer called. You can add
         * notes about steps that the agent took during the call that display to the next
         * agent that takes the call. You can also update attributes for a contact using
         * data from your CRM application and save the data with the contact in Amazon
         * Connect. You could also flag calls for additional analysis, such as legal review
         * or to identify abusive callers.</p> <p>Contact attributes are available in
         * Amazon Connect for 24 months, and are then deleted. For information about
         * contact record retention and the maximum size of the contact record attributes
         * section, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#feature-limits">Feature
         * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactAttributesOutcome UpdateContactAttributes(const Model::UpdateContactAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactAttributesOutcomeCallable UpdateContactAttributesCallable(const Model::UpdateContactAttributesRequest& request) const;

        /**
         * An Async wrapper for UpdateContactAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAttributesAsync(const Model::UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified flow.</p> <p>You can also create and update flows using
         * the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowContentOutcome UpdateContactFlowContent(const Model::UpdateContactFlowContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactFlowContentOutcomeCallable UpdateContactFlowContentCallable(const Model::UpdateContactFlowContentRequest& request) const;

        /**
         * An Async wrapper for UpdateContactFlowContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactFlowContentAsync(const Model::UpdateContactFlowContentRequest& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates metadata about specified flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowMetadataOutcome UpdateContactFlowMetadata(const Model::UpdateContactFlowMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactFlowMetadataOutcomeCallable UpdateContactFlowMetadataCallable(const Model::UpdateContactFlowMetadataRequest& request) const;

        /**
         * An Async wrapper for UpdateContactFlowMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactFlowMetadataAsync(const Model::UpdateContactFlowMetadataRequest& request, const UpdateContactFlowMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates specified flow module for the specified Amazon Connect instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowModuleContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowModuleContentOutcome UpdateContactFlowModuleContent(const Model::UpdateContactFlowModuleContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowModuleContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactFlowModuleContentOutcomeCallable UpdateContactFlowModuleContentCallable(const Model::UpdateContactFlowModuleContentRequest& request) const;

        /**
         * An Async wrapper for UpdateContactFlowModuleContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactFlowModuleContentAsync(const Model::UpdateContactFlowModuleContentRequest& request, const UpdateContactFlowModuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates metadata about specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowModuleMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowModuleMetadataOutcome UpdateContactFlowModuleMetadata(const Model::UpdateContactFlowModuleMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowModuleMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactFlowModuleMetadataOutcomeCallable UpdateContactFlowModuleMetadataCallable(const Model::UpdateContactFlowModuleMetadataRequest& request) const;

        /**
         * An Async wrapper for UpdateContactFlowModuleMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactFlowModuleMetadataAsync(const Model::UpdateContactFlowModuleMetadataRequest& request, const UpdateContactFlowModuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The name of the flow.</p> <p>You can also create and update flows using the
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowNameOutcome UpdateContactFlowName(const Model::UpdateContactFlowNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactFlowNameOutcomeCallable UpdateContactFlowNameCallable(const Model::UpdateContactFlowNameRequest& request) const;

        /**
         * An Async wrapper for UpdateContactFlowName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactFlowNameAsync(const Model::UpdateContactFlowNameRequest& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the scheduled time of a task contact that is already
         * scheduled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactScheduleOutcome UpdateContactSchedule(const Model::UpdateContactScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactScheduleOutcomeCallable UpdateContactScheduleCallable(const Model::UpdateContactScheduleRequest& request) const;

        /**
         * An Async wrapper for UpdateContactSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactScheduleAsync(const Model::UpdateContactScheduleRequest& request, const UpdateContactScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHoursOfOperationOutcome UpdateHoursOfOperation(const Model::UpdateHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for UpdateHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHoursOfOperationOutcomeCallable UpdateHoursOfOperationCallable(const Model::UpdateHoursOfOperationRequest& request) const;

        /**
         * An Async wrapper for UpdateHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHoursOfOperationAsync(const Model::UpdateHoursOfOperationRequest& request, const UpdateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the value for the specified attribute type.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceAttributeOutcome UpdateInstanceAttribute(const Model::UpdateInstanceAttributeRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceAttributeOutcomeCallable UpdateInstanceAttributeCallable(const Model::UpdateInstanceAttributeRequest& request) const;

        /**
         * An Async wrapper for UpdateInstanceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceAttributeAsync(const Model::UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates an existing configuration for a resource type. This API
         * is idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceStorageConfigOutcome UpdateInstanceStorageConfig(const Model::UpdateInstanceStorageConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceStorageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceStorageConfigOutcomeCallable UpdateInstanceStorageConfigCallable(const Model::UpdateInstanceStorageConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateInstanceStorageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceStorageConfigAsync(const Model::UpdateInstanceStorageConfigRequest& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates your claimed phone number from its current Amazon Connect instance to
         * another Amazon Connect instance in the same Region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for UpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberAsync(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the hours of operation for the specified
         * queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueHoursOfOperationOutcome UpdateQueueHoursOfOperation(const Model::UpdateQueueHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQueueHoursOfOperationOutcomeCallable UpdateQueueHoursOfOperationCallable(const Model::UpdateQueueHoursOfOperationRequest& request) const;

        /**
         * An Async wrapper for UpdateQueueHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQueueHoursOfOperationAsync(const Model::UpdateQueueHoursOfOperationRequest& request, const UpdateQueueHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the maximum number of contacts allowed in a queue before
         * it is considered full.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueMaxContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueMaxContactsOutcome UpdateQueueMaxContacts(const Model::UpdateQueueMaxContactsRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueMaxContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQueueMaxContactsOutcomeCallable UpdateQueueMaxContactsCallable(const Model::UpdateQueueMaxContactsRequest& request) const;

        /**
         * An Async wrapper for UpdateQueueMaxContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQueueMaxContactsAsync(const Model::UpdateQueueMaxContactsRequest& request, const UpdateQueueMaxContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the name and description of a queue. At least
         * <code>Name</code> or <code>Description</code> must be provided.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueNameOutcome UpdateQueueName(const Model::UpdateQueueNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQueueNameOutcomeCallable UpdateQueueNameCallable(const Model::UpdateQueueNameRequest& request) const;

        /**
         * An Async wrapper for UpdateQueueName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQueueNameAsync(const Model::UpdateQueueNameRequest& request, const UpdateQueueNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the outbound caller ID name, number, and outbound whisper
         * flow for a specified queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueOutboundCallerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueOutboundCallerConfigOutcome UpdateQueueOutboundCallerConfig(const Model::UpdateQueueOutboundCallerConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueOutboundCallerConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQueueOutboundCallerConfigOutcomeCallable UpdateQueueOutboundCallerConfigCallable(const Model::UpdateQueueOutboundCallerConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateQueueOutboundCallerConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQueueOutboundCallerConfigAsync(const Model::UpdateQueueOutboundCallerConfigRequest& request, const UpdateQueueOutboundCallerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the status of the queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueStatusOutcome UpdateQueueStatus(const Model::UpdateQueueStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQueueStatusOutcomeCallable UpdateQueueStatusCallable(const Model::UpdateQueueStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateQueueStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQueueStatusAsync(const Model::UpdateQueueStatusRequest& request, const UpdateQueueStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration settings for the specified quick
         * connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQuickConnectConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuickConnectConfigOutcome UpdateQuickConnectConfig(const Model::UpdateQuickConnectConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateQuickConnectConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQuickConnectConfigOutcomeCallable UpdateQuickConnectConfigCallable(const Model::UpdateQuickConnectConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateQuickConnectConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQuickConnectConfigAsync(const Model::UpdateQuickConnectConfigRequest& request, const UpdateQuickConnectConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and description of a quick connect. The request accepts the
         * following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQuickConnectName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuickConnectNameOutcome UpdateQuickConnectName(const Model::UpdateQuickConnectNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateQuickConnectName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQuickConnectNameOutcomeCallable UpdateQuickConnectNameCallable(const Model::UpdateQuickConnectNameRequest& request) const;

        /**
         * An Async wrapper for UpdateQuickConnectName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQuickConnectNameAsync(const Model::UpdateQuickConnectNameRequest& request, const UpdateQuickConnectNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the channels that agents can handle in the Contact Control Panel
         * (CCP) for a routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileConcurrencyOutcome UpdateRoutingProfileConcurrency(const Model::UpdateRoutingProfileConcurrencyRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileConcurrency that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingProfileConcurrencyOutcomeCallable UpdateRoutingProfileConcurrencyCallable(const Model::UpdateRoutingProfileConcurrencyRequest& request) const;

        /**
         * An Async wrapper for UpdateRoutingProfileConcurrency that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingProfileConcurrencyAsync(const Model::UpdateRoutingProfileConcurrencyRequest& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the default outbound queue of a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileDefaultOutboundQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileDefaultOutboundQueueOutcome UpdateRoutingProfileDefaultOutboundQueue(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileDefaultOutboundQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingProfileDefaultOutboundQueueOutcomeCallable UpdateRoutingProfileDefaultOutboundQueueCallable(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request) const;

        /**
         * An Async wrapper for UpdateRoutingProfileDefaultOutboundQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingProfileDefaultOutboundQueueAsync(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and description of a routing profile. The request accepts
         * the following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileNameOutcome UpdateRoutingProfileName(const Model::UpdateRoutingProfileNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingProfileNameOutcomeCallable UpdateRoutingProfileNameCallable(const Model::UpdateRoutingProfileNameRequest& request) const;

        /**
         * An Async wrapper for UpdateRoutingProfileName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingProfileNameAsync(const Model::UpdateRoutingProfileNameRequest& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties associated with a set of queues for a routing
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileQueuesOutcome UpdateRoutingProfileQueues(const Model::UpdateRoutingProfileQueuesRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingProfileQueuesOutcomeCallable UpdateRoutingProfileQueuesCallable(const Model::UpdateRoutingProfileQueuesRequest& request) const;

        /**
         * An Async wrapper for UpdateRoutingProfileQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingProfileQueuesAsync(const Model::UpdateRoutingProfileQueuesRequest& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityProfileOutcome UpdateSecurityProfile(const Model::UpdateSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityProfileOutcomeCallable UpdateSecurityProfileCallable(const Model::UpdateSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityProfileAsync(const Model::UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates details about a specific task template in the specified Amazon
         * Connect instance. This operation does not support partial updates. Instead it
         * does a full update of template content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskTemplateOutcome UpdateTaskTemplate(const Model::UpdateTaskTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTaskTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTaskTemplateOutcomeCallable UpdateTaskTemplateCallable(const Model::UpdateTaskTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateTaskTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTaskTemplateAsync(const Model::UpdateTaskTemplateRequest& request, const UpdateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the specified hierarchy group to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyOutcome UpdateUserHierarchy(const Model::UpdateUserHierarchyRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserHierarchy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserHierarchyOutcomeCallable UpdateUserHierarchyCallable(const Model::UpdateUserHierarchyRequest& request) const;

        /**
         * An Async wrapper for UpdateUserHierarchy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserHierarchyAsync(const Model::UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name of the user hierarchy group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyGroupName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyGroupNameOutcome UpdateUserHierarchyGroupName(const Model::UpdateUserHierarchyGroupNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserHierarchyGroupName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserHierarchyGroupNameOutcomeCallable UpdateUserHierarchyGroupNameCallable(const Model::UpdateUserHierarchyGroupNameRequest& request) const;

        /**
         * An Async wrapper for UpdateUserHierarchyGroupName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserHierarchyGroupNameAsync(const Model::UpdateUserHierarchyGroupNameRequest& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the user hierarchy structure: add, remove, and rename user hierarchy
         * levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyStructureOutcome UpdateUserHierarchyStructure(const Model::UpdateUserHierarchyStructureRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserHierarchyStructure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserHierarchyStructureOutcomeCallable UpdateUserHierarchyStructureCallable(const Model::UpdateUserHierarchyStructureRequest& request) const;

        /**
         * An Async wrapper for UpdateUserHierarchyStructure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserHierarchyStructureAsync(const Model::UpdateUserHierarchyStructureRequest& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the identity information for the specified user.</p> 
         * <p>We strongly recommend limiting who has the ability to invoke
         * <code>UpdateUserIdentityInfo</code>. Someone with that ability can change the
         * login credentials of other users by changing their email address. This poses a
         * security risk to your organization. They can change the email address of a user
         * to the attacker's email address, and then reset the password through email. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-best-practices.html">Best
         * Practices for Security Profiles</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserIdentityInfoOutcome UpdateUserIdentityInfo(const Model::UpdateUserIdentityInfoRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserIdentityInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserIdentityInfoOutcomeCallable UpdateUserIdentityInfoCallable(const Model::UpdateUserIdentityInfoRequest& request) const;

        /**
         * An Async wrapper for UpdateUserIdentityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserIdentityInfoAsync(const Model::UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the phone configuration settings for the specified
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPhoneConfigOutcome UpdateUserPhoneConfig(const Model::UpdateUserPhoneConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserPhoneConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPhoneConfigOutcomeCallable UpdateUserPhoneConfigCallable(const Model::UpdateUserPhoneConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateUserPhoneConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPhoneConfigAsync(const Model::UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the specified routing profile to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserRoutingProfileOutcome UpdateUserRoutingProfile(const Model::UpdateUserRoutingProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserRoutingProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserRoutingProfileOutcomeCallable UpdateUserRoutingProfileCallable(const Model::UpdateUserRoutingProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateUserRoutingProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserRoutingProfileAsync(const Model::UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the specified security profiles to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSecurityProfilesOutcome UpdateUserSecurityProfiles(const Model::UpdateUserSecurityProfilesRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserSecurityProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserSecurityProfilesOutcomeCallable UpdateUserSecurityProfilesCallable(const Model::UpdateUserSecurityProfilesRequest& request) const;

        /**
         * An Async wrapper for UpdateUserSecurityProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserSecurityProfilesAsync(const Model::UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateApprovedOriginAsyncHelper(const Model::AssociateApprovedOriginRequest& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateBotAsyncHelper(const Model::AssociateBotRequest& request, const AssociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateDefaultVocabularyAsyncHelper(const Model::AssociateDefaultVocabularyRequest& request, const AssociateDefaultVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateInstanceStorageConfigAsyncHelper(const Model::AssociateInstanceStorageConfigRequest& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateLambdaFunctionAsyncHelper(const Model::AssociateLambdaFunctionRequest& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateLexBotAsyncHelper(const Model::AssociateLexBotRequest& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePhoneNumberContactFlowAsyncHelper(const Model::AssociatePhoneNumberContactFlowRequest& request, const AssociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateQueueQuickConnectsAsyncHelper(const Model::AssociateQueueQuickConnectsRequest& request, const AssociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateRoutingProfileQueuesAsyncHelper(const Model::AssociateRoutingProfileQueuesRequest& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSecurityKeyAsyncHelper(const Model::AssociateSecurityKeyRequest& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ClaimPhoneNumberAsyncHelper(const Model::ClaimPhoneNumberRequest& request, const ClaimPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAgentStatusAsyncHelper(const Model::CreateAgentStatusRequest& request, const CreateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactFlowAsyncHelper(const Model::CreateContactFlowRequest& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactFlowModuleAsyncHelper(const Model::CreateContactFlowModuleRequest& request, const CreateContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHoursOfOperationAsyncHelper(const Model::CreateHoursOfOperationRequest& request, const CreateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceAsyncHelper(const Model::CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIntegrationAssociationAsyncHelper(const Model::CreateIntegrationAssociationRequest& request, const CreateIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateQueueAsyncHelper(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateQuickConnectAsyncHelper(const Model::CreateQuickConnectRequest& request, const CreateQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoutingProfileAsyncHelper(const Model::CreateRoutingProfileRequest& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSecurityProfileAsyncHelper(const Model::CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTaskTemplateAsyncHelper(const Model::CreateTaskTemplateRequest& request, const CreateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUseCaseAsyncHelper(const Model::CreateUseCaseRequest& request, const CreateUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserHierarchyGroupAsyncHelper(const Model::CreateUserHierarchyGroupRequest& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVocabularyAsyncHelper(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContactFlowAsyncHelper(const Model::DeleteContactFlowRequest& request, const DeleteContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContactFlowModuleAsyncHelper(const Model::DeleteContactFlowModuleRequest& request, const DeleteContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHoursOfOperationAsyncHelper(const Model::DeleteHoursOfOperationRequest& request, const DeleteHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceAsyncHelper(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntegrationAssociationAsyncHelper(const Model::DeleteIntegrationAssociationRequest& request, const DeleteIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteQuickConnectAsyncHelper(const Model::DeleteQuickConnectRequest& request, const DeleteQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSecurityProfileAsyncHelper(const Model::DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTaskTemplateAsyncHelper(const Model::DeleteTaskTemplateRequest& request, const DeleteTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUseCaseAsyncHelper(const Model::DeleteUseCaseRequest& request, const DeleteUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserHierarchyGroupAsyncHelper(const Model::DeleteUserHierarchyGroupRequest& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVocabularyAsyncHelper(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAgentStatusAsyncHelper(const Model::DescribeAgentStatusRequest& request, const DescribeAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContactAsyncHelper(const Model::DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContactFlowAsyncHelper(const Model::DescribeContactFlowRequest& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContactFlowModuleAsyncHelper(const Model::DescribeContactFlowModuleRequest& request, const DescribeContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHoursOfOperationAsyncHelper(const Model::DescribeHoursOfOperationRequest& request, const DescribeHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceAsyncHelper(const Model::DescribeInstanceRequest& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceAttributeAsyncHelper(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceStorageConfigAsyncHelper(const Model::DescribeInstanceStorageConfigRequest& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePhoneNumberAsyncHelper(const Model::DescribePhoneNumberRequest& request, const DescribePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeQueueAsyncHelper(const Model::DescribeQueueRequest& request, const DescribeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeQuickConnectAsyncHelper(const Model::DescribeQuickConnectRequest& request, const DescribeQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRoutingProfileAsyncHelper(const Model::DescribeRoutingProfileRequest& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSecurityProfileAsyncHelper(const Model::DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserHierarchyGroupAsyncHelper(const Model::DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserHierarchyStructureAsyncHelper(const Model::DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVocabularyAsyncHelper(const Model::DescribeVocabularyRequest& request, const DescribeVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateApprovedOriginAsyncHelper(const Model::DisassociateApprovedOriginRequest& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateBotAsyncHelper(const Model::DisassociateBotRequest& request, const DisassociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateInstanceStorageConfigAsyncHelper(const Model::DisassociateInstanceStorageConfigRequest& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateLambdaFunctionAsyncHelper(const Model::DisassociateLambdaFunctionRequest& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateLexBotAsyncHelper(const Model::DisassociateLexBotRequest& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePhoneNumberContactFlowAsyncHelper(const Model::DisassociatePhoneNumberContactFlowRequest& request, const DisassociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateQueueQuickConnectsAsyncHelper(const Model::DisassociateQueueQuickConnectsRequest& request, const DisassociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateRoutingProfileQueuesAsyncHelper(const Model::DisassociateRoutingProfileQueuesRequest& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSecurityKeyAsyncHelper(const Model::DisassociateSecurityKeyRequest& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactAttributesAsyncHelper(const Model::GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCurrentMetricDataAsyncHelper(const Model::GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCurrentUserDataAsyncHelper(const Model::GetCurrentUserDataRequest& request, const GetCurrentUserDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFederationTokenAsyncHelper(const Model::GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricDataAsyncHelper(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTaskTemplateAsyncHelper(const Model::GetTaskTemplateRequest& request, const GetTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAgentStatusesAsyncHelper(const Model::ListAgentStatusesRequest& request, const ListAgentStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApprovedOriginsAsyncHelper(const Model::ListApprovedOriginsRequest& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBotsAsyncHelper(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactFlowModulesAsyncHelper(const Model::ListContactFlowModulesRequest& request, const ListContactFlowModulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactFlowsAsyncHelper(const Model::ListContactFlowsRequest& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactReferencesAsyncHelper(const Model::ListContactReferencesRequest& request, const ListContactReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDefaultVocabulariesAsyncHelper(const Model::ListDefaultVocabulariesRequest& request, const ListDefaultVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHoursOfOperationsAsyncHelper(const Model::ListHoursOfOperationsRequest& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceAttributesAsyncHelper(const Model::ListInstanceAttributesRequest& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceStorageConfigsAsyncHelper(const Model::ListInstanceStorageConfigsRequest& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstancesAsyncHelper(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIntegrationAssociationsAsyncHelper(const Model::ListIntegrationAssociationsRequest& request, const ListIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLambdaFunctionsAsyncHelper(const Model::ListLambdaFunctionsRequest& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLexBotsAsyncHelper(const Model::ListLexBotsRequest& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPhoneNumbersAsyncHelper(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPhoneNumbersV2AsyncHelper(const Model::ListPhoneNumbersV2Request& request, const ListPhoneNumbersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPromptsAsyncHelper(const Model::ListPromptsRequest& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueueQuickConnectsAsyncHelper(const Model::ListQueueQuickConnectsRequest& request, const ListQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueuesAsyncHelper(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQuickConnectsAsyncHelper(const Model::ListQuickConnectsRequest& request, const ListQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutingProfileQueuesAsyncHelper(const Model::ListRoutingProfileQueuesRequest& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutingProfilesAsyncHelper(const Model::ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityKeysAsyncHelper(const Model::ListSecurityKeysRequest& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityProfilePermissionsAsyncHelper(const Model::ListSecurityProfilePermissionsRequest& request, const ListSecurityProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityProfilesAsyncHelper(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTaskTemplatesAsyncHelper(const Model::ListTaskTemplatesRequest& request, const ListTaskTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUseCasesAsyncHelper(const Model::ListUseCasesRequest& request, const ListUseCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserHierarchyGroupsAsyncHelper(const Model::ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutUserStatusAsyncHelper(const Model::PutUserStatusRequest& request, const PutUserStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReleasePhoneNumberAsyncHelper(const Model::ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeContactRecordingAsyncHelper(const Model::ResumeContactRecordingRequest& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchAvailablePhoneNumbersAsyncHelper(const Model::SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchSecurityProfilesAsyncHelper(const Model::SearchSecurityProfilesRequest& request, const SearchSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchUsersAsyncHelper(const Model::SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchVocabulariesAsyncHelper(const Model::SearchVocabulariesRequest& request, const SearchVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartChatContactAsyncHelper(const Model::StartChatContactRequest& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartContactRecordingAsyncHelper(const Model::StartContactRecordingRequest& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartContactStreamingAsyncHelper(const Model::StartContactStreamingRequest& request, const StartContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartOutboundVoiceContactAsyncHelper(const Model::StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTaskContactAsyncHelper(const Model::StartTaskContactRequest& request, const StartTaskContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopContactAsyncHelper(const Model::StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopContactRecordingAsyncHelper(const Model::StopContactRecordingRequest& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopContactStreamingAsyncHelper(const Model::StopContactStreamingRequest& request, const StopContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SuspendContactRecordingAsyncHelper(const Model::SuspendContactRecordingRequest& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransferContactAsyncHelper(const Model::TransferContactRequest& request, const TransferContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAgentStatusAsyncHelper(const Model::UpdateAgentStatusRequest& request, const UpdateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactAsyncHelper(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactAttributesAsyncHelper(const Model::UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactFlowContentAsyncHelper(const Model::UpdateContactFlowContentRequest& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactFlowMetadataAsyncHelper(const Model::UpdateContactFlowMetadataRequest& request, const UpdateContactFlowMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactFlowModuleContentAsyncHelper(const Model::UpdateContactFlowModuleContentRequest& request, const UpdateContactFlowModuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactFlowModuleMetadataAsyncHelper(const Model::UpdateContactFlowModuleMetadataRequest& request, const UpdateContactFlowModuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactFlowNameAsyncHelper(const Model::UpdateContactFlowNameRequest& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactScheduleAsyncHelper(const Model::UpdateContactScheduleRequest& request, const UpdateContactScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateHoursOfOperationAsyncHelper(const Model::UpdateHoursOfOperationRequest& request, const UpdateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInstanceAttributeAsyncHelper(const Model::UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInstanceStorageConfigAsyncHelper(const Model::UpdateInstanceStorageConfigRequest& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePhoneNumberAsyncHelper(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQueueHoursOfOperationAsyncHelper(const Model::UpdateQueueHoursOfOperationRequest& request, const UpdateQueueHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQueueMaxContactsAsyncHelper(const Model::UpdateQueueMaxContactsRequest& request, const UpdateQueueMaxContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQueueNameAsyncHelper(const Model::UpdateQueueNameRequest& request, const UpdateQueueNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQueueOutboundCallerConfigAsyncHelper(const Model::UpdateQueueOutboundCallerConfigRequest& request, const UpdateQueueOutboundCallerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQueueStatusAsyncHelper(const Model::UpdateQueueStatusRequest& request, const UpdateQueueStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQuickConnectConfigAsyncHelper(const Model::UpdateQuickConnectConfigRequest& request, const UpdateQuickConnectConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQuickConnectNameAsyncHelper(const Model::UpdateQuickConnectNameRequest& request, const UpdateQuickConnectNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingProfileConcurrencyAsyncHelper(const Model::UpdateRoutingProfileConcurrencyRequest& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingProfileDefaultOutboundQueueAsyncHelper(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingProfileNameAsyncHelper(const Model::UpdateRoutingProfileNameRequest& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingProfileQueuesAsyncHelper(const Model::UpdateRoutingProfileQueuesRequest& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSecurityProfileAsyncHelper(const Model::UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTaskTemplateAsyncHelper(const Model::UpdateTaskTemplateRequest& request, const UpdateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserHierarchyAsyncHelper(const Model::UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserHierarchyGroupNameAsyncHelper(const Model::UpdateUserHierarchyGroupNameRequest& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserHierarchyStructureAsyncHelper(const Model::UpdateUserHierarchyStructureRequest& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserIdentityInfoAsyncHelper(const Model::UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPhoneConfigAsyncHelper(const Model::UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserRoutingProfileAsyncHelper(const Model::UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserSecurityProfilesAsyncHelper(const Model::UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Connect
} // namespace Aws
