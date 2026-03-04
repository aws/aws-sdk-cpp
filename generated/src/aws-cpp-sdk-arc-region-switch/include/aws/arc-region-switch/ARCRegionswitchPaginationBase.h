/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/arc-region-switch/model/GetPlanEvaluationStatusPaginationTraits.h>
#include <aws/arc-region-switch/model/GetPlanExecutionPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlanExecutionEventsPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlanExecutionsPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlansInRegionPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlansPaginationTraits.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksInRegionPaginationTraits.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ARCRegionswitch {

class ARCRegionswitchClient;

template <typename DerivedClient>
class ARCRegionswitchPaginationBase {
 public:
  /**
   * Create a paginator for GetPlanEvaluationStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPlanEvaluationStatusRequest,
                                    Pagination::GetPlanEvaluationStatusPaginationTraits<DerivedClient>>
  GetPlanEvaluationStatusPaginator(const Model::GetPlanEvaluationStatusRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPlanEvaluationStatusRequest,
                                             Pagination::GetPlanEvaluationStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetPlanExecution operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPlanExecutionRequest,
                                    Pagination::GetPlanExecutionPaginationTraits<DerivedClient>>
  GetPlanExecutionPaginator(const Model::GetPlanExecutionRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPlanExecutionRequest,
                                             Pagination::GetPlanExecutionPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPlanExecutionEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlanExecutionEventsRequest,
                                    Pagination::ListPlanExecutionEventsPaginationTraits<DerivedClient>>
  ListPlanExecutionEventsPaginator(const Model::ListPlanExecutionEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlanExecutionEventsRequest,
                                             Pagination::ListPlanExecutionEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPlanExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlanExecutionsRequest,
                                    Pagination::ListPlanExecutionsPaginationTraits<DerivedClient>>
  ListPlanExecutionsPaginator(const Model::ListPlanExecutionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlanExecutionsRequest,
                                             Pagination::ListPlanExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlansRequest, Pagination::ListPlansPaginationTraits<DerivedClient>>
  ListPlansPaginator(const Model::ListPlansRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlansRequest, Pagination::ListPlansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPlansInRegion operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlansInRegionRequest,
                                    Pagination::ListPlansInRegionPaginationTraits<DerivedClient>>
  ListPlansInRegionPaginator(const Model::ListPlansInRegionRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlansInRegionRequest,
                                             Pagination::ListPlansInRegionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoute53HealthChecks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoute53HealthChecksRequest,
                                    Pagination::ListRoute53HealthChecksPaginationTraits<DerivedClient>>
  ListRoute53HealthChecksPaginator(const Model::ListRoute53HealthChecksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoute53HealthChecksRequest,
                                             Pagination::ListRoute53HealthChecksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoute53HealthChecksInRegion operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoute53HealthChecksInRegionRequest,
                                    Pagination::ListRoute53HealthChecksInRegionPaginationTraits<DerivedClient>>
  ListRoute53HealthChecksInRegionPaginator(const Model::ListRoute53HealthChecksInRegionRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoute53HealthChecksInRegionRequest,
                                             Pagination::ListRoute53HealthChecksInRegionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ARCRegionswitch
}  // namespace Aws
