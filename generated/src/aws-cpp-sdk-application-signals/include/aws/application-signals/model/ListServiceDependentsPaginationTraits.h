/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsServiceClientModel.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ListServiceDependentsRequest.h>
#include <aws/application-signals/model/ListServiceDependentsResult.h>

namespace Aws {
namespace ApplicationSignals {
namespace Pagination {

template <typename Client = ApplicationSignalsClient>
struct ListServiceDependentsPaginationTraits {
  using RequestType = Model::ListServiceDependentsRequest;
  using ResultType = Model::ListServiceDependentsResult;
  using OutcomeType = Model::ListServiceDependentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListServiceDependents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationSignals
}  // namespace Aws
