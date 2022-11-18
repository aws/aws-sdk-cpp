/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateApprovedOriginAsync(...)  SubmitAsync(&ConnectClient::AssociateApprovedOrigin, __VA_ARGS__)
#define AssociateApprovedOriginCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateApprovedOrigin, REQUEST)

#define AssociateBotAsync(...)  SubmitAsync(&ConnectClient::AssociateBot, __VA_ARGS__)
#define AssociateBotCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateBot, REQUEST)

#define AssociateDefaultVocabularyAsync(...)  SubmitAsync(&ConnectClient::AssociateDefaultVocabulary, __VA_ARGS__)
#define AssociateDefaultVocabularyCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateDefaultVocabulary, REQUEST)

#define AssociateInstanceStorageConfigAsync(...)  SubmitAsync(&ConnectClient::AssociateInstanceStorageConfig, __VA_ARGS__)
#define AssociateInstanceStorageConfigCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateInstanceStorageConfig, REQUEST)

#define AssociateLambdaFunctionAsync(...)  SubmitAsync(&ConnectClient::AssociateLambdaFunction, __VA_ARGS__)
#define AssociateLambdaFunctionCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateLambdaFunction, REQUEST)

#define AssociateLexBotAsync(...)  SubmitAsync(&ConnectClient::AssociateLexBot, __VA_ARGS__)
#define AssociateLexBotCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateLexBot, REQUEST)

#define AssociatePhoneNumberContactFlowAsync(...)  SubmitAsync(&ConnectClient::AssociatePhoneNumberContactFlow, __VA_ARGS__)
#define AssociatePhoneNumberContactFlowCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociatePhoneNumberContactFlow, REQUEST)

#define AssociateQueueQuickConnectsAsync(...)  SubmitAsync(&ConnectClient::AssociateQueueQuickConnects, __VA_ARGS__)
#define AssociateQueueQuickConnectsCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateQueueQuickConnects, REQUEST)

#define AssociateRoutingProfileQueuesAsync(...)  SubmitAsync(&ConnectClient::AssociateRoutingProfileQueues, __VA_ARGS__)
#define AssociateRoutingProfileQueuesCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateRoutingProfileQueues, REQUEST)

#define AssociateSecurityKeyAsync(...)  SubmitAsync(&ConnectClient::AssociateSecurityKey, __VA_ARGS__)
#define AssociateSecurityKeyCallable(REQUEST)  SubmitCallable(&ConnectClient::AssociateSecurityKey, REQUEST)

#define ClaimPhoneNumberAsync(...)  SubmitAsync(&ConnectClient::ClaimPhoneNumber, __VA_ARGS__)
#define ClaimPhoneNumberCallable(REQUEST)  SubmitCallable(&ConnectClient::ClaimPhoneNumber, REQUEST)

#define CreateAgentStatusAsync(...)  SubmitAsync(&ConnectClient::CreateAgentStatus, __VA_ARGS__)
#define CreateAgentStatusCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateAgentStatus, REQUEST)

#define CreateContactFlowAsync(...)  SubmitAsync(&ConnectClient::CreateContactFlow, __VA_ARGS__)
#define CreateContactFlowCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateContactFlow, REQUEST)

#define CreateContactFlowModuleAsync(...)  SubmitAsync(&ConnectClient::CreateContactFlowModule, __VA_ARGS__)
#define CreateContactFlowModuleCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateContactFlowModule, REQUEST)

#define CreateHoursOfOperationAsync(...)  SubmitAsync(&ConnectClient::CreateHoursOfOperation, __VA_ARGS__)
#define CreateHoursOfOperationCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateHoursOfOperation, REQUEST)

#define CreateInstanceAsync(...)  SubmitAsync(&ConnectClient::CreateInstance, __VA_ARGS__)
#define CreateInstanceCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateInstance, REQUEST)

#define CreateIntegrationAssociationAsync(...)  SubmitAsync(&ConnectClient::CreateIntegrationAssociation, __VA_ARGS__)
#define CreateIntegrationAssociationCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateIntegrationAssociation, REQUEST)

#define CreateQueueAsync(...)  SubmitAsync(&ConnectClient::CreateQueue, __VA_ARGS__)
#define CreateQueueCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateQueue, REQUEST)

#define CreateQuickConnectAsync(...)  SubmitAsync(&ConnectClient::CreateQuickConnect, __VA_ARGS__)
#define CreateQuickConnectCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateQuickConnect, REQUEST)

#define CreateRoutingProfileAsync(...)  SubmitAsync(&ConnectClient::CreateRoutingProfile, __VA_ARGS__)
#define CreateRoutingProfileCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateRoutingProfile, REQUEST)

#define CreateSecurityProfileAsync(...)  SubmitAsync(&ConnectClient::CreateSecurityProfile, __VA_ARGS__)
#define CreateSecurityProfileCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateSecurityProfile, REQUEST)

#define CreateTaskTemplateAsync(...)  SubmitAsync(&ConnectClient::CreateTaskTemplate, __VA_ARGS__)
#define CreateTaskTemplateCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateTaskTemplate, REQUEST)

#define CreateTrafficDistributionGroupAsync(...)  SubmitAsync(&ConnectClient::CreateTrafficDistributionGroup, __VA_ARGS__)
#define CreateTrafficDistributionGroupCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateTrafficDistributionGroup, REQUEST)

#define CreateUseCaseAsync(...)  SubmitAsync(&ConnectClient::CreateUseCase, __VA_ARGS__)
#define CreateUseCaseCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateUseCase, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&ConnectClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateUser, REQUEST)

#define CreateUserHierarchyGroupAsync(...)  SubmitAsync(&ConnectClient::CreateUserHierarchyGroup, __VA_ARGS__)
#define CreateUserHierarchyGroupCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateUserHierarchyGroup, REQUEST)

#define CreateVocabularyAsync(...)  SubmitAsync(&ConnectClient::CreateVocabulary, __VA_ARGS__)
#define CreateVocabularyCallable(REQUEST)  SubmitCallable(&ConnectClient::CreateVocabulary, REQUEST)

#define DeleteContactFlowAsync(...)  SubmitAsync(&ConnectClient::DeleteContactFlow, __VA_ARGS__)
#define DeleteContactFlowCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteContactFlow, REQUEST)

#define DeleteContactFlowModuleAsync(...)  SubmitAsync(&ConnectClient::DeleteContactFlowModule, __VA_ARGS__)
#define DeleteContactFlowModuleCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteContactFlowModule, REQUEST)

#define DeleteHoursOfOperationAsync(...)  SubmitAsync(&ConnectClient::DeleteHoursOfOperation, __VA_ARGS__)
#define DeleteHoursOfOperationCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteHoursOfOperation, REQUEST)

#define DeleteInstanceAsync(...)  SubmitAsync(&ConnectClient::DeleteInstance, __VA_ARGS__)
#define DeleteInstanceCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteInstance, REQUEST)

#define DeleteIntegrationAssociationAsync(...)  SubmitAsync(&ConnectClient::DeleteIntegrationAssociation, __VA_ARGS__)
#define DeleteIntegrationAssociationCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteIntegrationAssociation, REQUEST)

#define DeleteQuickConnectAsync(...)  SubmitAsync(&ConnectClient::DeleteQuickConnect, __VA_ARGS__)
#define DeleteQuickConnectCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteQuickConnect, REQUEST)

#define DeleteSecurityProfileAsync(...)  SubmitAsync(&ConnectClient::DeleteSecurityProfile, __VA_ARGS__)
#define DeleteSecurityProfileCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteSecurityProfile, REQUEST)

#define DeleteTaskTemplateAsync(...)  SubmitAsync(&ConnectClient::DeleteTaskTemplate, __VA_ARGS__)
#define DeleteTaskTemplateCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteTaskTemplate, REQUEST)

#define DeleteTrafficDistributionGroupAsync(...)  SubmitAsync(&ConnectClient::DeleteTrafficDistributionGroup, __VA_ARGS__)
#define DeleteTrafficDistributionGroupCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteTrafficDistributionGroup, REQUEST)

#define DeleteUseCaseAsync(...)  SubmitAsync(&ConnectClient::DeleteUseCase, __VA_ARGS__)
#define DeleteUseCaseCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteUseCase, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&ConnectClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteUser, REQUEST)

#define DeleteUserHierarchyGroupAsync(...)  SubmitAsync(&ConnectClient::DeleteUserHierarchyGroup, __VA_ARGS__)
#define DeleteUserHierarchyGroupCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteUserHierarchyGroup, REQUEST)

#define DeleteVocabularyAsync(...)  SubmitAsync(&ConnectClient::DeleteVocabulary, __VA_ARGS__)
#define DeleteVocabularyCallable(REQUEST)  SubmitCallable(&ConnectClient::DeleteVocabulary, REQUEST)

#define DescribeAgentStatusAsync(...)  SubmitAsync(&ConnectClient::DescribeAgentStatus, __VA_ARGS__)
#define DescribeAgentStatusCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeAgentStatus, REQUEST)

#define DescribeContactAsync(...)  SubmitAsync(&ConnectClient::DescribeContact, __VA_ARGS__)
#define DescribeContactCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeContact, REQUEST)

#define DescribeContactFlowAsync(...)  SubmitAsync(&ConnectClient::DescribeContactFlow, __VA_ARGS__)
#define DescribeContactFlowCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeContactFlow, REQUEST)

#define DescribeContactFlowModuleAsync(...)  SubmitAsync(&ConnectClient::DescribeContactFlowModule, __VA_ARGS__)
#define DescribeContactFlowModuleCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeContactFlowModule, REQUEST)

#define DescribeHoursOfOperationAsync(...)  SubmitAsync(&ConnectClient::DescribeHoursOfOperation, __VA_ARGS__)
#define DescribeHoursOfOperationCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeHoursOfOperation, REQUEST)

#define DescribeInstanceAsync(...)  SubmitAsync(&ConnectClient::DescribeInstance, __VA_ARGS__)
#define DescribeInstanceCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeInstance, REQUEST)

#define DescribeInstanceAttributeAsync(...)  SubmitAsync(&ConnectClient::DescribeInstanceAttribute, __VA_ARGS__)
#define DescribeInstanceAttributeCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeInstanceAttribute, REQUEST)

#define DescribeInstanceStorageConfigAsync(...)  SubmitAsync(&ConnectClient::DescribeInstanceStorageConfig, __VA_ARGS__)
#define DescribeInstanceStorageConfigCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeInstanceStorageConfig, REQUEST)

#define DescribePhoneNumberAsync(...)  SubmitAsync(&ConnectClient::DescribePhoneNumber, __VA_ARGS__)
#define DescribePhoneNumberCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribePhoneNumber, REQUEST)

#define DescribeQueueAsync(...)  SubmitAsync(&ConnectClient::DescribeQueue, __VA_ARGS__)
#define DescribeQueueCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeQueue, REQUEST)

#define DescribeQuickConnectAsync(...)  SubmitAsync(&ConnectClient::DescribeQuickConnect, __VA_ARGS__)
#define DescribeQuickConnectCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeQuickConnect, REQUEST)

#define DescribeRoutingProfileAsync(...)  SubmitAsync(&ConnectClient::DescribeRoutingProfile, __VA_ARGS__)
#define DescribeRoutingProfileCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeRoutingProfile, REQUEST)

#define DescribeSecurityProfileAsync(...)  SubmitAsync(&ConnectClient::DescribeSecurityProfile, __VA_ARGS__)
#define DescribeSecurityProfileCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeSecurityProfile, REQUEST)

#define DescribeTrafficDistributionGroupAsync(...)  SubmitAsync(&ConnectClient::DescribeTrafficDistributionGroup, __VA_ARGS__)
#define DescribeTrafficDistributionGroupCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeTrafficDistributionGroup, REQUEST)

#define DescribeUserAsync(...)  SubmitAsync(&ConnectClient::DescribeUser, __VA_ARGS__)
#define DescribeUserCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeUser, REQUEST)

#define DescribeUserHierarchyGroupAsync(...)  SubmitAsync(&ConnectClient::DescribeUserHierarchyGroup, __VA_ARGS__)
#define DescribeUserHierarchyGroupCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeUserHierarchyGroup, REQUEST)

#define DescribeUserHierarchyStructureAsync(...)  SubmitAsync(&ConnectClient::DescribeUserHierarchyStructure, __VA_ARGS__)
#define DescribeUserHierarchyStructureCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeUserHierarchyStructure, REQUEST)

#define DescribeVocabularyAsync(...)  SubmitAsync(&ConnectClient::DescribeVocabulary, __VA_ARGS__)
#define DescribeVocabularyCallable(REQUEST)  SubmitCallable(&ConnectClient::DescribeVocabulary, REQUEST)

#define DisassociateApprovedOriginAsync(...)  SubmitAsync(&ConnectClient::DisassociateApprovedOrigin, __VA_ARGS__)
#define DisassociateApprovedOriginCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociateApprovedOrigin, REQUEST)

#define DisassociateBotAsync(...)  SubmitAsync(&ConnectClient::DisassociateBot, __VA_ARGS__)
#define DisassociateBotCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociateBot, REQUEST)

#define DisassociateInstanceStorageConfigAsync(...)  SubmitAsync(&ConnectClient::DisassociateInstanceStorageConfig, __VA_ARGS__)
#define DisassociateInstanceStorageConfigCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociateInstanceStorageConfig, REQUEST)

#define DisassociateLambdaFunctionAsync(...)  SubmitAsync(&ConnectClient::DisassociateLambdaFunction, __VA_ARGS__)
#define DisassociateLambdaFunctionCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociateLambdaFunction, REQUEST)

#define DisassociateLexBotAsync(...)  SubmitAsync(&ConnectClient::DisassociateLexBot, __VA_ARGS__)
#define DisassociateLexBotCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociateLexBot, REQUEST)

#define DisassociatePhoneNumberContactFlowAsync(...)  SubmitAsync(&ConnectClient::DisassociatePhoneNumberContactFlow, __VA_ARGS__)
#define DisassociatePhoneNumberContactFlowCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociatePhoneNumberContactFlow, REQUEST)

#define DisassociateQueueQuickConnectsAsync(...)  SubmitAsync(&ConnectClient::DisassociateQueueQuickConnects, __VA_ARGS__)
#define DisassociateQueueQuickConnectsCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociateQueueQuickConnects, REQUEST)

#define DisassociateRoutingProfileQueuesAsync(...)  SubmitAsync(&ConnectClient::DisassociateRoutingProfileQueues, __VA_ARGS__)
#define DisassociateRoutingProfileQueuesCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociateRoutingProfileQueues, REQUEST)

#define DisassociateSecurityKeyAsync(...)  SubmitAsync(&ConnectClient::DisassociateSecurityKey, __VA_ARGS__)
#define DisassociateSecurityKeyCallable(REQUEST)  SubmitCallable(&ConnectClient::DisassociateSecurityKey, REQUEST)

#define DismissUserContactAsync(...)  SubmitAsync(&ConnectClient::DismissUserContact, __VA_ARGS__)
#define DismissUserContactCallable(REQUEST)  SubmitCallable(&ConnectClient::DismissUserContact, REQUEST)

#define GetContactAttributesAsync(...)  SubmitAsync(&ConnectClient::GetContactAttributes, __VA_ARGS__)
#define GetContactAttributesCallable(REQUEST)  SubmitCallable(&ConnectClient::GetContactAttributes, REQUEST)

#define GetCurrentMetricDataAsync(...)  SubmitAsync(&ConnectClient::GetCurrentMetricData, __VA_ARGS__)
#define GetCurrentMetricDataCallable(REQUEST)  SubmitCallable(&ConnectClient::GetCurrentMetricData, REQUEST)

#define GetCurrentUserDataAsync(...)  SubmitAsync(&ConnectClient::GetCurrentUserData, __VA_ARGS__)
#define GetCurrentUserDataCallable(REQUEST)  SubmitCallable(&ConnectClient::GetCurrentUserData, REQUEST)

#define GetFederationTokenAsync(...)  SubmitAsync(&ConnectClient::GetFederationToken, __VA_ARGS__)
#define GetFederationTokenCallable(REQUEST)  SubmitCallable(&ConnectClient::GetFederationToken, REQUEST)

#define GetMetricDataAsync(...)  SubmitAsync(&ConnectClient::GetMetricData, __VA_ARGS__)
#define GetMetricDataCallable(REQUEST)  SubmitCallable(&ConnectClient::GetMetricData, REQUEST)

#define GetTaskTemplateAsync(...)  SubmitAsync(&ConnectClient::GetTaskTemplate, __VA_ARGS__)
#define GetTaskTemplateCallable(REQUEST)  SubmitCallable(&ConnectClient::GetTaskTemplate, REQUEST)

#define GetTrafficDistributionAsync(...)  SubmitAsync(&ConnectClient::GetTrafficDistribution, __VA_ARGS__)
#define GetTrafficDistributionCallable(REQUEST)  SubmitCallable(&ConnectClient::GetTrafficDistribution, REQUEST)

#define ListAgentStatusesAsync(...)  SubmitAsync(&ConnectClient::ListAgentStatuses, __VA_ARGS__)
#define ListAgentStatusesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListAgentStatuses, REQUEST)

#define ListApprovedOriginsAsync(...)  SubmitAsync(&ConnectClient::ListApprovedOrigins, __VA_ARGS__)
#define ListApprovedOriginsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListApprovedOrigins, REQUEST)

#define ListBotsAsync(...)  SubmitAsync(&ConnectClient::ListBots, __VA_ARGS__)
#define ListBotsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListBots, REQUEST)

#define ListContactFlowModulesAsync(...)  SubmitAsync(&ConnectClient::ListContactFlowModules, __VA_ARGS__)
#define ListContactFlowModulesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListContactFlowModules, REQUEST)

#define ListContactFlowsAsync(...)  SubmitAsync(&ConnectClient::ListContactFlows, __VA_ARGS__)
#define ListContactFlowsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListContactFlows, REQUEST)

#define ListContactReferencesAsync(...)  SubmitAsync(&ConnectClient::ListContactReferences, __VA_ARGS__)
#define ListContactReferencesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListContactReferences, REQUEST)

#define ListDefaultVocabulariesAsync(...)  SubmitAsync(&ConnectClient::ListDefaultVocabularies, __VA_ARGS__)
#define ListDefaultVocabulariesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListDefaultVocabularies, REQUEST)

#define ListHoursOfOperationsAsync(...)  SubmitAsync(&ConnectClient::ListHoursOfOperations, __VA_ARGS__)
#define ListHoursOfOperationsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListHoursOfOperations, REQUEST)

#define ListInstanceAttributesAsync(...)  SubmitAsync(&ConnectClient::ListInstanceAttributes, __VA_ARGS__)
#define ListInstanceAttributesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListInstanceAttributes, REQUEST)

#define ListInstanceStorageConfigsAsync(...)  SubmitAsync(&ConnectClient::ListInstanceStorageConfigs, __VA_ARGS__)
#define ListInstanceStorageConfigsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListInstanceStorageConfigs, REQUEST)

#define ListInstancesAsync(...)  SubmitAsync(&ConnectClient::ListInstances, __VA_ARGS__)
#define ListInstancesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListInstances, REQUEST)

#define ListIntegrationAssociationsAsync(...)  SubmitAsync(&ConnectClient::ListIntegrationAssociations, __VA_ARGS__)
#define ListIntegrationAssociationsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListIntegrationAssociations, REQUEST)

#define ListLambdaFunctionsAsync(...)  SubmitAsync(&ConnectClient::ListLambdaFunctions, __VA_ARGS__)
#define ListLambdaFunctionsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListLambdaFunctions, REQUEST)

#define ListLexBotsAsync(...)  SubmitAsync(&ConnectClient::ListLexBots, __VA_ARGS__)
#define ListLexBotsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListLexBots, REQUEST)

#define ListPhoneNumbersAsync(...)  SubmitAsync(&ConnectClient::ListPhoneNumbers, __VA_ARGS__)
#define ListPhoneNumbersCallable(REQUEST)  SubmitCallable(&ConnectClient::ListPhoneNumbers, REQUEST)

#define ListPhoneNumbersV2Async(...)  SubmitAsync(&ConnectClient::ListPhoneNumbersV2, __VA_ARGS__)
#define ListPhoneNumbersV2Callable(REQUEST)  SubmitCallable(&ConnectClient::ListPhoneNumbersV2, REQUEST)

#define ListPromptsAsync(...)  SubmitAsync(&ConnectClient::ListPrompts, __VA_ARGS__)
#define ListPromptsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListPrompts, REQUEST)

#define ListQueueQuickConnectsAsync(...)  SubmitAsync(&ConnectClient::ListQueueQuickConnects, __VA_ARGS__)
#define ListQueueQuickConnectsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListQueueQuickConnects, REQUEST)

#define ListQueuesAsync(...)  SubmitAsync(&ConnectClient::ListQueues, __VA_ARGS__)
#define ListQueuesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListQueues, REQUEST)

#define ListQuickConnectsAsync(...)  SubmitAsync(&ConnectClient::ListQuickConnects, __VA_ARGS__)
#define ListQuickConnectsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListQuickConnects, REQUEST)

#define ListRoutingProfileQueuesAsync(...)  SubmitAsync(&ConnectClient::ListRoutingProfileQueues, __VA_ARGS__)
#define ListRoutingProfileQueuesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListRoutingProfileQueues, REQUEST)

#define ListRoutingProfilesAsync(...)  SubmitAsync(&ConnectClient::ListRoutingProfiles, __VA_ARGS__)
#define ListRoutingProfilesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListRoutingProfiles, REQUEST)

#define ListSecurityKeysAsync(...)  SubmitAsync(&ConnectClient::ListSecurityKeys, __VA_ARGS__)
#define ListSecurityKeysCallable(REQUEST)  SubmitCallable(&ConnectClient::ListSecurityKeys, REQUEST)

#define ListSecurityProfilePermissionsAsync(...)  SubmitAsync(&ConnectClient::ListSecurityProfilePermissions, __VA_ARGS__)
#define ListSecurityProfilePermissionsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListSecurityProfilePermissions, REQUEST)

#define ListSecurityProfilesAsync(...)  SubmitAsync(&ConnectClient::ListSecurityProfiles, __VA_ARGS__)
#define ListSecurityProfilesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListSecurityProfiles, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ConnectClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ConnectClient::ListTagsForResource, REQUEST)

#define ListTaskTemplatesAsync(...)  SubmitAsync(&ConnectClient::ListTaskTemplates, __VA_ARGS__)
#define ListTaskTemplatesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListTaskTemplates, REQUEST)

#define ListTrafficDistributionGroupsAsync(...)  SubmitAsync(&ConnectClient::ListTrafficDistributionGroups, __VA_ARGS__)
#define ListTrafficDistributionGroupsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListTrafficDistributionGroups, REQUEST)

#define ListUseCasesAsync(...)  SubmitAsync(&ConnectClient::ListUseCases, __VA_ARGS__)
#define ListUseCasesCallable(REQUEST)  SubmitCallable(&ConnectClient::ListUseCases, REQUEST)

#define ListUserHierarchyGroupsAsync(...)  SubmitAsync(&ConnectClient::ListUserHierarchyGroups, __VA_ARGS__)
#define ListUserHierarchyGroupsCallable(REQUEST)  SubmitCallable(&ConnectClient::ListUserHierarchyGroups, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&ConnectClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&ConnectClient::ListUsers, REQUEST)

#define MonitorContactAsync(...)  SubmitAsync(&ConnectClient::MonitorContact, __VA_ARGS__)
#define MonitorContactCallable(REQUEST)  SubmitCallable(&ConnectClient::MonitorContact, REQUEST)

#define PutUserStatusAsync(...)  SubmitAsync(&ConnectClient::PutUserStatus, __VA_ARGS__)
#define PutUserStatusCallable(REQUEST)  SubmitCallable(&ConnectClient::PutUserStatus, REQUEST)

#define ReleasePhoneNumberAsync(...)  SubmitAsync(&ConnectClient::ReleasePhoneNumber, __VA_ARGS__)
#define ReleasePhoneNumberCallable(REQUEST)  SubmitCallable(&ConnectClient::ReleasePhoneNumber, REQUEST)

#define ReplicateInstanceAsync(...)  SubmitAsync(&ConnectClient::ReplicateInstance, __VA_ARGS__)
#define ReplicateInstanceCallable(REQUEST)  SubmitCallable(&ConnectClient::ReplicateInstance, REQUEST)

#define ResumeContactRecordingAsync(...)  SubmitAsync(&ConnectClient::ResumeContactRecording, __VA_ARGS__)
#define ResumeContactRecordingCallable(REQUEST)  SubmitCallable(&ConnectClient::ResumeContactRecording, REQUEST)

#define SearchAvailablePhoneNumbersAsync(...)  SubmitAsync(&ConnectClient::SearchAvailablePhoneNumbers, __VA_ARGS__)
#define SearchAvailablePhoneNumbersCallable(REQUEST)  SubmitCallable(&ConnectClient::SearchAvailablePhoneNumbers, REQUEST)

#define SearchQueuesAsync(...)  SubmitAsync(&ConnectClient::SearchQueues, __VA_ARGS__)
#define SearchQueuesCallable(REQUEST)  SubmitCallable(&ConnectClient::SearchQueues, REQUEST)

#define SearchRoutingProfilesAsync(...)  SubmitAsync(&ConnectClient::SearchRoutingProfiles, __VA_ARGS__)
#define SearchRoutingProfilesCallable(REQUEST)  SubmitCallable(&ConnectClient::SearchRoutingProfiles, REQUEST)

#define SearchSecurityProfilesAsync(...)  SubmitAsync(&ConnectClient::SearchSecurityProfiles, __VA_ARGS__)
#define SearchSecurityProfilesCallable(REQUEST)  SubmitCallable(&ConnectClient::SearchSecurityProfiles, REQUEST)

#define SearchUsersAsync(...)  SubmitAsync(&ConnectClient::SearchUsers, __VA_ARGS__)
#define SearchUsersCallable(REQUEST)  SubmitCallable(&ConnectClient::SearchUsers, REQUEST)

#define SearchVocabulariesAsync(...)  SubmitAsync(&ConnectClient::SearchVocabularies, __VA_ARGS__)
#define SearchVocabulariesCallable(REQUEST)  SubmitCallable(&ConnectClient::SearchVocabularies, REQUEST)

#define StartChatContactAsync(...)  SubmitAsync(&ConnectClient::StartChatContact, __VA_ARGS__)
#define StartChatContactCallable(REQUEST)  SubmitCallable(&ConnectClient::StartChatContact, REQUEST)

#define StartContactRecordingAsync(...)  SubmitAsync(&ConnectClient::StartContactRecording, __VA_ARGS__)
#define StartContactRecordingCallable(REQUEST)  SubmitCallable(&ConnectClient::StartContactRecording, REQUEST)

#define StartContactStreamingAsync(...)  SubmitAsync(&ConnectClient::StartContactStreaming, __VA_ARGS__)
#define StartContactStreamingCallable(REQUEST)  SubmitCallable(&ConnectClient::StartContactStreaming, REQUEST)

#define StartOutboundVoiceContactAsync(...)  SubmitAsync(&ConnectClient::StartOutboundVoiceContact, __VA_ARGS__)
#define StartOutboundVoiceContactCallable(REQUEST)  SubmitCallable(&ConnectClient::StartOutboundVoiceContact, REQUEST)

#define StartTaskContactAsync(...)  SubmitAsync(&ConnectClient::StartTaskContact, __VA_ARGS__)
#define StartTaskContactCallable(REQUEST)  SubmitCallable(&ConnectClient::StartTaskContact, REQUEST)

#define StopContactAsync(...)  SubmitAsync(&ConnectClient::StopContact, __VA_ARGS__)
#define StopContactCallable(REQUEST)  SubmitCallable(&ConnectClient::StopContact, REQUEST)

#define StopContactRecordingAsync(...)  SubmitAsync(&ConnectClient::StopContactRecording, __VA_ARGS__)
#define StopContactRecordingCallable(REQUEST)  SubmitCallable(&ConnectClient::StopContactRecording, REQUEST)

#define StopContactStreamingAsync(...)  SubmitAsync(&ConnectClient::StopContactStreaming, __VA_ARGS__)
#define StopContactStreamingCallable(REQUEST)  SubmitCallable(&ConnectClient::StopContactStreaming, REQUEST)

#define SuspendContactRecordingAsync(...)  SubmitAsync(&ConnectClient::SuspendContactRecording, __VA_ARGS__)
#define SuspendContactRecordingCallable(REQUEST)  SubmitCallable(&ConnectClient::SuspendContactRecording, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ConnectClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ConnectClient::TagResource, REQUEST)

#define TransferContactAsync(...)  SubmitAsync(&ConnectClient::TransferContact, __VA_ARGS__)
#define TransferContactCallable(REQUEST)  SubmitCallable(&ConnectClient::TransferContact, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ConnectClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ConnectClient::UntagResource, REQUEST)

#define UpdateAgentStatusAsync(...)  SubmitAsync(&ConnectClient::UpdateAgentStatus, __VA_ARGS__)
#define UpdateAgentStatusCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateAgentStatus, REQUEST)

#define UpdateContactAsync(...)  SubmitAsync(&ConnectClient::UpdateContact, __VA_ARGS__)
#define UpdateContactCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateContact, REQUEST)

#define UpdateContactAttributesAsync(...)  SubmitAsync(&ConnectClient::UpdateContactAttributes, __VA_ARGS__)
#define UpdateContactAttributesCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateContactAttributes, REQUEST)

#define UpdateContactFlowContentAsync(...)  SubmitAsync(&ConnectClient::UpdateContactFlowContent, __VA_ARGS__)
#define UpdateContactFlowContentCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateContactFlowContent, REQUEST)

#define UpdateContactFlowMetadataAsync(...)  SubmitAsync(&ConnectClient::UpdateContactFlowMetadata, __VA_ARGS__)
#define UpdateContactFlowMetadataCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateContactFlowMetadata, REQUEST)

#define UpdateContactFlowModuleContentAsync(...)  SubmitAsync(&ConnectClient::UpdateContactFlowModuleContent, __VA_ARGS__)
#define UpdateContactFlowModuleContentCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateContactFlowModuleContent, REQUEST)

#define UpdateContactFlowModuleMetadataAsync(...)  SubmitAsync(&ConnectClient::UpdateContactFlowModuleMetadata, __VA_ARGS__)
#define UpdateContactFlowModuleMetadataCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateContactFlowModuleMetadata, REQUEST)

#define UpdateContactFlowNameAsync(...)  SubmitAsync(&ConnectClient::UpdateContactFlowName, __VA_ARGS__)
#define UpdateContactFlowNameCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateContactFlowName, REQUEST)

#define UpdateContactScheduleAsync(...)  SubmitAsync(&ConnectClient::UpdateContactSchedule, __VA_ARGS__)
#define UpdateContactScheduleCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateContactSchedule, REQUEST)

#define UpdateHoursOfOperationAsync(...)  SubmitAsync(&ConnectClient::UpdateHoursOfOperation, __VA_ARGS__)
#define UpdateHoursOfOperationCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateHoursOfOperation, REQUEST)

#define UpdateInstanceAttributeAsync(...)  SubmitAsync(&ConnectClient::UpdateInstanceAttribute, __VA_ARGS__)
#define UpdateInstanceAttributeCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateInstanceAttribute, REQUEST)

#define UpdateInstanceStorageConfigAsync(...)  SubmitAsync(&ConnectClient::UpdateInstanceStorageConfig, __VA_ARGS__)
#define UpdateInstanceStorageConfigCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateInstanceStorageConfig, REQUEST)

#define UpdatePhoneNumberAsync(...)  SubmitAsync(&ConnectClient::UpdatePhoneNumber, __VA_ARGS__)
#define UpdatePhoneNumberCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdatePhoneNumber, REQUEST)

#define UpdateQueueHoursOfOperationAsync(...)  SubmitAsync(&ConnectClient::UpdateQueueHoursOfOperation, __VA_ARGS__)
#define UpdateQueueHoursOfOperationCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateQueueHoursOfOperation, REQUEST)

#define UpdateQueueMaxContactsAsync(...)  SubmitAsync(&ConnectClient::UpdateQueueMaxContacts, __VA_ARGS__)
#define UpdateQueueMaxContactsCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateQueueMaxContacts, REQUEST)

#define UpdateQueueNameAsync(...)  SubmitAsync(&ConnectClient::UpdateQueueName, __VA_ARGS__)
#define UpdateQueueNameCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateQueueName, REQUEST)

#define UpdateQueueOutboundCallerConfigAsync(...)  SubmitAsync(&ConnectClient::UpdateQueueOutboundCallerConfig, __VA_ARGS__)
#define UpdateQueueOutboundCallerConfigCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateQueueOutboundCallerConfig, REQUEST)

#define UpdateQueueStatusAsync(...)  SubmitAsync(&ConnectClient::UpdateQueueStatus, __VA_ARGS__)
#define UpdateQueueStatusCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateQueueStatus, REQUEST)

#define UpdateQuickConnectConfigAsync(...)  SubmitAsync(&ConnectClient::UpdateQuickConnectConfig, __VA_ARGS__)
#define UpdateQuickConnectConfigCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateQuickConnectConfig, REQUEST)

#define UpdateQuickConnectNameAsync(...)  SubmitAsync(&ConnectClient::UpdateQuickConnectName, __VA_ARGS__)
#define UpdateQuickConnectNameCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateQuickConnectName, REQUEST)

#define UpdateRoutingProfileConcurrencyAsync(...)  SubmitAsync(&ConnectClient::UpdateRoutingProfileConcurrency, __VA_ARGS__)
#define UpdateRoutingProfileConcurrencyCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateRoutingProfileConcurrency, REQUEST)

#define UpdateRoutingProfileDefaultOutboundQueueAsync(...)  SubmitAsync(&ConnectClient::UpdateRoutingProfileDefaultOutboundQueue, __VA_ARGS__)
#define UpdateRoutingProfileDefaultOutboundQueueCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateRoutingProfileDefaultOutboundQueue, REQUEST)

#define UpdateRoutingProfileNameAsync(...)  SubmitAsync(&ConnectClient::UpdateRoutingProfileName, __VA_ARGS__)
#define UpdateRoutingProfileNameCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateRoutingProfileName, REQUEST)

#define UpdateRoutingProfileQueuesAsync(...)  SubmitAsync(&ConnectClient::UpdateRoutingProfileQueues, __VA_ARGS__)
#define UpdateRoutingProfileQueuesCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateRoutingProfileQueues, REQUEST)

#define UpdateSecurityProfileAsync(...)  SubmitAsync(&ConnectClient::UpdateSecurityProfile, __VA_ARGS__)
#define UpdateSecurityProfileCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateSecurityProfile, REQUEST)

#define UpdateTaskTemplateAsync(...)  SubmitAsync(&ConnectClient::UpdateTaskTemplate, __VA_ARGS__)
#define UpdateTaskTemplateCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateTaskTemplate, REQUEST)

#define UpdateTrafficDistributionAsync(...)  SubmitAsync(&ConnectClient::UpdateTrafficDistribution, __VA_ARGS__)
#define UpdateTrafficDistributionCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateTrafficDistribution, REQUEST)

#define UpdateUserHierarchyAsync(...)  SubmitAsync(&ConnectClient::UpdateUserHierarchy, __VA_ARGS__)
#define UpdateUserHierarchyCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateUserHierarchy, REQUEST)

#define UpdateUserHierarchyGroupNameAsync(...)  SubmitAsync(&ConnectClient::UpdateUserHierarchyGroupName, __VA_ARGS__)
#define UpdateUserHierarchyGroupNameCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateUserHierarchyGroupName, REQUEST)

#define UpdateUserHierarchyStructureAsync(...)  SubmitAsync(&ConnectClient::UpdateUserHierarchyStructure, __VA_ARGS__)
#define UpdateUserHierarchyStructureCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateUserHierarchyStructure, REQUEST)

#define UpdateUserIdentityInfoAsync(...)  SubmitAsync(&ConnectClient::UpdateUserIdentityInfo, __VA_ARGS__)
#define UpdateUserIdentityInfoCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateUserIdentityInfo, REQUEST)

#define UpdateUserPhoneConfigAsync(...)  SubmitAsync(&ConnectClient::UpdateUserPhoneConfig, __VA_ARGS__)
#define UpdateUserPhoneConfigCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateUserPhoneConfig, REQUEST)

#define UpdateUserRoutingProfileAsync(...)  SubmitAsync(&ConnectClient::UpdateUserRoutingProfile, __VA_ARGS__)
#define UpdateUserRoutingProfileCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateUserRoutingProfile, REQUEST)

#define UpdateUserSecurityProfilesAsync(...)  SubmitAsync(&ConnectClient::UpdateUserSecurityProfiles, __VA_ARGS__)
#define UpdateUserSecurityProfilesCallable(REQUEST)  SubmitCallable(&ConnectClient::UpdateUserSecurityProfiles, REQUEST)

