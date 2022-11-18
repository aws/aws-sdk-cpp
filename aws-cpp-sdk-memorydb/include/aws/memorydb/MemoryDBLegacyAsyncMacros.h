/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchUpdateClusterAsync(...)  SubmitAsync(&MemoryDBClient::BatchUpdateCluster, __VA_ARGS__)
#define BatchUpdateClusterCallable(REQUEST)  SubmitCallable(&MemoryDBClient::BatchUpdateCluster, REQUEST)

#define CopySnapshotAsync(...)  SubmitAsync(&MemoryDBClient::CopySnapshot, __VA_ARGS__)
#define CopySnapshotCallable(REQUEST)  SubmitCallable(&MemoryDBClient::CopySnapshot, REQUEST)

#define CreateACLAsync(...)  SubmitAsync(&MemoryDBClient::CreateACL, __VA_ARGS__)
#define CreateACLCallable(REQUEST)  SubmitCallable(&MemoryDBClient::CreateACL, REQUEST)

#define CreateClusterAsync(...)  SubmitAsync(&MemoryDBClient::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&MemoryDBClient::CreateCluster, REQUEST)

#define CreateParameterGroupAsync(...)  SubmitAsync(&MemoryDBClient::CreateParameterGroup, __VA_ARGS__)
#define CreateParameterGroupCallable(REQUEST)  SubmitCallable(&MemoryDBClient::CreateParameterGroup, REQUEST)

#define CreateSnapshotAsync(...)  SubmitAsync(&MemoryDBClient::CreateSnapshot, __VA_ARGS__)
#define CreateSnapshotCallable(REQUEST)  SubmitCallable(&MemoryDBClient::CreateSnapshot, REQUEST)

#define CreateSubnetGroupAsync(...)  SubmitAsync(&MemoryDBClient::CreateSubnetGroup, __VA_ARGS__)
#define CreateSubnetGroupCallable(REQUEST)  SubmitCallable(&MemoryDBClient::CreateSubnetGroup, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&MemoryDBClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&MemoryDBClient::CreateUser, REQUEST)

#define DeleteACLAsync(...)  SubmitAsync(&MemoryDBClient::DeleteACL, __VA_ARGS__)
#define DeleteACLCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DeleteACL, REQUEST)

#define DeleteClusterAsync(...)  SubmitAsync(&MemoryDBClient::DeleteCluster, __VA_ARGS__)
#define DeleteClusterCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DeleteCluster, REQUEST)

#define DeleteParameterGroupAsync(...)  SubmitAsync(&MemoryDBClient::DeleteParameterGroup, __VA_ARGS__)
#define DeleteParameterGroupCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DeleteParameterGroup, REQUEST)

#define DeleteSnapshotAsync(...)  SubmitAsync(&MemoryDBClient::DeleteSnapshot, __VA_ARGS__)
#define DeleteSnapshotCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DeleteSnapshot, REQUEST)

#define DeleteSubnetGroupAsync(...)  SubmitAsync(&MemoryDBClient::DeleteSubnetGroup, __VA_ARGS__)
#define DeleteSubnetGroupCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DeleteSubnetGroup, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&MemoryDBClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DeleteUser, REQUEST)

#define DescribeACLsAsync(...)  SubmitAsync(&MemoryDBClient::DescribeACLs, __VA_ARGS__)
#define DescribeACLsCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeACLs, REQUEST)

#define DescribeClustersAsync(...)  SubmitAsync(&MemoryDBClient::DescribeClusters, __VA_ARGS__)
#define DescribeClustersCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeClusters, REQUEST)

#define DescribeEngineVersionsAsync(...)  SubmitAsync(&MemoryDBClient::DescribeEngineVersions, __VA_ARGS__)
#define DescribeEngineVersionsCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeEngineVersions, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&MemoryDBClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeEvents, REQUEST)

#define DescribeParameterGroupsAsync(...)  SubmitAsync(&MemoryDBClient::DescribeParameterGroups, __VA_ARGS__)
#define DescribeParameterGroupsCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeParameterGroups, REQUEST)

#define DescribeParametersAsync(...)  SubmitAsync(&MemoryDBClient::DescribeParameters, __VA_ARGS__)
#define DescribeParametersCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeParameters, REQUEST)

#define DescribeServiceUpdatesAsync(...)  SubmitAsync(&MemoryDBClient::DescribeServiceUpdates, __VA_ARGS__)
#define DescribeServiceUpdatesCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeServiceUpdates, REQUEST)

#define DescribeSnapshotsAsync(...)  SubmitAsync(&MemoryDBClient::DescribeSnapshots, __VA_ARGS__)
#define DescribeSnapshotsCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeSnapshots, REQUEST)

#define DescribeSubnetGroupsAsync(...)  SubmitAsync(&MemoryDBClient::DescribeSubnetGroups, __VA_ARGS__)
#define DescribeSubnetGroupsCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeSubnetGroups, REQUEST)

#define DescribeUsersAsync(...)  SubmitAsync(&MemoryDBClient::DescribeUsers, __VA_ARGS__)
#define DescribeUsersCallable(REQUEST)  SubmitCallable(&MemoryDBClient::DescribeUsers, REQUEST)

#define FailoverShardAsync(...)  SubmitAsync(&MemoryDBClient::FailoverShard, __VA_ARGS__)
#define FailoverShardCallable(REQUEST)  SubmitCallable(&MemoryDBClient::FailoverShard, REQUEST)

#define ListAllowedNodeTypeUpdatesAsync(...)  SubmitAsync(&MemoryDBClient::ListAllowedNodeTypeUpdates, __VA_ARGS__)
#define ListAllowedNodeTypeUpdatesCallable(REQUEST)  SubmitCallable(&MemoryDBClient::ListAllowedNodeTypeUpdates, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&MemoryDBClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&MemoryDBClient::ListTags, REQUEST)

#define ResetParameterGroupAsync(...)  SubmitAsync(&MemoryDBClient::ResetParameterGroup, __VA_ARGS__)
#define ResetParameterGroupCallable(REQUEST)  SubmitCallable(&MemoryDBClient::ResetParameterGroup, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MemoryDBClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MemoryDBClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MemoryDBClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MemoryDBClient::UntagResource, REQUEST)

#define UpdateACLAsync(...)  SubmitAsync(&MemoryDBClient::UpdateACL, __VA_ARGS__)
#define UpdateACLCallable(REQUEST)  SubmitCallable(&MemoryDBClient::UpdateACL, REQUEST)

#define UpdateClusterAsync(...)  SubmitAsync(&MemoryDBClient::UpdateCluster, __VA_ARGS__)
#define UpdateClusterCallable(REQUEST)  SubmitCallable(&MemoryDBClient::UpdateCluster, REQUEST)

#define UpdateParameterGroupAsync(...)  SubmitAsync(&MemoryDBClient::UpdateParameterGroup, __VA_ARGS__)
#define UpdateParameterGroupCallable(REQUEST)  SubmitCallable(&MemoryDBClient::UpdateParameterGroup, REQUEST)

#define UpdateSubnetGroupAsync(...)  SubmitAsync(&MemoryDBClient::UpdateSubnetGroup, __VA_ARGS__)
#define UpdateSubnetGroupCallable(REQUEST)  SubmitCallable(&MemoryDBClient::UpdateSubnetGroup, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&MemoryDBClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&MemoryDBClient::UpdateUser, REQUEST)

