/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codedeploy/model/ListApplicationRevisionsPaginationTraits.h>
#include <aws/codedeploy/model/ListApplicationsPaginationTraits.h>
#include <aws/codedeploy/model/ListDeploymentConfigsPaginationTraits.h>
#include <aws/codedeploy/model/ListDeploymentGroupsPaginationTraits.h>
#include <aws/codedeploy/model/ListDeploymentsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodeDeploy {

class CodeDeployClient;

template <typename DerivedClient>
class CodeDeployPaginationBase {
 public:
  /**
   * Create a paginator for ListApplicationRevisions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationRevisionsRequest,
                                    Pagination::ListApplicationRevisionsPaginationTraits<DerivedClient>>
  ListApplicationRevisionsPaginator(const Model::ListApplicationRevisionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationRevisionsRequest,
                                             Pagination::ListApplicationRevisionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

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
   * Create a paginator for ListDeploymentConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentConfigsRequest,
                                    Pagination::ListDeploymentConfigsPaginationTraits<DerivedClient>>
  ListDeploymentConfigsPaginator(const Model::ListDeploymentConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentConfigsRequest,
                                             Pagination::ListDeploymentConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDeploymentGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentGroupsRequest,
                                    Pagination::ListDeploymentGroupsPaginationTraits<DerivedClient>>
  ListDeploymentGroupsPaginator(const Model::ListDeploymentGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentGroupsRequest,
                                             Pagination::ListDeploymentGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
};
}  // namespace CodeDeploy
}  // namespace Aws
