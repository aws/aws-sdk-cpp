/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/artifact/model/ListCustomerAgreementsPaginationTraits.h>
#include <aws/artifact/model/ListReportVersionsPaginationTraits.h>
#include <aws/artifact/model/ListReportsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Artifact {

class ArtifactClient;

template <typename DerivedClient>
class ArtifactPaginationBase {
 public:
  /**
   * Create a paginator for ListCustomerAgreements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomerAgreementsRequest,
                                    Pagination::ListCustomerAgreementsPaginationTraits<DerivedClient>>
  ListCustomerAgreementsPaginator(const Model::ListCustomerAgreementsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomerAgreementsRequest,
                                             Pagination::ListCustomerAgreementsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportsRequest, Pagination::ListReportsPaginationTraits<DerivedClient>>
  ListReportsPaginator(const Model::ListReportsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportsRequest,
                                             Pagination::ListReportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListReportVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportVersionsRequest,
                                    Pagination::ListReportVersionsPaginationTraits<DerivedClient>>
  ListReportVersionsPaginator(const Model::ListReportVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportVersionsRequest,
                                             Pagination::ListReportVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Artifact
}  // namespace Aws
