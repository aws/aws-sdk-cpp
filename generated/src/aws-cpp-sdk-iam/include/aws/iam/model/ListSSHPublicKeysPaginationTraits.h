/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAMServiceClientModel.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ListSSHPublicKeysRequest.h>
#include <aws/iam/model/ListSSHPublicKeysResult.h>

namespace Aws {
namespace IAM {
namespace Pagination {

template <typename Client = IAMClient>
struct ListSSHPublicKeysPaginationTraits {
  using RequestType = Model::ListSSHPublicKeysRequest;
  using ResultType = Model::ListSSHPublicKeysResult;
  using OutcomeType = Model::ListSSHPublicKeysOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSSHPublicKeys(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace IAM
}  // namespace Aws
