/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAccessPointAsync(...)  SubmitAsync(&EFSClient::CreateAccessPoint, __VA_ARGS__)
#define CreateAccessPointCallable(REQUEST)  SubmitCallable(&EFSClient::CreateAccessPoint, REQUEST)

#define CreateFileSystemAsync(...)  SubmitAsync(&EFSClient::CreateFileSystem, __VA_ARGS__)
#define CreateFileSystemCallable(REQUEST)  SubmitCallable(&EFSClient::CreateFileSystem, REQUEST)

#define CreateMountTargetAsync(...)  SubmitAsync(&EFSClient::CreateMountTarget, __VA_ARGS__)
#define CreateMountTargetCallable(REQUEST)  SubmitCallable(&EFSClient::CreateMountTarget, REQUEST)

#define CreateReplicationConfigurationAsync(...)  SubmitAsync(&EFSClient::CreateReplicationConfiguration, __VA_ARGS__)
#define CreateReplicationConfigurationCallable(REQUEST)  SubmitCallable(&EFSClient::CreateReplicationConfiguration, REQUEST)

#define DeleteAccessPointAsync(...)  SubmitAsync(&EFSClient::DeleteAccessPoint, __VA_ARGS__)
#define DeleteAccessPointCallable(REQUEST)  SubmitCallable(&EFSClient::DeleteAccessPoint, REQUEST)

#define DeleteFileSystemAsync(...)  SubmitAsync(&EFSClient::DeleteFileSystem, __VA_ARGS__)
#define DeleteFileSystemCallable(REQUEST)  SubmitCallable(&EFSClient::DeleteFileSystem, REQUEST)

#define DeleteFileSystemPolicyAsync(...)  SubmitAsync(&EFSClient::DeleteFileSystemPolicy, __VA_ARGS__)
#define DeleteFileSystemPolicyCallable(REQUEST)  SubmitCallable(&EFSClient::DeleteFileSystemPolicy, REQUEST)

#define DeleteMountTargetAsync(...)  SubmitAsync(&EFSClient::DeleteMountTarget, __VA_ARGS__)
#define DeleteMountTargetCallable(REQUEST)  SubmitCallable(&EFSClient::DeleteMountTarget, REQUEST)

#define DeleteReplicationConfigurationAsync(...)  SubmitAsync(&EFSClient::DeleteReplicationConfiguration, __VA_ARGS__)
#define DeleteReplicationConfigurationCallable(REQUEST)  SubmitCallable(&EFSClient::DeleteReplicationConfiguration, REQUEST)

#define DescribeAccessPointsAsync(...)  SubmitAsync(&EFSClient::DescribeAccessPoints, __VA_ARGS__)
#define DescribeAccessPointsCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeAccessPoints, REQUEST)

#define DescribeAccountPreferencesAsync(...)  SubmitAsync(&EFSClient::DescribeAccountPreferences, __VA_ARGS__)
#define DescribeAccountPreferencesCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeAccountPreferences, REQUEST)

#define DescribeBackupPolicyAsync(...)  SubmitAsync(&EFSClient::DescribeBackupPolicy, __VA_ARGS__)
#define DescribeBackupPolicyCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeBackupPolicy, REQUEST)

#define DescribeFileSystemPolicyAsync(...)  SubmitAsync(&EFSClient::DescribeFileSystemPolicy, __VA_ARGS__)
#define DescribeFileSystemPolicyCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeFileSystemPolicy, REQUEST)

#define DescribeFileSystemsAsync(...)  SubmitAsync(&EFSClient::DescribeFileSystems, __VA_ARGS__)
#define DescribeFileSystemsCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeFileSystems, REQUEST)

#define DescribeLifecycleConfigurationAsync(...)  SubmitAsync(&EFSClient::DescribeLifecycleConfiguration, __VA_ARGS__)
#define DescribeLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeLifecycleConfiguration, REQUEST)

#define DescribeMountTargetSecurityGroupsAsync(...)  SubmitAsync(&EFSClient::DescribeMountTargetSecurityGroups, __VA_ARGS__)
#define DescribeMountTargetSecurityGroupsCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeMountTargetSecurityGroups, REQUEST)

#define DescribeMountTargetsAsync(...)  SubmitAsync(&EFSClient::DescribeMountTargets, __VA_ARGS__)
#define DescribeMountTargetsCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeMountTargets, REQUEST)

#define DescribeReplicationConfigurationsAsync(...)  SubmitAsync(&EFSClient::DescribeReplicationConfigurations, __VA_ARGS__)
#define DescribeReplicationConfigurationsCallable(REQUEST)  SubmitCallable(&EFSClient::DescribeReplicationConfigurations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&EFSClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&EFSClient::ListTagsForResource, REQUEST)

#define ModifyMountTargetSecurityGroupsAsync(...)  SubmitAsync(&EFSClient::ModifyMountTargetSecurityGroups, __VA_ARGS__)
#define ModifyMountTargetSecurityGroupsCallable(REQUEST)  SubmitCallable(&EFSClient::ModifyMountTargetSecurityGroups, REQUEST)

#define PutAccountPreferencesAsync(...)  SubmitAsync(&EFSClient::PutAccountPreferences, __VA_ARGS__)
#define PutAccountPreferencesCallable(REQUEST)  SubmitCallable(&EFSClient::PutAccountPreferences, REQUEST)

#define PutBackupPolicyAsync(...)  SubmitAsync(&EFSClient::PutBackupPolicy, __VA_ARGS__)
#define PutBackupPolicyCallable(REQUEST)  SubmitCallable(&EFSClient::PutBackupPolicy, REQUEST)

#define PutFileSystemPolicyAsync(...)  SubmitAsync(&EFSClient::PutFileSystemPolicy, __VA_ARGS__)
#define PutFileSystemPolicyCallable(REQUEST)  SubmitCallable(&EFSClient::PutFileSystemPolicy, REQUEST)

#define PutLifecycleConfigurationAsync(...)  SubmitAsync(&EFSClient::PutLifecycleConfiguration, __VA_ARGS__)
#define PutLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&EFSClient::PutLifecycleConfiguration, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&EFSClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&EFSClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&EFSClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&EFSClient::UntagResource, REQUEST)

#define UpdateFileSystemAsync(...)  SubmitAsync(&EFSClient::UpdateFileSystem, __VA_ARGS__)
#define UpdateFileSystemCallable(REQUEST)  SubmitCallable(&EFSClient::UpdateFileSystem, REQUEST)

