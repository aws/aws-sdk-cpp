/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateEncryptionConfigAsync(...)  SubmitAsync(&EKSClient::AssociateEncryptionConfig, __VA_ARGS__)
#define AssociateEncryptionConfigCallable(REQUEST)  SubmitCallable(&EKSClient::AssociateEncryptionConfig, REQUEST)

#define AssociateIdentityProviderConfigAsync(...)  SubmitAsync(&EKSClient::AssociateIdentityProviderConfig, __VA_ARGS__)
#define AssociateIdentityProviderConfigCallable(REQUEST)  SubmitCallable(&EKSClient::AssociateIdentityProviderConfig, REQUEST)

#define CreateAddonAsync(...)  SubmitAsync(&EKSClient::CreateAddon, __VA_ARGS__)
#define CreateAddonCallable(REQUEST)  SubmitCallable(&EKSClient::CreateAddon, REQUEST)

#define CreateClusterAsync(...)  SubmitAsync(&EKSClient::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&EKSClient::CreateCluster, REQUEST)

#define CreateFargateProfileAsync(...)  SubmitAsync(&EKSClient::CreateFargateProfile, __VA_ARGS__)
#define CreateFargateProfileCallable(REQUEST)  SubmitCallable(&EKSClient::CreateFargateProfile, REQUEST)

#define CreateNodegroupAsync(...)  SubmitAsync(&EKSClient::CreateNodegroup, __VA_ARGS__)
#define CreateNodegroupCallable(REQUEST)  SubmitCallable(&EKSClient::CreateNodegroup, REQUEST)

#define DeleteAddonAsync(...)  SubmitAsync(&EKSClient::DeleteAddon, __VA_ARGS__)
#define DeleteAddonCallable(REQUEST)  SubmitCallable(&EKSClient::DeleteAddon, REQUEST)

#define DeleteClusterAsync(...)  SubmitAsync(&EKSClient::DeleteCluster, __VA_ARGS__)
#define DeleteClusterCallable(REQUEST)  SubmitCallable(&EKSClient::DeleteCluster, REQUEST)

#define DeleteFargateProfileAsync(...)  SubmitAsync(&EKSClient::DeleteFargateProfile, __VA_ARGS__)
#define DeleteFargateProfileCallable(REQUEST)  SubmitCallable(&EKSClient::DeleteFargateProfile, REQUEST)

#define DeleteNodegroupAsync(...)  SubmitAsync(&EKSClient::DeleteNodegroup, __VA_ARGS__)
#define DeleteNodegroupCallable(REQUEST)  SubmitCallable(&EKSClient::DeleteNodegroup, REQUEST)

#define DeregisterClusterAsync(...)  SubmitAsync(&EKSClient::DeregisterCluster, __VA_ARGS__)
#define DeregisterClusterCallable(REQUEST)  SubmitCallable(&EKSClient::DeregisterCluster, REQUEST)

#define DescribeAddonAsync(...)  SubmitAsync(&EKSClient::DescribeAddon, __VA_ARGS__)
#define DescribeAddonCallable(REQUEST)  SubmitCallable(&EKSClient::DescribeAddon, REQUEST)

#define DescribeAddonVersionsAsync(...)  SubmitAsync(&EKSClient::DescribeAddonVersions, __VA_ARGS__)
#define DescribeAddonVersionsCallable(REQUEST)  SubmitCallable(&EKSClient::DescribeAddonVersions, REQUEST)

#define DescribeClusterAsync(...)  SubmitAsync(&EKSClient::DescribeCluster, __VA_ARGS__)
#define DescribeClusterCallable(REQUEST)  SubmitCallable(&EKSClient::DescribeCluster, REQUEST)

#define DescribeFargateProfileAsync(...)  SubmitAsync(&EKSClient::DescribeFargateProfile, __VA_ARGS__)
#define DescribeFargateProfileCallable(REQUEST)  SubmitCallable(&EKSClient::DescribeFargateProfile, REQUEST)

#define DescribeIdentityProviderConfigAsync(...)  SubmitAsync(&EKSClient::DescribeIdentityProviderConfig, __VA_ARGS__)
#define DescribeIdentityProviderConfigCallable(REQUEST)  SubmitCallable(&EKSClient::DescribeIdentityProviderConfig, REQUEST)

#define DescribeNodegroupAsync(...)  SubmitAsync(&EKSClient::DescribeNodegroup, __VA_ARGS__)
#define DescribeNodegroupCallable(REQUEST)  SubmitCallable(&EKSClient::DescribeNodegroup, REQUEST)

#define DescribeUpdateAsync(...)  SubmitAsync(&EKSClient::DescribeUpdate, __VA_ARGS__)
#define DescribeUpdateCallable(REQUEST)  SubmitCallable(&EKSClient::DescribeUpdate, REQUEST)

#define DisassociateIdentityProviderConfigAsync(...)  SubmitAsync(&EKSClient::DisassociateIdentityProviderConfig, __VA_ARGS__)
#define DisassociateIdentityProviderConfigCallable(REQUEST)  SubmitCallable(&EKSClient::DisassociateIdentityProviderConfig, REQUEST)

#define ListAddonsAsync(...)  SubmitAsync(&EKSClient::ListAddons, __VA_ARGS__)
#define ListAddonsCallable(REQUEST)  SubmitCallable(&EKSClient::ListAddons, REQUEST)

#define ListClustersAsync(...)  SubmitAsync(&EKSClient::ListClusters, __VA_ARGS__)
#define ListClustersCallable(REQUEST)  SubmitCallable(&EKSClient::ListClusters, REQUEST)

#define ListFargateProfilesAsync(...)  SubmitAsync(&EKSClient::ListFargateProfiles, __VA_ARGS__)
#define ListFargateProfilesCallable(REQUEST)  SubmitCallable(&EKSClient::ListFargateProfiles, REQUEST)

#define ListIdentityProviderConfigsAsync(...)  SubmitAsync(&EKSClient::ListIdentityProviderConfigs, __VA_ARGS__)
#define ListIdentityProviderConfigsCallable(REQUEST)  SubmitCallable(&EKSClient::ListIdentityProviderConfigs, REQUEST)

#define ListNodegroupsAsync(...)  SubmitAsync(&EKSClient::ListNodegroups, __VA_ARGS__)
#define ListNodegroupsCallable(REQUEST)  SubmitCallable(&EKSClient::ListNodegroups, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&EKSClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&EKSClient::ListTagsForResource, REQUEST)

#define ListUpdatesAsync(...)  SubmitAsync(&EKSClient::ListUpdates, __VA_ARGS__)
#define ListUpdatesCallable(REQUEST)  SubmitCallable(&EKSClient::ListUpdates, REQUEST)

#define RegisterClusterAsync(...)  SubmitAsync(&EKSClient::RegisterCluster, __VA_ARGS__)
#define RegisterClusterCallable(REQUEST)  SubmitCallable(&EKSClient::RegisterCluster, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&EKSClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&EKSClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&EKSClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&EKSClient::UntagResource, REQUEST)

#define UpdateAddonAsync(...)  SubmitAsync(&EKSClient::UpdateAddon, __VA_ARGS__)
#define UpdateAddonCallable(REQUEST)  SubmitCallable(&EKSClient::UpdateAddon, REQUEST)

#define UpdateClusterConfigAsync(...)  SubmitAsync(&EKSClient::UpdateClusterConfig, __VA_ARGS__)
#define UpdateClusterConfigCallable(REQUEST)  SubmitCallable(&EKSClient::UpdateClusterConfig, REQUEST)

#define UpdateClusterVersionAsync(...)  SubmitAsync(&EKSClient::UpdateClusterVersion, __VA_ARGS__)
#define UpdateClusterVersionCallable(REQUEST)  SubmitCallable(&EKSClient::UpdateClusterVersion, REQUEST)

#define UpdateNodegroupConfigAsync(...)  SubmitAsync(&EKSClient::UpdateNodegroupConfig, __VA_ARGS__)
#define UpdateNodegroupConfigCallable(REQUEST)  SubmitCallable(&EKSClient::UpdateNodegroupConfig, REQUEST)

#define UpdateNodegroupVersionAsync(...)  SubmitAsync(&EKSClient::UpdateNodegroupVersion, __VA_ARGS__)
#define UpdateNodegroupVersionCallable(REQUEST)  SubmitCallable(&EKSClient::UpdateNodegroupVersion, REQUEST)

