/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipantServiceClientModel.h>
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/model/GetTranscriptRequest.h>
#include <aws/connectparticipant/model/GetTranscriptResult.h>

namespace Aws {
namespace ConnectParticipant {
namespace Pagination {

template <typename Client = ConnectParticipantClient>
struct GetTranscriptPaginationTraits {
  using RequestType = Model::GetTranscriptRequest;
  using ResultType = Model::GetTranscriptResult;
  using OutcomeType = Model::GetTranscriptOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetTranscript(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectParticipant
}  // namespace Aws
