/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingServiceServiceClientModel.h>
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/GetMigrationsRequest.h>
#include <aws/lex-models/model/GetMigrationsResult.h>

namespace Aws {
namespace LexModelBuildingService {
namespace Pagination {

template <typename Client = LexModelBuildingServiceClient>
struct GetMigrationsPaginationTraits {
  using RequestType = Model::GetMigrationsRequest;
  using ResultType = Model::GetMigrationsResult;
  using OutcomeType = Model::GetMigrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetMigrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LexModelBuildingService
}  // namespace Aws
