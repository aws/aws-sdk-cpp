/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace CloudFront {

class CloudFrontClient;

template <typename DerivedClient>
class CloudFrontPaginationBase {
 public:
  /**
   * Create a paginator for ListCloudFrontOriginAccessIdentities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudFrontOriginAccessIdentities2020_05_31Request,
                                    Pagination::ListCloudFrontOriginAccessIdentitiesPaginationTraits<DerivedClient>>
  ListCloudFrontOriginAccessIdentitiesPaginator(const Model::ListCloudFrontOriginAccessIdentities2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudFrontOriginAccessIdentities2020_05_31Request,
                                             Pagination::ListCloudFrontOriginAccessIdentitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnectionFunctions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionFunctions2020_05_31Request,
                                    Pagination::ListConnectionFunctionsPaginationTraits<DerivedClient>>
  ListConnectionFunctionsPaginator(const Model::ListConnectionFunctions2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionFunctions2020_05_31Request,
                                             Pagination::ListConnectionFunctionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnectionGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionGroups2020_05_31Request,
                                    Pagination::ListConnectionGroupsPaginationTraits<DerivedClient>>
  ListConnectionGroupsPaginator(const Model::ListConnectionGroups2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionGroups2020_05_31Request,
                                             Pagination::ListConnectionGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDistributions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributions2020_05_31Request,
                                    Pagination::ListDistributionsPaginationTraits<DerivedClient>>
  ListDistributionsPaginator(const Model::ListDistributions2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributions2020_05_31Request,
                                             Pagination::ListDistributionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDistributionsByConnectionFunction operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionsByConnectionFunction2020_05_31Request,
                                    Pagination::ListDistributionsByConnectionFunctionPaginationTraits<DerivedClient>>
  ListDistributionsByConnectionFunctionPaginator(const Model::ListDistributionsByConnectionFunction2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionsByConnectionFunction2020_05_31Request,
                                             Pagination::ListDistributionsByConnectionFunctionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDistributionsByConnectionMode operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionsByConnectionMode2020_05_31Request,
                                    Pagination::ListDistributionsByConnectionModePaginationTraits<DerivedClient>>
  ListDistributionsByConnectionModePaginator(const Model::ListDistributionsByConnectionMode2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionsByConnectionMode2020_05_31Request,
                                             Pagination::ListDistributionsByConnectionModePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDistributionsByTrustStore operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionsByTrustStore2020_05_31Request,
                                    Pagination::ListDistributionsByTrustStorePaginationTraits<DerivedClient>>
  ListDistributionsByTrustStorePaginator(const Model::ListDistributionsByTrustStore2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionsByTrustStore2020_05_31Request,
                                             Pagination::ListDistributionsByTrustStorePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDistributionTenants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionTenants2020_05_31Request,
                                    Pagination::ListDistributionTenantsPaginationTraits<DerivedClient>>
  ListDistributionTenantsPaginator(const Model::ListDistributionTenants2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionTenants2020_05_31Request,
                                             Pagination::ListDistributionTenantsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDistributionTenantsByCustomization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionTenantsByCustomization2020_05_31Request,
                                    Pagination::ListDistributionTenantsByCustomizationPaginationTraits<DerivedClient>>
  ListDistributionTenantsByCustomizationPaginator(const Model::ListDistributionTenantsByCustomization2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionTenantsByCustomization2020_05_31Request,
                                             Pagination::ListDistributionTenantsByCustomizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomainConflicts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainConflicts2020_05_31Request,
                                    Pagination::ListDomainConflictsPaginationTraits<DerivedClient>>
  ListDomainConflictsPaginator(const Model::ListDomainConflicts2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainConflicts2020_05_31Request,
                                             Pagination::ListDomainConflictsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInvalidations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvalidations2020_05_31Request,
                                    Pagination::ListInvalidationsPaginationTraits<DerivedClient>>
  ListInvalidationsPaginator(const Model::ListInvalidations2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvalidations2020_05_31Request,
                                             Pagination::ListInvalidationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInvalidationsForDistributionTenant operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvalidationsForDistributionTenant2020_05_31Request,
                                    Pagination::ListInvalidationsForDistributionTenantPaginationTraits<DerivedClient>>
  ListInvalidationsForDistributionTenantPaginator(const Model::ListInvalidationsForDistributionTenant2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvalidationsForDistributionTenant2020_05_31Request,
                                             Pagination::ListInvalidationsForDistributionTenantPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListKeyValueStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyValueStores2020_05_31Request,
                                    Pagination::ListKeyValueStoresPaginationTraits<DerivedClient>>
  ListKeyValueStoresPaginator(const Model::ListKeyValueStores2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyValueStores2020_05_31Request,
                                             Pagination::ListKeyValueStoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOriginAccessControls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOriginAccessControls2020_05_31Request,
                                    Pagination::ListOriginAccessControlsPaginationTraits<DerivedClient>>
  ListOriginAccessControlsPaginator(const Model::ListOriginAccessControls2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOriginAccessControls2020_05_31Request,
                                             Pagination::ListOriginAccessControlsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPublicKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublicKeys2020_05_31Request,
                                    Pagination::ListPublicKeysPaginationTraits<DerivedClient>>
  ListPublicKeysPaginator(const Model::ListPublicKeys2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublicKeys2020_05_31Request,
                                             Pagination::ListPublicKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListStreamingDistributions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamingDistributions2020_05_31Request,
                                    Pagination::ListStreamingDistributionsPaginationTraits<DerivedClient>>
  ListStreamingDistributionsPaginator(const Model::ListStreamingDistributions2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamingDistributions2020_05_31Request,
                                             Pagination::ListStreamingDistributionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrustStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustStores2020_05_31Request,
                                    Pagination::ListTrustStoresPaginationTraits<DerivedClient>>
  ListTrustStoresPaginator(const Model::ListTrustStores2020_05_31Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustStores2020_05_31Request,
                                             Pagination::ListTrustStoresPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace CloudFront
}  // namespace Aws
