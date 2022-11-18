/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CopyBackupToRegionAsync(...)  SubmitAsync(&CloudHSMV2Client::CopyBackupToRegion, __VA_ARGS__)
#define CopyBackupToRegionCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::CopyBackupToRegion, REQUEST)

#define CreateClusterAsync(...)  SubmitAsync(&CloudHSMV2Client::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::CreateCluster, REQUEST)

#define CreateHsmAsync(...)  SubmitAsync(&CloudHSMV2Client::CreateHsm, __VA_ARGS__)
#define CreateHsmCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::CreateHsm, REQUEST)

#define DeleteBackupAsync(...)  SubmitAsync(&CloudHSMV2Client::DeleteBackup, __VA_ARGS__)
#define DeleteBackupCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::DeleteBackup, REQUEST)

#define DeleteClusterAsync(...)  SubmitAsync(&CloudHSMV2Client::DeleteCluster, __VA_ARGS__)
#define DeleteClusterCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::DeleteCluster, REQUEST)

#define DeleteHsmAsync(...)  SubmitAsync(&CloudHSMV2Client::DeleteHsm, __VA_ARGS__)
#define DeleteHsmCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::DeleteHsm, REQUEST)

#define DescribeBackupsAsync(...)  SubmitAsync(&CloudHSMV2Client::DescribeBackups, __VA_ARGS__)
#define DescribeBackupsCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::DescribeBackups, REQUEST)

#define DescribeClustersAsync(...)  SubmitAsync(&CloudHSMV2Client::DescribeClusters, __VA_ARGS__)
#define DescribeClustersCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::DescribeClusters, REQUEST)

#define InitializeClusterAsync(...)  SubmitAsync(&CloudHSMV2Client::InitializeCluster, __VA_ARGS__)
#define InitializeClusterCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::InitializeCluster, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&CloudHSMV2Client::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::ListTags, REQUEST)

#define ModifyBackupAttributesAsync(...)  SubmitAsync(&CloudHSMV2Client::ModifyBackupAttributes, __VA_ARGS__)
#define ModifyBackupAttributesCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::ModifyBackupAttributes, REQUEST)

#define ModifyClusterAsync(...)  SubmitAsync(&CloudHSMV2Client::ModifyCluster, __VA_ARGS__)
#define ModifyClusterCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::ModifyCluster, REQUEST)

#define RestoreBackupAsync(...)  SubmitAsync(&CloudHSMV2Client::RestoreBackup, __VA_ARGS__)
#define RestoreBackupCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::RestoreBackup, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CloudHSMV2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CloudHSMV2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CloudHSMV2Client::UntagResource, REQUEST)

