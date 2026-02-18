/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsServiceServiceClientModel.h>
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsResult.h>

namespace Aws {
namespace AppIntegrationsService {
namespace Pagination {

template <typename Client = AppIntegrationsServiceClient>
struct ListEventIntegrationAssociationsPaginationTraits {
  using RequestType = Model::ListEventIntegrationAssociationsRequest;
  using ResultType = Model::ListEventIntegrationAssociationsResult;
  using OutcomeType = Model::ListEventIntegrationAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEventIntegrationAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppIntegrationsService
}  // namespace Aws
