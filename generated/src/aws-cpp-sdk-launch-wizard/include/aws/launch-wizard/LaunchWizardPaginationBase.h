/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/launch-wizard/model/ListDeploymentEventsPaginationTraits.h>
#include <aws/launch-wizard/model/ListDeploymentPatternVersionsPaginationTraits.h>
#include <aws/launch-wizard/model/ListDeploymentsPaginationTraits.h>
#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsPaginationTraits.h>
#include <aws/launch-wizard/model/ListWorkloadsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace LaunchWizard {

class LaunchWizardClient;

template <typename DerivedClient>
class LaunchWizardPaginationBase {
 public:
  /**
   * Create a paginator for ListDeploymentEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentEventsRequest,
                                    Pagination::ListDeploymentEventsPaginationTraits<DerivedClient>>
  ListDeploymentEventsPaginator(const Model::ListDeploymentEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentEventsRequest,
                                             Pagination::ListDeploymentEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDeploymentPatternVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentPatternVersionsRequest,
                                    Pagination::ListDeploymentPatternVersionsPaginationTraits<DerivedClient>>
  ListDeploymentPatternVersionsPaginator(const Model::ListDeploymentPatternVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentPatternVersionsRequest,
                                             Pagination::ListDeploymentPatternVersionsPaginationTraits<DerivedClient>>{
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

  /**
   * Create a paginator for ListWorkloadDeploymentPatterns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadDeploymentPatternsRequest,
                                    Pagination::ListWorkloadDeploymentPatternsPaginationTraits<DerivedClient>>
  ListWorkloadDeploymentPatternsPaginator(const Model::ListWorkloadDeploymentPatternsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadDeploymentPatternsRequest,
                                             Pagination::ListWorkloadDeploymentPatternsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkloads operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadsRequest, Pagination::ListWorkloadsPaginationTraits<DerivedClient>>
  ListWorkloadsPaginator(const Model::ListWorkloadsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadsRequest,
                                             Pagination::ListWorkloadsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace LaunchWizard
}  // namespace Aws
