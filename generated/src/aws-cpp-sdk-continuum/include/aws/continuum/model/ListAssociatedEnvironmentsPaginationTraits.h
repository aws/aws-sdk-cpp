/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumServiceClientModel.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/ListAssociatedEnvironmentsRequest.h>
#include <aws/continuum/model/ListAssociatedEnvironmentsResult.h>

namespace Aws {
namespace Continuum {
namespace Pagination {

template <typename Client = ContinuumClient>
struct ListAssociatedEnvironmentsPaginationTraits {
  using RequestType = Model::ListAssociatedEnvironmentsRequest;
  using ResultType = Model::ListAssociatedEnvironmentsResult;
  using OutcomeType = Model::ListAssociatedEnvironmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssociatedEnvironments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Continuum
}  // namespace Aws
