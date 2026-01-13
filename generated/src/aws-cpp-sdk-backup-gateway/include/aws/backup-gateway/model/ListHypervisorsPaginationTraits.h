/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGatewayServiceClientModel.h>
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/ListHypervisorsRequest.h>
#include <aws/backup-gateway/model/ListHypervisorsResult.h>

namespace Aws {
namespace BackupGateway {
namespace Pagination {

template <typename Client = BackupGatewayClient>
struct ListHypervisorsPaginationTraits {
  using RequestType = Model::ListHypervisorsRequest;
  using ResultType = Model::ListHypervisorsResult;
  using OutcomeType = Model::ListHypervisorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHypervisors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BackupGateway
}  // namespace Aws
