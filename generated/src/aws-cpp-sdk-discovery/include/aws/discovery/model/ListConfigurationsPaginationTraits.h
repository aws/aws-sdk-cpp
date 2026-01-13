/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryServiceServiceClientModel.h>
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/ListConfigurationsRequest.h>
#include <aws/discovery/model/ListConfigurationsResult.h>

namespace Aws {
namespace ApplicationDiscoveryService {
namespace Pagination {

template <typename Client = ApplicationDiscoveryServiceClient>
struct ListConfigurationsPaginationTraits {
  using RequestType = Model::ListConfigurationsRequest;
  using ResultType = Model::ListConfigurationsResult;
  using OutcomeType = Model::ListConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
