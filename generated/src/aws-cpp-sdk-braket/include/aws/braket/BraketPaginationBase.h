/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/braket/model/SearchDevicesPaginationTraits.h>
#include <aws/braket/model/SearchJobsPaginationTraits.h>
#include <aws/braket/model/SearchQuantumTasksPaginationTraits.h>
#include <aws/braket/model/SearchSpendingLimitsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Braket {

class BraketClient;

template <typename DerivedClient>
class BraketPaginationBase {
 public:
  /**
   * Create a paginator for SearchDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDevicesRequest, Pagination::SearchDevicesPaginationTraits<DerivedClient>>
  SearchDevicesPaginator(const Model::SearchDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDevicesRequest,
                                             Pagination::SearchDevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for SearchJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchJobsRequest, Pagination::SearchJobsPaginationTraits<DerivedClient>>
  SearchJobsPaginator(const Model::SearchJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchJobsRequest,
                                             Pagination::SearchJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for SearchQuantumTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQuantumTasksRequest,
                                    Pagination::SearchQuantumTasksPaginationTraits<DerivedClient>>
  SearchQuantumTasksPaginator(const Model::SearchQuantumTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQuantumTasksRequest,
                                             Pagination::SearchQuantumTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchSpendingLimits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSpendingLimitsRequest,
                                    Pagination::SearchSpendingLimitsPaginationTraits<DerivedClient>>
  SearchSpendingLimitsPaginator(const Model::SearchSpendingLimitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSpendingLimitsRequest,
                                             Pagination::SearchSpendingLimitsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Braket
}  // namespace Aws
