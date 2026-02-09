/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewerClient.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeGuruReviewer {

using ListCodeReviewsPaginator = Aws::Utils::Pagination::Paginator<CodeGuruReviewerClient, Model::ListCodeReviewsRequest,
                                                                   Pagination::ListCodeReviewsPaginationTraits<CodeGuruReviewerClient>>;
using ListRecommendationFeedbackPaginator =
    Aws::Utils::Pagination::Paginator<CodeGuruReviewerClient, Model::ListRecommendationFeedbackRequest,
                                      Pagination::ListRecommendationFeedbackPaginationTraits<CodeGuruReviewerClient>>;
using ListRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<CodeGuruReviewerClient, Model::ListRecommendationsRequest,
                                      Pagination::ListRecommendationsPaginationTraits<CodeGuruReviewerClient>>;
using ListRepositoryAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<CodeGuruReviewerClient, Model::ListRepositoryAssociationsRequest,
                                      Pagination::ListRepositoryAssociationsPaginationTraits<CodeGuruReviewerClient>>;

}  // namespace CodeGuruReviewer
}  // namespace Aws
