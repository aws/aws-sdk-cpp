/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentitiesPaginationTraits.h>
#include <aws/cloudfront/model/ListConnectionFunctionsPaginationTraits.h>
#include <aws/cloudfront/model/ListConnectionGroupsPaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionTenantsByCustomizationPaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionTenantsPaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionsByConnectionFunctionPaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionsByConnectionModePaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionsByTrustStorePaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionsPaginationTraits.h>
#include <aws/cloudfront/model/ListDomainConflictsPaginationTraits.h>
#include <aws/cloudfront/model/ListInvalidationsForDistributionTenantPaginationTraits.h>
#include <aws/cloudfront/model/ListInvalidationsPaginationTraits.h>
#include <aws/cloudfront/model/ListKeyValueStoresPaginationTraits.h>
#include <aws/cloudfront/model/ListOriginAccessControlsPaginationTraits.h>
#include <aws/cloudfront/model/ListPublicKeysPaginationTraits.h>
#include <aws/cloudfront/model/ListStreamingDistributionsPaginationTraits.h>
#include <aws/cloudfront/model/ListTrustStoresPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CloudFront {

using ListCloudFrontOriginAccessIdentitiesPaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListCloudFrontOriginAccessIdentities2020_05_31Request,
                                      Pagination::ListCloudFrontOriginAccessIdentitiesPaginationTraits<CloudFrontClient>>;
using ListConnectionFunctionsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListConnectionFunctions2020_05_31Request,
                                      Pagination::ListConnectionFunctionsPaginationTraits<CloudFrontClient>>;
using ListConnectionGroupsPaginator = Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListConnectionGroups2020_05_31Request,
                                                                        Pagination::ListConnectionGroupsPaginationTraits<CloudFrontClient>>;
using ListDistributionsPaginator = Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListDistributions2020_05_31Request,
                                                                     Pagination::ListDistributionsPaginationTraits<CloudFrontClient>>;
using ListDistributionsByConnectionFunctionPaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListDistributionsByConnectionFunction2020_05_31Request,
                                      Pagination::ListDistributionsByConnectionFunctionPaginationTraits<CloudFrontClient>>;
using ListDistributionsByConnectionModePaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListDistributionsByConnectionMode2020_05_31Request,
                                      Pagination::ListDistributionsByConnectionModePaginationTraits<CloudFrontClient>>;
using ListDistributionsByTrustStorePaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListDistributionsByTrustStore2020_05_31Request,
                                      Pagination::ListDistributionsByTrustStorePaginationTraits<CloudFrontClient>>;
using ListDistributionTenantsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListDistributionTenants2020_05_31Request,
                                      Pagination::ListDistributionTenantsPaginationTraits<CloudFrontClient>>;
using ListDistributionTenantsByCustomizationPaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListDistributionTenantsByCustomization2020_05_31Request,
                                      Pagination::ListDistributionTenantsByCustomizationPaginationTraits<CloudFrontClient>>;
using ListDomainConflictsPaginator = Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListDomainConflicts2020_05_31Request,
                                                                       Pagination::ListDomainConflictsPaginationTraits<CloudFrontClient>>;
using ListInvalidationsPaginator = Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListInvalidations2020_05_31Request,
                                                                     Pagination::ListInvalidationsPaginationTraits<CloudFrontClient>>;
using ListInvalidationsForDistributionTenantPaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListInvalidationsForDistributionTenant2020_05_31Request,
                                      Pagination::ListInvalidationsForDistributionTenantPaginationTraits<CloudFrontClient>>;
using ListKeyValueStoresPaginator = Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListKeyValueStores2020_05_31Request,
                                                                      Pagination::ListKeyValueStoresPaginationTraits<CloudFrontClient>>;
using ListOriginAccessControlsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListOriginAccessControls2020_05_31Request,
                                      Pagination::ListOriginAccessControlsPaginationTraits<CloudFrontClient>>;
using ListPublicKeysPaginator = Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListPublicKeys2020_05_31Request,
                                                                  Pagination::ListPublicKeysPaginationTraits<CloudFrontClient>>;
using ListStreamingDistributionsPaginator =
    Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListStreamingDistributions2020_05_31Request,
                                      Pagination::ListStreamingDistributionsPaginationTraits<CloudFrontClient>>;
using ListTrustStoresPaginator = Aws::Utils::Pagination::Paginator<CloudFrontClient, Model::ListTrustStores2020_05_31Request,
                                                                   Pagination::ListTrustStoresPaginationTraits<CloudFrontClient>>;

}  // namespace CloudFront
}  // namespace Aws
