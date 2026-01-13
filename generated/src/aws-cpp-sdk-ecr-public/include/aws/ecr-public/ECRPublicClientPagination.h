/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ecr-public/ECRPublicClient.h>
#include <aws/ecr-public/model/DescribeImageTagsPaginationTraits.h>
#include <aws/ecr-public/model/DescribeImagesPaginationTraits.h>
#include <aws/ecr-public/model/DescribeRegistriesPaginationTraits.h>
#include <aws/ecr-public/model/DescribeRepositoriesPaginationTraits.h>

namespace Aws {
namespace ECRPublic {

using DescribeImagesPaginator = Aws::Utils::Pagination::Paginator<ECRPublicClient, Model::DescribeImagesRequest,
                                                                  Pagination::DescribeImagesPaginationTraits<ECRPublicClient>>;
using DescribeImageTagsPaginator = Aws::Utils::Pagination::Paginator<ECRPublicClient, Model::DescribeImageTagsRequest,
                                                                     Pagination::DescribeImageTagsPaginationTraits<ECRPublicClient>>;
using DescribeRegistriesPaginator = Aws::Utils::Pagination::Paginator<ECRPublicClient, Model::DescribeRegistriesRequest,
                                                                      Pagination::DescribeRegistriesPaginationTraits<ECRPublicClient>>;
using DescribeRepositoriesPaginator = Aws::Utils::Pagination::Paginator<ECRPublicClient, Model::DescribeRepositoriesRequest,
                                                                        Pagination::DescribeRepositoriesPaginationTraits<ECRPublicClient>>;

}  // namespace ECRPublic
}  // namespace Aws
