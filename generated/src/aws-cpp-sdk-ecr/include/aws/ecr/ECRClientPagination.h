/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ecr/ECRClient.h>
#include <aws/ecr/model/DescribeImageScanFindingsPaginationTraits.h>
#include <aws/ecr/model/DescribeImagesPaginationTraits.h>
#include <aws/ecr/model/DescribePullThroughCacheRulesPaginationTraits.h>
#include <aws/ecr/model/DescribeReplicationBackfillResultsPaginationTraits.h>
#include <aws/ecr/model/DescribeRepositoriesPaginationTraits.h>
#include <aws/ecr/model/DescribeRepositoryCreationTemplatesPaginationTraits.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewPaginationTraits.h>
#include <aws/ecr/model/ListImagesPaginationTraits.h>
#include <aws/ecr/model/ListReplicationBackfillsPaginationTraits.h>

namespace Aws {
namespace ECR {

using DescribeImagesPaginator =
    Aws::Utils::Pagination::Paginator<ECRClient, Model::DescribeImagesRequest, Pagination::DescribeImagesPaginationTraits<ECRClient>>;
using DescribeImageScanFindingsPaginator =
    Aws::Utils::Pagination::Paginator<ECRClient, Model::DescribeImageScanFindingsRequest,
                                      Pagination::DescribeImageScanFindingsPaginationTraits<ECRClient>>;
using DescribePullThroughCacheRulesPaginator =
    Aws::Utils::Pagination::Paginator<ECRClient, Model::DescribePullThroughCacheRulesRequest,
                                      Pagination::DescribePullThroughCacheRulesPaginationTraits<ECRClient>>;
using DescribeReplicationBackfillResultsPaginator =
    Aws::Utils::Pagination::Paginator<ECRClient, Model::DescribeReplicationBackfillResultsRequest,
                                      Pagination::DescribeReplicationBackfillResultsPaginationTraits<ECRClient>>;
using DescribeRepositoriesPaginator = Aws::Utils::Pagination::Paginator<ECRClient, Model::DescribeRepositoriesRequest,
                                                                        Pagination::DescribeRepositoriesPaginationTraits<ECRClient>>;
using DescribeRepositoryCreationTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<ECRClient, Model::DescribeRepositoryCreationTemplatesRequest,
                                      Pagination::DescribeRepositoryCreationTemplatesPaginationTraits<ECRClient>>;
using GetLifecyclePolicyPreviewPaginator =
    Aws::Utils::Pagination::Paginator<ECRClient, Model::GetLifecyclePolicyPreviewRequest,
                                      Pagination::GetLifecyclePolicyPreviewPaginationTraits<ECRClient>>;
using ListImagesPaginator =
    Aws::Utils::Pagination::Paginator<ECRClient, Model::ListImagesRequest, Pagination::ListImagesPaginationTraits<ECRClient>>;
using ListReplicationBackfillsPaginator =
    Aws::Utils::Pagination::Paginator<ECRClient, Model::ListReplicationBackfillsRequest,
                                      Pagination::ListReplicationBackfillsPaginationTraits<ECRClient>>;

}  // namespace ECR
}  // namespace Aws
