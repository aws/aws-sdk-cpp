/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainersServiceClientModel.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/ListVirtualClustersRequest.h>
#include <aws/emr-containers/model/ListVirtualClustersResult.h>

namespace Aws {
namespace EMRContainers {
namespace Pagination {

template <typename Client = EMRContainersClient>
struct ListVirtualClustersPaginationTraits {
  using RequestType = Model::ListVirtualClustersRequest;
  using ResultType = Model::ListVirtualClustersResult;
  using OutcomeType = Model::ListVirtualClustersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVirtualClusters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EMRContainers
}  // namespace Aws
