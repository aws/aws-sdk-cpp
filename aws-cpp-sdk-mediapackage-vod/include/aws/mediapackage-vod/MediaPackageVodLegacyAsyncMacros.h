/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ConfigureLogsAsync(...)  SubmitAsync(&MediaPackageVodClient::ConfigureLogs, __VA_ARGS__)
#define ConfigureLogsCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::ConfigureLogs, REQUEST)

#define CreateAssetAsync(...)  SubmitAsync(&MediaPackageVodClient::CreateAsset, __VA_ARGS__)
#define CreateAssetCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::CreateAsset, REQUEST)

#define CreatePackagingConfigurationAsync(...)  SubmitAsync(&MediaPackageVodClient::CreatePackagingConfiguration, __VA_ARGS__)
#define CreatePackagingConfigurationCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::CreatePackagingConfiguration, REQUEST)

#define CreatePackagingGroupAsync(...)  SubmitAsync(&MediaPackageVodClient::CreatePackagingGroup, __VA_ARGS__)
#define CreatePackagingGroupCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::CreatePackagingGroup, REQUEST)

#define DeleteAssetAsync(...)  SubmitAsync(&MediaPackageVodClient::DeleteAsset, __VA_ARGS__)
#define DeleteAssetCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::DeleteAsset, REQUEST)

#define DeletePackagingConfigurationAsync(...)  SubmitAsync(&MediaPackageVodClient::DeletePackagingConfiguration, __VA_ARGS__)
#define DeletePackagingConfigurationCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::DeletePackagingConfiguration, REQUEST)

#define DeletePackagingGroupAsync(...)  SubmitAsync(&MediaPackageVodClient::DeletePackagingGroup, __VA_ARGS__)
#define DeletePackagingGroupCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::DeletePackagingGroup, REQUEST)

#define DescribeAssetAsync(...)  SubmitAsync(&MediaPackageVodClient::DescribeAsset, __VA_ARGS__)
#define DescribeAssetCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::DescribeAsset, REQUEST)

#define DescribePackagingConfigurationAsync(...)  SubmitAsync(&MediaPackageVodClient::DescribePackagingConfiguration, __VA_ARGS__)
#define DescribePackagingConfigurationCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::DescribePackagingConfiguration, REQUEST)

#define DescribePackagingGroupAsync(...)  SubmitAsync(&MediaPackageVodClient::DescribePackagingGroup, __VA_ARGS__)
#define DescribePackagingGroupCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::DescribePackagingGroup, REQUEST)

#define ListAssetsAsync(...)  SubmitAsync(&MediaPackageVodClient::ListAssets, __VA_ARGS__)
#define ListAssetsCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::ListAssets, REQUEST)

#define ListPackagingConfigurationsAsync(...)  SubmitAsync(&MediaPackageVodClient::ListPackagingConfigurations, __VA_ARGS__)
#define ListPackagingConfigurationsCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::ListPackagingConfigurations, REQUEST)

#define ListPackagingGroupsAsync(...)  SubmitAsync(&MediaPackageVodClient::ListPackagingGroups, __VA_ARGS__)
#define ListPackagingGroupsCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::ListPackagingGroups, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MediaPackageVodClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MediaPackageVodClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MediaPackageVodClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::UntagResource, REQUEST)

#define UpdatePackagingGroupAsync(...)  SubmitAsync(&MediaPackageVodClient::UpdatePackagingGroup, __VA_ARGS__)
#define UpdatePackagingGroupCallable(REQUEST)  SubmitCallable(&MediaPackageVodClient::UpdatePackagingGroup, REQUEST)

