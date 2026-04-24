/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2ServiceClientModel.h>
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/ListSensitivityInspectionTemplatesRequest.h>
#include <aws/macie2/model/ListSensitivityInspectionTemplatesResult.h>

namespace Aws {
namespace Macie2 {
namespace Pagination {

template <typename Client = Macie2Client>
struct ListSensitivityInspectionTemplatesPaginationTraits {
  using RequestType = Model::ListSensitivityInspectionTemplatesRequest;
  using ResultType = Model::ListSensitivityInspectionTemplatesResult;
  using OutcomeType = Model::ListSensitivityInspectionTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSensitivityInspectionTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Macie2
}  // namespace Aws
