/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalkServiceClientModel.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryResult.h>

namespace Aws {
namespace ElasticBeanstalk {
namespace Pagination {

template <typename Client = ElasticBeanstalkClient>
struct DescribeEnvironmentManagedActionHistoryPaginationTraits {
  using RequestType = Model::DescribeEnvironmentManagedActionHistoryRequest;
  using ResultType = Model::DescribeEnvironmentManagedActionHistoryResult;
  using OutcomeType = Model::DescribeEnvironmentManagedActionHistoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeEnvironmentManagedActionHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ElasticBeanstalk
}  // namespace Aws
