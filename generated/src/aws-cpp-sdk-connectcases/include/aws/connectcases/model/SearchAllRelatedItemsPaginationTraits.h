/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesServiceClientModel.h>
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/SearchAllRelatedItemsRequest.h>
#include <aws/connectcases/model/SearchAllRelatedItemsResult.h>

namespace Aws {
namespace ConnectCases {
namespace Pagination {

template <typename Client = ConnectCasesClient>
struct SearchAllRelatedItemsPaginationTraits {
  using RequestType = Model::SearchAllRelatedItemsRequest;
  using ResultType = Model::SearchAllRelatedItemsResult;
  using OutcomeType = Model::SearchAllRelatedItemsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchAllRelatedItems(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectCases
}  // namespace Aws
