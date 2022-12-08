/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobStatus.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsSortBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListInferenceRecommendationsJobsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceRecommendationsJobs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns only jobs created after the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only jobs created after the specified time
     * (timestamp).</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only jobs created after the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only jobs created after the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only jobs created after the specified time
     * (timestamp).</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only jobs created after the specified time
     * (timestamp).</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only jobs created before the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only jobs created before the specified time
     * (timestamp).</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only jobs created before the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only jobs created before the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only jobs created before the specified time
     * (timestamp).</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only jobs created before the specified time
     * (timestamp).</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only jobs that were last modified after the specified
     * time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>A filter that returns only jobs that were last modified after the specified
     * time (timestamp).</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only jobs that were last modified after the specified
     * time (timestamp).</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>A filter that returns only jobs that were last modified after the specified
     * time (timestamp).</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only jobs that were last modified after the specified
     * time (timestamp).</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only jobs that were last modified after the specified
     * time (timestamp).</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only jobs that were last modified before the specified
     * time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>A filter that returns only jobs that were last modified before the specified
     * time (timestamp).</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only jobs that were last modified before the specified
     * time (timestamp).</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>A filter that returns only jobs that were last modified before the specified
     * time (timestamp).</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only jobs that were last modified before the specified
     * time (timestamp).</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only jobs that were last modified before the specified
     * time (timestamp).</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>A filter that retrieves only inference recommendations jobs with a specific
     * status.</p>
     */
    inline const RecommendationJobStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>A filter that retrieves only inference recommendations jobs with a specific
     * status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>A filter that retrieves only inference recommendations jobs with a specific
     * status.</p>
     */
    inline void SetStatusEquals(const RecommendationJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>A filter that retrieves only inference recommendations jobs with a specific
     * status.</p>
     */
    inline void SetStatusEquals(RecommendationJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>A filter that retrieves only inference recommendations jobs with a specific
     * status.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithStatusEquals(const RecommendationJobStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>A filter that retrieves only inference recommendations jobs with a specific
     * status.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithStatusEquals(RecommendationJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}


    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline const ListInferenceRecommendationsJobsSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline void SetSortBy(const ListInferenceRecommendationsJobsSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline void SetSortBy(ListInferenceRecommendationsJobsSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithSortBy(const ListInferenceRecommendationsJobsSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithSortBy(ListInferenceRecommendationsJobsSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for the results.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for the results.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for the results.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for the results.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for the results.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for the results.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of recommendations to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of recommendations to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of recommendations to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of recommendations to return in the response.</p>
     */
    inline ListInferenceRecommendationsJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    RecommendationJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    ListInferenceRecommendationsJobsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
