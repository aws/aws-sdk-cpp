/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ecr-public/model/DescribeImageTagsPaginationTraits.h>
#include <aws/ecr-public/model/DescribeImagesPaginationTraits.h>
#include <aws/ecr-public/model/DescribeRegistriesPaginationTraits.h>
#include <aws/ecr-public/model/DescribeRepositoriesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ECRPublic {

class ECRPublicClient;

template <typename DerivedClient>
class ECRPublicPaginationBase {
 public:
  /**
   * Create a paginator for DescribeImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImagesRequest, Pagination::DescribeImagesPaginationTraits<DerivedClient>>
  DescribeImagesPaginator(const Model::DescribeImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImagesRequest,
                                             Pagination::DescribeImagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeImageTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageTagsRequest,
                                    Pagination::DescribeImageTagsPaginationTraits<DerivedClient>>
  DescribeImageTagsPaginator(const Model::DescribeImageTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageTagsRequest,
                                             Pagination::DescribeImageTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRegistries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistriesRequest,
                                    Pagination::DescribeRegistriesPaginationTraits<DerivedClient>>
  DescribeRegistriesPaginator(const Model::DescribeRegistriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRegistriesRequest,
                                             Pagination::DescribeRegistriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRepositories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRepositoriesRequest,
                                    Pagination::DescribeRepositoriesPaginationTraits<DerivedClient>>
  DescribeRepositoriesPaginator(const Model::DescribeRepositoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRepositoriesRequest,
                                             Pagination::DescribeRepositoriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ECRPublic
}  // namespace Aws
