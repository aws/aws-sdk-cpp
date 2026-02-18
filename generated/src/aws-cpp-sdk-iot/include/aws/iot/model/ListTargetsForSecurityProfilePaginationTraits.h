/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTServiceClientModel.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ListTargetsForSecurityProfileRequest.h>
#include <aws/iot/model/ListTargetsForSecurityProfileResult.h>

namespace Aws {
namespace IoT {
namespace Pagination {

template <typename Client = IoTClient>
struct ListTargetsForSecurityProfilePaginationTraits {
  using RequestType = Model::ListTargetsForSecurityProfileRequest;
  using ResultType = Model::ListTargetsForSecurityProfileResult;
  using OutcomeType = Model::ListTargetsForSecurityProfileOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTargetsForSecurityProfile(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoT
}  // namespace Aws
