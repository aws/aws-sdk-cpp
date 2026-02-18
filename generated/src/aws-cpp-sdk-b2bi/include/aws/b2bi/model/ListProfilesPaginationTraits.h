/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BIServiceClientModel.h>
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/ListProfilesRequest.h>
#include <aws/b2bi/model/ListProfilesResult.h>

namespace Aws {
namespace B2BI {
namespace Pagination {

template <typename Client = B2BIClient>
struct ListProfilesPaginationTraits {
  using RequestType = Model::ListProfilesRequest;
  using ResultType = Model::ListProfilesResult;
  using OutcomeType = Model::ListProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace B2BI
}  // namespace Aws
