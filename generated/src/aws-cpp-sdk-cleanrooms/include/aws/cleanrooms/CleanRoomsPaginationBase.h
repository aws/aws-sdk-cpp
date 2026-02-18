/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace CleanRooms {

class CleanRoomsClient;

template <typename DerivedClient>
class CleanRoomsPaginationBase {
 public:
  /**
   * Create a paginator for ListAnalysisTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalysisTemplatesRequest,
                                    Pagination::ListAnalysisTemplatesPaginationTraits<DerivedClient>>
  ListAnalysisTemplatesPaginator(const Model::ListAnalysisTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalysisTemplatesRequest,
                                             Pagination::ListAnalysisTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationAnalysisTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationAnalysisTemplatesRequest,
                                    Pagination::ListCollaborationAnalysisTemplatesPaginationTraits<DerivedClient>>
  ListCollaborationAnalysisTemplatesPaginator(const Model::ListCollaborationAnalysisTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationAnalysisTemplatesRequest,
                                             Pagination::ListCollaborationAnalysisTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationChangeRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationChangeRequestsRequest,
                                    Pagination::ListCollaborationChangeRequestsPaginationTraits<DerivedClient>>
  ListCollaborationChangeRequestsPaginator(const Model::ListCollaborationChangeRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationChangeRequestsRequest,
                                             Pagination::ListCollaborationChangeRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationConfiguredAudienceModelAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationConfiguredAudienceModelAssociationsRequest,
                                    Pagination::ListCollaborationConfiguredAudienceModelAssociationsPaginationTraits<DerivedClient>>
  ListCollaborationConfiguredAudienceModelAssociationsPaginator(
      const Model::ListCollaborationConfiguredAudienceModelAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<
        DerivedClient, Model::ListCollaborationConfiguredAudienceModelAssociationsRequest,
        Pagination::ListCollaborationConfiguredAudienceModelAssociationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListCollaborationIdNamespaceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationIdNamespaceAssociationsRequest,
                                    Pagination::ListCollaborationIdNamespaceAssociationsPaginationTraits<DerivedClient>>
  ListCollaborationIdNamespaceAssociationsPaginator(const Model::ListCollaborationIdNamespaceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationIdNamespaceAssociationsRequest,
                                             Pagination::ListCollaborationIdNamespaceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationPrivacyBudgets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationPrivacyBudgetsRequest,
                                    Pagination::ListCollaborationPrivacyBudgetsPaginationTraits<DerivedClient>>
  ListCollaborationPrivacyBudgetsPaginator(const Model::ListCollaborationPrivacyBudgetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationPrivacyBudgetsRequest,
                                             Pagination::ListCollaborationPrivacyBudgetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationPrivacyBudgetTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationPrivacyBudgetTemplatesRequest,
                                    Pagination::ListCollaborationPrivacyBudgetTemplatesPaginationTraits<DerivedClient>>
  ListCollaborationPrivacyBudgetTemplatesPaginator(const Model::ListCollaborationPrivacyBudgetTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationPrivacyBudgetTemplatesRequest,
                                             Pagination::ListCollaborationPrivacyBudgetTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationsRequest,
                                    Pagination::ListCollaborationsPaginationTraits<DerivedClient>>
  ListCollaborationsPaginator(const Model::ListCollaborationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationsRequest,
                                             Pagination::ListCollaborationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfiguredAudienceModelAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredAudienceModelAssociationsRequest,
                                    Pagination::ListConfiguredAudienceModelAssociationsPaginationTraits<DerivedClient>>
  ListConfiguredAudienceModelAssociationsPaginator(const Model::ListConfiguredAudienceModelAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredAudienceModelAssociationsRequest,
                                             Pagination::ListConfiguredAudienceModelAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfiguredTableAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredTableAssociationsRequest,
                                    Pagination::ListConfiguredTableAssociationsPaginationTraits<DerivedClient>>
  ListConfiguredTableAssociationsPaginator(const Model::ListConfiguredTableAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredTableAssociationsRequest,
                                             Pagination::ListConfiguredTableAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfiguredTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredTablesRequest,
                                    Pagination::ListConfiguredTablesPaginationTraits<DerivedClient>>
  ListConfiguredTablesPaginator(const Model::ListConfiguredTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredTablesRequest,
                                             Pagination::ListConfiguredTablesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIdMappingTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdMappingTablesRequest,
                                    Pagination::ListIdMappingTablesPaginationTraits<DerivedClient>>
  ListIdMappingTablesPaginator(const Model::ListIdMappingTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdMappingTablesRequest,
                                             Pagination::ListIdMappingTablesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIdNamespaceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdNamespaceAssociationsRequest,
                                    Pagination::ListIdNamespaceAssociationsPaginationTraits<DerivedClient>>
  ListIdNamespaceAssociationsPaginator(const Model::ListIdNamespaceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdNamespaceAssociationsRequest,
                                             Pagination::ListIdNamespaceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersRequest, Pagination::ListMembersPaginationTraits<DerivedClient>>
  ListMembersPaginator(const Model::ListMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersRequest,
                                             Pagination::ListMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembershipsRequest,
                                    Pagination::ListMembershipsPaginationTraits<DerivedClient>>
  ListMembershipsPaginator(const Model::ListMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembershipsRequest,
                                             Pagination::ListMembershipsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPrivacyBudgets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrivacyBudgetsRequest,
                                    Pagination::ListPrivacyBudgetsPaginationTraits<DerivedClient>>
  ListPrivacyBudgetsPaginator(const Model::ListPrivacyBudgetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrivacyBudgetsRequest,
                                             Pagination::ListPrivacyBudgetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPrivacyBudgetTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrivacyBudgetTemplatesRequest,
                                    Pagination::ListPrivacyBudgetTemplatesPaginationTraits<DerivedClient>>
  ListPrivacyBudgetTemplatesPaginator(const Model::ListPrivacyBudgetTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrivacyBudgetTemplatesRequest,
                                             Pagination::ListPrivacyBudgetTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProtectedJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectedJobsRequest,
                                    Pagination::ListProtectedJobsPaginationTraits<DerivedClient>>
  ListProtectedJobsPaginator(const Model::ListProtectedJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectedJobsRequest,
                                             Pagination::ListProtectedJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProtectedQueries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectedQueriesRequest,
                                    Pagination::ListProtectedQueriesPaginationTraits<DerivedClient>>
  ListProtectedQueriesPaginator(const Model::ListProtectedQueriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectedQueriesRequest,
                                             Pagination::ListProtectedQueriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest, Pagination::ListSchemasPaginationTraits<DerivedClient>>
  ListSchemasPaginator(const Model::ListSchemasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest,
                                             Pagination::ListSchemasPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace CleanRooms
}  // namespace Aws
