/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2ServiceClientModel.h>
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/ListMembersRequest.h>
#include <aws/macie2/model/ListMembersResult.h>

namespace Aws {
namespace Macie2 {
namespace Pagination {

template <typename Client = Macie2Client>
struct ListMembersPaginationTraits {
  using RequestType = Model::ListMembersRequest;
  using ResultType = Model::ListMembersResult;
  using OutcomeType = Model::ListMembersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMembers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Macie2
}  // namespace Aws
