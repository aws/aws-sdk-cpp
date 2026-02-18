/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigServiceClientModel.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsRequest.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsResult.h>

namespace Aws {
namespace AppConfig {
namespace Pagination {

template <typename Client = AppConfigClient>
struct ListHostedConfigurationVersionsPaginationTraits {
  using RequestType = Model::ListHostedConfigurationVersionsRequest;
  using ResultType = Model::ListHostedConfigurationVersionsResult;
  using OutcomeType = Model::ListHostedConfigurationVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHostedConfigurationVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppConfig
}  // namespace Aws
