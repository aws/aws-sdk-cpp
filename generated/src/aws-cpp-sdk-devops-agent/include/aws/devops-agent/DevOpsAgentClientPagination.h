/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/devops-agent/DevOpsAgentClient.h>
#include <aws/devops-agent/model/ListAgentSpacesPaginationTraits.h>
#include <aws/devops-agent/model/ListAssociationsPaginationTraits.h>
#include <aws/devops-agent/model/ListBacklogTasksPaginationTraits.h>
#include <aws/devops-agent/model/ListExecutionsPaginationTraits.h>
#include <aws/devops-agent/model/ListGoalsPaginationTraits.h>
#include <aws/devops-agent/model/ListJournalRecordsPaginationTraits.h>
#include <aws/devops-agent/model/ListServicesPaginationTraits.h>

namespace Aws {
namespace DevOpsAgent {

using ListAgentSpacesPaginator = Aws::Utils::Pagination::Paginator<DevOpsAgentClient, Model::ListAgentSpacesRequest,
                                                                   Pagination::ListAgentSpacesPaginationTraits<DevOpsAgentClient>>;
using ListAssociationsPaginator = Aws::Utils::Pagination::Paginator<DevOpsAgentClient, Model::ListAssociationsRequest,
                                                                    Pagination::ListAssociationsPaginationTraits<DevOpsAgentClient>>;
using ListBacklogTasksPaginator = Aws::Utils::Pagination::Paginator<DevOpsAgentClient, Model::ListBacklogTasksRequest,
                                                                    Pagination::ListBacklogTasksPaginationTraits<DevOpsAgentClient>>;
using ListExecutionsPaginator = Aws::Utils::Pagination::Paginator<DevOpsAgentClient, Model::ListExecutionsRequest,
                                                                  Pagination::ListExecutionsPaginationTraits<DevOpsAgentClient>>;
using ListGoalsPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsAgentClient, Model::ListGoalsRequest, Pagination::ListGoalsPaginationTraits<DevOpsAgentClient>>;
using ListJournalRecordsPaginator = Aws::Utils::Pagination::Paginator<DevOpsAgentClient, Model::ListJournalRecordsRequest,
                                                                      Pagination::ListJournalRecordsPaginationTraits<DevOpsAgentClient>>;
using ListServicesPaginator = Aws::Utils::Pagination::Paginator<DevOpsAgentClient, Model::ListServicesRequest,
                                                                Pagination::ListServicesPaginationTraits<DevOpsAgentClient>>;

}  // namespace DevOpsAgent
}  // namespace Aws
