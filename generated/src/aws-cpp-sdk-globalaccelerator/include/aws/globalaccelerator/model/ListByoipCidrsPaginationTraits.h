/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAcceleratorServiceClientModel.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/ListByoipCidrsRequest.h>
#include <aws/globalaccelerator/model/ListByoipCidrsResult.h>

namespace Aws {
namespace GlobalAccelerator {
namespace Pagination {

template <typename Client = GlobalAcceleratorClient>
struct ListByoipCidrsPaginationTraits {
  using RequestType = Model::ListByoipCidrsRequest;
  using ResultType = Model::ListByoipCidrsResult;
  using OutcomeType = Model::ListByoipCidrsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListByoipCidrs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GlobalAccelerator
}  // namespace Aws
