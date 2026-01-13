/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTServiceClientModel.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ListPrincipalThingsV2Request.h>
#include <aws/iot/model/ListPrincipalThingsV2Result.h>

namespace Aws {
namespace IoT {
namespace Pagination {

template <typename Client = IoTClient>
struct ListPrincipalThingsV2PaginationTraits {
  using RequestType = Model::ListPrincipalThingsV2Request;
  using ResultType = Model::ListPrincipalThingsV2Result;
  using OutcomeType = Model::ListPrincipalThingsV2Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPrincipalThingsV2(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoT
}  // namespace Aws
