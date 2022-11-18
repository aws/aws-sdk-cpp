/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptInboundConnectionAsync(...)  SubmitAsync(&OpenSearchServiceClient::AcceptInboundConnection, __VA_ARGS__)
#define AcceptInboundConnectionCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::AcceptInboundConnection, REQUEST)

#define AddTagsAsync(...)  SubmitAsync(&OpenSearchServiceClient::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::AddTags, REQUEST)

#define AssociatePackageAsync(...)  SubmitAsync(&OpenSearchServiceClient::AssociatePackage, __VA_ARGS__)
#define AssociatePackageCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::AssociatePackage, REQUEST)

#define AuthorizeVpcEndpointAccessAsync(...)  SubmitAsync(&OpenSearchServiceClient::AuthorizeVpcEndpointAccess, __VA_ARGS__)
#define AuthorizeVpcEndpointAccessCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::AuthorizeVpcEndpointAccess, REQUEST)

#define CancelServiceSoftwareUpdateAsync(...)  SubmitAsync(&OpenSearchServiceClient::CancelServiceSoftwareUpdate, __VA_ARGS__)
#define CancelServiceSoftwareUpdateCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::CancelServiceSoftwareUpdate, REQUEST)

#define CreateDomainAsync(...)  SubmitAsync(&OpenSearchServiceClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::CreateDomain, REQUEST)

#define CreateOutboundConnectionAsync(...)  SubmitAsync(&OpenSearchServiceClient::CreateOutboundConnection, __VA_ARGS__)
#define CreateOutboundConnectionCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::CreateOutboundConnection, REQUEST)

#define CreatePackageAsync(...)  SubmitAsync(&OpenSearchServiceClient::CreatePackage, __VA_ARGS__)
#define CreatePackageCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::CreatePackage, REQUEST)

#define CreateVpcEndpointAsync(...)  SubmitAsync(&OpenSearchServiceClient::CreateVpcEndpoint, __VA_ARGS__)
#define CreateVpcEndpointCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::CreateVpcEndpoint, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&OpenSearchServiceClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DeleteDomain, REQUEST)

#define DeleteInboundConnectionAsync(...)  SubmitAsync(&OpenSearchServiceClient::DeleteInboundConnection, __VA_ARGS__)
#define DeleteInboundConnectionCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DeleteInboundConnection, REQUEST)

#define DeleteOutboundConnectionAsync(...)  SubmitAsync(&OpenSearchServiceClient::DeleteOutboundConnection, __VA_ARGS__)
#define DeleteOutboundConnectionCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DeleteOutboundConnection, REQUEST)

#define DeletePackageAsync(...)  SubmitAsync(&OpenSearchServiceClient::DeletePackage, __VA_ARGS__)
#define DeletePackageCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DeletePackage, REQUEST)

#define DeleteVpcEndpointAsync(...)  SubmitAsync(&OpenSearchServiceClient::DeleteVpcEndpoint, __VA_ARGS__)
#define DeleteVpcEndpointCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DeleteVpcEndpoint, REQUEST)

#define DescribeDomainAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeDomain, __VA_ARGS__)
#define DescribeDomainCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeDomain, REQUEST)

#define DescribeDomainAutoTunesAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeDomainAutoTunes, __VA_ARGS__)
#define DescribeDomainAutoTunesCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeDomainAutoTunes, REQUEST)

#define DescribeDomainChangeProgressAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeDomainChangeProgress, __VA_ARGS__)
#define DescribeDomainChangeProgressCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeDomainChangeProgress, REQUEST)

#define DescribeDomainConfigAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeDomainConfig, __VA_ARGS__)
#define DescribeDomainConfigCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeDomainConfig, REQUEST)

#define DescribeDomainsAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeDomains, __VA_ARGS__)
#define DescribeDomainsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeDomains, REQUEST)

#define DescribeInboundConnectionsAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeInboundConnections, __VA_ARGS__)
#define DescribeInboundConnectionsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeInboundConnections, REQUEST)

#define DescribeInstanceTypeLimitsAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeInstanceTypeLimits, __VA_ARGS__)
#define DescribeInstanceTypeLimitsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeInstanceTypeLimits, REQUEST)

#define DescribeOutboundConnectionsAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeOutboundConnections, __VA_ARGS__)
#define DescribeOutboundConnectionsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeOutboundConnections, REQUEST)

#define DescribePackagesAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribePackages, __VA_ARGS__)
#define DescribePackagesCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribePackages, REQUEST)

#define DescribeReservedInstanceOfferingsAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeReservedInstanceOfferings, __VA_ARGS__)
#define DescribeReservedInstanceOfferingsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeReservedInstanceOfferings, REQUEST)

#define DescribeReservedInstancesAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeReservedInstances, __VA_ARGS__)
#define DescribeReservedInstancesCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeReservedInstances, REQUEST)

#define DescribeVpcEndpointsAsync(...)  SubmitAsync(&OpenSearchServiceClient::DescribeVpcEndpoints, __VA_ARGS__)
#define DescribeVpcEndpointsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DescribeVpcEndpoints, REQUEST)

#define DissociatePackageAsync(...)  SubmitAsync(&OpenSearchServiceClient::DissociatePackage, __VA_ARGS__)
#define DissociatePackageCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::DissociatePackage, REQUEST)

#define GetCompatibleVersionsAsync(...)  SubmitAsync(&OpenSearchServiceClient::GetCompatibleVersions, __VA_ARGS__)
#define GetCompatibleVersionsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::GetCompatibleVersions, REQUEST)

#define GetPackageVersionHistoryAsync(...)  SubmitAsync(&OpenSearchServiceClient::GetPackageVersionHistory, __VA_ARGS__)
#define GetPackageVersionHistoryCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::GetPackageVersionHistory, REQUEST)

#define GetUpgradeHistoryAsync(...)  SubmitAsync(&OpenSearchServiceClient::GetUpgradeHistory, __VA_ARGS__)
#define GetUpgradeHistoryCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::GetUpgradeHistory, REQUEST)

#define GetUpgradeStatusAsync(...)  SubmitAsync(&OpenSearchServiceClient::GetUpgradeStatus, __VA_ARGS__)
#define GetUpgradeStatusCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::GetUpgradeStatus, REQUEST)

#define ListDomainNamesAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListDomainNames, __VA_ARGS__)
#define ListDomainNamesCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListDomainNames, REQUEST)

#define ListDomainsForPackageAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListDomainsForPackage, __VA_ARGS__)
#define ListDomainsForPackageCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListDomainsForPackage, REQUEST)

#define ListInstanceTypeDetailsAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListInstanceTypeDetails, __VA_ARGS__)
#define ListInstanceTypeDetailsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListInstanceTypeDetails, REQUEST)

#define ListPackagesForDomainAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListPackagesForDomain, __VA_ARGS__)
#define ListPackagesForDomainCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListPackagesForDomain, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListTags, REQUEST)

#define ListVersionsAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListVersions, __VA_ARGS__)
#define ListVersionsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListVersions, REQUEST)

#define ListVpcEndpointAccessAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListVpcEndpointAccess, __VA_ARGS__)
#define ListVpcEndpointAccessCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListVpcEndpointAccess, REQUEST)

#define ListVpcEndpointsAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListVpcEndpoints, __VA_ARGS__)
#define ListVpcEndpointsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListVpcEndpoints, REQUEST)

#define ListVpcEndpointsForDomainAsync(...)  SubmitAsync(&OpenSearchServiceClient::ListVpcEndpointsForDomain, __VA_ARGS__)
#define ListVpcEndpointsForDomainCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::ListVpcEndpointsForDomain, REQUEST)

#define PurchaseReservedInstanceOfferingAsync(...)  SubmitAsync(&OpenSearchServiceClient::PurchaseReservedInstanceOffering, __VA_ARGS__)
#define PurchaseReservedInstanceOfferingCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::PurchaseReservedInstanceOffering, REQUEST)

#define RejectInboundConnectionAsync(...)  SubmitAsync(&OpenSearchServiceClient::RejectInboundConnection, __VA_ARGS__)
#define RejectInboundConnectionCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::RejectInboundConnection, REQUEST)

#define RemoveTagsAsync(...)  SubmitAsync(&OpenSearchServiceClient::RemoveTags, __VA_ARGS__)
#define RemoveTagsCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::RemoveTags, REQUEST)

#define RevokeVpcEndpointAccessAsync(...)  SubmitAsync(&OpenSearchServiceClient::RevokeVpcEndpointAccess, __VA_ARGS__)
#define RevokeVpcEndpointAccessCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::RevokeVpcEndpointAccess, REQUEST)

#define StartServiceSoftwareUpdateAsync(...)  SubmitAsync(&OpenSearchServiceClient::StartServiceSoftwareUpdate, __VA_ARGS__)
#define StartServiceSoftwareUpdateCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::StartServiceSoftwareUpdate, REQUEST)

#define UpdateDomainConfigAsync(...)  SubmitAsync(&OpenSearchServiceClient::UpdateDomainConfig, __VA_ARGS__)
#define UpdateDomainConfigCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::UpdateDomainConfig, REQUEST)

#define UpdatePackageAsync(...)  SubmitAsync(&OpenSearchServiceClient::UpdatePackage, __VA_ARGS__)
#define UpdatePackageCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::UpdatePackage, REQUEST)

#define UpdateVpcEndpointAsync(...)  SubmitAsync(&OpenSearchServiceClient::UpdateVpcEndpoint, __VA_ARGS__)
#define UpdateVpcEndpointCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::UpdateVpcEndpoint, REQUEST)

#define UpgradeDomainAsync(...)  SubmitAsync(&OpenSearchServiceClient::UpgradeDomain, __VA_ARGS__)
#define UpgradeDomainCallable(REQUEST)  SubmitCallable(&OpenSearchServiceClient::UpgradeDomain, REQUEST)

