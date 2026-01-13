/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/AppflowServiceClientModel.h>
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/DescribeConnectorsRequest.h>
#include <aws/appflow/model/DescribeConnectorsResult.h>

namespace Aws {
namespace Appflow {
namespace Pagination {

template <typename Client = AppflowClient>
struct DescribeConnectorsPaginationTraits {
  using RequestType = Model::DescribeConnectorsRequest;
  using ResultType = Model::DescribeConnectorsResult;
  using OutcomeType = Model::DescribeConnectorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeConnectors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Appflow
}  // namespace Aws
