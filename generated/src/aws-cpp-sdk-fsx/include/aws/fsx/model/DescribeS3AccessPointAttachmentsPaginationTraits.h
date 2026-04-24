/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSxServiceClientModel.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DescribeS3AccessPointAttachmentsRequest.h>
#include <aws/fsx/model/DescribeS3AccessPointAttachmentsResult.h>

namespace Aws {
namespace FSx {
namespace Pagination {

template <typename Client = FSxClient>
struct DescribeS3AccessPointAttachmentsPaginationTraits {
  using RequestType = Model::DescribeS3AccessPointAttachmentsRequest;
  using ResultType = Model::DescribeS3AccessPointAttachmentsResult;
  using OutcomeType = Model::DescribeS3AccessPointAttachmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeS3AccessPointAttachments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FSx
}  // namespace Aws
