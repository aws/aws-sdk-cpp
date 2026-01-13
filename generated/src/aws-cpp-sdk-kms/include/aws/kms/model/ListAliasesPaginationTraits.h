/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMSServiceClientModel.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/ListAliasesRequest.h>
#include <aws/kms/model/ListAliasesResult.h>

namespace Aws {
namespace KMS {
namespace Pagination {

template <typename Client = KMSClient>
struct ListAliasesPaginationTraits {
  using RequestType = Model::ListAliasesRequest;
  using ResultType = Model::ListAliasesResult;
  using OutcomeType = Model::ListAliasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAliases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace KMS
}  // namespace Aws
