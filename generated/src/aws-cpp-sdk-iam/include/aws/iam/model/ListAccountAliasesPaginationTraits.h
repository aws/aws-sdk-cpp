/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAMServiceClientModel.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ListAccountAliasesRequest.h>
#include <aws/iam/model/ListAccountAliasesResult.h>

namespace Aws {
namespace IAM {
namespace Pagination {

template <typename Client = IAMClient>
struct ListAccountAliasesPaginationTraits {
  using RequestType = Model::ListAccountAliasesRequest;
  using ResultType = Model::ListAccountAliasesResult;
  using OutcomeType = Model::ListAccountAliasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccountAliases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace IAM
}  // namespace Aws
