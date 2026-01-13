/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFSServiceClientModel.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsRequest.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsResult.h>

namespace Aws {
namespace EFS {
namespace Pagination {

template <typename Client = EFSClient>
struct DescribeReplicationConfigurationsPaginationTraits {
  using RequestType = Model::DescribeReplicationConfigurationsRequest;
  using ResultType = Model::DescribeReplicationConfigurationsResult;
  using OutcomeType = Model::DescribeReplicationConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeReplicationConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EFS
}  // namespace Aws
