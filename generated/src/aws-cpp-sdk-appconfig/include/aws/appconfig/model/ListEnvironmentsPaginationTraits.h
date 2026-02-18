/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigServiceClientModel.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ListEnvironmentsRequest.h>
#include <aws/appconfig/model/ListEnvironmentsResult.h>

namespace Aws {
namespace AppConfig {
namespace Pagination {

template <typename Client = AppConfigClient>
struct ListEnvironmentsPaginationTraits {
  using RequestType = Model::ListEnvironmentsRequest;
  using ResultType = Model::ListEnvironmentsResult;
  using OutcomeType = Model::ListEnvironmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEnvironments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppConfig
}  // namespace Aws
