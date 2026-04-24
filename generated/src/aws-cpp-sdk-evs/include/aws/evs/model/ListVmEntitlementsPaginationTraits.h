/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVSServiceClientModel.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/ListVmEntitlementsRequest.h>
#include <aws/evs/model/ListVmEntitlementsResult.h>

namespace Aws {
namespace EVS {
namespace Pagination {

template <typename Client = EVSClient>
struct ListVmEntitlementsPaginationTraits {
  using RequestType = Model::ListVmEntitlementsRequest;
  using ResultType = Model::ListVmEntitlementsResult;
  using OutcomeType = Model::ListVmEntitlementsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVmEntitlements(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EVS
}  // namespace Aws
