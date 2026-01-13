/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManagerServiceClientModel.h>
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/GetDelegationsRequest.h>
#include <aws/auditmanager/model/GetDelegationsResult.h>

namespace Aws {
namespace AuditManager {
namespace Pagination {

template <typename Client = AuditManagerClient>
struct GetDelegationsPaginationTraits {
  using RequestType = Model::GetDelegationsRequest;
  using ResultType = Model::GetDelegationsResult;
  using OutcomeType = Model::GetDelegationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetDelegations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AuditManager
}  // namespace Aws
