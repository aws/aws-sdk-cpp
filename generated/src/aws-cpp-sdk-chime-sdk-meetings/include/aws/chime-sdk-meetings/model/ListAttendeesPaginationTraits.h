/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsServiceClientModel.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesRequest.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesResult.h>

namespace Aws {
namespace ChimeSDKMeetings {
namespace Pagination {

template <typename Client = ChimeSDKMeetingsClient>
struct ListAttendeesPaginationTraits {
  using RequestType = Model::ListAttendeesRequest;
  using ResultType = Model::ListAttendeesResult;
  using OutcomeType = Model::ListAttendeesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAttendees(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKMeetings
}  // namespace Aws
