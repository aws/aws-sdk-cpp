/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AbortMultipartUploadAsync(...)  SubmitAsync(&GlacierClient::AbortMultipartUpload, __VA_ARGS__)
#define AbortMultipartUploadCallable(REQUEST)  SubmitCallable(&GlacierClient::AbortMultipartUpload, REQUEST)

#define AbortVaultLockAsync(...)  SubmitAsync(&GlacierClient::AbortVaultLock, __VA_ARGS__)
#define AbortVaultLockCallable(REQUEST)  SubmitCallable(&GlacierClient::AbortVaultLock, REQUEST)

#define AddTagsToVaultAsync(...)  SubmitAsync(&GlacierClient::AddTagsToVault, __VA_ARGS__)
#define AddTagsToVaultCallable(REQUEST)  SubmitCallable(&GlacierClient::AddTagsToVault, REQUEST)

#define CompleteMultipartUploadAsync(...)  SubmitAsync(&GlacierClient::CompleteMultipartUpload, __VA_ARGS__)
#define CompleteMultipartUploadCallable(REQUEST)  SubmitCallable(&GlacierClient::CompleteMultipartUpload, REQUEST)

#define CompleteVaultLockAsync(...)  SubmitAsync(&GlacierClient::CompleteVaultLock, __VA_ARGS__)
#define CompleteVaultLockCallable(REQUEST)  SubmitCallable(&GlacierClient::CompleteVaultLock, REQUEST)

#define CreateVaultAsync(...)  SubmitAsync(&GlacierClient::CreateVault, __VA_ARGS__)
#define CreateVaultCallable(REQUEST)  SubmitCallable(&GlacierClient::CreateVault, REQUEST)

#define DeleteArchiveAsync(...)  SubmitAsync(&GlacierClient::DeleteArchive, __VA_ARGS__)
#define DeleteArchiveCallable(REQUEST)  SubmitCallable(&GlacierClient::DeleteArchive, REQUEST)

#define DeleteVaultAsync(...)  SubmitAsync(&GlacierClient::DeleteVault, __VA_ARGS__)
#define DeleteVaultCallable(REQUEST)  SubmitCallable(&GlacierClient::DeleteVault, REQUEST)

#define DeleteVaultAccessPolicyAsync(...)  SubmitAsync(&GlacierClient::DeleteVaultAccessPolicy, __VA_ARGS__)
#define DeleteVaultAccessPolicyCallable(REQUEST)  SubmitCallable(&GlacierClient::DeleteVaultAccessPolicy, REQUEST)

#define DeleteVaultNotificationsAsync(...)  SubmitAsync(&GlacierClient::DeleteVaultNotifications, __VA_ARGS__)
#define DeleteVaultNotificationsCallable(REQUEST)  SubmitCallable(&GlacierClient::DeleteVaultNotifications, REQUEST)

#define DescribeJobAsync(...)  SubmitAsync(&GlacierClient::DescribeJob, __VA_ARGS__)
#define DescribeJobCallable(REQUEST)  SubmitCallable(&GlacierClient::DescribeJob, REQUEST)

#define DescribeVaultAsync(...)  SubmitAsync(&GlacierClient::DescribeVault, __VA_ARGS__)
#define DescribeVaultCallable(REQUEST)  SubmitCallable(&GlacierClient::DescribeVault, REQUEST)

#define GetDataRetrievalPolicyAsync(...)  SubmitAsync(&GlacierClient::GetDataRetrievalPolicy, __VA_ARGS__)
#define GetDataRetrievalPolicyCallable(REQUEST)  SubmitCallable(&GlacierClient::GetDataRetrievalPolicy, REQUEST)

#define GetJobOutputAsync(...)  SubmitAsync(&GlacierClient::GetJobOutput, __VA_ARGS__)
#define GetJobOutputCallable(REQUEST)  SubmitCallable(&GlacierClient::GetJobOutput, REQUEST)

#define GetVaultAccessPolicyAsync(...)  SubmitAsync(&GlacierClient::GetVaultAccessPolicy, __VA_ARGS__)
#define GetVaultAccessPolicyCallable(REQUEST)  SubmitCallable(&GlacierClient::GetVaultAccessPolicy, REQUEST)

#define GetVaultLockAsync(...)  SubmitAsync(&GlacierClient::GetVaultLock, __VA_ARGS__)
#define GetVaultLockCallable(REQUEST)  SubmitCallable(&GlacierClient::GetVaultLock, REQUEST)

#define GetVaultNotificationsAsync(...)  SubmitAsync(&GlacierClient::GetVaultNotifications, __VA_ARGS__)
#define GetVaultNotificationsCallable(REQUEST)  SubmitCallable(&GlacierClient::GetVaultNotifications, REQUEST)

#define InitiateJobAsync(...)  SubmitAsync(&GlacierClient::InitiateJob, __VA_ARGS__)
#define InitiateJobCallable(REQUEST)  SubmitCallable(&GlacierClient::InitiateJob, REQUEST)

#define InitiateMultipartUploadAsync(...)  SubmitAsync(&GlacierClient::InitiateMultipartUpload, __VA_ARGS__)
#define InitiateMultipartUploadCallable(REQUEST)  SubmitCallable(&GlacierClient::InitiateMultipartUpload, REQUEST)

#define InitiateVaultLockAsync(...)  SubmitAsync(&GlacierClient::InitiateVaultLock, __VA_ARGS__)
#define InitiateVaultLockCallable(REQUEST)  SubmitCallable(&GlacierClient::InitiateVaultLock, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&GlacierClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&GlacierClient::ListJobs, REQUEST)

#define ListMultipartUploadsAsync(...)  SubmitAsync(&GlacierClient::ListMultipartUploads, __VA_ARGS__)
#define ListMultipartUploadsCallable(REQUEST)  SubmitCallable(&GlacierClient::ListMultipartUploads, REQUEST)

#define ListPartsAsync(...)  SubmitAsync(&GlacierClient::ListParts, __VA_ARGS__)
#define ListPartsCallable(REQUEST)  SubmitCallable(&GlacierClient::ListParts, REQUEST)

#define ListProvisionedCapacityAsync(...)  SubmitAsync(&GlacierClient::ListProvisionedCapacity, __VA_ARGS__)
#define ListProvisionedCapacityCallable(REQUEST)  SubmitCallable(&GlacierClient::ListProvisionedCapacity, REQUEST)

#define ListTagsForVaultAsync(...)  SubmitAsync(&GlacierClient::ListTagsForVault, __VA_ARGS__)
#define ListTagsForVaultCallable(REQUEST)  SubmitCallable(&GlacierClient::ListTagsForVault, REQUEST)

#define ListVaultsAsync(...)  SubmitAsync(&GlacierClient::ListVaults, __VA_ARGS__)
#define ListVaultsCallable(REQUEST)  SubmitCallable(&GlacierClient::ListVaults, REQUEST)

#define PurchaseProvisionedCapacityAsync(...)  SubmitAsync(&GlacierClient::PurchaseProvisionedCapacity, __VA_ARGS__)
#define PurchaseProvisionedCapacityCallable(REQUEST)  SubmitCallable(&GlacierClient::PurchaseProvisionedCapacity, REQUEST)

#define RemoveTagsFromVaultAsync(...)  SubmitAsync(&GlacierClient::RemoveTagsFromVault, __VA_ARGS__)
#define RemoveTagsFromVaultCallable(REQUEST)  SubmitCallable(&GlacierClient::RemoveTagsFromVault, REQUEST)

#define SetDataRetrievalPolicyAsync(...)  SubmitAsync(&GlacierClient::SetDataRetrievalPolicy, __VA_ARGS__)
#define SetDataRetrievalPolicyCallable(REQUEST)  SubmitCallable(&GlacierClient::SetDataRetrievalPolicy, REQUEST)

#define SetVaultAccessPolicyAsync(...)  SubmitAsync(&GlacierClient::SetVaultAccessPolicy, __VA_ARGS__)
#define SetVaultAccessPolicyCallable(REQUEST)  SubmitCallable(&GlacierClient::SetVaultAccessPolicy, REQUEST)

#define SetVaultNotificationsAsync(...)  SubmitAsync(&GlacierClient::SetVaultNotifications, __VA_ARGS__)
#define SetVaultNotificationsCallable(REQUEST)  SubmitCallable(&GlacierClient::SetVaultNotifications, REQUEST)

#define UploadArchiveAsync(...)  SubmitAsync(&GlacierClient::UploadArchive, __VA_ARGS__)
#define UploadArchiveCallable(REQUEST)  SubmitCallable(&GlacierClient::UploadArchive, REQUEST)

#define UploadMultipartPartAsync(...)  SubmitAsync(&GlacierClient::UploadMultipartPart, __VA_ARGS__)
#define UploadMultipartPartCallable(REQUEST)  SubmitCallable(&GlacierClient::UploadMultipartPart, REQUEST)

