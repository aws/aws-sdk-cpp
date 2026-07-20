/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/devops-agent/model/ListAgentSpacesPaginationTraits.h>
#include <aws/devops-agent/model/ListAssetFilesPaginationTraits.h>
#include <aws/devops-agent/model/ListAssetTypesPaginationTraits.h>
#include <aws/devops-agent/model/ListAssetVersionsPaginationTraits.h>
#include <aws/devops-agent/model/ListAssetsPaginationTraits.h>
#include <aws/devops-agent/model/ListAssociationsPaginationTraits.h>
#include <aws/devops-agent/model/ListBacklogTasksPaginationTraits.h>
#include <aws/devops-agent/model/ListExecutionsPaginationTraits.h>
#include <aws/devops-agent/model/ListGoalsPaginationTraits.h>
#include <aws/devops-agent/model/ListJournalRecordsPaginationTraits.h>
#include <aws/devops-agent/model/ListServicesPaginationTraits.h>
#include <aws/devops-agent/model/ListTriggersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DevOpsAgent {

template <typename DerivedClient>
class DevOpsAgentPaginationBase {
 public:
  /**
   * Create a paginator for ListAgentSpaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentSpacesRequest,
                                    Pagination::ListAgentSpacesPaginationTraits<DerivedClient>>
  ListAgentSpacesPaginator(const Model::ListAgentSpacesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentSpacesRequest,
                                             Pagination::ListAgentSpacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListAssetFiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetFilesRequest, Pagination::ListAssetFilesPaginationTraits<DerivedClient>>
  ListAssetFilesPaginator(const Model::ListAssetFilesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetFilesRequest,
                                             Pagination::ListAssetFilesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetsRequest, Pagination::ListAssetsPaginationTraits<DerivedClient>>
  ListAssetsPaginator(const Model::ListAssetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetsRequest,
                                             Pagination::ListAssetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListAssetTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetTypesRequest, Pagination::ListAssetTypesPaginationTraits<DerivedClient>>
  ListAssetTypesPaginator(const Model::ListAssetTypesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetTypesRequest,
                                             Pagination::ListAssetTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListAssetVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetVersionsRequest,
                                    Pagination::ListAssetVersionsPaginationTraits<DerivedClient>>
  ListAssetVersionsPaginator(const Model::ListAssetVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetVersionsRequest,
                                             Pagination::ListAssetVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationsRequest,
                                    Pagination::ListAssociationsPaginationTraits<DerivedClient>>
  ListAssociationsPaginator(const Model::ListAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationsRequest,
                                             Pagination::ListAssociationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListBacklogTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBacklogTasksRequest,
                                    Pagination::ListBacklogTasksPaginationTraits<DerivedClient>>
  ListBacklogTasksPaginator(const Model::ListBacklogTasksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBacklogTasksRequest,
                                             Pagination::ListBacklogTasksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest, Pagination::ListExecutionsPaginationTraits<DerivedClient>>
  ListExecutionsPaginator(const Model::ListExecutionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest,
                                             Pagination::ListExecutionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListGoals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGoalsRequest, Pagination::ListGoalsPaginationTraits<DerivedClient>>
  ListGoalsPaginator(const Model::ListGoalsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGoalsRequest, Pagination::ListGoalsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJournalRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJournalRecordsRequest,
                                    Pagination::ListJournalRecordsPaginationTraits<DerivedClient>>
  ListJournalRecordsPaginator(const Model::ListJournalRecordsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJournalRecordsRequest,
                                             Pagination::ListJournalRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTriggers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTriggersRequest, Pagination::ListTriggersPaginationTraits<DerivedClient>>
  ListTriggersPaginator(const Model::ListTriggersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTriggersRequest,
                                             Pagination::ListTriggersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace DevOpsAgent
}  // namespace Aws
