/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/GlacierServiceClientModel.h>
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/ListVaultsRequest.h>
#include <aws/glacier/model/ListVaultsResult.h>

namespace Aws {
namespace Glacier {
namespace Pagination {

template <typename Client = GlacierClient>
struct ListVaultsPaginationTraits {
  using RequestType = Model::ListVaultsRequest;
  using ResultType = Model::ListVaultsResult;
  using OutcomeType = Model::ListVaultsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVaults(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Glacier
}  // namespace Aws
