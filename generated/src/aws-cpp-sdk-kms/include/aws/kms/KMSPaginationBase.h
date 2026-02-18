/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kms/model/DescribeCustomKeyStoresPaginationTraits.h>
#include <aws/kms/model/ListAliasesPaginationTraits.h>
#include <aws/kms/model/ListGrantsPaginationTraits.h>
#include <aws/kms/model/ListKeyPoliciesPaginationTraits.h>
#include <aws/kms/model/ListKeyRotationsPaginationTraits.h>
#include <aws/kms/model/ListKeysPaginationTraits.h>
#include <aws/kms/model/ListResourceTagsPaginationTraits.h>
#include <aws/kms/model/ListRetirableGrantsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace KMS {

class KMSClient;

template <typename DerivedClient>
class KMSPaginationBase {
 public:
  /**
   * Create a paginator for DescribeCustomKeyStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCustomKeyStoresRequest,
                                    Pagination::DescribeCustomKeyStoresPaginationTraits<DerivedClient>>
  DescribeCustomKeyStoresPaginator(const Model::DescribeCustomKeyStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCustomKeyStoresRequest,
                                             Pagination::DescribeCustomKeyStoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<DerivedClient>>
  ListAliasesPaginator(const Model::ListAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest,
                                             Pagination::ListAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGrantsRequest, Pagination::ListGrantsPaginationTraits<DerivedClient>>
  ListGrantsPaginator(const Model::ListGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGrantsRequest,
                                             Pagination::ListGrantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListKeyPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyPoliciesRequest,
                                    Pagination::ListKeyPoliciesPaginationTraits<DerivedClient>>
  ListKeyPoliciesPaginator(const Model::ListKeyPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyPoliciesRequest,
                                             Pagination::ListKeyPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListKeyRotations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyRotationsRequest,
                                    Pagination::ListKeyRotationsPaginationTraits<DerivedClient>>
  ListKeyRotationsPaginator(const Model::ListKeyRotationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyRotationsRequest,
                                             Pagination::ListKeyRotationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeysRequest, Pagination::ListKeysPaginationTraits<DerivedClient>>
  ListKeysPaginator(const Model::ListKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeysRequest, Pagination::ListKeysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTagsRequest,
                                    Pagination::ListResourceTagsPaginationTraits<DerivedClient>>
  ListResourceTagsPaginator(const Model::ListResourceTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTagsRequest,
                                             Pagination::ListResourceTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRetirableGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRetirableGrantsRequest,
                                    Pagination::ListRetirableGrantsPaginationTraits<DerivedClient>>
  ListRetirableGrantsPaginator(const Model::ListRetirableGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRetirableGrantsRequest,
                                             Pagination::ListRetirableGrantsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace KMS
}  // namespace Aws
