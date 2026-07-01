/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/acm/model/ListAcmeAccountsPaginationTraits.h>
#include <aws/acm/model/ListAcmeDomainValidationsPaginationTraits.h>
#include <aws/acm/model/ListAcmeEndpointsPaginationTraits.h>
#include <aws/acm/model/ListAcmeExternalAccountBindingsPaginationTraits.h>
#include <aws/acm/model/ListCertificatesPaginationTraits.h>
#include <aws/acm/model/SearchCertificatesPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ACM {

template <typename DerivedClient>
class ACMPaginationBase {
 public:
  /**
   * Create a paginator for ListAcmeAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcmeAccountsRequest,
                                    Pagination::ListAcmeAccountsPaginationTraits<DerivedClient>>
  ListAcmeAccountsPaginator(const Model::ListAcmeAccountsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcmeAccountsRequest,
                                             Pagination::ListAcmeAccountsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAcmeDomainValidations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcmeDomainValidationsRequest,
                                    Pagination::ListAcmeDomainValidationsPaginationTraits<DerivedClient>>
  ListAcmeDomainValidationsPaginator(const Model::ListAcmeDomainValidationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcmeDomainValidationsRequest,
                                             Pagination::ListAcmeDomainValidationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAcmeEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcmeEndpointsRequest,
                                    Pagination::ListAcmeEndpointsPaginationTraits<DerivedClient>>
  ListAcmeEndpointsPaginator(const Model::ListAcmeEndpointsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcmeEndpointsRequest,
                                             Pagination::ListAcmeEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAcmeExternalAccountBindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcmeExternalAccountBindingsRequest,
                                    Pagination::ListAcmeExternalAccountBindingsPaginationTraits<DerivedClient>>
  ListAcmeExternalAccountBindingsPaginator(const Model::ListAcmeExternalAccountBindingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcmeExternalAccountBindingsRequest,
                                             Pagination::ListAcmeExternalAccountBindingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                    Pagination::ListCertificatesPaginationTraits<DerivedClient>>
  ListCertificatesPaginator(const Model::ListCertificatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                             Pagination::ListCertificatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for SearchCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchCertificatesRequest,
                                    Pagination::SearchCertificatesPaginationTraits<DerivedClient>>
  SearchCertificatesPaginator(const Model::SearchCertificatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchCertificatesRequest,
                                             Pagination::SearchCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ACM
}  // namespace Aws
