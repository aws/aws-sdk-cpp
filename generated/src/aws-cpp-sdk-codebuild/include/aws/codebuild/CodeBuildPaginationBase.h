/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace CodeBuild {

class CodeBuildClient;

template <typename DerivedClient>
class CodeBuildPaginationBase {
 public:
  /**
   * Create a paginator for DescribeCodeCoverages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCodeCoveragesRequest,
                                    Pagination::DescribeCodeCoveragesPaginationTraits<DerivedClient>>
  DescribeCodeCoveragesPaginator(const Model::DescribeCodeCoveragesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCodeCoveragesRequest,
                                             Pagination::DescribeCodeCoveragesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTestCases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTestCasesRequest,
                                    Pagination::DescribeTestCasesPaginationTraits<DerivedClient>>
  DescribeTestCasesPaginator(const Model::DescribeTestCasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTestCasesRequest,
                                             Pagination::DescribeTestCasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBuildBatches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildBatchesRequest,
                                    Pagination::ListBuildBatchesPaginationTraits<DerivedClient>>
  ListBuildBatchesPaginator(const Model::ListBuildBatchesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildBatchesRequest,
                                             Pagination::ListBuildBatchesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListBuildBatchesForProject operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildBatchesForProjectRequest,
                                    Pagination::ListBuildBatchesForProjectPaginationTraits<DerivedClient>>
  ListBuildBatchesForProjectPaginator(const Model::ListBuildBatchesForProjectRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildBatchesForProjectRequest,
                                             Pagination::ListBuildBatchesForProjectPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBuilds operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildsRequest, Pagination::ListBuildsPaginationTraits<DerivedClient>>
  ListBuildsPaginator(const Model::ListBuildsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildsRequest,
                                             Pagination::ListBuildsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListBuildsForProject operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildsForProjectRequest,
                                    Pagination::ListBuildsForProjectPaginationTraits<DerivedClient>>
  ListBuildsForProjectPaginator(const Model::ListBuildsForProjectRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildsForProjectRequest,
                                             Pagination::ListBuildsForProjectPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCommandExecutionsForSandbox operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandExecutionsForSandboxRequest,
                                    Pagination::ListCommandExecutionsForSandboxPaginationTraits<DerivedClient>>
  ListCommandExecutionsForSandboxPaginator(const Model::ListCommandExecutionsForSandboxRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandExecutionsForSandboxRequest,
                                             Pagination::ListCommandExecutionsForSandboxPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsRequest, Pagination::ListFleetsPaginationTraits<DerivedClient>>
  ListFleetsPaginator(const Model::ListFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsRequest,
                                             Pagination::ListFleetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<DerivedClient>>
  ListProjectsPaginator(const Model::ListProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest,
                                             Pagination::ListProjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListReportGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportGroupsRequest,
                                    Pagination::ListReportGroupsPaginationTraits<DerivedClient>>
  ListReportGroupsPaginator(const Model::ListReportGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportGroupsRequest,
                                             Pagination::ListReportGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportsRequest, Pagination::ListReportsPaginationTraits<DerivedClient>>
  ListReportsPaginator(const Model::ListReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportsRequest,
                                             Pagination::ListReportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListReportsForReportGroup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportsForReportGroupRequest,
                                    Pagination::ListReportsForReportGroupPaginationTraits<DerivedClient>>
  ListReportsForReportGroupPaginator(const Model::ListReportsForReportGroupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportsForReportGroupRequest,
                                             Pagination::ListReportsForReportGroupPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSandboxes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSandboxesRequest, Pagination::ListSandboxesPaginationTraits<DerivedClient>>
  ListSandboxesPaginator(const Model::ListSandboxesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSandboxesRequest,
                                             Pagination::ListSandboxesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListSandboxesForProject operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSandboxesForProjectRequest,
                                    Pagination::ListSandboxesForProjectPaginationTraits<DerivedClient>>
  ListSandboxesForProjectPaginator(const Model::ListSandboxesForProjectRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSandboxesForProjectRequest,
                                             Pagination::ListSandboxesForProjectPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSharedProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSharedProjectsRequest,
                                    Pagination::ListSharedProjectsPaginationTraits<DerivedClient>>
  ListSharedProjectsPaginator(const Model::ListSharedProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSharedProjectsRequest,
                                             Pagination::ListSharedProjectsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSharedReportGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSharedReportGroupsRequest,
                                    Pagination::ListSharedReportGroupsPaginationTraits<DerivedClient>>
  ListSharedReportGroupsPaginator(const Model::ListSharedReportGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSharedReportGroupsRequest,
                                             Pagination::ListSharedReportGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CodeBuild
}  // namespace Aws
