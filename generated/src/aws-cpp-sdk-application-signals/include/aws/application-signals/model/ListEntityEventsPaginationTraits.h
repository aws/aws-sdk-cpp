/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsServiceClientModel.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ListEntityEventsRequest.h>
#include <aws/application-signals/model/ListEntityEventsResult.h>

namespace Aws {
namespace ApplicationSignals {
namespace Pagination {

template <typename Client = ApplicationSignalsClient>
struct ListEntityEventsPaginationTraits {
  using RequestType = Model::ListEntityEventsRequest;
  using ResultType = Model::ListEntityEventsResult;
  using OutcomeType = Model::ListEntityEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEntityEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationSignals
}  // namespace Aws
