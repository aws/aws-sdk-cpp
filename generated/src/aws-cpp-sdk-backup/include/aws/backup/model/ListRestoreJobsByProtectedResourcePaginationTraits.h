/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupServiceClientModel.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ListRestoreJobsByProtectedResourceRequest.h>
#include <aws/backup/model/ListRestoreJobsByProtectedResourceResult.h>

namespace Aws {
namespace Backup {
namespace Pagination {

template <typename Client = BackupClient>
struct ListRestoreJobsByProtectedResourcePaginationTraits {
  using RequestType = Model::ListRestoreJobsByProtectedResourceRequest;
  using ResultType = Model::ListRestoreJobsByProtectedResourceResult;
  using OutcomeType = Model::ListRestoreJobsByProtectedResourceOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRestoreJobsByProtectedResource(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Backup
}  // namespace Aws
