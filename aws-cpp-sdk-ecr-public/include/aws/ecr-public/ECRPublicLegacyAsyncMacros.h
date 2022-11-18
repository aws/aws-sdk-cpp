/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchCheckLayerAvailabilityAsync(...)  SubmitAsync(&ECRPublicClient::BatchCheckLayerAvailability, __VA_ARGS__)
#define BatchCheckLayerAvailabilityCallable(REQUEST)  SubmitCallable(&ECRPublicClient::BatchCheckLayerAvailability, REQUEST)

#define BatchDeleteImageAsync(...)  SubmitAsync(&ECRPublicClient::BatchDeleteImage, __VA_ARGS__)
#define BatchDeleteImageCallable(REQUEST)  SubmitCallable(&ECRPublicClient::BatchDeleteImage, REQUEST)

#define CompleteLayerUploadAsync(...)  SubmitAsync(&ECRPublicClient::CompleteLayerUpload, __VA_ARGS__)
#define CompleteLayerUploadCallable(REQUEST)  SubmitCallable(&ECRPublicClient::CompleteLayerUpload, REQUEST)

#define CreateRepositoryAsync(...)  SubmitAsync(&ECRPublicClient::CreateRepository, __VA_ARGS__)
#define CreateRepositoryCallable(REQUEST)  SubmitCallable(&ECRPublicClient::CreateRepository, REQUEST)

#define DeleteRepositoryAsync(...)  SubmitAsync(&ECRPublicClient::DeleteRepository, __VA_ARGS__)
#define DeleteRepositoryCallable(REQUEST)  SubmitCallable(&ECRPublicClient::DeleteRepository, REQUEST)

#define DeleteRepositoryPolicyAsync(...)  SubmitAsync(&ECRPublicClient::DeleteRepositoryPolicy, __VA_ARGS__)
#define DeleteRepositoryPolicyCallable(REQUEST)  SubmitCallable(&ECRPublicClient::DeleteRepositoryPolicy, REQUEST)

#define DescribeImageTagsAsync(...)  SubmitAsync(&ECRPublicClient::DescribeImageTags, __VA_ARGS__)
#define DescribeImageTagsCallable(REQUEST)  SubmitCallable(&ECRPublicClient::DescribeImageTags, REQUEST)

#define DescribeImagesAsync(...)  SubmitAsync(&ECRPublicClient::DescribeImages, __VA_ARGS__)
#define DescribeImagesCallable(REQUEST)  SubmitCallable(&ECRPublicClient::DescribeImages, REQUEST)

#define DescribeRegistriesAsync(...)  SubmitAsync(&ECRPublicClient::DescribeRegistries, __VA_ARGS__)
#define DescribeRegistriesCallable(REQUEST)  SubmitCallable(&ECRPublicClient::DescribeRegistries, REQUEST)

#define DescribeRepositoriesAsync(...)  SubmitAsync(&ECRPublicClient::DescribeRepositories, __VA_ARGS__)
#define DescribeRepositoriesCallable(REQUEST)  SubmitCallable(&ECRPublicClient::DescribeRepositories, REQUEST)

#define GetAuthorizationTokenAsync(...)  SubmitAsync(&ECRPublicClient::GetAuthorizationToken, __VA_ARGS__)
#define GetAuthorizationTokenCallable(REQUEST)  SubmitCallable(&ECRPublicClient::GetAuthorizationToken, REQUEST)

#define GetRegistryCatalogDataAsync(...)  SubmitAsync(&ECRPublicClient::GetRegistryCatalogData, __VA_ARGS__)
#define GetRegistryCatalogDataCallable(REQUEST)  SubmitCallable(&ECRPublicClient::GetRegistryCatalogData, REQUEST)

#define GetRepositoryCatalogDataAsync(...)  SubmitAsync(&ECRPublicClient::GetRepositoryCatalogData, __VA_ARGS__)
#define GetRepositoryCatalogDataCallable(REQUEST)  SubmitCallable(&ECRPublicClient::GetRepositoryCatalogData, REQUEST)

#define GetRepositoryPolicyAsync(...)  SubmitAsync(&ECRPublicClient::GetRepositoryPolicy, __VA_ARGS__)
#define GetRepositoryPolicyCallable(REQUEST)  SubmitCallable(&ECRPublicClient::GetRepositoryPolicy, REQUEST)

#define InitiateLayerUploadAsync(...)  SubmitAsync(&ECRPublicClient::InitiateLayerUpload, __VA_ARGS__)
#define InitiateLayerUploadCallable(REQUEST)  SubmitCallable(&ECRPublicClient::InitiateLayerUpload, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ECRPublicClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ECRPublicClient::ListTagsForResource, REQUEST)

#define PutImageAsync(...)  SubmitAsync(&ECRPublicClient::PutImage, __VA_ARGS__)
#define PutImageCallable(REQUEST)  SubmitCallable(&ECRPublicClient::PutImage, REQUEST)

#define PutRegistryCatalogDataAsync(...)  SubmitAsync(&ECRPublicClient::PutRegistryCatalogData, __VA_ARGS__)
#define PutRegistryCatalogDataCallable(REQUEST)  SubmitCallable(&ECRPublicClient::PutRegistryCatalogData, REQUEST)

#define PutRepositoryCatalogDataAsync(...)  SubmitAsync(&ECRPublicClient::PutRepositoryCatalogData, __VA_ARGS__)
#define PutRepositoryCatalogDataCallable(REQUEST)  SubmitCallable(&ECRPublicClient::PutRepositoryCatalogData, REQUEST)

#define SetRepositoryPolicyAsync(...)  SubmitAsync(&ECRPublicClient::SetRepositoryPolicy, __VA_ARGS__)
#define SetRepositoryPolicyCallable(REQUEST)  SubmitCallable(&ECRPublicClient::SetRepositoryPolicy, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ECRPublicClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ECRPublicClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ECRPublicClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ECRPublicClient::UntagResource, REQUEST)

#define UploadLayerPartAsync(...)  SubmitAsync(&ECRPublicClient::UploadLayerPart, __VA_ARGS__)
#define UploadLayerPartCallable(REQUEST)  SubmitCallable(&ECRPublicClient::UploadLayerPart, REQUEST)

