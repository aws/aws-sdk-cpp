/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ds/model/DescribeClientAuthenticationSettingsPaginationTraits.h>
#include <aws/ds/model/DescribeDirectoriesPaginationTraits.h>
#include <aws/ds/model/DescribeDomainControllersPaginationTraits.h>
#include <aws/ds/model/DescribeLDAPSSettingsPaginationTraits.h>
#include <aws/ds/model/DescribeRegionsPaginationTraits.h>
#include <aws/ds/model/DescribeSharedDirectoriesPaginationTraits.h>
#include <aws/ds/model/DescribeSnapshotsPaginationTraits.h>
#include <aws/ds/model/DescribeTrustsPaginationTraits.h>
#include <aws/ds/model/DescribeUpdateDirectoryPaginationTraits.h>
#include <aws/ds/model/ListADAssessmentsPaginationTraits.h>
#include <aws/ds/model/ListCertificatesPaginationTraits.h>
#include <aws/ds/model/ListIpRoutesPaginationTraits.h>
#include <aws/ds/model/ListLogSubscriptionsPaginationTraits.h>
#include <aws/ds/model/ListSchemaExtensionsPaginationTraits.h>
#include <aws/ds/model/ListTagsForResourcePaginationTraits.h>

#include <memory>

namespace Aws {
namespace DirectoryService {

class DirectoryServiceClient;

template <typename DerivedClient>
class DirectoryServicePaginationBase {
 public:
  /**
   * Create a paginator for DescribeClientAuthenticationSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientAuthenticationSettingsRequest,
                                    Pagination::DescribeClientAuthenticationSettingsPaginationTraits<DerivedClient>>
  DescribeClientAuthenticationSettingsPaginator(const Model::DescribeClientAuthenticationSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientAuthenticationSettingsRequest,
                                             Pagination::DescribeClientAuthenticationSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDirectories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDirectoriesRequest,
                                    Pagination::DescribeDirectoriesPaginationTraits<DerivedClient>>
  DescribeDirectoriesPaginator(const Model::DescribeDirectoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDirectoriesRequest,
                                             Pagination::DescribeDirectoriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDomainControllers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDomainControllersRequest,
                                    Pagination::DescribeDomainControllersPaginationTraits<DerivedClient>>
  DescribeDomainControllersPaginator(const Model::DescribeDomainControllersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDomainControllersRequest,
                                             Pagination::DescribeDomainControllersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLDAPSSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLDAPSSettingsRequest,
                                    Pagination::DescribeLDAPSSettingsPaginationTraits<DerivedClient>>
  DescribeLDAPSSettingsPaginator(const Model::DescribeLDAPSSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLDAPSSettingsRequest,
                                             Pagination::DescribeLDAPSSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegionsRequest,
                                    Pagination::DescribeRegionsPaginationTraits<DerivedClient>>
  DescribeRegionsPaginator(const Model::DescribeRegionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegionsRequest,
                                             Pagination::DescribeRegionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for DescribeSharedDirectories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSharedDirectoriesRequest,
                                    Pagination::DescribeSharedDirectoriesPaginationTraits<DerivedClient>>
  DescribeSharedDirectoriesPaginator(const Model::DescribeSharedDirectoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSharedDirectoriesRequest,
                                             Pagination::DescribeSharedDirectoriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                    Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>
  DescribeSnapshotsPaginator(const Model::DescribeSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                             Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTrusts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrustsRequest, Pagination::DescribeTrustsPaginationTraits<DerivedClient>>
  DescribeTrustsPaginator(const Model::DescribeTrustsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrustsRequest,
                                             Pagination::DescribeTrustsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeUpdateDirectory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUpdateDirectoryRequest,
                                    Pagination::DescribeUpdateDirectoryPaginationTraits<DerivedClient>>
  DescribeUpdateDirectoryPaginator(const Model::DescribeUpdateDirectoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUpdateDirectoryRequest,
                                             Pagination::DescribeUpdateDirectoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListADAssessments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListADAssessmentsRequest,
                                    Pagination::ListADAssessmentsPaginationTraits<DerivedClient>>
  ListADAssessmentsPaginator(const Model::ListADAssessmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListADAssessmentsRequest,
                                             Pagination::ListADAssessmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                    Pagination::ListCertificatesPaginationTraits<DerivedClient>>
  ListCertificatesPaginator(const Model::ListCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                             Pagination::ListCertificatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListIpRoutes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIpRoutesRequest, Pagination::ListIpRoutesPaginationTraits<DerivedClient>>
  ListIpRoutesPaginator(const Model::ListIpRoutesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIpRoutesRequest,
                                             Pagination::ListIpRoutesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListLogSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogSubscriptionsRequest,
                                    Pagination::ListLogSubscriptionsPaginationTraits<DerivedClient>>
  ListLogSubscriptionsPaginator(const Model::ListLogSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogSubscriptionsRequest,
                                             Pagination::ListLogSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSchemaExtensions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaExtensionsRequest,
                                    Pagination::ListSchemaExtensionsPaginationTraits<DerivedClient>>
  ListSchemaExtensionsPaginator(const Model::ListSchemaExtensionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaExtensionsRequest,
                                             Pagination::ListSchemaExtensionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace DirectoryService
}  // namespace Aws
