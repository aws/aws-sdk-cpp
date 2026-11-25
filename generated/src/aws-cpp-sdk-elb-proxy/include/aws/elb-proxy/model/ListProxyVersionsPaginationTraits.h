/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elb-proxy/ELBProxyServiceClientModel.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ListProxyVersionsRequest.h>
#include <aws/elb-proxy/model/ListProxyVersionsResult.h>

namespace Aws {
namespace ELBProxy {
namespace Pagination {

template <typename Client = ELBProxyClient>
struct ListProxyVersionsPaginationTraits {
  using RequestType = Model::ListProxyVersionsRequest;
  using ResultType = Model::ListProxyVersionsResult;
  using OutcomeType = Model::ListProxyVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProxyVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ELBProxy
}  // namespace Aws
