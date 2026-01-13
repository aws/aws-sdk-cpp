/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/appflow/model/DescribeConnectorProfilesPaginationTraits.h>
#include <aws/appflow/model/DescribeConnectorsPaginationTraits.h>
#include <aws/appflow/model/DescribeFlowExecutionRecordsPaginationTraits.h>
#include <aws/appflow/model/ListConnectorsPaginationTraits.h>
#include <aws/appflow/model/ListFlowsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Appflow {

class AppflowClient;

template <typename DerivedClient>
class AppflowPaginationBase {
 public:
  /**
   * Create a paginator for DescribeConnectorProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConnectorProfilesRequest,
                                    Pagination::DescribeConnectorProfilesPaginationTraits<DerivedClient>>
  DescribeConnectorProfilesPaginator(const Model::DescribeConnectorProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConnectorProfilesRequest,
                                             Pagination::DescribeConnectorProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConnectorsRequest,
                                    Pagination::DescribeConnectorsPaginationTraits<DerivedClient>>
  DescribeConnectorsPaginator(const Model::DescribeConnectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConnectorsRequest,
                                             Pagination::DescribeConnectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFlowExecutionRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFlowExecutionRecordsRequest,
                                    Pagination::DescribeFlowExecutionRecordsPaginationTraits<DerivedClient>>
  DescribeFlowExecutionRecordsPaginator(const Model::DescribeFlowExecutionRecordsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFlowExecutionRecordsRequest,
                                             Pagination::DescribeFlowExecutionRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest, Pagination::ListConnectorsPaginationTraits<DerivedClient>>
  ListConnectorsPaginator(const Model::ListConnectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest,
                                             Pagination::ListConnectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<DerivedClient>>
  ListFlowsPaginator(const Model::ListFlowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Appflow
}  // namespace Aws
