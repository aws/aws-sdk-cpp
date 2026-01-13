/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrationsServiceClientModel.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ListAccountAssociationsRequest.h>
#include <aws/iot-managed-integrations/model/ListAccountAssociationsResult.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Pagination {

template <typename Client = IoTManagedIntegrationsClient>
struct ListAccountAssociationsPaginationTraits {
  using RequestType = Model::ListAccountAssociationsRequest;
  using ResultType = Model::ListAccountAssociationsResult;
  using OutcomeType = Model::ListAccountAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccountAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTManagedIntegrations
}  // namespace Aws
