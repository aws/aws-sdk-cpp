/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGatewayServiceClientModel.h>
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/ListVirtualMachinesRequest.h>
#include <aws/backup-gateway/model/ListVirtualMachinesResult.h>

namespace Aws {
namespace BackupGateway {
namespace Pagination {

template <typename Client = BackupGatewayClient>
struct ListVirtualMachinesPaginationTraits {
  using RequestType = Model::ListVirtualMachinesRequest;
  using ResultType = Model::ListVirtualMachinesResult;
  using OutcomeType = Model::ListVirtualMachinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVirtualMachines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BackupGateway
}  // namespace Aws
