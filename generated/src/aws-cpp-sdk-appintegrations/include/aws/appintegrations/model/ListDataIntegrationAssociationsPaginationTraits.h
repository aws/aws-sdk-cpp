/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsServiceServiceClientModel.h>
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsResult.h>

namespace Aws {
namespace AppIntegrationsService {
namespace Pagination {

template <typename Client = AppIntegrationsServiceClient>
struct ListDataIntegrationAssociationsPaginationTraits {
  using RequestType = Model::ListDataIntegrationAssociationsRequest;
  using ResultType = Model::ListDataIntegrationAssociationsResult;
  using OutcomeType = Model::ListDataIntegrationAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataIntegrationAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppIntegrationsService
}  // namespace Aws
