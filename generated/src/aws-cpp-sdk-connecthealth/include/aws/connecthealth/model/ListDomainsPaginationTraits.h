/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthServiceClientModel.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ListDomainsRequest.h>
#include <aws/connecthealth/model/ListDomainsResult.h>

namespace Aws {
namespace ConnectHealth {
namespace Pagination {

template <typename Client = ConnectHealthClient>
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
}  // namespace ConnectHealth
}  // namespace Aws
