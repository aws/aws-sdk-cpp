/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectoryServiceClientModel.h>
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ListManagedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListManagedSchemaArnsResult.h>

namespace Aws {
namespace CloudDirectory {
namespace Pagination {

template <typename Client = CloudDirectoryClient>
struct ListManagedSchemaArnsPaginationTraits {
  using RequestType = Model::ListManagedSchemaArnsRequest;
  using ResultType = Model::ListManagedSchemaArnsResult;
  using OutcomeType = Model::ListManagedSchemaArnsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListManagedSchemaArns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudDirectory
}  // namespace Aws
