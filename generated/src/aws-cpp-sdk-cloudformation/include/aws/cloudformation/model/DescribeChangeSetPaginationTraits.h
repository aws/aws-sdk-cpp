/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormationServiceClientModel.h>
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/DescribeChangeSetRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetResult.h>

namespace Aws {
namespace CloudFormation {
namespace Pagination {

template <typename Client = CloudFormationClient>
struct DescribeChangeSetPaginationTraits {
  using RequestType = Model::DescribeChangeSetRequest;
  using ResultType = Model::DescribeChangeSetResult;
  using OutcomeType = Model::DescribeChangeSetOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeChangeSet(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudFormation
}  // namespace Aws
