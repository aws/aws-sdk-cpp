/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateDRTLogBucketAsync(...)  SubmitAsync(&ShieldClient::AssociateDRTLogBucket, __VA_ARGS__)
#define AssociateDRTLogBucketCallable(REQUEST)  SubmitCallable(&ShieldClient::AssociateDRTLogBucket, REQUEST)

#define AssociateDRTRoleAsync(...)  SubmitAsync(&ShieldClient::AssociateDRTRole, __VA_ARGS__)
#define AssociateDRTRoleCallable(REQUEST)  SubmitCallable(&ShieldClient::AssociateDRTRole, REQUEST)

#define AssociateHealthCheckAsync(...)  SubmitAsync(&ShieldClient::AssociateHealthCheck, __VA_ARGS__)
#define AssociateHealthCheckCallable(REQUEST)  SubmitCallable(&ShieldClient::AssociateHealthCheck, REQUEST)

#define AssociateProactiveEngagementDetailsAsync(...)  SubmitAsync(&ShieldClient::AssociateProactiveEngagementDetails, __VA_ARGS__)
#define AssociateProactiveEngagementDetailsCallable(REQUEST)  SubmitCallable(&ShieldClient::AssociateProactiveEngagementDetails, REQUEST)

#define CreateProtectionAsync(...)  SubmitAsync(&ShieldClient::CreateProtection, __VA_ARGS__)
#define CreateProtectionCallable(REQUEST)  SubmitCallable(&ShieldClient::CreateProtection, REQUEST)

#define CreateProtectionGroupAsync(...)  SubmitAsync(&ShieldClient::CreateProtectionGroup, __VA_ARGS__)
#define CreateProtectionGroupCallable(REQUEST)  SubmitCallable(&ShieldClient::CreateProtectionGroup, REQUEST)

#define CreateSubscriptionAsync(...)  SubmitAsync(&ShieldClient::CreateSubscription, __VA_ARGS__)
#define CreateSubscriptionCallable(REQUEST)  SubmitCallable(&ShieldClient::CreateSubscription, REQUEST)

#define DeleteProtectionAsync(...)  SubmitAsync(&ShieldClient::DeleteProtection, __VA_ARGS__)
#define DeleteProtectionCallable(REQUEST)  SubmitCallable(&ShieldClient::DeleteProtection, REQUEST)

#define DeleteProtectionGroupAsync(...)  SubmitAsync(&ShieldClient::DeleteProtectionGroup, __VA_ARGS__)
#define DeleteProtectionGroupCallable(REQUEST)  SubmitCallable(&ShieldClient::DeleteProtectionGroup, REQUEST)

#define DescribeAttackAsync(...)  SubmitAsync(&ShieldClient::DescribeAttack, __VA_ARGS__)
#define DescribeAttackCallable(REQUEST)  SubmitCallable(&ShieldClient::DescribeAttack, REQUEST)

#define DescribeAttackStatisticsAsync(...)  SubmitAsync(&ShieldClient::DescribeAttackStatistics, __VA_ARGS__)
#define DescribeAttackStatisticsCallable(REQUEST)  SubmitCallable(&ShieldClient::DescribeAttackStatistics, REQUEST)

#define DescribeDRTAccessAsync(...)  SubmitAsync(&ShieldClient::DescribeDRTAccess, __VA_ARGS__)
#define DescribeDRTAccessCallable(REQUEST)  SubmitCallable(&ShieldClient::DescribeDRTAccess, REQUEST)

#define DescribeEmergencyContactSettingsAsync(...)  SubmitAsync(&ShieldClient::DescribeEmergencyContactSettings, __VA_ARGS__)
#define DescribeEmergencyContactSettingsCallable(REQUEST)  SubmitCallable(&ShieldClient::DescribeEmergencyContactSettings, REQUEST)

#define DescribeProtectionAsync(...)  SubmitAsync(&ShieldClient::DescribeProtection, __VA_ARGS__)
#define DescribeProtectionCallable(REQUEST)  SubmitCallable(&ShieldClient::DescribeProtection, REQUEST)

#define DescribeProtectionGroupAsync(...)  SubmitAsync(&ShieldClient::DescribeProtectionGroup, __VA_ARGS__)
#define DescribeProtectionGroupCallable(REQUEST)  SubmitCallable(&ShieldClient::DescribeProtectionGroup, REQUEST)

#define DescribeSubscriptionAsync(...)  SubmitAsync(&ShieldClient::DescribeSubscription, __VA_ARGS__)
#define DescribeSubscriptionCallable(REQUEST)  SubmitCallable(&ShieldClient::DescribeSubscription, REQUEST)

#define DisableApplicationLayerAutomaticResponseAsync(...)  SubmitAsync(&ShieldClient::DisableApplicationLayerAutomaticResponse, __VA_ARGS__)
#define DisableApplicationLayerAutomaticResponseCallable(REQUEST)  SubmitCallable(&ShieldClient::DisableApplicationLayerAutomaticResponse, REQUEST)

#define DisableProactiveEngagementAsync(...)  SubmitAsync(&ShieldClient::DisableProactiveEngagement, __VA_ARGS__)
#define DisableProactiveEngagementCallable(REQUEST)  SubmitCallable(&ShieldClient::DisableProactiveEngagement, REQUEST)

#define DisassociateDRTLogBucketAsync(...)  SubmitAsync(&ShieldClient::DisassociateDRTLogBucket, __VA_ARGS__)
#define DisassociateDRTLogBucketCallable(REQUEST)  SubmitCallable(&ShieldClient::DisassociateDRTLogBucket, REQUEST)

#define DisassociateDRTRoleAsync(...)  SubmitAsync(&ShieldClient::DisassociateDRTRole, __VA_ARGS__)
#define DisassociateDRTRoleCallable(REQUEST)  SubmitCallable(&ShieldClient::DisassociateDRTRole, REQUEST)

#define DisassociateHealthCheckAsync(...)  SubmitAsync(&ShieldClient::DisassociateHealthCheck, __VA_ARGS__)
#define DisassociateHealthCheckCallable(REQUEST)  SubmitCallable(&ShieldClient::DisassociateHealthCheck, REQUEST)

#define EnableApplicationLayerAutomaticResponseAsync(...)  SubmitAsync(&ShieldClient::EnableApplicationLayerAutomaticResponse, __VA_ARGS__)
#define EnableApplicationLayerAutomaticResponseCallable(REQUEST)  SubmitCallable(&ShieldClient::EnableApplicationLayerAutomaticResponse, REQUEST)

#define EnableProactiveEngagementAsync(...)  SubmitAsync(&ShieldClient::EnableProactiveEngagement, __VA_ARGS__)
#define EnableProactiveEngagementCallable(REQUEST)  SubmitCallable(&ShieldClient::EnableProactiveEngagement, REQUEST)

#define GetSubscriptionStateAsync(...)  SubmitAsync(&ShieldClient::GetSubscriptionState, __VA_ARGS__)
#define GetSubscriptionStateCallable(REQUEST)  SubmitCallable(&ShieldClient::GetSubscriptionState, REQUEST)

#define ListAttacksAsync(...)  SubmitAsync(&ShieldClient::ListAttacks, __VA_ARGS__)
#define ListAttacksCallable(REQUEST)  SubmitCallable(&ShieldClient::ListAttacks, REQUEST)

#define ListProtectionGroupsAsync(...)  SubmitAsync(&ShieldClient::ListProtectionGroups, __VA_ARGS__)
#define ListProtectionGroupsCallable(REQUEST)  SubmitCallable(&ShieldClient::ListProtectionGroups, REQUEST)

#define ListProtectionsAsync(...)  SubmitAsync(&ShieldClient::ListProtections, __VA_ARGS__)
#define ListProtectionsCallable(REQUEST)  SubmitCallable(&ShieldClient::ListProtections, REQUEST)

#define ListResourcesInProtectionGroupAsync(...)  SubmitAsync(&ShieldClient::ListResourcesInProtectionGroup, __VA_ARGS__)
#define ListResourcesInProtectionGroupCallable(REQUEST)  SubmitCallable(&ShieldClient::ListResourcesInProtectionGroup, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ShieldClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ShieldClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ShieldClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ShieldClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ShieldClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ShieldClient::UntagResource, REQUEST)

#define UpdateApplicationLayerAutomaticResponseAsync(...)  SubmitAsync(&ShieldClient::UpdateApplicationLayerAutomaticResponse, __VA_ARGS__)
#define UpdateApplicationLayerAutomaticResponseCallable(REQUEST)  SubmitCallable(&ShieldClient::UpdateApplicationLayerAutomaticResponse, REQUEST)

#define UpdateEmergencyContactSettingsAsync(...)  SubmitAsync(&ShieldClient::UpdateEmergencyContactSettings, __VA_ARGS__)
#define UpdateEmergencyContactSettingsCallable(REQUEST)  SubmitCallable(&ShieldClient::UpdateEmergencyContactSettings, REQUEST)

#define UpdateProtectionGroupAsync(...)  SubmitAsync(&ShieldClient::UpdateProtectionGroup, __VA_ARGS__)
#define UpdateProtectionGroupCallable(REQUEST)  SubmitCallable(&ShieldClient::UpdateProtectionGroup, REQUEST)

#define UpdateSubscriptionAsync(...)  SubmitAsync(&ShieldClient::UpdateSubscription, __VA_ARGS__)
#define UpdateSubscriptionCallable(REQUEST)  SubmitCallable(&ShieldClient::UpdateSubscription, REQUEST)

