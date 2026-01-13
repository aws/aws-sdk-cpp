/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTServiceClientModel.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ListAttachedPoliciesRequest.h>
#include <aws/iot/model/ListAttachedPoliciesResult.h>

namespace Aws {
namespace IoT {
namespace Pagination {

template <typename Client = IoTClient>
struct ListAttachedPoliciesPaginationTraits {
  using RequestType = Model::ListAttachedPoliciesRequest;
  using ResultType = Model::ListAttachedPoliciesResult;
  using OutcomeType = Model::ListAttachedPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAttachedPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace IoT
}  // namespace Aws
