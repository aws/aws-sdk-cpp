/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTServiceClientModel.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ListDomainConfigurationsRequest.h>
#include <aws/iot/model/ListDomainConfigurationsResult.h>

namespace Aws {
namespace IoT {
namespace Pagination {

template <typename Client = IoTClient>
struct ListDomainConfigurationsPaginationTraits {
  using RequestType = Model::ListDomainConfigurationsRequest;
  using ResultType = Model::ListDomainConfigurationsResult;
  using OutcomeType = Model::ListDomainConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDomainConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace IoT
}  // namespace Aws
