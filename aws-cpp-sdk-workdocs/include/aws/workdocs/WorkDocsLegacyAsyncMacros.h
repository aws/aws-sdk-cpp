/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AbortDocumentVersionUploadAsync(...)  SubmitAsync(&WorkDocsClient::AbortDocumentVersionUpload, __VA_ARGS__)
#define AbortDocumentVersionUploadCallable(REQUEST)  SubmitCallable(&WorkDocsClient::AbortDocumentVersionUpload, REQUEST)

#define ActivateUserAsync(...)  SubmitAsync(&WorkDocsClient::ActivateUser, __VA_ARGS__)
#define ActivateUserCallable(REQUEST)  SubmitCallable(&WorkDocsClient::ActivateUser, REQUEST)

#define AddResourcePermissionsAsync(...)  SubmitAsync(&WorkDocsClient::AddResourcePermissions, __VA_ARGS__)
#define AddResourcePermissionsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::AddResourcePermissions, REQUEST)

#define CreateCommentAsync(...)  SubmitAsync(&WorkDocsClient::CreateComment, __VA_ARGS__)
#define CreateCommentCallable(REQUEST)  SubmitCallable(&WorkDocsClient::CreateComment, REQUEST)

#define CreateCustomMetadataAsync(...)  SubmitAsync(&WorkDocsClient::CreateCustomMetadata, __VA_ARGS__)
#define CreateCustomMetadataCallable(REQUEST)  SubmitCallable(&WorkDocsClient::CreateCustomMetadata, REQUEST)

#define CreateFolderAsync(...)  SubmitAsync(&WorkDocsClient::CreateFolder, __VA_ARGS__)
#define CreateFolderCallable(REQUEST)  SubmitCallable(&WorkDocsClient::CreateFolder, REQUEST)

#define CreateLabelsAsync(...)  SubmitAsync(&WorkDocsClient::CreateLabels, __VA_ARGS__)
#define CreateLabelsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::CreateLabels, REQUEST)

#define CreateNotificationSubscriptionAsync(...)  SubmitAsync(&WorkDocsClient::CreateNotificationSubscription, __VA_ARGS__)
#define CreateNotificationSubscriptionCallable(REQUEST)  SubmitCallable(&WorkDocsClient::CreateNotificationSubscription, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&WorkDocsClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&WorkDocsClient::CreateUser, REQUEST)

#define DeactivateUserAsync(...)  SubmitAsync(&WorkDocsClient::DeactivateUser, __VA_ARGS__)
#define DeactivateUserCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeactivateUser, REQUEST)

#define DeleteCommentAsync(...)  SubmitAsync(&WorkDocsClient::DeleteComment, __VA_ARGS__)
#define DeleteCommentCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteComment, REQUEST)

#define DeleteCustomMetadataAsync(...)  SubmitAsync(&WorkDocsClient::DeleteCustomMetadata, __VA_ARGS__)
#define DeleteCustomMetadataCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteCustomMetadata, REQUEST)

#define DeleteDocumentAsync(...)  SubmitAsync(&WorkDocsClient::DeleteDocument, __VA_ARGS__)
#define DeleteDocumentCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteDocument, REQUEST)

#define DeleteDocumentVersionAsync(...)  SubmitAsync(&WorkDocsClient::DeleteDocumentVersion, __VA_ARGS__)
#define DeleteDocumentVersionCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteDocumentVersion, REQUEST)

#define DeleteFolderAsync(...)  SubmitAsync(&WorkDocsClient::DeleteFolder, __VA_ARGS__)
#define DeleteFolderCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteFolder, REQUEST)

#define DeleteFolderContentsAsync(...)  SubmitAsync(&WorkDocsClient::DeleteFolderContents, __VA_ARGS__)
#define DeleteFolderContentsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteFolderContents, REQUEST)

#define DeleteLabelsAsync(...)  SubmitAsync(&WorkDocsClient::DeleteLabels, __VA_ARGS__)
#define DeleteLabelsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteLabels, REQUEST)

#define DeleteNotificationSubscriptionAsync(...)  SubmitAsync(&WorkDocsClient::DeleteNotificationSubscription, __VA_ARGS__)
#define DeleteNotificationSubscriptionCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteNotificationSubscription, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&WorkDocsClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DeleteUser, REQUEST)

#define DescribeActivitiesAsync(...)  SubmitAsync(&WorkDocsClient::DescribeActivities, __VA_ARGS__)
#define DescribeActivitiesCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeActivities, REQUEST)

#define DescribeCommentsAsync(...)  SubmitAsync(&WorkDocsClient::DescribeComments, __VA_ARGS__)
#define DescribeCommentsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeComments, REQUEST)

#define DescribeDocumentVersionsAsync(...)  SubmitAsync(&WorkDocsClient::DescribeDocumentVersions, __VA_ARGS__)
#define DescribeDocumentVersionsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeDocumentVersions, REQUEST)

#define DescribeFolderContentsAsync(...)  SubmitAsync(&WorkDocsClient::DescribeFolderContents, __VA_ARGS__)
#define DescribeFolderContentsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeFolderContents, REQUEST)

#define DescribeGroupsAsync(...)  SubmitAsync(&WorkDocsClient::DescribeGroups, __VA_ARGS__)
#define DescribeGroupsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeGroups, REQUEST)

#define DescribeNotificationSubscriptionsAsync(...)  SubmitAsync(&WorkDocsClient::DescribeNotificationSubscriptions, __VA_ARGS__)
#define DescribeNotificationSubscriptionsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeNotificationSubscriptions, REQUEST)

#define DescribeResourcePermissionsAsync(...)  SubmitAsync(&WorkDocsClient::DescribeResourcePermissions, __VA_ARGS__)
#define DescribeResourcePermissionsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeResourcePermissions, REQUEST)

#define DescribeRootFoldersAsync(...)  SubmitAsync(&WorkDocsClient::DescribeRootFolders, __VA_ARGS__)
#define DescribeRootFoldersCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeRootFolders, REQUEST)

#define DescribeUsersAsync(...)  SubmitAsync(&WorkDocsClient::DescribeUsers, __VA_ARGS__)
#define DescribeUsersCallable(REQUEST)  SubmitCallable(&WorkDocsClient::DescribeUsers, REQUEST)

#define GetCurrentUserAsync(...)  SubmitAsync(&WorkDocsClient::GetCurrentUser, __VA_ARGS__)
#define GetCurrentUserCallable(REQUEST)  SubmitCallable(&WorkDocsClient::GetCurrentUser, REQUEST)

#define GetDocumentAsync(...)  SubmitAsync(&WorkDocsClient::GetDocument, __VA_ARGS__)
#define GetDocumentCallable(REQUEST)  SubmitCallable(&WorkDocsClient::GetDocument, REQUEST)

#define GetDocumentPathAsync(...)  SubmitAsync(&WorkDocsClient::GetDocumentPath, __VA_ARGS__)
#define GetDocumentPathCallable(REQUEST)  SubmitCallable(&WorkDocsClient::GetDocumentPath, REQUEST)

#define GetDocumentVersionAsync(...)  SubmitAsync(&WorkDocsClient::GetDocumentVersion, __VA_ARGS__)
#define GetDocumentVersionCallable(REQUEST)  SubmitCallable(&WorkDocsClient::GetDocumentVersion, REQUEST)

#define GetFolderAsync(...)  SubmitAsync(&WorkDocsClient::GetFolder, __VA_ARGS__)
#define GetFolderCallable(REQUEST)  SubmitCallable(&WorkDocsClient::GetFolder, REQUEST)

#define GetFolderPathAsync(...)  SubmitAsync(&WorkDocsClient::GetFolderPath, __VA_ARGS__)
#define GetFolderPathCallable(REQUEST)  SubmitCallable(&WorkDocsClient::GetFolderPath, REQUEST)

#define GetResourcesAsync(...)  SubmitAsync(&WorkDocsClient::GetResources, __VA_ARGS__)
#define GetResourcesCallable(REQUEST)  SubmitCallable(&WorkDocsClient::GetResources, REQUEST)

#define InitiateDocumentVersionUploadAsync(...)  SubmitAsync(&WorkDocsClient::InitiateDocumentVersionUpload, __VA_ARGS__)
#define InitiateDocumentVersionUploadCallable(REQUEST)  SubmitCallable(&WorkDocsClient::InitiateDocumentVersionUpload, REQUEST)

#define RemoveAllResourcePermissionsAsync(...)  SubmitAsync(&WorkDocsClient::RemoveAllResourcePermissions, __VA_ARGS__)
#define RemoveAllResourcePermissionsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::RemoveAllResourcePermissions, REQUEST)

#define RemoveResourcePermissionAsync(...)  SubmitAsync(&WorkDocsClient::RemoveResourcePermission, __VA_ARGS__)
#define RemoveResourcePermissionCallable(REQUEST)  SubmitCallable(&WorkDocsClient::RemoveResourcePermission, REQUEST)

#define RestoreDocumentVersionsAsync(...)  SubmitAsync(&WorkDocsClient::RestoreDocumentVersions, __VA_ARGS__)
#define RestoreDocumentVersionsCallable(REQUEST)  SubmitCallable(&WorkDocsClient::RestoreDocumentVersions, REQUEST)

#define UpdateDocumentAsync(...)  SubmitAsync(&WorkDocsClient::UpdateDocument, __VA_ARGS__)
#define UpdateDocumentCallable(REQUEST)  SubmitCallable(&WorkDocsClient::UpdateDocument, REQUEST)

#define UpdateDocumentVersionAsync(...)  SubmitAsync(&WorkDocsClient::UpdateDocumentVersion, __VA_ARGS__)
#define UpdateDocumentVersionCallable(REQUEST)  SubmitCallable(&WorkDocsClient::UpdateDocumentVersion, REQUEST)

#define UpdateFolderAsync(...)  SubmitAsync(&WorkDocsClient::UpdateFolder, __VA_ARGS__)
#define UpdateFolderCallable(REQUEST)  SubmitCallable(&WorkDocsClient::UpdateFolder, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&WorkDocsClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&WorkDocsClient::UpdateUser, REQUEST)

