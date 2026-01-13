/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/KendraServiceClientModel.h>
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/ListExperienceEntitiesRequest.h>
#include <aws/kendra/model/ListExperienceEntitiesResult.h>

namespace Aws {
namespace kendra {
namespace Pagination {

template <typename Client = KendraClient>
struct ListExperienceEntitiesPaginationTraits {
  using RequestType = Model::ListExperienceEntitiesRequest;
  using ResultType = Model::ListExperienceEntitiesResult;
  using OutcomeType = Model::ListExperienceEntitiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExperienceEntities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace kendra
}  // namespace Aws
