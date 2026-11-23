/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSxServiceClientModel.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DescribeSnapmirrorPoliciesRequest.h>
#include <aws/fsx/model/DescribeSnapmirrorPoliciesResult.h>

namespace Aws {
namespace FSx {
namespace Pagination {

template <typename Client = FSxClient>
struct DescribeSnapmirrorPoliciesPaginationTraits {
  using RequestType = Model::DescribeSnapmirrorPoliciesRequest;
  using ResultType = Model::DescribeSnapmirrorPoliciesResult;
  using OutcomeType = Model::DescribeSnapmirrorPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeSnapmirrorPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FSx
}  // namespace Aws
