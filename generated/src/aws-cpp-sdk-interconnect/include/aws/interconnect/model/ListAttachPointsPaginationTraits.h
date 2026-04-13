/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/interconnect/InterconnectServiceClientModel.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/ListAttachPointsRequest.h>
#include <aws/interconnect/model/ListAttachPointsResult.h>

namespace Aws {
namespace Interconnect {
namespace Pagination {

template <typename Client = InterconnectClient>
struct ListAttachPointsPaginationTraits {
  using RequestType = Model::ListAttachPointsRequest;
  using ResultType = Model::ListAttachPointsResult;
  using OutcomeType = Model::ListAttachPointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAttachPoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Interconnect
}  // namespace Aws
