/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHubServiceClientModel.h>
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesRequest.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesResult.h>

namespace Aws {
namespace MigrationHub {
namespace Pagination {

template <typename Client = MigrationHubClient>
struct ListApplicationStatesPaginationTraits {
  using RequestType = Model::ListApplicationStatesRequest;
  using ResultType = Model::ListApplicationStatesResult;
  using OutcomeType = Model::ListApplicationStatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplicationStates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHub
}  // namespace Aws
