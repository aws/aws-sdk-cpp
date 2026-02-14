/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kendra/KendraClient.h>
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

namespace Aws {
namespace kendra {

using GetSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<KendraClient, Model::GetSnapshotsRequest, Pagination::GetSnapshotsPaginationTraits<KendraClient>>;
using ListAccessControlConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<KendraClient, Model::ListAccessControlConfigurationsRequest,
                                      Pagination::ListAccessControlConfigurationsPaginationTraits<KendraClient>>;
using ListDataSourcesPaginator = Aws::Utils::Pagination::Paginator<KendraClient, Model::ListDataSourcesRequest,
                                                                   Pagination::ListDataSourcesPaginationTraits<KendraClient>>;
using ListDataSourceSyncJobsPaginator = Aws::Utils::Pagination::Paginator<KendraClient, Model::ListDataSourceSyncJobsRequest,
                                                                          Pagination::ListDataSourceSyncJobsPaginationTraits<KendraClient>>;
using ListEntityPersonasPaginator = Aws::Utils::Pagination::Paginator<KendraClient, Model::ListEntityPersonasRequest,
                                                                      Pagination::ListEntityPersonasPaginationTraits<KendraClient>>;
using ListExperienceEntitiesPaginator = Aws::Utils::Pagination::Paginator<KendraClient, Model::ListExperienceEntitiesRequest,
                                                                          Pagination::ListExperienceEntitiesPaginationTraits<KendraClient>>;
using ListExperiencesPaginator = Aws::Utils::Pagination::Paginator<KendraClient, Model::ListExperiencesRequest,
                                                                   Pagination::ListExperiencesPaginationTraits<KendraClient>>;
using ListFaqsPaginator =
    Aws::Utils::Pagination::Paginator<KendraClient, Model::ListFaqsRequest, Pagination::ListFaqsPaginationTraits<KendraClient>>;
using ListGroupsOlderThanOrderingIdPaginator =
    Aws::Utils::Pagination::Paginator<KendraClient, Model::ListGroupsOlderThanOrderingIdRequest,
                                      Pagination::ListGroupsOlderThanOrderingIdPaginationTraits<KendraClient>>;
using ListIndicesPaginator =
    Aws::Utils::Pagination::Paginator<KendraClient, Model::ListIndicesRequest, Pagination::ListIndicesPaginationTraits<KendraClient>>;
using ListQuerySuggestionsBlockListsPaginator =
    Aws::Utils::Pagination::Paginator<KendraClient, Model::ListQuerySuggestionsBlockListsRequest,
                                      Pagination::ListQuerySuggestionsBlockListsPaginationTraits<KendraClient>>;
using ListThesauriPaginator =
    Aws::Utils::Pagination::Paginator<KendraClient, Model::ListThesauriRequest, Pagination::ListThesauriPaginationTraits<KendraClient>>;

}  // namespace kendra
}  // namespace Aws
