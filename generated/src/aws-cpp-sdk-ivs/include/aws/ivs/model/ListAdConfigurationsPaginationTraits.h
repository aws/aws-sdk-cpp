/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVSServiceClientModel.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/ListAdConfigurationsRequest.h>
#include <aws/ivs/model/ListAdConfigurationsResult.h>

namespace Aws {
namespace IVS {
namespace Pagination {

template <typename Client = IVSClient>
struct ListAdConfigurationsPaginationTraits {
  using RequestType = Model::ListAdConfigurationsRequest;
  using ResultType = Model::ListAdConfigurationsResult;
  using OutcomeType = Model::ListAdConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAdConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IVS
}  // namespace Aws
