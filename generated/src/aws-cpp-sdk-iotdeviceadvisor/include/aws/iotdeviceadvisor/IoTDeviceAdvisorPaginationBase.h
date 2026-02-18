/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsPaginationTraits.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IoTDeviceAdvisor {

class IoTDeviceAdvisorClient;

template <typename DerivedClient>
class IoTDeviceAdvisorPaginationBase {
 public:
  /**
   * Create a paginator for ListSuiteDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuiteDefinitionsRequest,
                                    Pagination::ListSuiteDefinitionsPaginationTraits<DerivedClient>>
  ListSuiteDefinitionsPaginator(const Model::ListSuiteDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuiteDefinitionsRequest,
                                             Pagination::ListSuiteDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSuiteRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuiteRunsRequest, Pagination::ListSuiteRunsPaginationTraits<DerivedClient>>
  ListSuiteRunsPaginator(const Model::ListSuiteRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuiteRunsRequest,
                                             Pagination::ListSuiteRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace IoTDeviceAdvisor
}  // namespace Aws
