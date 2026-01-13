/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/email/model/ListCustomVerificationEmailTemplatesPaginationTraits.h>
#include <aws/email/model/ListIdentitiesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SES {

class SESClient;

template <typename DerivedClient>
class SESPaginationBase {
 public:
  /**
   * Create a paginator for ListCustomVerificationEmailTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomVerificationEmailTemplatesRequest,
                                    Pagination::ListCustomVerificationEmailTemplatesPaginationTraits<DerivedClient>>
  ListCustomVerificationEmailTemplatesPaginator(const Model::ListCustomVerificationEmailTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomVerificationEmailTemplatesRequest,
                                             Pagination::ListCustomVerificationEmailTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIdentities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentitiesRequest, Pagination::ListIdentitiesPaginationTraits<DerivedClient>>
  ListIdentitiesPaginator(const Model::ListIdentitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentitiesRequest,
                                             Pagination::ListIdentitiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace SES
}  // namespace Aws
