/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2ServiceClientModel.h>
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/ListComponentVersionsRequest.h>
#include <aws/greengrassv2/model/ListComponentVersionsResult.h>

namespace Aws {
namespace GreengrassV2 {
namespace Pagination {

template <typename Client = GreengrassV2Client>
struct ListComponentVersionsPaginationTraits {
  using RequestType = Model::ListComponentVersionsRequest;
  using ResultType = Model::ListComponentVersionsResult;
  using OutcomeType = Model::ListComponentVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListComponentVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GreengrassV2
}  // namespace Aws
