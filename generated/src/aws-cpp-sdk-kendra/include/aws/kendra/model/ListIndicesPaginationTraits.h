/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/KendraServiceClientModel.h>
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/ListIndicesRequest.h>
#include <aws/kendra/model/ListIndicesResult.h>

namespace Aws {
namespace kendra {
namespace Pagination {

template <typename Client = KendraClient>
struct ListIndicesPaginationTraits {
  using RequestType = Model::ListIndicesRequest;
  using ResultType = Model::ListIndicesResult;
  using OutcomeType = Model::ListIndicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIndices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace kendra
}  // namespace Aws
