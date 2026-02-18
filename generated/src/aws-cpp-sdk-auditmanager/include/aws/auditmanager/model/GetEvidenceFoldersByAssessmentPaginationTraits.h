/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManagerServiceClientModel.h>
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentRequest.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentResult.h>

namespace Aws {
namespace AuditManager {
namespace Pagination {

template <typename Client = AuditManagerClient>
struct GetEvidenceFoldersByAssessmentPaginationTraits {
  using RequestType = Model::GetEvidenceFoldersByAssessmentRequest;
  using ResultType = Model::GetEvidenceFoldersByAssessmentResult;
  using OutcomeType = Model::GetEvidenceFoldersByAssessmentOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetEvidenceFoldersByAssessment(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AuditManager
}  // namespace Aws
