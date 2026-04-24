/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SESServiceClientModel.h>
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/model/ListIdentitiesRequest.h>
#include <aws/email/model/ListIdentitiesResult.h>

namespace Aws {
namespace SES {
namespace Pagination {

template <typename Client = SESClient>
struct ListIdentitiesPaginationTraits {
  using RequestType = Model::ListIdentitiesRequest;
  using ResultType = Model::ListIdentitiesResult;
  using OutcomeType = Model::ListIdentitiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIdentities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SES
}  // namespace Aws
