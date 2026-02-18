/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunnerServiceClientModel.h>
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/DescribeCustomDomainsRequest.h>
#include <aws/apprunner/model/DescribeCustomDomainsResult.h>

namespace Aws {
namespace AppRunner {
namespace Pagination {

template <typename Client = AppRunnerClient>
struct DescribeCustomDomainsPaginationTraits {
  using RequestType = Model::DescribeCustomDomainsRequest;
  using ResultType = Model::DescribeCustomDomainsResult;
  using OutcomeType = Model::DescribeCustomDomainsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeCustomDomains(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppRunner
}  // namespace Aws
