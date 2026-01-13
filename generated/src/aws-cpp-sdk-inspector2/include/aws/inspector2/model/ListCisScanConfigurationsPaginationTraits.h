/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2ServiceClientModel.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ListCisScanConfigurationsRequest.h>
#include <aws/inspector2/model/ListCisScanConfigurationsResult.h>

namespace Aws {
namespace Inspector2 {
namespace Pagination {

template <typename Client = Inspector2Client>
struct ListCisScanConfigurationsPaginationTraits {
  using RequestType = Model::ListCisScanConfigurationsRequest;
  using ResultType = Model::ListCisScanConfigurationsResult;
  using OutcomeType = Model::ListCisScanConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCisScanConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Inspector2
}  // namespace Aws
