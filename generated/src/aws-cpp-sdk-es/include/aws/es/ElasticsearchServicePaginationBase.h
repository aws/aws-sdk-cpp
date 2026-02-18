/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/es/model/DescribeDomainAutoTunesPaginationTraits.h>
#include <aws/es/model/DescribeInboundCrossClusterSearchConnectionsPaginationTraits.h>
#include <aws/es/model/DescribeOutboundCrossClusterSearchConnectionsPaginationTraits.h>
#include <aws/es/model/DescribePackagesPaginationTraits.h>
#include <aws/es/model/DescribeReservedElasticsearchInstanceOfferingsPaginationTraits.h>
#include <aws/es/model/DescribeReservedElasticsearchInstancesPaginationTraits.h>
#include <aws/es/model/GetPackageVersionHistoryPaginationTraits.h>
#include <aws/es/model/GetUpgradeHistoryPaginationTraits.h>
#include <aws/es/model/ListDomainsForPackagePaginationTraits.h>
#include <aws/es/model/ListElasticsearchInstanceTypesPaginationTraits.h>
#include <aws/es/model/ListElasticsearchVersionsPaginationTraits.h>
#include <aws/es/model/ListPackagesForDomainPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ElasticsearchService {

class ElasticsearchServiceClient;

template <typename DerivedClient>
class ElasticsearchServicePaginationBase {
 public:
  /**
   * Create a paginator for DescribeDomainAutoTunes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDomainAutoTunesRequest,
                                    Pagination::DescribeDomainAutoTunesPaginationTraits<DerivedClient>>
  DescribeDomainAutoTunesPaginator(const Model::DescribeDomainAutoTunesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDomainAutoTunesRequest,
                                             Pagination::DescribeDomainAutoTunesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInboundCrossClusterSearchConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInboundCrossClusterSearchConnectionsRequest,
                                    Pagination::DescribeInboundCrossClusterSearchConnectionsPaginationTraits<DerivedClient>>
  DescribeInboundCrossClusterSearchConnectionsPaginator(const Model::DescribeInboundCrossClusterSearchConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInboundCrossClusterSearchConnectionsRequest,
                                             Pagination::DescribeInboundCrossClusterSearchConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOutboundCrossClusterSearchConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOutboundCrossClusterSearchConnectionsRequest,
                                    Pagination::DescribeOutboundCrossClusterSearchConnectionsPaginationTraits<DerivedClient>>
  DescribeOutboundCrossClusterSearchConnectionsPaginator(const Model::DescribeOutboundCrossClusterSearchConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOutboundCrossClusterSearchConnectionsRequest,
                                             Pagination::DescribeOutboundCrossClusterSearchConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePackagesRequest,
                                    Pagination::DescribePackagesPaginationTraits<DerivedClient>>
  DescribePackagesPaginator(const Model::DescribePackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePackagesRequest,
                                             Pagination::DescribePackagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeReservedElasticsearchInstanceOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedElasticsearchInstanceOfferingsRequest,
                                    Pagination::DescribeReservedElasticsearchInstanceOfferingsPaginationTraits<DerivedClient>>
  DescribeReservedElasticsearchInstanceOfferingsPaginator(const Model::DescribeReservedElasticsearchInstanceOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedElasticsearchInstanceOfferingsRequest,
                                             Pagination::DescribeReservedElasticsearchInstanceOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedElasticsearchInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedElasticsearchInstancesRequest,
                                    Pagination::DescribeReservedElasticsearchInstancesPaginationTraits<DerivedClient>>
  DescribeReservedElasticsearchInstancesPaginator(const Model::DescribeReservedElasticsearchInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedElasticsearchInstancesRequest,
                                             Pagination::DescribeReservedElasticsearchInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetPackageVersionHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPackageVersionHistoryRequest,
                                    Pagination::GetPackageVersionHistoryPaginationTraits<DerivedClient>>
  GetPackageVersionHistoryPaginator(const Model::GetPackageVersionHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPackageVersionHistoryRequest,
                                             Pagination::GetPackageVersionHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetUpgradeHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUpgradeHistoryRequest,
                                    Pagination::GetUpgradeHistoryPaginationTraits<DerivedClient>>
  GetUpgradeHistoryPaginator(const Model::GetUpgradeHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUpgradeHistoryRequest,
                                             Pagination::GetUpgradeHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomainsForPackage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsForPackageRequest,
                                    Pagination::ListDomainsForPackagePaginationTraits<DerivedClient>>
  ListDomainsForPackagePaginator(const Model::ListDomainsForPackageRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsForPackageRequest,
                                             Pagination::ListDomainsForPackagePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListElasticsearchInstanceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListElasticsearchInstanceTypesRequest,
                                    Pagination::ListElasticsearchInstanceTypesPaginationTraits<DerivedClient>>
  ListElasticsearchInstanceTypesPaginator(const Model::ListElasticsearchInstanceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListElasticsearchInstanceTypesRequest,
                                             Pagination::ListElasticsearchInstanceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListElasticsearchVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListElasticsearchVersionsRequest,
                                    Pagination::ListElasticsearchVersionsPaginationTraits<DerivedClient>>
  ListElasticsearchVersionsPaginator(const Model::ListElasticsearchVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListElasticsearchVersionsRequest,
                                             Pagination::ListElasticsearchVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPackagesForDomain operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesForDomainRequest,
                                    Pagination::ListPackagesForDomainPaginationTraits<DerivedClient>>
  ListPackagesForDomainPaginator(const Model::ListPackagesForDomainRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesForDomainRequest,
                                             Pagination::ListPackagesForDomainPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ElasticsearchService
}  // namespace Aws
