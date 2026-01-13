/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalogServiceClientModel.h>
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/ListDomainsRequest.h>
#include <aws/controlcatalog/model/ListDomainsResult.h>

namespace Aws {
namespace ControlCatalog {
namespace Pagination {

template <typename Client = ControlCatalogClient>
struct ListDomainsPaginationTraits {
  using RequestType = Model::ListDomainsRequest;
  using ResultType = Model::ListDomainsResult;
  using OutcomeType = Model::ListDomainsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDomains(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ControlCatalog
}  // namespace Aws
