/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManagerServiceClientModel.h>
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainRequest.h>
#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainResult.h>

namespace Aws {
namespace AuditManager {
namespace Pagination {

template <typename Client = AuditManagerClient>
struct ListAssessmentControlInsightsByControlDomainPaginationTraits {
  using RequestType = Model::ListAssessmentControlInsightsByControlDomainRequest;
  using ResultType = Model::ListAssessmentControlInsightsByControlDomainResult;
  using OutcomeType = Model::ListAssessmentControlInsightsByControlDomainOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListAssessmentControlInsightsByControlDomain(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AuditManager
}  // namespace Aws
