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
#include <aws/sagemaker/model/HyperParameterTuningJobSortByOptions.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStatus.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API ListHyperParameterTuningJobsRequest : public SageMakerRequest
  {
  public:
    ListHyperParameterTuningJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHyperParameterTuningJobs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If the result of the previous <code>ListHyperParameterTuningJobs</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of tuning jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListHyperParameterTuningJobs</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of tuning jobs, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListHyperParameterTuningJobs</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of tuning jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListHyperParameterTuningJobs</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of tuning jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListHyperParameterTuningJobs</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of tuning jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListHyperParameterTuningJobs</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of tuning jobs, use the token in the next request.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListHyperParameterTuningJobs</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of tuning jobs, use the token in the next request.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListHyperParameterTuningJobs</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of tuning jobs, use the token in the next request.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of tuning jobs to return. The default value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of tuning jobs to return. The default value is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of tuning jobs to return. The default value is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of tuning jobs to return. The default value is 10.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline const HyperParameterTuningJobSortByOptions& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline void SetSortBy(const HyperParameterTuningJobSortByOptions& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline void SetSortBy(HyperParameterTuningJobSortByOptions&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithSortBy(const HyperParameterTuningJobSortByOptions& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithSortBy(HyperParameterTuningJobSortByOptions&& value) { SetSortBy(std::move(value)); return *this;}


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
    inline ListHyperParameterTuningJobsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>A string in the tuning job name. This filter returns only tuning jobs whose
     * name contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in the tuning job name. This filter returns only tuning jobs whose
     * name contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in the tuning job name. This filter returns only tuning jobs whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in the tuning job name. This filter returns only tuning jobs whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in the tuning job name. This filter returns only tuning jobs whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in the tuning job name. This filter returns only tuning jobs whose
     * name contains the specified string.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in the tuning job name. This filter returns only tuning jobs whose
     * name contains the specified string.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in the tuning job name. This filter returns only tuning jobs whose
     * name contains the specified string.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>A filter that returns only tuning jobs that were created after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only tuning jobs that were created after the specified
     * time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only tuning jobs that were created after the specified
     * time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only tuning jobs that were created after the specified
     * time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only tuning jobs that were created after the specified
     * time.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only tuning jobs that were created after the specified
     * time.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only tuning jobs that were created before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only tuning jobs that were created before the specified
     * time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only tuning jobs that were created before the specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only tuning jobs that were created before the specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only tuning jobs that were created before the specified
     * time.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only tuning jobs that were created before the specified
     * time.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only tuning jobs that were modified after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>A filter that returns only tuning jobs that were modified after the specified
     * time.</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only tuning jobs that were modified after the specified
     * time.</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>A filter that returns only tuning jobs that were modified after the specified
     * time.</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only tuning jobs that were modified after the specified
     * time.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only tuning jobs that were modified after the specified
     * time.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only tuning jobs that were modified before the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>A filter that returns only tuning jobs that were modified before the
     * specified time.</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only tuning jobs that were modified before the
     * specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>A filter that returns only tuning jobs that were modified before the
     * specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only tuning jobs that were modified before the
     * specified time.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only tuning jobs that were modified before the
     * specified time.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only tuning jobs with the specified status.</p>
     */
    inline const HyperParameterTuningJobStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>A filter that returns only tuning jobs with the specified status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>A filter that returns only tuning jobs with the specified status.</p>
     */
    inline void SetStatusEquals(const HyperParameterTuningJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>A filter that returns only tuning jobs with the specified status.</p>
     */
    inline void SetStatusEquals(HyperParameterTuningJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>A filter that returns only tuning jobs with the specified status.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithStatusEquals(const HyperParameterTuningJobStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>A filter that returns only tuning jobs with the specified status.</p>
     */
    inline ListHyperParameterTuningJobsRequest& WithStatusEquals(HyperParameterTuningJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    HyperParameterTuningJobSortByOptions m_sortBy;
    bool m_sortByHasBeenSet;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet;

    HyperParameterTuningJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
