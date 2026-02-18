/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchServiceServiceClientModel.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DescribePackagesRequest.h>
#include <aws/es/model/DescribePackagesResult.h>

namespace Aws {
namespace ElasticsearchService {
namespace Pagination {

template <typename Client = ElasticsearchServiceClient>
struct DescribePackagesPaginationTraits {
  using RequestType = Model::DescribePackagesRequest;
  using ResultType = Model::DescribePackagesResult;
  using OutcomeType = Model::DescribePackagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribePackages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ElasticsearchService
}  // namespace Aws
