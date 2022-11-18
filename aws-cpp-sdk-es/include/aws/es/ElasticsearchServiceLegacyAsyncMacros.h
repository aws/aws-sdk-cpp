/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptInboundCrossClusterSearchConnectionAsync(...)  SubmitAsync(&ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnection, __VA_ARGS__)
#define AcceptInboundCrossClusterSearchConnectionCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnection, REQUEST)

#define AddTagsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::AddTags, REQUEST)

#define AssociatePackageAsync(...)  SubmitAsync(&ElasticsearchServiceClient::AssociatePackage, __VA_ARGS__)
#define AssociatePackageCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::AssociatePackage, REQUEST)

#define AuthorizeVpcEndpointAccessAsync(...)  SubmitAsync(&ElasticsearchServiceClient::AuthorizeVpcEndpointAccess, __VA_ARGS__)
#define AuthorizeVpcEndpointAccessCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::AuthorizeVpcEndpointAccess, REQUEST)

#define CancelElasticsearchServiceSoftwareUpdateAsync(...)  SubmitAsync(&ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate, __VA_ARGS__)
#define CancelElasticsearchServiceSoftwareUpdateCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate, REQUEST)

#define CreateElasticsearchDomainAsync(...)  SubmitAsync(&ElasticsearchServiceClient::CreateElasticsearchDomain, __VA_ARGS__)
#define CreateElasticsearchDomainCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::CreateElasticsearchDomain, REQUEST)

#define CreateOutboundCrossClusterSearchConnectionAsync(...)  SubmitAsync(&ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnection, __VA_ARGS__)
#define CreateOutboundCrossClusterSearchConnectionCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnection, REQUEST)

#define CreatePackageAsync(...)  SubmitAsync(&ElasticsearchServiceClient::CreatePackage, __VA_ARGS__)
#define CreatePackageCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::CreatePackage, REQUEST)

#define CreateVpcEndpointAsync(...)  SubmitAsync(&ElasticsearchServiceClient::CreateVpcEndpoint, __VA_ARGS__)
#define CreateVpcEndpointCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::CreateVpcEndpoint, REQUEST)

#define DeleteElasticsearchDomainAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DeleteElasticsearchDomain, __VA_ARGS__)
#define DeleteElasticsearchDomainCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DeleteElasticsearchDomain, REQUEST)


#define DeleteInboundCrossClusterSearchConnectionAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnection, __VA_ARGS__)
#define DeleteInboundCrossClusterSearchConnectionCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnection, REQUEST)

#define DeleteOutboundCrossClusterSearchConnectionAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnection, __VA_ARGS__)
#define DeleteOutboundCrossClusterSearchConnectionCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnection, REQUEST)

#define DeletePackageAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DeletePackage, __VA_ARGS__)
#define DeletePackageCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DeletePackage, REQUEST)

#define DeleteVpcEndpointAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DeleteVpcEndpoint, __VA_ARGS__)
#define DeleteVpcEndpointCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DeleteVpcEndpoint, REQUEST)

#define DescribeDomainAutoTunesAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeDomainAutoTunes, __VA_ARGS__)
#define DescribeDomainAutoTunesCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeDomainAutoTunes, REQUEST)

#define DescribeDomainChangeProgressAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeDomainChangeProgress, __VA_ARGS__)
#define DescribeDomainChangeProgressCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeDomainChangeProgress, REQUEST)

#define DescribeElasticsearchDomainAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeElasticsearchDomain, __VA_ARGS__)
#define DescribeElasticsearchDomainCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeElasticsearchDomain, REQUEST)

#define DescribeElasticsearchDomainConfigAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeElasticsearchDomainConfig, __VA_ARGS__)
#define DescribeElasticsearchDomainConfigCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeElasticsearchDomainConfig, REQUEST)

#define DescribeElasticsearchDomainsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeElasticsearchDomains, __VA_ARGS__)
#define DescribeElasticsearchDomainsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeElasticsearchDomains, REQUEST)

#define DescribeElasticsearchInstanceTypeLimitsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimits, __VA_ARGS__)
#define DescribeElasticsearchInstanceTypeLimitsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimits, REQUEST)

#define DescribeInboundCrossClusterSearchConnectionsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnections, __VA_ARGS__)
#define DescribeInboundCrossClusterSearchConnectionsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnections, REQUEST)

#define DescribeOutboundCrossClusterSearchConnectionsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnections, __VA_ARGS__)
#define DescribeOutboundCrossClusterSearchConnectionsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnections, REQUEST)

#define DescribePackagesAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribePackages, __VA_ARGS__)
#define DescribePackagesCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribePackages, REQUEST)

#define DescribeReservedElasticsearchInstanceOfferingsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings, __VA_ARGS__)
#define DescribeReservedElasticsearchInstanceOfferingsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings, REQUEST)

#define DescribeReservedElasticsearchInstancesAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeReservedElasticsearchInstances, __VA_ARGS__)
#define DescribeReservedElasticsearchInstancesCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeReservedElasticsearchInstances, REQUEST)

#define DescribeVpcEndpointsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DescribeVpcEndpoints, __VA_ARGS__)
#define DescribeVpcEndpointsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DescribeVpcEndpoints, REQUEST)

#define DissociatePackageAsync(...)  SubmitAsync(&ElasticsearchServiceClient::DissociatePackage, __VA_ARGS__)
#define DissociatePackageCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::DissociatePackage, REQUEST)

#define GetCompatibleElasticsearchVersionsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::GetCompatibleElasticsearchVersions, __VA_ARGS__)
#define GetCompatibleElasticsearchVersionsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::GetCompatibleElasticsearchVersions, REQUEST)

#define GetPackageVersionHistoryAsync(...)  SubmitAsync(&ElasticsearchServiceClient::GetPackageVersionHistory, __VA_ARGS__)
#define GetPackageVersionHistoryCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::GetPackageVersionHistory, REQUEST)

#define GetUpgradeHistoryAsync(...)  SubmitAsync(&ElasticsearchServiceClient::GetUpgradeHistory, __VA_ARGS__)
#define GetUpgradeHistoryCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::GetUpgradeHistory, REQUEST)

#define GetUpgradeStatusAsync(...)  SubmitAsync(&ElasticsearchServiceClient::GetUpgradeStatus, __VA_ARGS__)
#define GetUpgradeStatusCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::GetUpgradeStatus, REQUEST)

#define ListDomainNamesAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListDomainNames, __VA_ARGS__)
#define ListDomainNamesCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListDomainNames, REQUEST)

#define ListDomainsForPackageAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListDomainsForPackage, __VA_ARGS__)
#define ListDomainsForPackageCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListDomainsForPackage, REQUEST)

#define ListElasticsearchInstanceTypesAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListElasticsearchInstanceTypes, __VA_ARGS__)
#define ListElasticsearchInstanceTypesCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListElasticsearchInstanceTypes, REQUEST)

#define ListElasticsearchVersionsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListElasticsearchVersions, __VA_ARGS__)
#define ListElasticsearchVersionsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListElasticsearchVersions, REQUEST)

#define ListPackagesForDomainAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListPackagesForDomain, __VA_ARGS__)
#define ListPackagesForDomainCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListPackagesForDomain, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListTags, REQUEST)

#define ListVpcEndpointAccessAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListVpcEndpointAccess, __VA_ARGS__)
#define ListVpcEndpointAccessCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListVpcEndpointAccess, REQUEST)

#define ListVpcEndpointsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListVpcEndpoints, __VA_ARGS__)
#define ListVpcEndpointsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListVpcEndpoints, REQUEST)

#define ListVpcEndpointsForDomainAsync(...)  SubmitAsync(&ElasticsearchServiceClient::ListVpcEndpointsForDomain, __VA_ARGS__)
#define ListVpcEndpointsForDomainCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::ListVpcEndpointsForDomain, REQUEST)

#define PurchaseReservedElasticsearchInstanceOfferingAsync(...)  SubmitAsync(&ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering, __VA_ARGS__)
#define PurchaseReservedElasticsearchInstanceOfferingCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering, REQUEST)

#define RejectInboundCrossClusterSearchConnectionAsync(...)  SubmitAsync(&ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnection, __VA_ARGS__)
#define RejectInboundCrossClusterSearchConnectionCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnection, REQUEST)

#define RemoveTagsAsync(...)  SubmitAsync(&ElasticsearchServiceClient::RemoveTags, __VA_ARGS__)
#define RemoveTagsCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::RemoveTags, REQUEST)

#define RevokeVpcEndpointAccessAsync(...)  SubmitAsync(&ElasticsearchServiceClient::RevokeVpcEndpointAccess, __VA_ARGS__)
#define RevokeVpcEndpointAccessCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::RevokeVpcEndpointAccess, REQUEST)

#define StartElasticsearchServiceSoftwareUpdateAsync(...)  SubmitAsync(&ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate, __VA_ARGS__)
#define StartElasticsearchServiceSoftwareUpdateCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate, REQUEST)

#define UpdateElasticsearchDomainConfigAsync(...)  SubmitAsync(&ElasticsearchServiceClient::UpdateElasticsearchDomainConfig, __VA_ARGS__)
#define UpdateElasticsearchDomainConfigCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::UpdateElasticsearchDomainConfig, REQUEST)

#define UpdatePackageAsync(...)  SubmitAsync(&ElasticsearchServiceClient::UpdatePackage, __VA_ARGS__)
#define UpdatePackageCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::UpdatePackage, REQUEST)

#define UpdateVpcEndpointAsync(...)  SubmitAsync(&ElasticsearchServiceClient::UpdateVpcEndpoint, __VA_ARGS__)
#define UpdateVpcEndpointCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::UpdateVpcEndpoint, REQUEST)

#define UpgradeElasticsearchDomainAsync(...)  SubmitAsync(&ElasticsearchServiceClient::UpgradeElasticsearchDomain, __VA_ARGS__)
#define UpgradeElasticsearchDomainCallable(REQUEST)  SubmitCallable(&ElasticsearchServiceClient::UpgradeElasticsearchDomain, REQUEST)

