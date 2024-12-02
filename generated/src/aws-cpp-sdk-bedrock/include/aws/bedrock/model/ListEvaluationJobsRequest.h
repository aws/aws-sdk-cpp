/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/EvaluationJobStatus.h>
#include <aws/bedrock/model/ApplicationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/SortJobsBy.h>
#include <aws/bedrock/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Bedrock
{
namespace Model
{

  /**
   */
  class ListEvaluationJobsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListEvaluationJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEvaluationJobs"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A filter to only list evaluation jobs created after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListEvaluationJobsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListEvaluationJobsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to only list evaluation jobs created before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListEvaluationJobsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListEvaluationJobsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to only list evaluation jobs that are of a certain status.</p>
     */
    inline const EvaluationJobStatus& GetStatusEquals() const{ return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(const EvaluationJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline void SetStatusEquals(EvaluationJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }
    inline ListEvaluationJobsRequest& WithStatusEquals(const EvaluationJobStatus& value) { SetStatusEquals(value); return *this;}
    inline ListEvaluationJobsRequest& WithStatusEquals(EvaluationJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to only list evaluation jobs that are either model evaluations or
     * knowledge base evaluations.</p>
     */
    inline const ApplicationType& GetApplicationTypeEquals() const{ return m_applicationTypeEquals; }
    inline bool ApplicationTypeEqualsHasBeenSet() const { return m_applicationTypeEqualsHasBeenSet; }
    inline void SetApplicationTypeEquals(const ApplicationType& value) { m_applicationTypeEqualsHasBeenSet = true; m_applicationTypeEquals = value; }
    inline void SetApplicationTypeEquals(ApplicationType&& value) { m_applicationTypeEqualsHasBeenSet = true; m_applicationTypeEquals = std::move(value); }
    inline ListEvaluationJobsRequest& WithApplicationTypeEquals(const ApplicationType& value) { SetApplicationTypeEquals(value); return *this;}
    inline ListEvaluationJobsRequest& WithApplicationTypeEquals(ApplicationType&& value) { SetApplicationTypeEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to only list evaluation jobs that contain a specified string in the
     * job name.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline ListEvaluationJobsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline ListEvaluationJobsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline ListEvaluationJobsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEvaluationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEvaluationJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEvaluationJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEvaluationJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a creation time to sort the list of evaluation jobs by when they
     * were created.</p>
     */
    inline const SortJobsBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortJobsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortJobsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListEvaluationJobsRequest& WithSortBy(const SortJobsBy& value) { SetSortBy(value); return *this;}
    inline ListEvaluationJobsRequest& WithSortBy(SortJobsBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort the list of evaluation jobs by either ascending or
     * descending order.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListEvaluationJobsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListEvaluationJobsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    EvaluationJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    ApplicationType m_applicationTypeEquals;
    bool m_applicationTypeEqualsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortJobsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
