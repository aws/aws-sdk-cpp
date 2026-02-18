/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCAServiceClientModel.h>
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesRequest.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesResult.h>

namespace Aws {
namespace ACMPCA {
namespace Pagination {

template <typename Client = ACMPCAClient>
struct ListCertificateAuthoritiesPaginationTraits {
  using RequestType = Model::ListCertificateAuthoritiesRequest;
  using ResultType = Model::ListCertificateAuthoritiesResult;
  using OutcomeType = Model::ListCertificateAuthoritiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCertificateAuthorities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ACMPCA
}  // namespace Aws
