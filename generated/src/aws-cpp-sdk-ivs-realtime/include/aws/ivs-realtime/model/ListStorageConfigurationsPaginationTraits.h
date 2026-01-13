/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/IvsrealtimeServiceClientModel.h>
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/ListStorageConfigurationsRequest.h>
#include <aws/ivs-realtime/model/ListStorageConfigurationsResult.h>

namespace Aws {
namespace ivsrealtime {
namespace Pagination {

template <typename Client = IvsrealtimeClient>
struct ListStorageConfigurationsPaginationTraits {
  using RequestType = Model::ListStorageConfigurationsRequest;
  using ResultType = Model::ListStorageConfigurationsResult;
  using OutcomeType = Model::ListStorageConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStorageConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ivsrealtime
}  // namespace Aws
