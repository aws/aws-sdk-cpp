/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWiseServiceClientModel.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/ListDecoderManifestSignalsRequest.h>
#include <aws/iotfleetwise/model/ListDecoderManifestSignalsResult.h>

namespace Aws {
namespace IoTFleetWise {
namespace Pagination {

template <typename Client = IoTFleetWiseClient>
struct ListDecoderManifestSignalsPaginationTraits {
  using RequestType = Model::ListDecoderManifestSignalsRequest;
  using ResultType = Model::ListDecoderManifestSignalsResult;
  using OutcomeType = Model::ListDecoderManifestSignalsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDecoderManifestSignals(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTFleetWise
}  // namespace Aws
