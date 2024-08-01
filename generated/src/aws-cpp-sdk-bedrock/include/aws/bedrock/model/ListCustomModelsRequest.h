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
    AWS_BEDROCK_API ListCustomModelsRequest();

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
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListCustomModelsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListCustomModelsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models created after the specified time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListCustomModelsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListCustomModelsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models only if the job name contains these characters.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline ListCustomModelsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline ListCustomModelsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline ListCustomModelsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models only if the base model Amazon Resource Name (ARN)
     * matches this parameter.</p>
     */
    inline const Aws::String& GetBaseModelArnEquals() const{ return m_baseModelArnEquals; }
    inline bool BaseModelArnEqualsHasBeenSet() const { return m_baseModelArnEqualsHasBeenSet; }
    inline void SetBaseModelArnEquals(const Aws::String& value) { m_baseModelArnEqualsHasBeenSet = true; m_baseModelArnEquals = value; }
    inline void SetBaseModelArnEquals(Aws::String&& value) { m_baseModelArnEqualsHasBeenSet = true; m_baseModelArnEquals = std::move(value); }
    inline void SetBaseModelArnEquals(const char* value) { m_baseModelArnEqualsHasBeenSet = true; m_baseModelArnEquals.assign(value); }
    inline ListCustomModelsRequest& WithBaseModelArnEquals(const Aws::String& value) { SetBaseModelArnEquals(value); return *this;}
    inline ListCustomModelsRequest& WithBaseModelArnEquals(Aws::String&& value) { SetBaseModelArnEquals(std::move(value)); return *this;}
    inline ListCustomModelsRequest& WithBaseModelArnEquals(const char* value) { SetBaseModelArnEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models only if the foundation model Amazon Resource Name (ARN)
     * matches this parameter.</p>
     */
    inline const Aws::String& GetFoundationModelArnEquals() const{ return m_foundationModelArnEquals; }
    inline bool FoundationModelArnEqualsHasBeenSet() const { return m_foundationModelArnEqualsHasBeenSet; }
    inline void SetFoundationModelArnEquals(const Aws::String& value) { m_foundationModelArnEqualsHasBeenSet = true; m_foundationModelArnEquals = value; }
    inline void SetFoundationModelArnEquals(Aws::String&& value) { m_foundationModelArnEqualsHasBeenSet = true; m_foundationModelArnEquals = std::move(value); }
    inline void SetFoundationModelArnEquals(const char* value) { m_foundationModelArnEqualsHasBeenSet = true; m_foundationModelArnEquals.assign(value); }
    inline ListCustomModelsRequest& WithFoundationModelArnEquals(const Aws::String& value) { SetFoundationModelArnEquals(value); return *this;}
    inline ListCustomModelsRequest& WithFoundationModelArnEquals(Aws::String&& value) { SetFoundationModelArnEquals(std::move(value)); return *this;}
    inline ListCustomModelsRequest& WithFoundationModelArnEquals(const char* value) { SetFoundationModelArnEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCustomModelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomModelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomModelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to sort by in the returned list of models.</p>
     */
    inline const SortModelsBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortModelsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortModelsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListCustomModelsRequest& WithSortBy(const SortModelsBy& value) { SetSortBy(value); return *this;}
    inline ListCustomModelsRequest& WithSortBy(SortModelsBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order of the results.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListCustomModelsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListCustomModelsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return custom models depending on if the current account owns them
     * (<code>true</code>) or if they were shared with the current account
     * (<code>false</code>).</p>
     */
    inline bool GetIsOwned() const{ return m_isOwned; }
    inline bool IsOwnedHasBeenSet() const { return m_isOwnedHasBeenSet; }
    inline void SetIsOwned(bool value) { m_isOwnedHasBeenSet = true; m_isOwned = value; }
    inline ListCustomModelsRequest& WithIsOwned(bool value) { SetIsOwned(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_baseModelArnEquals;
    bool m_baseModelArnEqualsHasBeenSet = false;

    Aws::String m_foundationModelArnEquals;
    bool m_foundationModelArnEqualsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortModelsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    bool m_isOwned;
    bool m_isOwnedHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
