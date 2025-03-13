/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/ModelCopyJobStatus.h>
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
  class ListModelCopyJobsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListModelCopyJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelCopyJobs"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filters for model copy jobs created after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListModelCopyJobsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for model copy jobs created before the specified time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListModelCopyJobsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for model copy jobs whose status matches the value that you
     * specify.</p>
     */
    inline ModelCopyJobStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(ModelCopyJobStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListModelCopyJobsRequest& WithStatusEquals(ModelCopyJobStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for model copy jobs in which the account that the source model
     * belongs to is equal to the value that you specify.</p>
     */
    inline const Aws::String& GetSourceAccountEquals() const { return m_sourceAccountEquals; }
    inline bool SourceAccountEqualsHasBeenSet() const { return m_sourceAccountEqualsHasBeenSet; }
    template<typename SourceAccountEqualsT = Aws::String>
    void SetSourceAccountEquals(SourceAccountEqualsT&& value) { m_sourceAccountEqualsHasBeenSet = true; m_sourceAccountEquals = std::forward<SourceAccountEqualsT>(value); }
    template<typename SourceAccountEqualsT = Aws::String>
    ListModelCopyJobsRequest& WithSourceAccountEquals(SourceAccountEqualsT&& value) { SetSourceAccountEquals(std::forward<SourceAccountEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for model copy jobs in which the Amazon Resource Name (ARN) of the
     * source model to is equal to the value that you specify.</p>
     */
    inline const Aws::String& GetSourceModelArnEquals() const { return m_sourceModelArnEquals; }
    inline bool SourceModelArnEqualsHasBeenSet() const { return m_sourceModelArnEqualsHasBeenSet; }
    template<typename SourceModelArnEqualsT = Aws::String>
    void SetSourceModelArnEquals(SourceModelArnEqualsT&& value) { m_sourceModelArnEqualsHasBeenSet = true; m_sourceModelArnEquals = std::forward<SourceModelArnEqualsT>(value); }
    template<typename SourceModelArnEqualsT = Aws::String>
    ListModelCopyJobsRequest& WithSourceModelArnEquals(SourceModelArnEqualsT&& value) { SetSourceModelArnEquals(std::forward<SourceModelArnEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for model copy jobs in which the name of the copied model contains
     * the string that you specify.</p>
     */
    inline const Aws::String& GetTargetModelNameContains() const { return m_targetModelNameContains; }
    inline bool TargetModelNameContainsHasBeenSet() const { return m_targetModelNameContainsHasBeenSet; }
    template<typename TargetModelNameContainsT = Aws::String>
    void SetTargetModelNameContains(TargetModelNameContainsT&& value) { m_targetModelNameContainsHasBeenSet = true; m_targetModelNameContains = std::forward<TargetModelNameContainsT>(value); }
    template<typename TargetModelNameContainsT = Aws::String>
    ListModelCopyJobsRequest& WithTargetModelNameContains(TargetModelNameContainsT&& value) { SetTargetModelNameContains(std::forward<TargetModelNameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelCopyJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelCopyJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to sort by in the returned list of model copy jobs.</p>
     */
    inline SortJobsBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortJobsBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListModelCopyJobsRequest& WithSortBy(SortJobsBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListModelCopyJobsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    ModelCopyJobStatus m_statusEquals{ModelCopyJobStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_sourceAccountEquals;
    bool m_sourceAccountEqualsHasBeenSet = false;

    Aws::String m_sourceModelArnEquals;
    bool m_sourceModelArnEqualsHasBeenSet = false;

    Aws::String m_targetModelNameContains;
    bool m_targetModelNameContainsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortJobsBy m_sortBy{SortJobsBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
