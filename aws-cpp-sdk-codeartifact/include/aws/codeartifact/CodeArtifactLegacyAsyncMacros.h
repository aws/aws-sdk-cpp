/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateExternalConnectionAsync(...)  SubmitAsync(&CodeArtifactClient::AssociateExternalConnection, __VA_ARGS__)
#define AssociateExternalConnectionCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::AssociateExternalConnection, REQUEST)

#define CopyPackageVersionsAsync(...)  SubmitAsync(&CodeArtifactClient::CopyPackageVersions, __VA_ARGS__)
#define CopyPackageVersionsCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::CopyPackageVersions, REQUEST)

#define CreateDomainAsync(...)  SubmitAsync(&CodeArtifactClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::CreateDomain, REQUEST)

#define CreateRepositoryAsync(...)  SubmitAsync(&CodeArtifactClient::CreateRepository, __VA_ARGS__)
#define CreateRepositoryCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::CreateRepository, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&CodeArtifactClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DeleteDomain, REQUEST)

#define DeleteDomainPermissionsPolicyAsync(...)  SubmitAsync(&CodeArtifactClient::DeleteDomainPermissionsPolicy, __VA_ARGS__)
#define DeleteDomainPermissionsPolicyCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DeleteDomainPermissionsPolicy, REQUEST)

#define DeletePackageVersionsAsync(...)  SubmitAsync(&CodeArtifactClient::DeletePackageVersions, __VA_ARGS__)
#define DeletePackageVersionsCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DeletePackageVersions, REQUEST)

#define DeleteRepositoryAsync(...)  SubmitAsync(&CodeArtifactClient::DeleteRepository, __VA_ARGS__)
#define DeleteRepositoryCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DeleteRepository, REQUEST)

#define DeleteRepositoryPermissionsPolicyAsync(...)  SubmitAsync(&CodeArtifactClient::DeleteRepositoryPermissionsPolicy, __VA_ARGS__)
#define DeleteRepositoryPermissionsPolicyCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DeleteRepositoryPermissionsPolicy, REQUEST)

#define DescribeDomainAsync(...)  SubmitAsync(&CodeArtifactClient::DescribeDomain, __VA_ARGS__)
#define DescribeDomainCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DescribeDomain, REQUEST)

#define DescribePackageAsync(...)  SubmitAsync(&CodeArtifactClient::DescribePackage, __VA_ARGS__)
#define DescribePackageCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DescribePackage, REQUEST)

#define DescribePackageVersionAsync(...)  SubmitAsync(&CodeArtifactClient::DescribePackageVersion, __VA_ARGS__)
#define DescribePackageVersionCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DescribePackageVersion, REQUEST)

#define DescribeRepositoryAsync(...)  SubmitAsync(&CodeArtifactClient::DescribeRepository, __VA_ARGS__)
#define DescribeRepositoryCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DescribeRepository, REQUEST)

#define DisassociateExternalConnectionAsync(...)  SubmitAsync(&CodeArtifactClient::DisassociateExternalConnection, __VA_ARGS__)
#define DisassociateExternalConnectionCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DisassociateExternalConnection, REQUEST)

#define DisposePackageVersionsAsync(...)  SubmitAsync(&CodeArtifactClient::DisposePackageVersions, __VA_ARGS__)
#define DisposePackageVersionsCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::DisposePackageVersions, REQUEST)

#define GetAuthorizationTokenAsync(...)  SubmitAsync(&CodeArtifactClient::GetAuthorizationToken, __VA_ARGS__)
#define GetAuthorizationTokenCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::GetAuthorizationToken, REQUEST)

#define GetDomainPermissionsPolicyAsync(...)  SubmitAsync(&CodeArtifactClient::GetDomainPermissionsPolicy, __VA_ARGS__)
#define GetDomainPermissionsPolicyCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::GetDomainPermissionsPolicy, REQUEST)

#define GetPackageVersionAssetAsync(...)  SubmitAsync(&CodeArtifactClient::GetPackageVersionAsset, __VA_ARGS__)
#define GetPackageVersionAssetCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::GetPackageVersionAsset, REQUEST)

#define GetPackageVersionReadmeAsync(...)  SubmitAsync(&CodeArtifactClient::GetPackageVersionReadme, __VA_ARGS__)
#define GetPackageVersionReadmeCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::GetPackageVersionReadme, REQUEST)

#define GetRepositoryEndpointAsync(...)  SubmitAsync(&CodeArtifactClient::GetRepositoryEndpoint, __VA_ARGS__)
#define GetRepositoryEndpointCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::GetRepositoryEndpoint, REQUEST)

#define GetRepositoryPermissionsPolicyAsync(...)  SubmitAsync(&CodeArtifactClient::GetRepositoryPermissionsPolicy, __VA_ARGS__)
#define GetRepositoryPermissionsPolicyCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::GetRepositoryPermissionsPolicy, REQUEST)

#define ListDomainsAsync(...)  SubmitAsync(&CodeArtifactClient::ListDomains, __VA_ARGS__)
#define ListDomainsCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::ListDomains, REQUEST)

#define ListPackageVersionAssetsAsync(...)  SubmitAsync(&CodeArtifactClient::ListPackageVersionAssets, __VA_ARGS__)
#define ListPackageVersionAssetsCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::ListPackageVersionAssets, REQUEST)

#define ListPackageVersionDependenciesAsync(...)  SubmitAsync(&CodeArtifactClient::ListPackageVersionDependencies, __VA_ARGS__)
#define ListPackageVersionDependenciesCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::ListPackageVersionDependencies, REQUEST)

#define ListPackageVersionsAsync(...)  SubmitAsync(&CodeArtifactClient::ListPackageVersions, __VA_ARGS__)
#define ListPackageVersionsCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::ListPackageVersions, REQUEST)

#define ListPackagesAsync(...)  SubmitAsync(&CodeArtifactClient::ListPackages, __VA_ARGS__)
#define ListPackagesCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::ListPackages, REQUEST)

#define ListRepositoriesAsync(...)  SubmitAsync(&CodeArtifactClient::ListRepositories, __VA_ARGS__)
#define ListRepositoriesCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::ListRepositories, REQUEST)

#define ListRepositoriesInDomainAsync(...)  SubmitAsync(&CodeArtifactClient::ListRepositoriesInDomain, __VA_ARGS__)
#define ListRepositoriesInDomainCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::ListRepositoriesInDomain, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CodeArtifactClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::ListTagsForResource, REQUEST)

#define PutDomainPermissionsPolicyAsync(...)  SubmitAsync(&CodeArtifactClient::PutDomainPermissionsPolicy, __VA_ARGS__)
#define PutDomainPermissionsPolicyCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::PutDomainPermissionsPolicy, REQUEST)

#define PutPackageOriginConfigurationAsync(...)  SubmitAsync(&CodeArtifactClient::PutPackageOriginConfiguration, __VA_ARGS__)
#define PutPackageOriginConfigurationCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::PutPackageOriginConfiguration, REQUEST)

#define PutRepositoryPermissionsPolicyAsync(...)  SubmitAsync(&CodeArtifactClient::PutRepositoryPermissionsPolicy, __VA_ARGS__)
#define PutRepositoryPermissionsPolicyCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::PutRepositoryPermissionsPolicy, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CodeArtifactClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CodeArtifactClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::UntagResource, REQUEST)

#define UpdatePackageVersionsStatusAsync(...)  SubmitAsync(&CodeArtifactClient::UpdatePackageVersionsStatus, __VA_ARGS__)
#define UpdatePackageVersionsStatusCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::UpdatePackageVersionsStatus, REQUEST)

#define UpdateRepositoryAsync(...)  SubmitAsync(&CodeArtifactClient::UpdateRepository, __VA_ARGS__)
#define UpdateRepositoryCallable(REQUEST)  SubmitCallable(&CodeArtifactClient::UpdateRepository, REQUEST)

