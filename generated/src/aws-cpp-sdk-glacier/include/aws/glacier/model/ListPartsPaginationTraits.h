/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/GlacierServiceClientModel.h>
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/ListPartsRequest.h>
#include <aws/glacier/model/ListPartsResult.h>

namespace Aws {
namespace Glacier {
namespace Pagination {

template <typename Client = GlacierClient>
struct ListPartsPaginationTraits {
  using RequestType = Model::ListPartsRequest;
  using ResultType = Model::ListPartsResult;
  using OutcomeType = Model::ListPartsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListParts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Glacier
}  // namespace Aws
