/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/IvschatServiceClientModel.h>
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/model/ListRoomsRequest.h>
#include <aws/ivschat/model/ListRoomsResult.h>

namespace Aws {
namespace ivschat {
namespace Pagination {

template <typename Client = IvschatClient>
struct ListRoomsPaginationTraits {
  using RequestType = Model::ListRoomsRequest;
  using ResultType = Model::ListRoomsResult;
  using OutcomeType = Model::ListRoomsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRooms(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ivschat
}  // namespace Aws
