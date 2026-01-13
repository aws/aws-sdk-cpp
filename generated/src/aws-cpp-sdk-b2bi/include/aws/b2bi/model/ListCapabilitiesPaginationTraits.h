/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BIServiceClientModel.h>
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/ListCapabilitiesRequest.h>
#include <aws/b2bi/model/ListCapabilitiesResult.h>

namespace Aws {
namespace B2BI {
namespace Pagination {

template <typename Client = B2BIClient>
struct ListCapabilitiesPaginationTraits {
  using RequestType = Model::ListCapabilitiesRequest;
  using ResultType = Model::ListCapabilitiesResult;
  using OutcomeType = Model::ListCapabilitiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCapabilities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace B2BI
}  // namespace Aws
