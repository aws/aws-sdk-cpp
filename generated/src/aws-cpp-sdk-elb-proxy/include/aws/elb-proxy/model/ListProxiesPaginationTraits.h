/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elb-proxy/ELBProxyServiceClientModel.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ListProxiesRequest.h>
#include <aws/elb-proxy/model/ListProxiesResult.h>

namespace Aws {
namespace ELBProxy {
namespace Pagination {

template <typename Client = ELBProxyClient>
struct ListProxiesPaginationTraits {
  using RequestType = Model::ListProxiesRequest;
  using ResultType = Model::ListProxiesResult;
  using OutcomeType = Model::ListProxiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProxies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ELBProxy
}  // namespace Aws
