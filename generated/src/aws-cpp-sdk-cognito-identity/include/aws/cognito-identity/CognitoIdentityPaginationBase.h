/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cognito-identity/model/ListIdentityPoolsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CognitoIdentity {

class CognitoIdentityClient;

template <typename DerivedClient>
class CognitoIdentityPaginationBase {
 public:
  /**
   * Create a paginator for ListIdentityPools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityPoolsRequest,
                                    Pagination::ListIdentityPoolsPaginationTraits<DerivedClient>>
  ListIdentityPoolsPaginator(const Model::ListIdentityPoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityPoolsRequest,
                                             Pagination::ListIdentityPoolsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CognitoIdentity
}  // namespace Aws
