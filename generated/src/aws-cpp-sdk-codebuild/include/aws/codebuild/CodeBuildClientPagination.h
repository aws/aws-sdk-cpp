/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuildClient.h>
#include <aws/codebuild/model/DescribeCodeCoveragesPaginationTraits.h>
#include <aws/codebuild/model/DescribeTestCasesPaginationTraits.h>
#include <aws/codebuild/model/ListBuildBatchesForProjectPaginationTraits.h>
#include <aws/codebuild/model/ListBuildBatchesPaginationTraits.h>
#include <aws/codebuild/model/ListBuildsForProjectPaginationTraits.h>
#include <aws/codebuild/model/ListBuildsPaginationTraits.h>
#include <aws/codebuild/model/ListCommandExecutionsForSandboxPaginationTraits.h>
#include <aws/codebuild/model/ListFleetsPaginationTraits.h>
#include <aws/codebuild/model/ListProjectsPaginationTraits.h>
#include <aws/codebuild/model/ListReportGroupsPaginationTraits.h>
#include <aws/codebuild/model/ListReportsForReportGroupPaginationTraits.h>
#include <aws/codebuild/model/ListReportsPaginationTraits.h>
#include <aws/codebuild/model/ListSandboxesForProjectPaginationTraits.h>
#include <aws/codebuild/model/ListSandboxesPaginationTraits.h>
#include <aws/codebuild/model/ListSharedProjectsPaginationTraits.h>
#include <aws/codebuild/model/ListSharedReportGroupsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeBuild {

using DescribeCodeCoveragesPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::DescribeCodeCoveragesRequest,
                                      Pagination::DescribeCodeCoveragesPaginationTraits<CodeBuildClient>>;
using DescribeTestCasesPaginator = Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::DescribeTestCasesRequest,
                                                                     Pagination::DescribeTestCasesPaginationTraits<CodeBuildClient>>;
using ListBuildBatchesPaginator = Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListBuildBatchesRequest,
                                                                    Pagination::ListBuildBatchesPaginationTraits<CodeBuildClient>>;
using ListBuildBatchesForProjectPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListBuildBatchesForProjectRequest,
                                      Pagination::ListBuildBatchesForProjectPaginationTraits<CodeBuildClient>>;
using ListBuildsPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListBuildsRequest, Pagination::ListBuildsPaginationTraits<CodeBuildClient>>;
using ListBuildsForProjectPaginator = Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListBuildsForProjectRequest,
                                                                        Pagination::ListBuildsForProjectPaginationTraits<CodeBuildClient>>;
using ListCommandExecutionsForSandboxPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListCommandExecutionsForSandboxRequest,
                                      Pagination::ListCommandExecutionsForSandboxPaginationTraits<CodeBuildClient>>;
using ListFleetsPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListFleetsRequest, Pagination::ListFleetsPaginationTraits<CodeBuildClient>>;
using ListProjectsPaginator = Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListProjectsRequest,
                                                                Pagination::ListProjectsPaginationTraits<CodeBuildClient>>;
using ListReportGroupsPaginator = Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListReportGroupsRequest,
                                                                    Pagination::ListReportGroupsPaginationTraits<CodeBuildClient>>;
using ListReportsPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListReportsRequest, Pagination::ListReportsPaginationTraits<CodeBuildClient>>;
using ListReportsForReportGroupPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListReportsForReportGroupRequest,
                                      Pagination::ListReportsForReportGroupPaginationTraits<CodeBuildClient>>;
using ListSandboxesPaginator = Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListSandboxesRequest,
                                                                 Pagination::ListSandboxesPaginationTraits<CodeBuildClient>>;
using ListSandboxesForProjectPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListSandboxesForProjectRequest,
                                      Pagination::ListSandboxesForProjectPaginationTraits<CodeBuildClient>>;
using ListSharedProjectsPaginator = Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListSharedProjectsRequest,
                                                                      Pagination::ListSharedProjectsPaginationTraits<CodeBuildClient>>;
using ListSharedReportGroupsPaginator =
    Aws::Utils::Pagination::Paginator<CodeBuildClient, Model::ListSharedReportGroupsRequest,
                                      Pagination::ListSharedReportGroupsPaginationTraits<CodeBuildClient>>;

}  // namespace CodeBuild
}  // namespace Aws
