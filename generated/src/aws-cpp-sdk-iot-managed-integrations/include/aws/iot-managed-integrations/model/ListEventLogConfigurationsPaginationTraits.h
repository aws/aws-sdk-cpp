/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrationsServiceClientModel.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ListEventLogConfigurationsRequest.h>
#include <aws/iot-managed-integrations/model/ListEventLogConfigurationsResult.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Pagination {

template <typename Client = IoTManagedIntegrationsClient>
struct ListEventLogConfigurationsPaginationTraits {
  using RequestType = Model::ListEventLogConfigurationsRequest;
  using ResultType = Model::ListEventLogConfigurationsResult;
  using OutcomeType = Model::ListEventLogConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEventLogConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTManagedIntegrations
}  // namespace Aws
