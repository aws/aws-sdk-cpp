/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/appstream/model/DescribeAppBlockBuilderAppBlockAssociationsPaginationTraits.h>
#include <aws/appstream/model/DescribeAppBlockBuildersPaginationTraits.h>
#include <aws/appstream/model/DescribeImagePermissionsPaginationTraits.h>
#include <aws/appstream/model/DescribeImagesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AppStream {

class AppStreamClient;

template <typename DerivedClient>
class AppStreamPaginationBase {
 public:
  /**
   * Create a paginator for DescribeAppBlockBuilderAppBlockAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAppBlockBuilderAppBlockAssociationsRequest,
                                    Pagination::DescribeAppBlockBuilderAppBlockAssociationsPaginationTraits<DerivedClient>>
  DescribeAppBlockBuilderAppBlockAssociationsPaginator(const Model::DescribeAppBlockBuilderAppBlockAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAppBlockBuilderAppBlockAssociationsRequest,
                                             Pagination::DescribeAppBlockBuilderAppBlockAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAppBlockBuilders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAppBlockBuildersRequest,
                                    Pagination::DescribeAppBlockBuildersPaginationTraits<DerivedClient>>
  DescribeAppBlockBuildersPaginator(const Model::DescribeAppBlockBuildersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAppBlockBuildersRequest,
                                             Pagination::DescribeAppBlockBuildersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeImagePermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImagePermissionsRequest,
                                    Pagination::DescribeImagePermissionsPaginationTraits<DerivedClient>>
  DescribeImagePermissionsPaginator(const Model::DescribeImagePermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImagePermissionsRequest,
                                             Pagination::DescribeImagePermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImagesRequest, Pagination::DescribeImagesPaginationTraits<DerivedClient>>
  DescribeImagesPaginator(const Model::DescribeImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImagesRequest,
                                             Pagination::DescribeImagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace AppStream
}  // namespace Aws
