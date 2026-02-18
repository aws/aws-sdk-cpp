/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunnelingServiceClientModel.h>
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/model/ListTunnelsRequest.h>
#include <aws/iotsecuretunneling/model/ListTunnelsResult.h>

namespace Aws {
namespace IoTSecureTunneling {
namespace Pagination {

template <typename Client = IoTSecureTunnelingClient>
struct ListTunnelsPaginationTraits {
  using RequestType = Model::ListTunnelsRequest;
  using ResultType = Model::ListTunnelsResult;
  using OutcomeType = Model::ListTunnelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTunnels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTSecureTunneling
}  // namespace Aws
