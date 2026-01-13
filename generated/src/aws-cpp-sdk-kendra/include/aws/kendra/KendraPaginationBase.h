/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kendra/model/GetSnapshotsPaginationTraits.h>
#include <aws/kendra/model/ListAccessControlConfigurationsPaginationTraits.h>
#include <aws/kendra/model/ListDataSourceSyncJobsPaginationTraits.h>
#include <aws/kendra/model/ListDataSourcesPaginationTraits.h>
#include <aws/kendra/model/ListEntityPersonasPaginationTraits.h>
#include <aws/kendra/model/ListExperienceEntitiesPaginationTraits.h>
#include <aws/kendra/model/ListExperiencesPaginationTraits.h>
#include <aws/kendra/model/ListFaqsPaginationTraits.h>
#include <aws/kendra/model/ListGroupsOlderThanOrderingIdPaginationTraits.h>
#include <aws/kendra/model/ListIndicesPaginationTraits.h>
#include <aws/kendra/model/ListQuerySuggestionsBlockListsPaginationTraits.h>
#include <aws/kendra/model/ListThesauriPaginationTraits.h>

#include <memory>

namespace Aws {
namespace kendra {

class KendraClient;

template <typename DerivedClient>
class KendraPaginationBase {
 public:
  /**
   * Create a paginator for GetSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSnapshotsRequest, Pagination::GetSnapshotsPaginationTraits<DerivedClient>>
  GetSnapshotsPaginator(const Model::GetSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSnapshotsRequest,
                                             Pagination::GetSnapshotsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAccessControlConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessControlConfigurationsRequest,
                                    Pagination::ListAccessControlConfigurationsPaginationTraits<DerivedClient>>
  ListAccessControlConfigurationsPaginator(const Model::ListAccessControlConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessControlConfigurationsRequest,
                                             Pagination::ListAccessControlConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                    Pagination::ListDataSourcesPaginationTraits<DerivedClient>>
  ListDataSourcesPaginator(const Model::ListDataSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                             Pagination::ListDataSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDataSourceSyncJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourceSyncJobsRequest,
                                    Pagination::ListDataSourceSyncJobsPaginationTraits<DerivedClient>>
  ListDataSourceSyncJobsPaginator(const Model::ListDataSourceSyncJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourceSyncJobsRequest,
                                             Pagination::ListDataSourceSyncJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEntityPersonas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityPersonasRequest,
                                    Pagination::ListEntityPersonasPaginationTraits<DerivedClient>>
  ListEntityPersonasPaginator(const Model::ListEntityPersonasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityPersonasRequest,
                                             Pagination::ListEntityPersonasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExperienceEntities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperienceEntitiesRequest,
                                    Pagination::ListExperienceEntitiesPaginationTraits<DerivedClient>>
  ListExperienceEntitiesPaginator(const Model::ListExperienceEntitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperienceEntitiesRequest,
                                             Pagination::ListExperienceEntitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExperiences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperiencesRequest,
                                    Pagination::ListExperiencesPaginationTraits<DerivedClient>>
  ListExperiencesPaginator(const Model::ListExperiencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperiencesRequest,
                                             Pagination::ListExperiencesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListFaqs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFaqsRequest, Pagination::ListFaqsPaginationTraits<DerivedClient>>
  ListFaqsPaginator(const Model::ListFaqsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFaqsRequest, Pagination::ListFaqsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroupsOlderThanOrderingId operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsOlderThanOrderingIdRequest,
                                    Pagination::ListGroupsOlderThanOrderingIdPaginationTraits<DerivedClient>>
  ListGroupsOlderThanOrderingIdPaginator(const Model::ListGroupsOlderThanOrderingIdRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsOlderThanOrderingIdRequest,
                                             Pagination::ListGroupsOlderThanOrderingIdPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIndices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndicesRequest, Pagination::ListIndicesPaginationTraits<DerivedClient>>
  ListIndicesPaginator(const Model::ListIndicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndicesRequest,
                                             Pagination::ListIndicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListQuerySuggestionsBlockLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuerySuggestionsBlockListsRequest,
                                    Pagination::ListQuerySuggestionsBlockListsPaginationTraits<DerivedClient>>
  ListQuerySuggestionsBlockListsPaginator(const Model::ListQuerySuggestionsBlockListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuerySuggestionsBlockListsRequest,
                                             Pagination::ListQuerySuggestionsBlockListsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThesauri operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThesauriRequest, Pagination::ListThesauriPaginationTraits<DerivedClient>>
  ListThesauriPaginator(const Model::ListThesauriRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThesauriRequest,
                                             Pagination::ListThesauriPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace kendra
}  // namespace Aws
