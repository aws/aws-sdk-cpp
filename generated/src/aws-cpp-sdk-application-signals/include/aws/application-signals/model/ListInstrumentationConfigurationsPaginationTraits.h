/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsServiceClientModel.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ListInstrumentationConfigurationsRequest.h>
#include <aws/application-signals/model/ListInstrumentationConfigurationsResult.h>

namespace Aws {
namespace ApplicationSignals {
namespace Pagination {

template <typename Client = ApplicationSignalsClient>
struct ListInstrumentationConfigurationsPaginationTraits {
  using RequestType = Model::ListInstrumentationConfigurationsRequest;
  using ResultType = Model::ListInstrumentationConfigurationsResult;
  using OutcomeType = Model::ListInstrumentationConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInstrumentationConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationSignals
}  // namespace Aws
