/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrationsServiceClientModel.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ListManagedThingAccountAssociationsRequest.h>
#include <aws/iot-managed-integrations/model/ListManagedThingAccountAssociationsResult.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Pagination {

template <typename Client = IoTManagedIntegrationsClient>
struct ListManagedThingAccountAssociationsPaginationTraits {
  using RequestType = Model::ListManagedThingAccountAssociationsRequest;
  using ResultType = Model::ListManagedThingAccountAssociationsResult;
  using OutcomeType = Model::ListManagedThingAccountAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListManagedThingAccountAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTManagedIntegrations
}  // namespace Aws
