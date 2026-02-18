/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMSServiceClientModel.h>
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ListComplianceStatusRequest.h>
#include <aws/fms/model/ListComplianceStatusResult.h>

namespace Aws {
namespace FMS {
namespace Pagination {

template <typename Client = FMSClient>
struct ListComplianceStatusPaginationTraits {
  using RequestType = Model::ListComplianceStatusRequest;
  using ResultType = Model::ListComplianceStatusResult;
  using OutcomeType = Model::ListComplianceStatusOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListComplianceStatus(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FMS
}  // namespace Aws
