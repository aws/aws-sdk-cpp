/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAMServiceClientModel.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/GetAccountAuthorizationDetailsRequest.h>
#include <aws/iam/model/GetAccountAuthorizationDetailsResult.h>

namespace Aws {
namespace IAM {
namespace Pagination {

template <typename Client = IAMClient>
struct GetAccountAuthorizationDetailsPaginationTraits {
  using RequestType = Model::GetAccountAuthorizationDetailsRequest;
  using ResultType = Model::GetAccountAuthorizationDetailsResult;
  using OutcomeType = Model::GetAccountAuthorizationDetailsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetAccountAuthorizationDetails(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace IAM
}  // namespace Aws
