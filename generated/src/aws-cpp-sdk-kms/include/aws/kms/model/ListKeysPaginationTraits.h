/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMSServiceClientModel.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/ListKeysRequest.h>
#include <aws/kms/model/ListKeysResult.h>

namespace Aws {
namespace KMS {
namespace Pagination {

template <typename Client = KMSClient>
struct ListKeysPaginationTraits {
  using RequestType = Model::ListKeysRequest;
  using ResultType = Model::ListKeysResult;
  using OutcomeType = Model::ListKeysOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListKeys(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace KMS
}  // namespace Aws
