/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/GlueServiceClientModel.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ListUsageProfilesRequest.h>
#include <aws/glue/model/ListUsageProfilesResult.h>

namespace Aws {
namespace Glue {
namespace Pagination {

template <typename Client = GlueClient>
struct ListUsageProfilesPaginationTraits {
  using RequestType = Model::ListUsageProfilesRequest;
  using ResultType = Model::ListUsageProfilesResult;
  using OutcomeType = Model::ListUsageProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListUsageProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Glue
}  // namespace Aws
