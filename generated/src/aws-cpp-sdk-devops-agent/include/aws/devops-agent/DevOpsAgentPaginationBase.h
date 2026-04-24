/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/devops-agent/model/ListAgentSpacesPaginationTraits.h>
#include <aws/devops-agent/model/ListAssociationsPaginationTraits.h>
#include <aws/devops-agent/model/ListBacklogTasksPaginationTraits.h>
#include <aws/devops-agent/model/ListExecutionsPaginationTraits.h>
#include <aws/devops-agent/model/ListGoalsPaginationTraits.h>
#include <aws/devops-agent/model/ListJournalRecordsPaginationTraits.h>
#include <aws/devops-agent/model/ListServicesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DevOpsAgent {

class DevOpsAgentClient;

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
};
}  // namespace DevOpsAgent
}  // namespace Aws
