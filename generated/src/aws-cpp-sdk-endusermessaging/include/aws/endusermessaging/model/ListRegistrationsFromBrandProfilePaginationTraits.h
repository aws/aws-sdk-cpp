/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/endusermessaging/EndUserMessagingServiceClientModel.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfileRequest.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfileResult.h>

namespace Aws {
namespace EndUserMessaging {
namespace Pagination {

template <typename Client = EndUserMessagingClient>
struct ListRegistrationsFromBrandProfilePaginationTraits {
  using RequestType = Model::ListRegistrationsFromBrandProfileRequest;
  using ResultType = Model::ListRegistrationsFromBrandProfileResult;
  using OutcomeType = Model::ListRegistrationsFromBrandProfileOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRegistrationsFromBrandProfile(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EndUserMessaging
}  // namespace Aws
