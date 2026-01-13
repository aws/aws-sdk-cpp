/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupServiceClientModel.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ListBackupPlansRequest.h>
#include <aws/backup/model/ListBackupPlansResult.h>

namespace Aws {
namespace Backup {
namespace Pagination {

template <typename Client = BackupClient>
struct ListBackupPlansPaginationTraits {
  using RequestType = Model::ListBackupPlansRequest;
  using ResultType = Model::ListBackupPlansResult;
  using OutcomeType = Model::ListBackupPlansOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBackupPlans(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Backup
}  // namespace Aws
