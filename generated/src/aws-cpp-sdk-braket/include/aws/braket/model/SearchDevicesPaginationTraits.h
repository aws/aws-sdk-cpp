/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketServiceClientModel.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/SearchDevicesRequest.h>
#include <aws/braket/model/SearchDevicesResult.h>

namespace Aws {
namespace Braket {
namespace Pagination {

template <typename Client = BraketClient>
struct SearchDevicesPaginationTraits {
  using RequestType = Model::SearchDevicesRequest;
  using ResultType = Model::SearchDevicesResult;
  using OutcomeType = Model::SearchDevicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchDevices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Braket
}  // namespace Aws
