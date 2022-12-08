/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EdgePackagingJobStatus.h>
#include <aws/sagemaker/model/ListEdgePackagingJobsSortBy.h>
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
  class ListEdgePackagingJobsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListEdgePackagingJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEdgePackagingJobs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListEdgePackagingJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListEdgePackagingJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListEdgePackagingJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum number of results to select.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to select.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to select.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to select.</p>
     */
    inline ListEdgePackagingJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Select jobs where the job was created after specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Select jobs where the job was created after specified time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Select jobs where the job was created after specified time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Select jobs where the job was created after specified time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Select jobs where the job was created after specified time.</p>
     */
    inline ListEdgePackagingJobsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Select jobs where the job was created after specified time.</p>
     */
    inline ListEdgePackagingJobsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Select jobs where the job was created before specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Select jobs where the job was created before specified time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Select jobs where the job was created before specified time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Select jobs where the job was created before specified time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Select jobs where the job was created before specified time.</p>
     */
    inline ListEdgePackagingJobsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Select jobs where the job was created before specified time.</p>
     */
    inline ListEdgePackagingJobsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Select jobs where the job was updated after specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>Select jobs where the job was updated after specified time.</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>Select jobs where the job was updated after specified time.</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>Select jobs where the job was updated after specified time.</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>Select jobs where the job was updated after specified time.</p>
     */
    inline ListEdgePackagingJobsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>Select jobs where the job was updated after specified time.</p>
     */
    inline ListEdgePackagingJobsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Select jobs where the job was updated before specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>Select jobs where the job was updated before specified time.</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>Select jobs where the job was updated before specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>Select jobs where the job was updated before specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>Select jobs where the job was updated before specified time.</p>
     */
    inline ListEdgePackagingJobsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>Select jobs where the job was updated before specified time.</p>
     */
    inline ListEdgePackagingJobsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline ListEdgePackagingJobsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline ListEdgePackagingJobsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline ListEdgePackagingJobsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline const Aws::String& GetModelNameContains() const{ return m_modelNameContains; }

    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline bool ModelNameContainsHasBeenSet() const { return m_modelNameContainsHasBeenSet; }

    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline void SetModelNameContains(const Aws::String& value) { m_modelNameContainsHasBeenSet = true; m_modelNameContains = value; }

    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline void SetModelNameContains(Aws::String&& value) { m_modelNameContainsHasBeenSet = true; m_modelNameContains = std::move(value); }

    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline void SetModelNameContains(const char* value) { m_modelNameContainsHasBeenSet = true; m_modelNameContains.assign(value); }

    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline ListEdgePackagingJobsRequest& WithModelNameContains(const Aws::String& value) { SetModelNameContains(value); return *this;}

    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline ListEdgePackagingJobsRequest& WithModelNameContains(Aws::String&& value) { SetModelNameContains(std::move(value)); return *this;}

    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline ListEdgePackagingJobsRequest& WithModelNameContains(const char* value) { SetModelNameContains(value); return *this;}


    /**
     * <p>The job status to filter for.</p>
     */
    inline const EdgePackagingJobStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>The job status to filter for.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>The job status to filter for.</p>
     */
    inline void SetStatusEquals(const EdgePackagingJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>The job status to filter for.</p>
     */
    inline void SetStatusEquals(EdgePackagingJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>The job status to filter for.</p>
     */
    inline ListEdgePackagingJobsRequest& WithStatusEquals(const EdgePackagingJobStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>The job status to filter for.</p>
     */
    inline ListEdgePackagingJobsRequest& WithStatusEquals(EdgePackagingJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}


    /**
     * <p>Use to specify what column to sort by.</p>
     */
    inline const ListEdgePackagingJobsSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Use to specify what column to sort by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Use to specify what column to sort by.</p>
     */
    inline void SetSortBy(const ListEdgePackagingJobsSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Use to specify what column to sort by.</p>
     */
    inline void SetSortBy(ListEdgePackagingJobsSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Use to specify what column to sort by.</p>
     */
    inline ListEdgePackagingJobsRequest& WithSortBy(const ListEdgePackagingJobsSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Use to specify what column to sort by.</p>
     */
    inline ListEdgePackagingJobsRequest& WithSortBy(ListEdgePackagingJobsSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>What direction to sort by.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>What direction to sort by.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>What direction to sort by.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>What direction to sort by.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>What direction to sort by.</p>
     */
    inline ListEdgePackagingJobsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>What direction to sort by.</p>
     */
    inline ListEdgePackagingJobsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

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

    Aws::String m_modelNameContains;
    bool m_modelNameContainsHasBeenSet = false;

    EdgePackagingJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    ListEdgePackagingJobsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
