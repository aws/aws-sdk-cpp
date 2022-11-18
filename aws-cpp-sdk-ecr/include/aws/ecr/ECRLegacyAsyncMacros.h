/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchCheckLayerAvailabilityAsync(...)  SubmitAsync(&ECRClient::BatchCheckLayerAvailability, __VA_ARGS__)
#define BatchCheckLayerAvailabilityCallable(REQUEST)  SubmitCallable(&ECRClient::BatchCheckLayerAvailability, REQUEST)

#define BatchDeleteImageAsync(...)  SubmitAsync(&ECRClient::BatchDeleteImage, __VA_ARGS__)
#define BatchDeleteImageCallable(REQUEST)  SubmitCallable(&ECRClient::BatchDeleteImage, REQUEST)

#define BatchGetImageAsync(...)  SubmitAsync(&ECRClient::BatchGetImage, __VA_ARGS__)
#define BatchGetImageCallable(REQUEST)  SubmitCallable(&ECRClient::BatchGetImage, REQUEST)

#define BatchGetRepositoryScanningConfigurationAsync(...)  SubmitAsync(&ECRClient::BatchGetRepositoryScanningConfiguration, __VA_ARGS__)
#define BatchGetRepositoryScanningConfigurationCallable(REQUEST)  SubmitCallable(&ECRClient::BatchGetRepositoryScanningConfiguration, REQUEST)

#define CompleteLayerUploadAsync(...)  SubmitAsync(&ECRClient::CompleteLayerUpload, __VA_ARGS__)
#define CompleteLayerUploadCallable(REQUEST)  SubmitCallable(&ECRClient::CompleteLayerUpload, REQUEST)

#define CreatePullThroughCacheRuleAsync(...)  SubmitAsync(&ECRClient::CreatePullThroughCacheRule, __VA_ARGS__)
#define CreatePullThroughCacheRuleCallable(REQUEST)  SubmitCallable(&ECRClient::CreatePullThroughCacheRule, REQUEST)

#define CreateRepositoryAsync(...)  SubmitAsync(&ECRClient::CreateRepository, __VA_ARGS__)
#define CreateRepositoryCallable(REQUEST)  SubmitCallable(&ECRClient::CreateRepository, REQUEST)

#define DeleteLifecyclePolicyAsync(...)  SubmitAsync(&ECRClient::DeleteLifecyclePolicy, __VA_ARGS__)
#define DeleteLifecyclePolicyCallable(REQUEST)  SubmitCallable(&ECRClient::DeleteLifecyclePolicy, REQUEST)

#define DeletePullThroughCacheRuleAsync(...)  SubmitAsync(&ECRClient::DeletePullThroughCacheRule, __VA_ARGS__)
#define DeletePullThroughCacheRuleCallable(REQUEST)  SubmitCallable(&ECRClient::DeletePullThroughCacheRule, REQUEST)

#define DeleteRegistryPolicyAsync(...)  SubmitAsync(&ECRClient::DeleteRegistryPolicy, __VA_ARGS__)
#define DeleteRegistryPolicyCallable(REQUEST)  SubmitCallable(&ECRClient::DeleteRegistryPolicy, REQUEST)

#define DeleteRepositoryAsync(...)  SubmitAsync(&ECRClient::DeleteRepository, __VA_ARGS__)
#define DeleteRepositoryCallable(REQUEST)  SubmitCallable(&ECRClient::DeleteRepository, REQUEST)

#define DeleteRepositoryPolicyAsync(...)  SubmitAsync(&ECRClient::DeleteRepositoryPolicy, __VA_ARGS__)
#define DeleteRepositoryPolicyCallable(REQUEST)  SubmitCallable(&ECRClient::DeleteRepositoryPolicy, REQUEST)

#define DescribeImageReplicationStatusAsync(...)  SubmitAsync(&ECRClient::DescribeImageReplicationStatus, __VA_ARGS__)
#define DescribeImageReplicationStatusCallable(REQUEST)  SubmitCallable(&ECRClient::DescribeImageReplicationStatus, REQUEST)

#define DescribeImageScanFindingsAsync(...)  SubmitAsync(&ECRClient::DescribeImageScanFindings, __VA_ARGS__)
#define DescribeImageScanFindingsCallable(REQUEST)  SubmitCallable(&ECRClient::DescribeImageScanFindings, REQUEST)

#define DescribeImagesAsync(...)  SubmitAsync(&ECRClient::DescribeImages, __VA_ARGS__)
#define DescribeImagesCallable(REQUEST)  SubmitCallable(&ECRClient::DescribeImages, REQUEST)

#define DescribePullThroughCacheRulesAsync(...)  SubmitAsync(&ECRClient::DescribePullThroughCacheRules, __VA_ARGS__)
#define DescribePullThroughCacheRulesCallable(REQUEST)  SubmitCallable(&ECRClient::DescribePullThroughCacheRules, REQUEST)

#define DescribeRegistryAsync(...)  SubmitAsync(&ECRClient::DescribeRegistry, __VA_ARGS__)
#define DescribeRegistryCallable(REQUEST)  SubmitCallable(&ECRClient::DescribeRegistry, REQUEST)

#define DescribeRepositoriesAsync(...)  SubmitAsync(&ECRClient::DescribeRepositories, __VA_ARGS__)
#define DescribeRepositoriesCallable(REQUEST)  SubmitCallable(&ECRClient::DescribeRepositories, REQUEST)

#define GetAuthorizationTokenAsync(...)  SubmitAsync(&ECRClient::GetAuthorizationToken, __VA_ARGS__)
#define GetAuthorizationTokenCallable(REQUEST)  SubmitCallable(&ECRClient::GetAuthorizationToken, REQUEST)

#define GetDownloadUrlForLayerAsync(...)  SubmitAsync(&ECRClient::GetDownloadUrlForLayer, __VA_ARGS__)
#define GetDownloadUrlForLayerCallable(REQUEST)  SubmitCallable(&ECRClient::GetDownloadUrlForLayer, REQUEST)

#define GetLifecyclePolicyAsync(...)  SubmitAsync(&ECRClient::GetLifecyclePolicy, __VA_ARGS__)
#define GetLifecyclePolicyCallable(REQUEST)  SubmitCallable(&ECRClient::GetLifecyclePolicy, REQUEST)

#define GetLifecyclePolicyPreviewAsync(...)  SubmitAsync(&ECRClient::GetLifecyclePolicyPreview, __VA_ARGS__)
#define GetLifecyclePolicyPreviewCallable(REQUEST)  SubmitCallable(&ECRClient::GetLifecyclePolicyPreview, REQUEST)

#define GetRegistryPolicyAsync(...)  SubmitAsync(&ECRClient::GetRegistryPolicy, __VA_ARGS__)
#define GetRegistryPolicyCallable(REQUEST)  SubmitCallable(&ECRClient::GetRegistryPolicy, REQUEST)

#define GetRegistryScanningConfigurationAsync(...)  SubmitAsync(&ECRClient::GetRegistryScanningConfiguration, __VA_ARGS__)
#define GetRegistryScanningConfigurationCallable(REQUEST)  SubmitCallable(&ECRClient::GetRegistryScanningConfiguration, REQUEST)

#define GetRepositoryPolicyAsync(...)  SubmitAsync(&ECRClient::GetRepositoryPolicy, __VA_ARGS__)
#define GetRepositoryPolicyCallable(REQUEST)  SubmitCallable(&ECRClient::GetRepositoryPolicy, REQUEST)

#define InitiateLayerUploadAsync(...)  SubmitAsync(&ECRClient::InitiateLayerUpload, __VA_ARGS__)
#define InitiateLayerUploadCallable(REQUEST)  SubmitCallable(&ECRClient::InitiateLayerUpload, REQUEST)

#define ListImagesAsync(...)  SubmitAsync(&ECRClient::ListImages, __VA_ARGS__)
#define ListImagesCallable(REQUEST)  SubmitCallable(&ECRClient::ListImages, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ECRClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ECRClient::ListTagsForResource, REQUEST)

#define PutImageAsync(...)  SubmitAsync(&ECRClient::PutImage, __VA_ARGS__)
#define PutImageCallable(REQUEST)  SubmitCallable(&ECRClient::PutImage, REQUEST)

#define PutImageScanningConfigurationAsync(...)  SubmitAsync(&ECRClient::PutImageScanningConfiguration, __VA_ARGS__)
#define PutImageScanningConfigurationCallable(REQUEST)  SubmitCallable(&ECRClient::PutImageScanningConfiguration, REQUEST)

#define PutImageTagMutabilityAsync(...)  SubmitAsync(&ECRClient::PutImageTagMutability, __VA_ARGS__)
#define PutImageTagMutabilityCallable(REQUEST)  SubmitCallable(&ECRClient::PutImageTagMutability, REQUEST)

#define PutLifecyclePolicyAsync(...)  SubmitAsync(&ECRClient::PutLifecyclePolicy, __VA_ARGS__)
#define PutLifecyclePolicyCallable(REQUEST)  SubmitCallable(&ECRClient::PutLifecyclePolicy, REQUEST)

#define PutRegistryPolicyAsync(...)  SubmitAsync(&ECRClient::PutRegistryPolicy, __VA_ARGS__)
#define PutRegistryPolicyCallable(REQUEST)  SubmitCallable(&ECRClient::PutRegistryPolicy, REQUEST)

#define PutRegistryScanningConfigurationAsync(...)  SubmitAsync(&ECRClient::PutRegistryScanningConfiguration, __VA_ARGS__)
#define PutRegistryScanningConfigurationCallable(REQUEST)  SubmitCallable(&ECRClient::PutRegistryScanningConfiguration, REQUEST)

#define PutReplicationConfigurationAsync(...)  SubmitAsync(&ECRClient::PutReplicationConfiguration, __VA_ARGS__)
#define PutReplicationConfigurationCallable(REQUEST)  SubmitCallable(&ECRClient::PutReplicationConfiguration, REQUEST)

#define SetRepositoryPolicyAsync(...)  SubmitAsync(&ECRClient::SetRepositoryPolicy, __VA_ARGS__)
#define SetRepositoryPolicyCallable(REQUEST)  SubmitCallable(&ECRClient::SetRepositoryPolicy, REQUEST)

#define StartImageScanAsync(...)  SubmitAsync(&ECRClient::StartImageScan, __VA_ARGS__)
#define StartImageScanCallable(REQUEST)  SubmitCallable(&ECRClient::StartImageScan, REQUEST)

#define StartLifecyclePolicyPreviewAsync(...)  SubmitAsync(&ECRClient::StartLifecyclePolicyPreview, __VA_ARGS__)
#define StartLifecyclePolicyPreviewCallable(REQUEST)  SubmitCallable(&ECRClient::StartLifecyclePolicyPreview, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ECRClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ECRClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ECRClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ECRClient::UntagResource, REQUEST)

#define UploadLayerPartAsync(...)  SubmitAsync(&ECRClient::UploadLayerPart, __VA_ARGS__)
#define UploadLayerPartCallable(REQUEST)  SubmitCallable(&ECRClient::UploadLayerPart, REQUEST)

