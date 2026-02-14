/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamClient.h>
#include <aws/appstream/model/DescribeAppBlockBuilderAppBlockAssociationsPaginationTraits.h>
#include <aws/appstream/model/DescribeAppBlockBuildersPaginationTraits.h>
#include <aws/appstream/model/DescribeImagePermissionsPaginationTraits.h>
#include <aws/appstream/model/DescribeImagesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AppStream {

using DescribeAppBlockBuilderAppBlockAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<AppStreamClient, Model::DescribeAppBlockBuilderAppBlockAssociationsRequest,
                                      Pagination::DescribeAppBlockBuilderAppBlockAssociationsPaginationTraits<AppStreamClient>>;
using DescribeAppBlockBuildersPaginator =
    Aws::Utils::Pagination::Paginator<AppStreamClient, Model::DescribeAppBlockBuildersRequest,
                                      Pagination::DescribeAppBlockBuildersPaginationTraits<AppStreamClient>>;
using DescribeImagePermissionsPaginator =
    Aws::Utils::Pagination::Paginator<AppStreamClient, Model::DescribeImagePermissionsRequest,
                                      Pagination::DescribeImagePermissionsPaginationTraits<AppStreamClient>>;
using DescribeImagesPaginator = Aws::Utils::Pagination::Paginator<AppStreamClient, Model::DescribeImagesRequest,
                                                                  Pagination::DescribeImagesPaginationTraits<AppStreamClient>>;

}  // namespace AppStream
}  // namespace Aws
