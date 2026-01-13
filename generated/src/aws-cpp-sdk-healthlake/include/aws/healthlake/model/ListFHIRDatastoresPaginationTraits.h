/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLakeServiceClientModel.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ListFHIRDatastoresRequest.h>
#include <aws/healthlake/model/ListFHIRDatastoresResult.h>

namespace Aws {
namespace HealthLake {
namespace Pagination {

template <typename Client = HealthLakeClient>
struct ListFHIRDatastoresPaginationTraits {
  using RequestType = Model::ListFHIRDatastoresRequest;
  using ResultType = Model::ListFHIRDatastoresResult;
  using OutcomeType = Model::ListFHIRDatastoresOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFHIRDatastores(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace HealthLake
}  // namespace Aws
