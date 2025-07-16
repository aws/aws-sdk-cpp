/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/SortModelsBy.h>
#include <aws/bedrock/model/SortOrder.h>
#include <aws/bedrock/model/CustomModelDeploymentStatus.h>
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
  class ListCustomModelDeploymentsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListCustomModelDeploymentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCustomModelDeployments"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filters deployments created before the specified date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    void SetCreatedBefore(CreatedBeforeT&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::forward<CreatedBeforeT>(value); }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    ListCustomModelDeploymentsRequest& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters deployments created after the specified date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    void SetCreatedAfter(CreatedAfterT&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::forward<CreatedAfterT>(value); }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    ListCustomModelDeploymentsRequest& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters deployments whose names contain the specified string. </p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListCustomModelDeploymentsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCustomModelDeploymentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use this token to retrieve additional
     * results when the response is truncated.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomModelDeploymentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to sort the results by. The only supported value is
     * <code>CreationTime</code>.</p>
     */
    inline SortModelsBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortModelsBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListCustomModelDeploymentsRequest& WithSortBy(SortModelsBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the results. Valid values are <code>Ascending</code> and
     * <code>Descending</code>. Default is <code>Descending</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListCustomModelDeploymentsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters deployments by status. Valid values are <code>CREATING</code>,
     * <code>ACTIVE</code>, and <code>FAILED</code>.</p>
     */
    inline CustomModelDeploymentStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(CustomModelDeploymentStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListCustomModelDeploymentsRequest& WithStatusEquals(CustomModelDeploymentStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters deployments by the Amazon Resource Name (ARN) of the associated
     * custom model.</p>
     */
    inline const Aws::String& GetModelArnEquals() const { return m_modelArnEquals; }
    inline bool ModelArnEqualsHasBeenSet() const { return m_modelArnEqualsHasBeenSet; }
    template<typename ModelArnEqualsT = Aws::String>
    void SetModelArnEquals(ModelArnEqualsT&& value) { m_modelArnEqualsHasBeenSet = true; m_modelArnEquals = std::forward<ModelArnEqualsT>(value); }
    template<typename ModelArnEqualsT = Aws::String>
    ListCustomModelDeploymentsRequest& WithModelArnEquals(ModelArnEqualsT&& value) { SetModelArnEquals(std::forward<ModelArnEqualsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortModelsBy m_sortBy{SortModelsBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    CustomModelDeploymentStatus m_statusEquals{CustomModelDeploymentStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_modelArnEquals;
    bool m_modelArnEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
