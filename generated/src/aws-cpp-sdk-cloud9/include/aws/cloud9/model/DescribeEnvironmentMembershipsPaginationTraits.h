/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9ServiceClientModel.h>
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsResult.h>

namespace Aws {
namespace Cloud9 {
namespace Pagination {

template <typename Client = Cloud9Client>
struct DescribeEnvironmentMembershipsPaginationTraits {
  using RequestType = Model::DescribeEnvironmentMembershipsRequest;
  using ResultType = Model::DescribeEnvironmentMembershipsResult;
  using OutcomeType = Model::DescribeEnvironmentMembershipsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeEnvironmentMemberships(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Cloud9
}  // namespace Aws
