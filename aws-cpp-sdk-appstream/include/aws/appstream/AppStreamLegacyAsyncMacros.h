/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateApplicationFleetAsync(...)  SubmitAsync(&AppStreamClient::AssociateApplicationFleet, __VA_ARGS__)
#define AssociateApplicationFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::AssociateApplicationFleet, REQUEST)

#define AssociateApplicationToEntitlementAsync(...)  SubmitAsync(&AppStreamClient::AssociateApplicationToEntitlement, __VA_ARGS__)
#define AssociateApplicationToEntitlementCallable(REQUEST)  SubmitCallable(&AppStreamClient::AssociateApplicationToEntitlement, REQUEST)

#define AssociateFleetAsync(...)  SubmitAsync(&AppStreamClient::AssociateFleet, __VA_ARGS__)
#define AssociateFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::AssociateFleet, REQUEST)

#define BatchAssociateUserStackAsync(...)  SubmitAsync(&AppStreamClient::BatchAssociateUserStack, __VA_ARGS__)
#define BatchAssociateUserStackCallable(REQUEST)  SubmitCallable(&AppStreamClient::BatchAssociateUserStack, REQUEST)

#define BatchDisassociateUserStackAsync(...)  SubmitAsync(&AppStreamClient::BatchDisassociateUserStack, __VA_ARGS__)
#define BatchDisassociateUserStackCallable(REQUEST)  SubmitCallable(&AppStreamClient::BatchDisassociateUserStack, REQUEST)

#define CopyImageAsync(...)  SubmitAsync(&AppStreamClient::CopyImage, __VA_ARGS__)
#define CopyImageCallable(REQUEST)  SubmitCallable(&AppStreamClient::CopyImage, REQUEST)

#define CreateAppBlockAsync(...)  SubmitAsync(&AppStreamClient::CreateAppBlock, __VA_ARGS__)
#define CreateAppBlockCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateAppBlock, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&AppStreamClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateApplication, REQUEST)

#define CreateDirectoryConfigAsync(...)  SubmitAsync(&AppStreamClient::CreateDirectoryConfig, __VA_ARGS__)
#define CreateDirectoryConfigCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateDirectoryConfig, REQUEST)

#define CreateEntitlementAsync(...)  SubmitAsync(&AppStreamClient::CreateEntitlement, __VA_ARGS__)
#define CreateEntitlementCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateEntitlement, REQUEST)

#define CreateFleetAsync(...)  SubmitAsync(&AppStreamClient::CreateFleet, __VA_ARGS__)
#define CreateFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateFleet, REQUEST)

#define CreateImageBuilderAsync(...)  SubmitAsync(&AppStreamClient::CreateImageBuilder, __VA_ARGS__)
#define CreateImageBuilderCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateImageBuilder, REQUEST)

#define CreateImageBuilderStreamingURLAsync(...)  SubmitAsync(&AppStreamClient::CreateImageBuilderStreamingURL, __VA_ARGS__)
#define CreateImageBuilderStreamingURLCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateImageBuilderStreamingURL, REQUEST)

#define CreateStackAsync(...)  SubmitAsync(&AppStreamClient::CreateStack, __VA_ARGS__)
#define CreateStackCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateStack, REQUEST)

#define CreateStreamingURLAsync(...)  SubmitAsync(&AppStreamClient::CreateStreamingURL, __VA_ARGS__)
#define CreateStreamingURLCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateStreamingURL, REQUEST)

#define CreateUpdatedImageAsync(...)  SubmitAsync(&AppStreamClient::CreateUpdatedImage, __VA_ARGS__)
#define CreateUpdatedImageCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateUpdatedImage, REQUEST)

#define CreateUsageReportSubscriptionAsync(...)  SubmitAsync(&AppStreamClient::CreateUsageReportSubscription, __VA_ARGS__)
#define CreateUsageReportSubscriptionCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateUsageReportSubscription, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&AppStreamClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&AppStreamClient::CreateUser, REQUEST)

#define DeleteAppBlockAsync(...)  SubmitAsync(&AppStreamClient::DeleteAppBlock, __VA_ARGS__)
#define DeleteAppBlockCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteAppBlock, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&AppStreamClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteApplication, REQUEST)

#define DeleteDirectoryConfigAsync(...)  SubmitAsync(&AppStreamClient::DeleteDirectoryConfig, __VA_ARGS__)
#define DeleteDirectoryConfigCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteDirectoryConfig, REQUEST)

#define DeleteEntitlementAsync(...)  SubmitAsync(&AppStreamClient::DeleteEntitlement, __VA_ARGS__)
#define DeleteEntitlementCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteEntitlement, REQUEST)

#define DeleteFleetAsync(...)  SubmitAsync(&AppStreamClient::DeleteFleet, __VA_ARGS__)
#define DeleteFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteFleet, REQUEST)

#define DeleteImageAsync(...)  SubmitAsync(&AppStreamClient::DeleteImage, __VA_ARGS__)
#define DeleteImageCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteImage, REQUEST)

#define DeleteImageBuilderAsync(...)  SubmitAsync(&AppStreamClient::DeleteImageBuilder, __VA_ARGS__)
#define DeleteImageBuilderCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteImageBuilder, REQUEST)

#define DeleteImagePermissionsAsync(...)  SubmitAsync(&AppStreamClient::DeleteImagePermissions, __VA_ARGS__)
#define DeleteImagePermissionsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteImagePermissions, REQUEST)

#define DeleteStackAsync(...)  SubmitAsync(&AppStreamClient::DeleteStack, __VA_ARGS__)
#define DeleteStackCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteStack, REQUEST)

#define DeleteUsageReportSubscriptionAsync(...)  SubmitAsync(&AppStreamClient::DeleteUsageReportSubscription, __VA_ARGS__)
#define DeleteUsageReportSubscriptionCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteUsageReportSubscription, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&AppStreamClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&AppStreamClient::DeleteUser, REQUEST)

#define DescribeAppBlocksAsync(...)  SubmitAsync(&AppStreamClient::DescribeAppBlocks, __VA_ARGS__)
#define DescribeAppBlocksCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeAppBlocks, REQUEST)

#define DescribeApplicationFleetAssociationsAsync(...)  SubmitAsync(&AppStreamClient::DescribeApplicationFleetAssociations, __VA_ARGS__)
#define DescribeApplicationFleetAssociationsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeApplicationFleetAssociations, REQUEST)

#define DescribeApplicationsAsync(...)  SubmitAsync(&AppStreamClient::DescribeApplications, __VA_ARGS__)
#define DescribeApplicationsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeApplications, REQUEST)

#define DescribeDirectoryConfigsAsync(...)  SubmitAsync(&AppStreamClient::DescribeDirectoryConfigs, __VA_ARGS__)
#define DescribeDirectoryConfigsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeDirectoryConfigs, REQUEST)

#define DescribeEntitlementsAsync(...)  SubmitAsync(&AppStreamClient::DescribeEntitlements, __VA_ARGS__)
#define DescribeEntitlementsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeEntitlements, REQUEST)

#define DescribeFleetsAsync(...)  SubmitAsync(&AppStreamClient::DescribeFleets, __VA_ARGS__)
#define DescribeFleetsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeFleets, REQUEST)

#define DescribeImageBuildersAsync(...)  SubmitAsync(&AppStreamClient::DescribeImageBuilders, __VA_ARGS__)
#define DescribeImageBuildersCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeImageBuilders, REQUEST)

#define DescribeImagePermissionsAsync(...)  SubmitAsync(&AppStreamClient::DescribeImagePermissions, __VA_ARGS__)
#define DescribeImagePermissionsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeImagePermissions, REQUEST)

#define DescribeImagesAsync(...)  SubmitAsync(&AppStreamClient::DescribeImages, __VA_ARGS__)
#define DescribeImagesCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeImages, REQUEST)

#define DescribeSessionsAsync(...)  SubmitAsync(&AppStreamClient::DescribeSessions, __VA_ARGS__)
#define DescribeSessionsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeSessions, REQUEST)

#define DescribeStacksAsync(...)  SubmitAsync(&AppStreamClient::DescribeStacks, __VA_ARGS__)
#define DescribeStacksCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeStacks, REQUEST)

#define DescribeUsageReportSubscriptionsAsync(...)  SubmitAsync(&AppStreamClient::DescribeUsageReportSubscriptions, __VA_ARGS__)
#define DescribeUsageReportSubscriptionsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeUsageReportSubscriptions, REQUEST)

#define DescribeUserStackAssociationsAsync(...)  SubmitAsync(&AppStreamClient::DescribeUserStackAssociations, __VA_ARGS__)
#define DescribeUserStackAssociationsCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeUserStackAssociations, REQUEST)

#define DescribeUsersAsync(...)  SubmitAsync(&AppStreamClient::DescribeUsers, __VA_ARGS__)
#define DescribeUsersCallable(REQUEST)  SubmitCallable(&AppStreamClient::DescribeUsers, REQUEST)

#define DisableUserAsync(...)  SubmitAsync(&AppStreamClient::DisableUser, __VA_ARGS__)
#define DisableUserCallable(REQUEST)  SubmitCallable(&AppStreamClient::DisableUser, REQUEST)

#define DisassociateApplicationFleetAsync(...)  SubmitAsync(&AppStreamClient::DisassociateApplicationFleet, __VA_ARGS__)
#define DisassociateApplicationFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::DisassociateApplicationFleet, REQUEST)

#define DisassociateApplicationFromEntitlementAsync(...)  SubmitAsync(&AppStreamClient::DisassociateApplicationFromEntitlement, __VA_ARGS__)
#define DisassociateApplicationFromEntitlementCallable(REQUEST)  SubmitCallable(&AppStreamClient::DisassociateApplicationFromEntitlement, REQUEST)

#define DisassociateFleetAsync(...)  SubmitAsync(&AppStreamClient::DisassociateFleet, __VA_ARGS__)
#define DisassociateFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::DisassociateFleet, REQUEST)

#define EnableUserAsync(...)  SubmitAsync(&AppStreamClient::EnableUser, __VA_ARGS__)
#define EnableUserCallable(REQUEST)  SubmitCallable(&AppStreamClient::EnableUser, REQUEST)

#define ExpireSessionAsync(...)  SubmitAsync(&AppStreamClient::ExpireSession, __VA_ARGS__)
#define ExpireSessionCallable(REQUEST)  SubmitCallable(&AppStreamClient::ExpireSession, REQUEST)

#define ListAssociatedFleetsAsync(...)  SubmitAsync(&AppStreamClient::ListAssociatedFleets, __VA_ARGS__)
#define ListAssociatedFleetsCallable(REQUEST)  SubmitCallable(&AppStreamClient::ListAssociatedFleets, REQUEST)

#define ListAssociatedStacksAsync(...)  SubmitAsync(&AppStreamClient::ListAssociatedStacks, __VA_ARGS__)
#define ListAssociatedStacksCallable(REQUEST)  SubmitCallable(&AppStreamClient::ListAssociatedStacks, REQUEST)

#define ListEntitledApplicationsAsync(...)  SubmitAsync(&AppStreamClient::ListEntitledApplications, __VA_ARGS__)
#define ListEntitledApplicationsCallable(REQUEST)  SubmitCallable(&AppStreamClient::ListEntitledApplications, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AppStreamClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AppStreamClient::ListTagsForResource, REQUEST)

#define StartFleetAsync(...)  SubmitAsync(&AppStreamClient::StartFleet, __VA_ARGS__)
#define StartFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::StartFleet, REQUEST)

#define StartImageBuilderAsync(...)  SubmitAsync(&AppStreamClient::StartImageBuilder, __VA_ARGS__)
#define StartImageBuilderCallable(REQUEST)  SubmitCallable(&AppStreamClient::StartImageBuilder, REQUEST)

#define StopFleetAsync(...)  SubmitAsync(&AppStreamClient::StopFleet, __VA_ARGS__)
#define StopFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::StopFleet, REQUEST)

#define StopImageBuilderAsync(...)  SubmitAsync(&AppStreamClient::StopImageBuilder, __VA_ARGS__)
#define StopImageBuilderCallable(REQUEST)  SubmitCallable(&AppStreamClient::StopImageBuilder, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AppStreamClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AppStreamClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AppStreamClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AppStreamClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&AppStreamClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&AppStreamClient::UpdateApplication, REQUEST)

#define UpdateDirectoryConfigAsync(...)  SubmitAsync(&AppStreamClient::UpdateDirectoryConfig, __VA_ARGS__)
#define UpdateDirectoryConfigCallable(REQUEST)  SubmitCallable(&AppStreamClient::UpdateDirectoryConfig, REQUEST)

#define UpdateEntitlementAsync(...)  SubmitAsync(&AppStreamClient::UpdateEntitlement, __VA_ARGS__)
#define UpdateEntitlementCallable(REQUEST)  SubmitCallable(&AppStreamClient::UpdateEntitlement, REQUEST)

#define UpdateFleetAsync(...)  SubmitAsync(&AppStreamClient::UpdateFleet, __VA_ARGS__)
#define UpdateFleetCallable(REQUEST)  SubmitCallable(&AppStreamClient::UpdateFleet, REQUEST)

#define UpdateImagePermissionsAsync(...)  SubmitAsync(&AppStreamClient::UpdateImagePermissions, __VA_ARGS__)
#define UpdateImagePermissionsCallable(REQUEST)  SubmitCallable(&AppStreamClient::UpdateImagePermissions, REQUEST)

#define UpdateStackAsync(...)  SubmitAsync(&AppStreamClient::UpdateStack, __VA_ARGS__)
#define UpdateStackCallable(REQUEST)  SubmitCallable(&AppStreamClient::UpdateStack, REQUEST)

