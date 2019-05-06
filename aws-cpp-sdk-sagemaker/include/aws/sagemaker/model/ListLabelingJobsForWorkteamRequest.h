/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamSortByOptions.h>
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
  class AWS_SAGEMAKER_API ListLabelingJobsForWorkteamRequest : public SageMakerRequest
  {
  public:
    ListLabelingJobsForWorkteamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLabelingJobsForWorkteam"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}


    /**
     * <p>The maximum number of labeling jobs to return in each page of the
     * response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of labeling jobs to return in each page of the
     * response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of labeling jobs to return in each page of the
     * response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of labeling jobs to return in each page of the
     * response.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A filter that returns only labeling jobs created after the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only labeling jobs created after the specified time
     * (timestamp).</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only labeling jobs created after the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only labeling jobs created after the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only labeling jobs created after the specified time
     * (timestamp).</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only labeling jobs created after the specified time
     * (timestamp).</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only labeling jobs created before the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only labeling jobs created before the specified time
     * (timestamp).</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only labeling jobs created before the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only labeling jobs created before the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only labeling jobs created before the specified time
     * (timestamp).</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only labeling jobs created before the specified time
     * (timestamp).</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline const Aws::String& GetJobReferenceCodeContains() const{ return m_jobReferenceCodeContains; }

    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline bool JobReferenceCodeContainsHasBeenSet() const { return m_jobReferenceCodeContainsHasBeenSet; }

    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline void SetJobReferenceCodeContains(const Aws::String& value) { m_jobReferenceCodeContainsHasBeenSet = true; m_jobReferenceCodeContains = value; }

    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline void SetJobReferenceCodeContains(Aws::String&& value) { m_jobReferenceCodeContainsHasBeenSet = true; m_jobReferenceCodeContains = std::move(value); }

    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline void SetJobReferenceCodeContains(const char* value) { m_jobReferenceCodeContainsHasBeenSet = true; m_jobReferenceCodeContains.assign(value); }

    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithJobReferenceCodeContains(const Aws::String& value) { SetJobReferenceCodeContains(value); return *this;}

    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithJobReferenceCodeContains(Aws::String&& value) { SetJobReferenceCodeContains(std::move(value)); return *this;}

    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithJobReferenceCodeContains(const char* value) { SetJobReferenceCodeContains(value); return *this;}


    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline const ListLabelingJobsForWorkteamSortByOptions& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const ListLabelingJobsForWorkteamSortByOptions& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(ListLabelingJobsForWorkteamSortByOptions&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithSortBy(const ListLabelingJobsForWorkteamSortByOptions& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithSortBy(ListLabelingJobsForWorkteamSortByOptions&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListLabelingJobsForWorkteamRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet;

    Aws::String m_jobReferenceCodeContains;
    bool m_jobReferenceCodeContainsHasBeenSet;

    ListLabelingJobsForWorkteamSortByOptions m_sortBy;
    bool m_sortByHasBeenSet;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
