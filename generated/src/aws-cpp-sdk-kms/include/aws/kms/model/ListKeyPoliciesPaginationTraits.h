/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMSServiceClientModel.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/ListKeyPoliciesRequest.h>
#include <aws/kms/model/ListKeyPoliciesResult.h>

namespace Aws {
namespace KMS {
namespace Pagination {

template <typename Client = KMSClient>
struct ListKeyPoliciesPaginationTraits {
  using RequestType = Model::ListKeyPoliciesRequest;
  using ResultType = Model::ListKeyPoliciesResult;
  using OutcomeType = Model::ListKeyPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListKeyPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace KMS
}  // namespace Aws
