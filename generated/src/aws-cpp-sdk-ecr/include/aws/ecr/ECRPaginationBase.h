/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ecr/model/DescribeImageScanFindingsPaginationTraits.h>
#include <aws/ecr/model/DescribeImagesPaginationTraits.h>
#include <aws/ecr/model/DescribePullThroughCacheRulesPaginationTraits.h>
#include <aws/ecr/model/DescribeRepositoriesPaginationTraits.h>
#include <aws/ecr/model/DescribeRepositoryCreationTemplatesPaginationTraits.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewPaginationTraits.h>
#include <aws/ecr/model/ListImagesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ECR {

class ECRClient;

template <typename DerivedClient>
class ECRPaginationBase {
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
   * Create a paginator for DescribeImageScanFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageScanFindingsRequest,
                                    Pagination::DescribeImageScanFindingsPaginationTraits<DerivedClient>>
  DescribeImageScanFindingsPaginator(const Model::DescribeImageScanFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageScanFindingsRequest,
                                             Pagination::DescribeImageScanFindingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePullThroughCacheRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePullThroughCacheRulesRequest,
                                    Pagination::DescribePullThroughCacheRulesPaginationTraits<DerivedClient>>
  DescribePullThroughCacheRulesPaginator(const Model::DescribePullThroughCacheRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePullThroughCacheRulesRequest,
                                             Pagination::DescribePullThroughCacheRulesPaginationTraits<DerivedClient>>{
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

  /**
   * Create a paginator for DescribeRepositoryCreationTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRepositoryCreationTemplatesRequest,
                                    Pagination::DescribeRepositoryCreationTemplatesPaginationTraits<DerivedClient>>
  DescribeRepositoryCreationTemplatesPaginator(const Model::DescribeRepositoryCreationTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRepositoryCreationTemplatesRequest,
                                             Pagination::DescribeRepositoryCreationTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetLifecyclePolicyPreview operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLifecyclePolicyPreviewRequest,
                                    Pagination::GetLifecyclePolicyPreviewPaginationTraits<DerivedClient>>
  GetLifecyclePolicyPreviewPaginator(const Model::GetLifecyclePolicyPreviewRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLifecyclePolicyPreviewRequest,
                                             Pagination::GetLifecyclePolicyPreviewPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagesRequest, Pagination::ListImagesPaginationTraits<DerivedClient>>
  ListImagesPaginator(const Model::ListImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagesRequest,
                                             Pagination::ListImagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace ECR
}  // namespace Aws
