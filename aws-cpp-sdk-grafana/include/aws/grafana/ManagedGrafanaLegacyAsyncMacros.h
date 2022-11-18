/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateLicenseAsync(...)  SubmitAsync(&ManagedGrafanaClient::AssociateLicense, __VA_ARGS__)
#define AssociateLicenseCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::AssociateLicense, REQUEST)

#define CreateWorkspaceAsync(...)  SubmitAsync(&ManagedGrafanaClient::CreateWorkspace, __VA_ARGS__)
#define CreateWorkspaceCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::CreateWorkspace, REQUEST)

#define CreateWorkspaceApiKeyAsync(...)  SubmitAsync(&ManagedGrafanaClient::CreateWorkspaceApiKey, __VA_ARGS__)
#define CreateWorkspaceApiKeyCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::CreateWorkspaceApiKey, REQUEST)

#define DeleteWorkspaceAsync(...)  SubmitAsync(&ManagedGrafanaClient::DeleteWorkspace, __VA_ARGS__)
#define DeleteWorkspaceCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::DeleteWorkspace, REQUEST)

#define DeleteWorkspaceApiKeyAsync(...)  SubmitAsync(&ManagedGrafanaClient::DeleteWorkspaceApiKey, __VA_ARGS__)
#define DeleteWorkspaceApiKeyCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::DeleteWorkspaceApiKey, REQUEST)

#define DescribeWorkspaceAsync(...)  SubmitAsync(&ManagedGrafanaClient::DescribeWorkspace, __VA_ARGS__)
#define DescribeWorkspaceCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::DescribeWorkspace, REQUEST)

#define DescribeWorkspaceAuthenticationAsync(...)  SubmitAsync(&ManagedGrafanaClient::DescribeWorkspaceAuthentication, __VA_ARGS__)
#define DescribeWorkspaceAuthenticationCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::DescribeWorkspaceAuthentication, REQUEST)

#define DisassociateLicenseAsync(...)  SubmitAsync(&ManagedGrafanaClient::DisassociateLicense, __VA_ARGS__)
#define DisassociateLicenseCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::DisassociateLicense, REQUEST)

#define ListPermissionsAsync(...)  SubmitAsync(&ManagedGrafanaClient::ListPermissions, __VA_ARGS__)
#define ListPermissionsCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::ListPermissions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ManagedGrafanaClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::ListTagsForResource, REQUEST)

#define ListWorkspacesAsync(...)  SubmitAsync(&ManagedGrafanaClient::ListWorkspaces, __VA_ARGS__)
#define ListWorkspacesCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::ListWorkspaces, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ManagedGrafanaClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ManagedGrafanaClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::UntagResource, REQUEST)

#define UpdatePermissionsAsync(...)  SubmitAsync(&ManagedGrafanaClient::UpdatePermissions, __VA_ARGS__)
#define UpdatePermissionsCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::UpdatePermissions, REQUEST)

#define UpdateWorkspaceAsync(...)  SubmitAsync(&ManagedGrafanaClient::UpdateWorkspace, __VA_ARGS__)
#define UpdateWorkspaceCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::UpdateWorkspace, REQUEST)

#define UpdateWorkspaceAuthenticationAsync(...)  SubmitAsync(&ManagedGrafanaClient::UpdateWorkspaceAuthentication, __VA_ARGS__)
#define UpdateWorkspaceAuthenticationCallable(REQUEST)  SubmitCallable(&ManagedGrafanaClient::UpdateWorkspaceAuthentication, REQUEST)

