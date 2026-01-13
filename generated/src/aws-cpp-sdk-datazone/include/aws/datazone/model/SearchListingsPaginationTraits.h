/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZoneServiceClientModel.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/SearchListingsRequest.h>
#include <aws/datazone/model/SearchListingsResult.h>

namespace Aws {
namespace DataZone {
namespace Pagination {

template <typename Client = DataZoneClient>
struct SearchListingsPaginationTraits {
  using RequestType = Model::SearchListingsRequest;
  using ResultType = Model::SearchListingsResult;
  using OutcomeType = Model::SearchListingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchListings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataZone
}  // namespace Aws
