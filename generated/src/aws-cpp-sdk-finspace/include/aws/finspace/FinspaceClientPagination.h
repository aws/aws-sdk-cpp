/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/finspace/FinspaceClient.h>
#include <aws/finspace/model/ListKxChangesetsPaginationTraits.h>
#include <aws/finspace/model/ListKxClusterNodesPaginationTraits.h>
#include <aws/finspace/model/ListKxDatabasesPaginationTraits.h>
#include <aws/finspace/model/ListKxDataviewsPaginationTraits.h>
#include <aws/finspace/model/ListKxEnvironmentsPaginationTraits.h>
#include <aws/finspace/model/ListKxScalingGroupsPaginationTraits.h>

namespace Aws {
namespace finspace {

using ListKxChangesetsPaginator = Aws::Utils::Pagination::Paginator<FinspaceClient, Model::ListKxChangesetsRequest,
                                                                    Pagination::ListKxChangesetsPaginationTraits<FinspaceClient>>;
using ListKxClusterNodesPaginator = Aws::Utils::Pagination::Paginator<FinspaceClient, Model::ListKxClusterNodesRequest,
                                                                      Pagination::ListKxClusterNodesPaginationTraits<FinspaceClient>>;
using ListKxDatabasesPaginator = Aws::Utils::Pagination::Paginator<FinspaceClient, Model::ListKxDatabasesRequest,
                                                                   Pagination::ListKxDatabasesPaginationTraits<FinspaceClient>>;
using ListKxDataviewsPaginator = Aws::Utils::Pagination::Paginator<FinspaceClient, Model::ListKxDataviewsRequest,
                                                                   Pagination::ListKxDataviewsPaginationTraits<FinspaceClient>>;
using ListKxEnvironmentsPaginator = Aws::Utils::Pagination::Paginator<FinspaceClient, Model::ListKxEnvironmentsRequest,
                                                                      Pagination::ListKxEnvironmentsPaginationTraits<FinspaceClient>>;
using ListKxScalingGroupsPaginator = Aws::Utils::Pagination::Paginator<FinspaceClient, Model::ListKxScalingGroupsRequest,
                                                                       Pagination::ListKxScalingGroupsPaginationTraits<FinspaceClient>>;

}  // namespace finspace
}  // namespace Aws
