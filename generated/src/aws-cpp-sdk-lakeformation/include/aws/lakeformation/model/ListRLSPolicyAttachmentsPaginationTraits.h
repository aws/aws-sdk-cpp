/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormationServiceClientModel.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ListRLSPolicyAttachmentsRequest.h>
#include <aws/lakeformation/model/ListRLSPolicyAttachmentsResult.h>

namespace Aws {
namespace LakeFormation {
namespace Pagination {

template <typename Client = LakeFormationClient>
struct ListRLSPolicyAttachmentsPaginationTraits {
  using RequestType = Model::ListRLSPolicyAttachmentsRequest;
  using ResultType = Model::ListRLSPolicyAttachmentsResult;
  using OutcomeType = Model::ListRLSPolicyAttachmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRLSPolicyAttachments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LakeFormation
}  // namespace Aws
