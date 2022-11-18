/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ConvertRecoveryPointToSnapshotAsync(...)  SubmitAsync(&RedshiftServerlessClient::ConvertRecoveryPointToSnapshot, __VA_ARGS__)
#define ConvertRecoveryPointToSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::ConvertRecoveryPointToSnapshot, REQUEST)

#define CreateEndpointAccessAsync(...)  SubmitAsync(&RedshiftServerlessClient::CreateEndpointAccess, __VA_ARGS__)
#define CreateEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::CreateEndpointAccess, REQUEST)

#define CreateNamespaceAsync(...)  SubmitAsync(&RedshiftServerlessClient::CreateNamespace, __VA_ARGS__)
#define CreateNamespaceCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::CreateNamespace, REQUEST)

#define CreateSnapshotAsync(...)  SubmitAsync(&RedshiftServerlessClient::CreateSnapshot, __VA_ARGS__)
#define CreateSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::CreateSnapshot, REQUEST)

#define CreateUsageLimitAsync(...)  SubmitAsync(&RedshiftServerlessClient::CreateUsageLimit, __VA_ARGS__)
#define CreateUsageLimitCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::CreateUsageLimit, REQUEST)

#define CreateWorkgroupAsync(...)  SubmitAsync(&RedshiftServerlessClient::CreateWorkgroup, __VA_ARGS__)
#define CreateWorkgroupCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::CreateWorkgroup, REQUEST)

#define DeleteEndpointAccessAsync(...)  SubmitAsync(&RedshiftServerlessClient::DeleteEndpointAccess, __VA_ARGS__)
#define DeleteEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::DeleteEndpointAccess, REQUEST)

#define DeleteNamespaceAsync(...)  SubmitAsync(&RedshiftServerlessClient::DeleteNamespace, __VA_ARGS__)
#define DeleteNamespaceCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::DeleteNamespace, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&RedshiftServerlessClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::DeleteResourcePolicy, REQUEST)

#define DeleteSnapshotAsync(...)  SubmitAsync(&RedshiftServerlessClient::DeleteSnapshot, __VA_ARGS__)
#define DeleteSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::DeleteSnapshot, REQUEST)

#define DeleteUsageLimitAsync(...)  SubmitAsync(&RedshiftServerlessClient::DeleteUsageLimit, __VA_ARGS__)
#define DeleteUsageLimitCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::DeleteUsageLimit, REQUEST)

#define DeleteWorkgroupAsync(...)  SubmitAsync(&RedshiftServerlessClient::DeleteWorkgroup, __VA_ARGS__)
#define DeleteWorkgroupCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::DeleteWorkgroup, REQUEST)

#define GetCredentialsAsync(...)  SubmitAsync(&RedshiftServerlessClient::GetCredentials, __VA_ARGS__)
#define GetCredentialsCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::GetCredentials, REQUEST)

#define GetEndpointAccessAsync(...)  SubmitAsync(&RedshiftServerlessClient::GetEndpointAccess, __VA_ARGS__)
#define GetEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::GetEndpointAccess, REQUEST)

#define GetNamespaceAsync(...)  SubmitAsync(&RedshiftServerlessClient::GetNamespace, __VA_ARGS__)
#define GetNamespaceCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::GetNamespace, REQUEST)

#define GetRecoveryPointAsync(...)  SubmitAsync(&RedshiftServerlessClient::GetRecoveryPoint, __VA_ARGS__)
#define GetRecoveryPointCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::GetRecoveryPoint, REQUEST)

#define GetResourcePolicyAsync(...)  SubmitAsync(&RedshiftServerlessClient::GetResourcePolicy, __VA_ARGS__)
#define GetResourcePolicyCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::GetResourcePolicy, REQUEST)

#define GetSnapshotAsync(...)  SubmitAsync(&RedshiftServerlessClient::GetSnapshot, __VA_ARGS__)
#define GetSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::GetSnapshot, REQUEST)

#define GetUsageLimitAsync(...)  SubmitAsync(&RedshiftServerlessClient::GetUsageLimit, __VA_ARGS__)
#define GetUsageLimitCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::GetUsageLimit, REQUEST)

#define GetWorkgroupAsync(...)  SubmitAsync(&RedshiftServerlessClient::GetWorkgroup, __VA_ARGS__)
#define GetWorkgroupCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::GetWorkgroup, REQUEST)

#define ListEndpointAccessAsync(...)  SubmitAsync(&RedshiftServerlessClient::ListEndpointAccess, __VA_ARGS__)
#define ListEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::ListEndpointAccess, REQUEST)

#define ListNamespacesAsync(...)  SubmitAsync(&RedshiftServerlessClient::ListNamespaces, __VA_ARGS__)
#define ListNamespacesCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::ListNamespaces, REQUEST)

#define ListRecoveryPointsAsync(...)  SubmitAsync(&RedshiftServerlessClient::ListRecoveryPoints, __VA_ARGS__)
#define ListRecoveryPointsCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::ListRecoveryPoints, REQUEST)

#define ListSnapshotsAsync(...)  SubmitAsync(&RedshiftServerlessClient::ListSnapshots, __VA_ARGS__)
#define ListSnapshotsCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::ListSnapshots, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&RedshiftServerlessClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::ListTagsForResource, REQUEST)

#define ListUsageLimitsAsync(...)  SubmitAsync(&RedshiftServerlessClient::ListUsageLimits, __VA_ARGS__)
#define ListUsageLimitsCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::ListUsageLimits, REQUEST)

#define ListWorkgroupsAsync(...)  SubmitAsync(&RedshiftServerlessClient::ListWorkgroups, __VA_ARGS__)
#define ListWorkgroupsCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::ListWorkgroups, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&RedshiftServerlessClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::PutResourcePolicy, REQUEST)

#define RestoreFromRecoveryPointAsync(...)  SubmitAsync(&RedshiftServerlessClient::RestoreFromRecoveryPoint, __VA_ARGS__)
#define RestoreFromRecoveryPointCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::RestoreFromRecoveryPoint, REQUEST)

#define RestoreFromSnapshotAsync(...)  SubmitAsync(&RedshiftServerlessClient::RestoreFromSnapshot, __VA_ARGS__)
#define RestoreFromSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::RestoreFromSnapshot, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&RedshiftServerlessClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&RedshiftServerlessClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::UntagResource, REQUEST)

#define UpdateEndpointAccessAsync(...)  SubmitAsync(&RedshiftServerlessClient::UpdateEndpointAccess, __VA_ARGS__)
#define UpdateEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::UpdateEndpointAccess, REQUEST)

#define UpdateNamespaceAsync(...)  SubmitAsync(&RedshiftServerlessClient::UpdateNamespace, __VA_ARGS__)
#define UpdateNamespaceCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::UpdateNamespace, REQUEST)

#define UpdateSnapshotAsync(...)  SubmitAsync(&RedshiftServerlessClient::UpdateSnapshot, __VA_ARGS__)
#define UpdateSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::UpdateSnapshot, REQUEST)

#define UpdateUsageLimitAsync(...)  SubmitAsync(&RedshiftServerlessClient::UpdateUsageLimit, __VA_ARGS__)
#define UpdateUsageLimitCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::UpdateUsageLimit, REQUEST)

#define UpdateWorkgroupAsync(...)  SubmitAsync(&RedshiftServerlessClient::UpdateWorkgroup, __VA_ARGS__)
#define UpdateWorkgroupCallable(REQUEST)  SubmitCallable(&RedshiftServerlessClient::UpdateWorkgroup, REQUEST)

