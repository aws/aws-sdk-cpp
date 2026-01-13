/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/InspectorServiceClientModel.h>
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/ListExclusionsRequest.h>
#include <aws/inspector/model/ListExclusionsResult.h>

namespace Aws {
namespace Inspector {
namespace Pagination {

template <typename Client = InspectorClient>
struct ListExclusionsPaginationTraits {
  using RequestType = Model::ListExclusionsRequest;
  using ResultType = Model::ListExclusionsResult;
  using OutcomeType = Model::ListExclusionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExclusions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Inspector
}  // namespace Aws
