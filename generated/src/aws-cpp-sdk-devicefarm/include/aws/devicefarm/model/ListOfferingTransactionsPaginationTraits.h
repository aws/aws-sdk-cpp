/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarmServiceClientModel.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/ListOfferingTransactionsRequest.h>
#include <aws/devicefarm/model/ListOfferingTransactionsResult.h>

namespace Aws {
namespace DeviceFarm {
namespace Pagination {

template <typename Client = DeviceFarmClient>
struct ListOfferingTransactionsPaginationTraits {
  using RequestType = Model::ListOfferingTransactionsRequest;
  using ResultType = Model::ListOfferingTransactionsResult;
  using OutcomeType = Model::ListOfferingTransactionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOfferingTransactions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DeviceFarm
}  // namespace Aws
