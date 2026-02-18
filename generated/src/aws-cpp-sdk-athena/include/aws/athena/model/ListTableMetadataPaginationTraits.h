/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaServiceClientModel.h>
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ListTableMetadataRequest.h>
#include <aws/athena/model/ListTableMetadataResult.h>

namespace Aws {
namespace Athena {
namespace Pagination {

template <typename Client = AthenaClient>
struct ListTableMetadataPaginationTraits {
  using RequestType = Model::ListTableMetadataRequest;
  using ResultType = Model::ListTableMetadataResult;
  using OutcomeType = Model::ListTableMetadataOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTableMetadata(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Athena
}  // namespace Aws
