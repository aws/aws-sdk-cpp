/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/KendraServiceClientModel.h>
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/ListDataSourcesRequest.h>
#include <aws/kendra/model/ListDataSourcesResult.h>

namespace Aws {
namespace kendra {
namespace Pagination {

template <typename Client = KendraClient>
struct ListDataSourcesPaginationTraits {
  using RequestType = Model::ListDataSourcesRequest;
  using ResultType = Model::ListDataSourcesResult;
  using OutcomeType = Model::ListDataSourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataSources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace kendra
}  // namespace Aws
