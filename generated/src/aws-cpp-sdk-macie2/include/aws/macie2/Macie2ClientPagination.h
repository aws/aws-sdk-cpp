/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/macie2/Macie2Client.h>
#include <aws/macie2/model/DescribeBucketsPaginationTraits.h>
#include <aws/macie2/model/GetUsageStatisticsPaginationTraits.h>
#include <aws/macie2/model/ListAllowListsPaginationTraits.h>
#include <aws/macie2/model/ListAutomatedDiscoveryAccountsPaginationTraits.h>
#include <aws/macie2/model/ListClassificationJobsPaginationTraits.h>
#include <aws/macie2/model/ListClassificationScopesPaginationTraits.h>
#include <aws/macie2/model/ListCustomDataIdentifiersPaginationTraits.h>
#include <aws/macie2/model/ListFindingsFiltersPaginationTraits.h>
#include <aws/macie2/model/ListFindingsPaginationTraits.h>
#include <aws/macie2/model/ListInvitationsPaginationTraits.h>
#include <aws/macie2/model/ListManagedDataIdentifiersPaginationTraits.h>
#include <aws/macie2/model/ListMembersPaginationTraits.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsPaginationTraits.h>
#include <aws/macie2/model/ListResourceProfileArtifactsPaginationTraits.h>
#include <aws/macie2/model/ListResourceProfileDetectionsPaginationTraits.h>
#include <aws/macie2/model/ListSensitivityInspectionTemplatesPaginationTraits.h>
#include <aws/macie2/model/SearchResourcesPaginationTraits.h>

namespace Aws {
namespace Macie2 {

using DescribeBucketsPaginator = Aws::Utils::Pagination::Paginator<Macie2Client, Model::DescribeBucketsRequest,
                                                                   Pagination::DescribeBucketsPaginationTraits<Macie2Client>>;
using GetUsageStatisticsPaginator = Aws::Utils::Pagination::Paginator<Macie2Client, Model::GetUsageStatisticsRequest,
                                                                      Pagination::GetUsageStatisticsPaginationTraits<Macie2Client>>;
using ListAllowListsPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListAllowListsRequest, Pagination::ListAllowListsPaginationTraits<Macie2Client>>;
using ListAutomatedDiscoveryAccountsPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListAutomatedDiscoveryAccountsRequest,
                                      Pagination::ListAutomatedDiscoveryAccountsPaginationTraits<Macie2Client>>;
using ListClassificationJobsPaginator = Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListClassificationJobsRequest,
                                                                          Pagination::ListClassificationJobsPaginationTraits<Macie2Client>>;
using ListClassificationScopesPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListClassificationScopesRequest,
                                      Pagination::ListClassificationScopesPaginationTraits<Macie2Client>>;
using ListCustomDataIdentifiersPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListCustomDataIdentifiersRequest,
                                      Pagination::ListCustomDataIdentifiersPaginationTraits<Macie2Client>>;
using ListFindingsPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListFindingsRequest, Pagination::ListFindingsPaginationTraits<Macie2Client>>;
using ListFindingsFiltersPaginator = Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListFindingsFiltersRequest,
                                                                       Pagination::ListFindingsFiltersPaginationTraits<Macie2Client>>;
using ListInvitationsPaginator = Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListInvitationsRequest,
                                                                   Pagination::ListInvitationsPaginationTraits<Macie2Client>>;
using ListManagedDataIdentifiersPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListManagedDataIdentifiersRequest,
                                      Pagination::ListManagedDataIdentifiersPaginationTraits<Macie2Client>>;
using ListMembersPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListMembersRequest, Pagination::ListMembersPaginationTraits<Macie2Client>>;
using ListOrganizationAdminAccountsPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListOrganizationAdminAccountsRequest,
                                      Pagination::ListOrganizationAdminAccountsPaginationTraits<Macie2Client>>;
using ListResourceProfileArtifactsPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListResourceProfileArtifactsRequest,
                                      Pagination::ListResourceProfileArtifactsPaginationTraits<Macie2Client>>;
using ListResourceProfileDetectionsPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListResourceProfileDetectionsRequest,
                                      Pagination::ListResourceProfileDetectionsPaginationTraits<Macie2Client>>;
using ListSensitivityInspectionTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<Macie2Client, Model::ListSensitivityInspectionTemplatesRequest,
                                      Pagination::ListSensitivityInspectionTemplatesPaginationTraits<Macie2Client>>;
using SearchResourcesPaginator = Aws::Utils::Pagination::Paginator<Macie2Client, Model::SearchResourcesRequest,
                                                                   Pagination::SearchResourcesPaginationTraits<Macie2Client>>;

}  // namespace Macie2
}  // namespace Aws
