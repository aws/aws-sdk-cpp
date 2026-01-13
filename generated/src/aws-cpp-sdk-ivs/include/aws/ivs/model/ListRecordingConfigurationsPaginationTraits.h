/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVSServiceClientModel.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/ListRecordingConfigurationsRequest.h>
#include <aws/ivs/model/ListRecordingConfigurationsResult.h>

namespace Aws {
namespace IVS {
namespace Pagination {

template <typename Client = IVSClient>
struct ListRecordingConfigurationsPaginationTraits {
  using RequestType = Model::ListRecordingConfigurationsRequest;
  using ResultType = Model::ListRecordingConfigurationsResult;
  using OutcomeType = Model::ListRecordingConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecordingConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IVS
}  // namespace Aws
