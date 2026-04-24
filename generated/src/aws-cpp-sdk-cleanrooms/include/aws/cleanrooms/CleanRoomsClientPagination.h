/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsClient.h>
#include <aws/cleanrooms/model/ListAnalysisTemplatesPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationAnalysisTemplatesPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationChangeRequestsPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationConfiguredAudienceModelAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationIdNamespaceAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetTemplatesPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetsPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListConfiguredAudienceModelAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListConfiguredTableAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListConfiguredTablesPaginationTraits.h>
#include <aws/cleanrooms/model/ListIdMappingTablesPaginationTraits.h>
#include <aws/cleanrooms/model/ListIdNamespaceAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListMembersPaginationTraits.h>
#include <aws/cleanrooms/model/ListMembershipsPaginationTraits.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetTemplatesPaginationTraits.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetsPaginationTraits.h>
#include <aws/cleanrooms/model/ListProtectedJobsPaginationTraits.h>
#include <aws/cleanrooms/model/ListProtectedQueriesPaginationTraits.h>
#include <aws/cleanrooms/model/ListSchemasPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CleanRooms {

using ListAnalysisTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListAnalysisTemplatesRequest,
                                      Pagination::ListAnalysisTemplatesPaginationTraits<CleanRoomsClient>>;
using ListCollaborationAnalysisTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListCollaborationAnalysisTemplatesRequest,
                                      Pagination::ListCollaborationAnalysisTemplatesPaginationTraits<CleanRoomsClient>>;
using ListCollaborationChangeRequestsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListCollaborationChangeRequestsRequest,
                                      Pagination::ListCollaborationChangeRequestsPaginationTraits<CleanRoomsClient>>;
using ListCollaborationConfiguredAudienceModelAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListCollaborationConfiguredAudienceModelAssociationsRequest,
                                      Pagination::ListCollaborationConfiguredAudienceModelAssociationsPaginationTraits<CleanRoomsClient>>;
using ListCollaborationIdNamespaceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListCollaborationIdNamespaceAssociationsRequest,
                                      Pagination::ListCollaborationIdNamespaceAssociationsPaginationTraits<CleanRoomsClient>>;
using ListCollaborationPrivacyBudgetsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListCollaborationPrivacyBudgetsRequest,
                                      Pagination::ListCollaborationPrivacyBudgetsPaginationTraits<CleanRoomsClient>>;
using ListCollaborationPrivacyBudgetTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListCollaborationPrivacyBudgetTemplatesRequest,
                                      Pagination::ListCollaborationPrivacyBudgetTemplatesPaginationTraits<CleanRoomsClient>>;
using ListCollaborationsPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListCollaborationsRequest,
                                                                      Pagination::ListCollaborationsPaginationTraits<CleanRoomsClient>>;
using ListConfiguredAudienceModelAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListConfiguredAudienceModelAssociationsRequest,
                                      Pagination::ListConfiguredAudienceModelAssociationsPaginationTraits<CleanRoomsClient>>;
using ListConfiguredTableAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListConfiguredTableAssociationsRequest,
                                      Pagination::ListConfiguredTableAssociationsPaginationTraits<CleanRoomsClient>>;
using ListConfiguredTablesPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListConfiguredTablesRequest,
                                                                        Pagination::ListConfiguredTablesPaginationTraits<CleanRoomsClient>>;
using ListIdMappingTablesPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListIdMappingTablesRequest,
                                                                       Pagination::ListIdMappingTablesPaginationTraits<CleanRoomsClient>>;
using ListIdNamespaceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListIdNamespaceAssociationsRequest,
                                      Pagination::ListIdNamespaceAssociationsPaginationTraits<CleanRoomsClient>>;
using ListMembersPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListMembersRequest,
                                                               Pagination::ListMembersPaginationTraits<CleanRoomsClient>>;
using ListMembershipsPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListMembershipsRequest,
                                                                   Pagination::ListMembershipsPaginationTraits<CleanRoomsClient>>;
using ListPrivacyBudgetsPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListPrivacyBudgetsRequest,
                                                                      Pagination::ListPrivacyBudgetsPaginationTraits<CleanRoomsClient>>;
using ListPrivacyBudgetTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListPrivacyBudgetTemplatesRequest,
                                      Pagination::ListPrivacyBudgetTemplatesPaginationTraits<CleanRoomsClient>>;
using ListProtectedJobsPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListProtectedJobsRequest,
                                                                     Pagination::ListProtectedJobsPaginationTraits<CleanRoomsClient>>;
using ListProtectedQueriesPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListProtectedQueriesRequest,
                                                                        Pagination::ListProtectedQueriesPaginationTraits<CleanRoomsClient>>;
using ListSchemasPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsClient, Model::ListSchemasRequest,
                                                               Pagination::ListSchemasPaginationTraits<CleanRoomsClient>>;

}  // namespace CleanRooms
}  // namespace Aws
