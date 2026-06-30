/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigServiceClientModel.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ListExperimentDefinitionsRequest.h>
#include <aws/appconfig/model/ListExperimentDefinitionsResult.h>

namespace Aws {
namespace AppConfig {
namespace Pagination {

template <typename Client = AppConfigClient>
struct ListExperimentDefinitionsPaginationTraits {
  using RequestType = Model::ListExperimentDefinitionsRequest;
  using ResultType = Model::ListExperimentDefinitionsResult;
  using OutcomeType = Model::ListExperimentDefinitionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExperimentDefinitions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppConfig
}  // namespace Aws
