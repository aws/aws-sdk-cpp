/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ds/DirectoryServiceClient.h>
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

namespace Aws {
namespace DirectoryService {

using DescribeClientAuthenticationSettingsPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeClientAuthenticationSettingsRequest,
                                      Pagination::DescribeClientAuthenticationSettingsPaginationTraits<DirectoryServiceClient>>;
using DescribeDirectoriesPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeDirectoriesRequest,
                                      Pagination::DescribeDirectoriesPaginationTraits<DirectoryServiceClient>>;
using DescribeDomainControllersPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeDomainControllersRequest,
                                      Pagination::DescribeDomainControllersPaginationTraits<DirectoryServiceClient>>;
using DescribeLDAPSSettingsPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeLDAPSSettingsRequest,
                                      Pagination::DescribeLDAPSSettingsPaginationTraits<DirectoryServiceClient>>;
using DescribeRegionsPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeRegionsRequest,
                                                                   Pagination::DescribeRegionsPaginationTraits<DirectoryServiceClient>>;
using DescribeSharedDirectoriesPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeSharedDirectoriesRequest,
                                      Pagination::DescribeSharedDirectoriesPaginationTraits<DirectoryServiceClient>>;
using DescribeSnapshotsPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeSnapshotsRequest,
                                                                     Pagination::DescribeSnapshotsPaginationTraits<DirectoryServiceClient>>;
using DescribeTrustsPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeTrustsRequest,
                                                                  Pagination::DescribeTrustsPaginationTraits<DirectoryServiceClient>>;
using DescribeUpdateDirectoryPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::DescribeUpdateDirectoryRequest,
                                      Pagination::DescribeUpdateDirectoryPaginationTraits<DirectoryServiceClient>>;
using ListADAssessmentsPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::ListADAssessmentsRequest,
                                                                     Pagination::ListADAssessmentsPaginationTraits<DirectoryServiceClient>>;
using ListCertificatesPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::ListCertificatesRequest,
                                                                    Pagination::ListCertificatesPaginationTraits<DirectoryServiceClient>>;
using ListIpRoutesPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::ListIpRoutesRequest,
                                                                Pagination::ListIpRoutesPaginationTraits<DirectoryServiceClient>>;
using ListLogSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::ListLogSubscriptionsRequest,
                                      Pagination::ListLogSubscriptionsPaginationTraits<DirectoryServiceClient>>;
using ListSchemaExtensionsPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::ListSchemaExtensionsRequest,
                                      Pagination::ListSchemaExtensionsPaginationTraits<DirectoryServiceClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<DirectoryServiceClient>>;

}  // namespace DirectoryService
}  // namespace Aws
