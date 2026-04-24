/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurityServiceClientModel.h>
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/GetFindingsRequest.h>
#include <aws/codeguru-security/model/GetFindingsResult.h>

namespace Aws {
namespace CodeGuruSecurity {
namespace Pagination {

template <typename Client = CodeGuruSecurityClient>
struct GetFindingsPaginationTraits {
  using RequestType = Model::GetFindingsRequest;
  using ResultType = Model::GetFindingsResult;
  using OutcomeType = Model::GetFindingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetFindings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeGuruSecurity
}  // namespace Aws
