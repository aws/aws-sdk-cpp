/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfilesServiceClientModel.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ListRecommendersRequest.h>
#include <aws/customer-profiles/model/ListRecommendersResult.h>

namespace Aws {
namespace CustomerProfiles {
namespace Pagination {

template <typename Client = CustomerProfilesClient>
struct ListRecommendersPaginationTraits {
  using RequestType = Model::ListRecommendersRequest;
  using ResultType = Model::ListRecommendersResult;
  using OutcomeType = Model::ListRecommendersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommenders(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CustomerProfiles
}  // namespace Aws
