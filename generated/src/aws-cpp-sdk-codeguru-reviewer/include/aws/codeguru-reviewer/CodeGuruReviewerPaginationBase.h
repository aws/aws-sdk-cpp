/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codeguru-reviewer/model/ListCodeReviewsPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodeGuruReviewer {

class CodeGuruReviewerClient;

template <typename DerivedClient>
class CodeGuruReviewerPaginationBase {
 public:
  /**
   * Create a paginator for ListCodeReviews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeReviewsRequest,
                                    Pagination::ListCodeReviewsPaginationTraits<DerivedClient>>
  ListCodeReviewsPaginator(const Model::ListCodeReviewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeReviewsRequest,
                                             Pagination::ListCodeReviewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListRecommendationFeedback operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationFeedbackRequest,
                                    Pagination::ListRecommendationFeedbackPaginationTraits<DerivedClient>>
  ListRecommendationFeedbackPaginator(const Model::ListRecommendationFeedbackRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationFeedbackRequest,
                                             Pagination::ListRecommendationFeedbackPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                    Pagination::ListRecommendationsPaginationTraits<DerivedClient>>
  ListRecommendationsPaginator(const Model::ListRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                             Pagination::ListRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRepositoryAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoryAssociationsRequest,
                                    Pagination::ListRepositoryAssociationsPaginationTraits<DerivedClient>>
  ListRepositoryAssociationsPaginator(const Model::ListRepositoryAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoryAssociationsRequest,
                                             Pagination::ListRepositoryAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CodeGuruReviewer
}  // namespace Aws
