/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/m2/model/ListApplicationVersionsPaginationTraits.h>
#include <aws/m2/model/ListApplicationsPaginationTraits.h>
#include <aws/m2/model/ListBatchJobDefinitionsPaginationTraits.h>
#include <aws/m2/model/ListBatchJobExecutionsPaginationTraits.h>
#include <aws/m2/model/ListDataSetExportHistoryPaginationTraits.h>
#include <aws/m2/model/ListDataSetImportHistoryPaginationTraits.h>
#include <aws/m2/model/ListDataSetsPaginationTraits.h>
#include <aws/m2/model/ListDeploymentsPaginationTraits.h>
#include <aws/m2/model/ListEngineVersionsPaginationTraits.h>
#include <aws/m2/model/ListEnvironmentsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MainframeModernization {

class MainframeModernizationClient;

template <typename DerivedClient>
class MainframeModernizationPaginationBase {
 public:
  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListApplicationVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationVersionsRequest,
                                    Pagination::ListApplicationVersionsPaginationTraits<DerivedClient>>
  ListApplicationVersionsPaginator(const Model::ListApplicationVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationVersionsRequest,
                                             Pagination::ListApplicationVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBatchJobDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchJobDefinitionsRequest,
                                    Pagination::ListBatchJobDefinitionsPaginationTraits<DerivedClient>>
  ListBatchJobDefinitionsPaginator(const Model::ListBatchJobDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchJobDefinitionsRequest,
                                             Pagination::ListBatchJobDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBatchJobExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchJobExecutionsRequest,
                                    Pagination::ListBatchJobExecutionsPaginationTraits<DerivedClient>>
  ListBatchJobExecutionsPaginator(const Model::ListBatchJobExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchJobExecutionsRequest,
                                             Pagination::ListBatchJobExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSetExportHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetExportHistoryRequest,
                                    Pagination::ListDataSetExportHistoryPaginationTraits<DerivedClient>>
  ListDataSetExportHistoryPaginator(const Model::ListDataSetExportHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetExportHistoryRequest,
                                             Pagination::ListDataSetExportHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSetImportHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetImportHistoryRequest,
                                    Pagination::ListDataSetImportHistoryPaginationTraits<DerivedClient>>
  ListDataSetImportHistoryPaginator(const Model::ListDataSetImportHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetImportHistoryRequest,
                                             Pagination::ListDataSetImportHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetsRequest, Pagination::ListDataSetsPaginationTraits<DerivedClient>>
  ListDataSetsPaginator(const Model::ListDataSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetsRequest,
                                             Pagination::ListDataSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentsRequest,
                                    Pagination::ListDeploymentsPaginationTraits<DerivedClient>>
  ListDeploymentsPaginator(const Model::ListDeploymentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentsRequest,
                                             Pagination::ListDeploymentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListEngineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngineVersionsRequest,
                                    Pagination::ListEngineVersionsPaginationTraits<DerivedClient>>
  ListEngineVersionsPaginator(const Model::ListEngineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngineVersionsRequest,
                                             Pagination::ListEngineVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                    Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>
  ListEnvironmentsPaginator(const Model::ListEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace MainframeModernization
}  // namespace Aws
