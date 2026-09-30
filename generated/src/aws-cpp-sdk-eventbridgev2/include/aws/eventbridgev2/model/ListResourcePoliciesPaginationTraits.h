/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridgev2/EventBridgeV2ServiceClientModel.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesRequest.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesResult.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Pagination {

template <typename Client = EventBridgeV2Client>
struct ListResourcePoliciesPaginationTraits {
  using RequestType = Model::ListResourcePoliciesRequest;
  using ResultType = Model::ListResourcePoliciesResult;
  using OutcomeType = Model::ListResourcePoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourcePolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EventBridgeV2
}  // namespace Aws
