/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/DeadlineServiceClientModel.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/ListAvailableMeteredProductsRequest.h>
#include <aws/deadline/model/ListAvailableMeteredProductsResult.h>

namespace Aws {
namespace deadline {
namespace Pagination {

template <typename Client = DeadlineClient>
struct ListAvailableMeteredProductsPaginationTraits {
  using RequestType = Model::ListAvailableMeteredProductsRequest;
  using ResultType = Model::ListAvailableMeteredProductsResult;
  using OutcomeType = Model::ListAvailableMeteredProductsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAvailableMeteredProducts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace deadline
}  // namespace Aws
