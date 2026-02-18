/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKSServiceClientModel.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ListAssociatedAccessPoliciesRequest.h>
#include <aws/eks/model/ListAssociatedAccessPoliciesResult.h>

namespace Aws {
namespace EKS {
namespace Pagination {

template <typename Client = EKSClient>
struct ListAssociatedAccessPoliciesPaginationTraits {
  using RequestType = Model::ListAssociatedAccessPoliciesRequest;
  using ResultType = Model::ListAssociatedAccessPoliciesResult;
  using OutcomeType = Model::ListAssociatedAccessPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssociatedAccessPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EKS
}  // namespace Aws
