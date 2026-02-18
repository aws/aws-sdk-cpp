/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVSServiceClientModel.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/ListStreamSessionsRequest.h>
#include <aws/ivs/model/ListStreamSessionsResult.h>

namespace Aws {
namespace IVS {
namespace Pagination {

template <typename Client = IVSClient>
struct ListStreamSessionsPaginationTraits {
  using RequestType = Model::ListStreamSessionsRequest;
  using ResultType = Model::ListStreamSessionsResult;
  using OutcomeType = Model::ListStreamSessionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStreamSessions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IVS
}  // namespace Aws
