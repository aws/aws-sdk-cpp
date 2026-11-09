/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVSServiceClientModel.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/ListFailoverSlateConfigurationsRequest.h>
#include <aws/ivs/model/ListFailoverSlateConfigurationsResult.h>

namespace Aws {
namespace IVS {
namespace Pagination {

template <typename Client = IVSClient>
struct ListFailoverSlateConfigurationsPaginationTraits {
  using RequestType = Model::ListFailoverSlateConfigurationsRequest;
  using ResultType = Model::ListFailoverSlateConfigurationsResult;
  using OutcomeType = Model::ListFailoverSlateConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFailoverSlateConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IVS
}  // namespace Aws
