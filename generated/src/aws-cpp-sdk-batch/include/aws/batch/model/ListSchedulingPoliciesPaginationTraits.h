/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchServiceClientModel.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/ListSchedulingPoliciesRequest.h>
#include <aws/batch/model/ListSchedulingPoliciesResult.h>

namespace Aws {
namespace Batch {
namespace Pagination {

template <typename Client = BatchClient>
struct ListSchedulingPoliciesPaginationTraits {
  using RequestType = Model::ListSchedulingPoliciesRequest;
  using ResultType = Model::ListSchedulingPoliciesResult;
  using OutcomeType = Model::ListSchedulingPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSchedulingPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Batch
}  // namespace Aws
