/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormationServiceClientModel.h>
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/ListStackRefactorsRequest.h>
#include <aws/cloudformation/model/ListStackRefactorsResult.h>

namespace Aws {
namespace CloudFormation {
namespace Pagination {

template <typename Client = CloudFormationClient>
struct ListStackRefactorsPaginationTraits {
  using RequestType = Model::ListStackRefactorsRequest;
  using ResultType = Model::ListStackRefactorsResult;
  using OutcomeType = Model::ListStackRefactorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStackRefactors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudFormation
}  // namespace Aws
