/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IAMToolbox {

template <typename DerivedClient>
class IAMToolboxPaginationBase {
 public:
  /**
   * Create a paginator for GetRequestAuthorizationDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRequestAuthorizationDetailsRequest,
                                    Pagination::GetRequestAuthorizationDetailsPaginationTraits<DerivedClient>>
  GetRequestAuthorizationDetailsPaginator(const Model::GetRequestAuthorizationDetailsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRequestAuthorizationDetailsRequest,
                                             Pagination::GetRequestAuthorizationDetailsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IAMToolbox
}  // namespace Aws
