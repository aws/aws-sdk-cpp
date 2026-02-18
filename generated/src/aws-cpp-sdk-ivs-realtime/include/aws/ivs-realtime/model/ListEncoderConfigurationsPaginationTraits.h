/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/IvsrealtimeServiceClientModel.h>
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/ListEncoderConfigurationsRequest.h>
#include <aws/ivs-realtime/model/ListEncoderConfigurationsResult.h>

namespace Aws {
namespace ivsrealtime {
namespace Pagination {

template <typename Client = IvsrealtimeClient>
struct ListEncoderConfigurationsPaginationTraits {
  using RequestType = Model::ListEncoderConfigurationsRequest;
  using ResultType = Model::ListEncoderConfigurationsResult;
  using OutcomeType = Model::ListEncoderConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEncoderConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ivsrealtime
}  // namespace Aws
