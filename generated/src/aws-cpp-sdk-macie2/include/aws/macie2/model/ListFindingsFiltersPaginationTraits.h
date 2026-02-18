/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2ServiceClientModel.h>
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/ListFindingsFiltersRequest.h>
#include <aws/macie2/model/ListFindingsFiltersResult.h>

namespace Aws {
namespace Macie2 {
namespace Pagination {

template <typename Client = Macie2Client>
struct ListFindingsFiltersPaginationTraits {
  using RequestType = Model::ListFindingsFiltersRequest;
  using ResultType = Model::ListFindingsFiltersResult;
  using OutcomeType = Model::ListFindingsFiltersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFindingsFilters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Macie2
}  // namespace Aws
