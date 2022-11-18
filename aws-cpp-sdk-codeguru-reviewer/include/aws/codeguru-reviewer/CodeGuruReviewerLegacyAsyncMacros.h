/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateRepositoryAsync(...)  SubmitAsync(&CodeGuruReviewerClient::AssociateRepository, __VA_ARGS__)
#define AssociateRepositoryCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::AssociateRepository, REQUEST)

#define CreateCodeReviewAsync(...)  SubmitAsync(&CodeGuruReviewerClient::CreateCodeReview, __VA_ARGS__)
#define CreateCodeReviewCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::CreateCodeReview, REQUEST)

#define DescribeCodeReviewAsync(...)  SubmitAsync(&CodeGuruReviewerClient::DescribeCodeReview, __VA_ARGS__)
#define DescribeCodeReviewCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::DescribeCodeReview, REQUEST)

#define DescribeRecommendationFeedbackAsync(...)  SubmitAsync(&CodeGuruReviewerClient::DescribeRecommendationFeedback, __VA_ARGS__)
#define DescribeRecommendationFeedbackCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::DescribeRecommendationFeedback, REQUEST)

#define DescribeRepositoryAssociationAsync(...)  SubmitAsync(&CodeGuruReviewerClient::DescribeRepositoryAssociation, __VA_ARGS__)
#define DescribeRepositoryAssociationCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::DescribeRepositoryAssociation, REQUEST)

#define DisassociateRepositoryAsync(...)  SubmitAsync(&CodeGuruReviewerClient::DisassociateRepository, __VA_ARGS__)
#define DisassociateRepositoryCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::DisassociateRepository, REQUEST)

#define ListCodeReviewsAsync(...)  SubmitAsync(&CodeGuruReviewerClient::ListCodeReviews, __VA_ARGS__)
#define ListCodeReviewsCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::ListCodeReviews, REQUEST)

#define ListRecommendationFeedbackAsync(...)  SubmitAsync(&CodeGuruReviewerClient::ListRecommendationFeedback, __VA_ARGS__)
#define ListRecommendationFeedbackCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::ListRecommendationFeedback, REQUEST)

#define ListRecommendationsAsync(...)  SubmitAsync(&CodeGuruReviewerClient::ListRecommendations, __VA_ARGS__)
#define ListRecommendationsCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::ListRecommendations, REQUEST)

#define ListRepositoryAssociationsAsync(...)  SubmitAsync(&CodeGuruReviewerClient::ListRepositoryAssociations, __VA_ARGS__)
#define ListRepositoryAssociationsCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::ListRepositoryAssociations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CodeGuruReviewerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::ListTagsForResource, REQUEST)

#define PutRecommendationFeedbackAsync(...)  SubmitAsync(&CodeGuruReviewerClient::PutRecommendationFeedback, __VA_ARGS__)
#define PutRecommendationFeedbackCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::PutRecommendationFeedback, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CodeGuruReviewerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CodeGuruReviewerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CodeGuruReviewerClient::UntagResource, REQUEST)

