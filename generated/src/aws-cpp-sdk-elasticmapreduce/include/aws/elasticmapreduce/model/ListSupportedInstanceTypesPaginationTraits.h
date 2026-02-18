/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMRServiceClientModel.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ListSupportedInstanceTypesRequest.h>
#include <aws/elasticmapreduce/model/ListSupportedInstanceTypesResult.h>

namespace Aws {
namespace EMR {
namespace Pagination {

template <typename Client = EMRClient>
struct ListSupportedInstanceTypesPaginationTraits {
  using RequestType = Model::ListSupportedInstanceTypesRequest;
  using ResultType = Model::ListSupportedInstanceTypesResult;
  using OutcomeType = Model::ListSupportedInstanceTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSupportedInstanceTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace EMR
}  // namespace Aws
