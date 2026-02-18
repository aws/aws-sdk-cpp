/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesServiceClientModel.h>
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/GetCaseAuditEventsRequest.h>
#include <aws/connectcases/model/GetCaseAuditEventsResult.h>

namespace Aws {
namespace ConnectCases {
namespace Pagination {

template <typename Client = ConnectCasesClient>
struct GetCaseAuditEventsPaginationTraits {
  using RequestType = Model::GetCaseAuditEventsRequest;
  using ResultType = Model::GetCaseAuditEventsResult;
  using OutcomeType = Model::GetCaseAuditEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetCaseAuditEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectCases
}  // namespace Aws
