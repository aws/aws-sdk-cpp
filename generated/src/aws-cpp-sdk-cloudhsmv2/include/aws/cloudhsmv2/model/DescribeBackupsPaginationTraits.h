/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2ServiceClientModel.h>
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/DescribeBackupsRequest.h>
#include <aws/cloudhsmv2/model/DescribeBackupsResult.h>

namespace Aws {
namespace CloudHSMV2 {
namespace Pagination {

template <typename Client = CloudHSMV2Client>
struct DescribeBackupsPaginationTraits {
  using RequestType = Model::DescribeBackupsRequest;
  using ResultType = Model::DescribeBackupsResult;
  using OutcomeType = Model::DescribeBackupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeBackups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudHSMV2
}  // namespace Aws
