/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesServiceClientModel.h>
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/ListFieldsRequest.h>
#include <aws/connectcases/model/ListFieldsResult.h>

namespace Aws {
namespace ConnectCases {
namespace Pagination {

template <typename Client = ConnectCasesClient>
struct ListFieldsPaginationTraits {
  using RequestType = Model::ListFieldsRequest;
  using ResultType = Model::ListFieldsResult;
  using OutcomeType = Model::ListFieldsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFields(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectCases
}  // namespace Aws
