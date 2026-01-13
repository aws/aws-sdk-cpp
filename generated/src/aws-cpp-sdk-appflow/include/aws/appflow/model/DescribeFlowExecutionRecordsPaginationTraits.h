/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/AppflowServiceClientModel.h>
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/DescribeFlowExecutionRecordsRequest.h>
#include <aws/appflow/model/DescribeFlowExecutionRecordsResult.h>

namespace Aws {
namespace Appflow {
namespace Pagination {

template <typename Client = AppflowClient>
struct DescribeFlowExecutionRecordsPaginationTraits {
  using RequestType = Model::DescribeFlowExecutionRecordsRequest;
  using ResultType = Model::DescribeFlowExecutionRecordsResult;
  using OutcomeType = Model::DescribeFlowExecutionRecordsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeFlowExecutionRecords(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Appflow
}  // namespace Aws
