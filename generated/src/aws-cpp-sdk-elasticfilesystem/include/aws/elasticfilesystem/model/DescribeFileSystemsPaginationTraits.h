/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFSServiceClientModel.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsRequest.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsResult.h>

namespace Aws {
namespace EFS {
namespace Pagination {

template <typename Client = EFSClient>
struct DescribeFileSystemsPaginationTraits {
  using RequestType = Model::DescribeFileSystemsRequest;
  using ResultType = Model::DescribeFileSystemsResult;
  using OutcomeType = Model::DescribeFileSystemsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeFileSystems(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace EFS
}  // namespace Aws
