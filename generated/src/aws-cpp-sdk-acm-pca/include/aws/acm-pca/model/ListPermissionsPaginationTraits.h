/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCAServiceClientModel.h>
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/ListPermissionsRequest.h>
#include <aws/acm-pca/model/ListPermissionsResult.h>

namespace Aws {
namespace ACMPCA {
namespace Pagination {

template <typename Client = ACMPCAClient>
struct ListPermissionsPaginationTraits {
  using RequestType = Model::ListPermissionsRequest;
  using ResultType = Model::ListPermissionsResult;
  using OutcomeType = Model::ListPermissionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPermissions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ACMPCA
}  // namespace Aws
