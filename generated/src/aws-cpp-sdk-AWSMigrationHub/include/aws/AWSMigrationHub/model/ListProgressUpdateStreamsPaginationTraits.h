/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHubServiceClientModel.h>
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsRequest.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsResult.h>

namespace Aws {
namespace MigrationHub {
namespace Pagination {

template <typename Client = MigrationHubClient>
struct ListProgressUpdateStreamsPaginationTraits {
  using RequestType = Model::ListProgressUpdateStreamsRequest;
  using ResultType = Model::ListProgressUpdateStreamsResult;
  using OutcomeType = Model::ListProgressUpdateStreamsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProgressUpdateStreams(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHub
}  // namespace Aws
