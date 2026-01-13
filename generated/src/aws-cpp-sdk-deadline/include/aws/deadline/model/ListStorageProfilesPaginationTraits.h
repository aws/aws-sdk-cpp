/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/DeadlineServiceClientModel.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/ListStorageProfilesRequest.h>
#include <aws/deadline/model/ListStorageProfilesResult.h>

namespace Aws {
namespace deadline {
namespace Pagination {

template <typename Client = DeadlineClient>
struct ListStorageProfilesPaginationTraits {
  using RequestType = Model::ListStorageProfilesRequest;
  using ResultType = Model::ListStorageProfilesResult;
  using OutcomeType = Model::ListStorageProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStorageProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace deadline
}  // namespace Aws
