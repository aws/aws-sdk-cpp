/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchServiceServiceClientModel.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DescribeInboundCrossClusterSearchConnectionsRequest.h>
#include <aws/es/model/DescribeInboundCrossClusterSearchConnectionsResult.h>

namespace Aws {
namespace ElasticsearchService {
namespace Pagination {

template <typename Client = ElasticsearchServiceClient>
struct DescribeInboundCrossClusterSearchConnectionsPaginationTraits {
  using RequestType = Model::DescribeInboundCrossClusterSearchConnectionsRequest;
  using ResultType = Model::DescribeInboundCrossClusterSearchConnectionsResult;
  using OutcomeType = Model::DescribeInboundCrossClusterSearchConnectionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->DescribeInboundCrossClusterSearchConnections(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ElasticsearchService
}  // namespace Aws
