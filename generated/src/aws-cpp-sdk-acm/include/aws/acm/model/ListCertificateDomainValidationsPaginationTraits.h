/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMServiceClientModel.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ListCertificateDomainValidationsRequest.h>
#include <aws/acm/model/ListCertificateDomainValidationsResult.h>

namespace Aws {
namespace ACM {
namespace Pagination {

template <typename Client = ACMClient>
struct ListCertificateDomainValidationsPaginationTraits {
  using RequestType = Model::ListCertificateDomainValidationsRequest;
  using ResultType = Model::ListCertificateDomainValidationsResult;
  using OutcomeType = Model::ListCertificateDomainValidationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCertificateDomainValidations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ACM
}  // namespace Aws
