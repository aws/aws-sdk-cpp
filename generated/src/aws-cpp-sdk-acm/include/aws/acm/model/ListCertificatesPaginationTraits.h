/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMServiceClientModel.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ListCertificatesRequest.h>
#include <aws/acm/model/ListCertificatesResult.h>

namespace Aws {
namespace ACM {
namespace Pagination {

template <typename Client = ACMClient>
struct ListCertificatesPaginationTraits {
  using RequestType = Model::ListCertificatesRequest;
  using ResultType = Model::ListCertificatesResult;
  using OutcomeType = Model::ListCertificatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCertificates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ACM
}  // namespace Aws
