/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam-toolbox/IAMToolboxServiceClientModel.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsRequest.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsResult.h>

namespace Aws {
namespace IAMToolbox {
namespace Pagination {

template <typename Client = IAMToolboxClient>
struct GetRequestAuthorizationDetailsPaginationTraits {
  using RequestType = Model::GetRequestAuthorizationDetailsRequest;
  using ResultType = Model::GetRequestAuthorizationDetailsResult;
  using OutcomeType = Model::GetRequestAuthorizationDetailsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetRequestAuthorizationDetails(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IAMToolbox
}  // namespace Aws
