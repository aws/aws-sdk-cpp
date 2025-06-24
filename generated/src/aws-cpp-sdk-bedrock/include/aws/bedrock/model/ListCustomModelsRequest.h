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
#include <aws/bedrock/model/ModelStatus.h>
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
  class ListCustomModelsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListCustomModelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCustomModels"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Return custom models created before the specified time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListCustomModelsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models created after the specified time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListCustomModelsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListCustomModelsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models only if the base model Amazon Resource Name (ARN)
     * matches this parameter.</p>
     */
    inline const Aws::String& GetBaseModelArnEquals() const { return m_baseModelArnEquals; }
    inline bool BaseModelArnEqualsHasBeenSet() const { return m_baseModelArnEqualsHasBeenSet; }
    template<typename BaseModelArnEqualsT = Aws::String>
    void SetBaseModelArnEquals(BaseModelArnEqualsT&& value) { m_baseModelArnEqualsHasBeenSet = true; m_baseModelArnEquals = std::forward<BaseModelArnEqualsT>(value); }
    template<typename BaseModelArnEqualsT = Aws::String>
    ListCustomModelsRequest& WithBaseModelArnEquals(BaseModelArnEqualsT&& value) { SetBaseModelArnEquals(std::forward<BaseModelArnEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models only if the foundation model Amazon Resource Name (ARN)
     * matches this parameter.</p>
     */
    inline const Aws::String& GetFoundationModelArnEquals() const { return m_foundationModelArnEquals; }
    inline bool FoundationModelArnEqualsHasBeenSet() const { return m_foundationModelArnEqualsHasBeenSet; }
    template<typename FoundationModelArnEqualsT = Aws::String>
    void SetFoundationModelArnEquals(FoundationModelArnEqualsT&& value) { m_foundationModelArnEqualsHasBeenSet = true; m_foundationModelArnEquals = std::forward<FoundationModelArnEqualsT>(value); }
    template<typename FoundationModelArnEqualsT = Aws::String>
    ListCustomModelsRequest& WithFoundationModelArnEquals(FoundationModelArnEqualsT&& value) { SetFoundationModelArnEquals(std::forward<FoundationModelArnEqualsT>(value)); return *this;}
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
    inline ListCustomModelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    ListCustomModelsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to sort by in the returned list of models.</p>
     */
    inline SortModelsBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortModelsBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListCustomModelsRequest& WithSortBy(SortModelsBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order of the results.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListCustomModelsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models depending on if the current account owns them
     * (<code>true</code>) or if they were shared with the current account
     * (<code>false</code>).</p>
     */
    inline bool GetIsOwned() const { return m_isOwned; }
    inline bool IsOwnedHasBeenSet() const { return m_isOwnedHasBeenSet; }
    inline void SetIsOwned(bool value) { m_isOwnedHasBeenSet = true; m_isOwned = value; }
    inline ListCustomModelsRequest& WithIsOwned(bool value) { SetIsOwned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of them model to filter results by. Possible values include:</p>
     * <ul> <li> <p> <code>Creating</code> - Include only models that are currently
     * being created and validated.</p> </li> <li> <p> <code>Active</code> - Include
     * only models that have been successfully created and are ready for use.</p> </li>
     * <li> <p> <code>Failed</code> - Include only models where the creation process
     * failed.</p> </li> </ul> <p>If you don't specify a status, the API returns models
     * in all states.</p>
     */
    inline ModelStatus GetModelStatus() const { return m_modelStatus; }
    inline bool ModelStatusHasBeenSet() const { return m_modelStatusHasBeenSet; }
    inline void SetModelStatus(ModelStatus value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }
    inline ListCustomModelsRequest& WithModelStatus(ModelStatus value) { SetModelStatus(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_baseModelArnEquals;
    bool m_baseModelArnEqualsHasBeenSet = false;

    Aws::String m_foundationModelArnEquals;
    bool m_foundationModelArnEqualsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortModelsBy m_sortBy{SortModelsBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    bool m_isOwned{false};
    bool m_isOwnedHasBeenSet = false;

    ModelStatus m_modelStatus{ModelStatus::NOT_SET};
    bool m_modelStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
