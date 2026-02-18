/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/AppflowServiceClientModel.h>
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/DescribeConnectorProfilesRequest.h>
#include <aws/appflow/model/DescribeConnectorProfilesResult.h>

namespace Aws {
namespace Appflow {
namespace Pagination {

template <typename Client = AppflowClient>
struct DescribeConnectorProfilesPaginationTraits {
  using RequestType = Model::DescribeConnectorProfilesRequest;
  using ResultType = Model::DescribeConnectorProfilesResult;
  using OutcomeType = Model::DescribeConnectorProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeConnectorProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Appflow
}  // namespace Aws
