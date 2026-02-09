/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/es/ElasticsearchServiceClient.h>
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

namespace Aws {
namespace ElasticsearchService {

using DescribeDomainAutoTunesPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::DescribeDomainAutoTunesRequest,
                                      Pagination::DescribeDomainAutoTunesPaginationTraits<ElasticsearchServiceClient>>;
using DescribeInboundCrossClusterSearchConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::DescribeInboundCrossClusterSearchConnectionsRequest,
                                      Pagination::DescribeInboundCrossClusterSearchConnectionsPaginationTraits<ElasticsearchServiceClient>>;
using DescribeOutboundCrossClusterSearchConnectionsPaginator = Aws::Utils::Pagination::Paginator<
    ElasticsearchServiceClient, Model::DescribeOutboundCrossClusterSearchConnectionsRequest,
    Pagination::DescribeOutboundCrossClusterSearchConnectionsPaginationTraits<ElasticsearchServiceClient>>;
using DescribePackagesPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::DescribePackagesRequest,
                                      Pagination::DescribePackagesPaginationTraits<ElasticsearchServiceClient>>;
using DescribeReservedElasticsearchInstanceOfferingsPaginator = Aws::Utils::Pagination::Paginator<
    ElasticsearchServiceClient, Model::DescribeReservedElasticsearchInstanceOfferingsRequest,
    Pagination::DescribeReservedElasticsearchInstanceOfferingsPaginationTraits<ElasticsearchServiceClient>>;
using DescribeReservedElasticsearchInstancesPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::DescribeReservedElasticsearchInstancesRequest,
                                      Pagination::DescribeReservedElasticsearchInstancesPaginationTraits<ElasticsearchServiceClient>>;
using GetPackageVersionHistoryPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::GetPackageVersionHistoryRequest,
                                      Pagination::GetPackageVersionHistoryPaginationTraits<ElasticsearchServiceClient>>;
using GetUpgradeHistoryPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::GetUpgradeHistoryRequest,
                                      Pagination::GetUpgradeHistoryPaginationTraits<ElasticsearchServiceClient>>;
using ListDomainsForPackagePaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::ListDomainsForPackageRequest,
                                      Pagination::ListDomainsForPackagePaginationTraits<ElasticsearchServiceClient>>;
using ListElasticsearchInstanceTypesPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::ListElasticsearchInstanceTypesRequest,
                                      Pagination::ListElasticsearchInstanceTypesPaginationTraits<ElasticsearchServiceClient>>;
using ListElasticsearchVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::ListElasticsearchVersionsRequest,
                                      Pagination::ListElasticsearchVersionsPaginationTraits<ElasticsearchServiceClient>>;
using ListPackagesForDomainPaginator =
    Aws::Utils::Pagination::Paginator<ElasticsearchServiceClient, Model::ListPackagesForDomainRequest,
                                      Pagination::ListPackagesForDomainPaginationTraits<ElasticsearchServiceClient>>;

}  // namespace ElasticsearchService
}  // namespace Aws
