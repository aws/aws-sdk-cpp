/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFSServiceClientModel.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsResult.h>

namespace Aws {
namespace EFS {
namespace Pagination {

template <typename Client = EFSClient>
struct DescribeMountTargetsPaginationTraits {
  using RequestType = Model::DescribeMountTargetsRequest;
  using ResultType = Model::DescribeMountTargetsResult;
  using OutcomeType = Model::DescribeMountTargetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeMountTargets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace EFS
}  // namespace Aws
