/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardStatus.h>
#include <aws/sagemaker/model/ModelCardSortBy.h>
#include <aws/sagemaker/model/ModelCardSortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListModelCardsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListModelCardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelCards"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Only list model cards that were created after the time specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Only list model cards that were created after the time specified.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Only list model cards that were created after the time specified.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Only list model cards that were created after the time specified.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Only list model cards that were created after the time specified.</p>
     */
    inline ListModelCardsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Only list model cards that were created after the time specified.</p>
     */
    inline ListModelCardsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Only list model cards that were created before the time specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Only list model cards that were created before the time specified.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Only list model cards that were created before the time specified.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Only list model cards that were created before the time specified.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Only list model cards that were created before the time specified.</p>
     */
    inline ListModelCardsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Only list model cards that were created before the time specified.</p>
     */
    inline ListModelCardsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>The maximum number of model cards to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of model cards to list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of model cards to list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of model cards to list.</p>
     */
    inline ListModelCardsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Only list model cards with names that contain the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Only list model cards with names that contain the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Only list model cards with names that contain the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Only list model cards with names that contain the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Only list model cards with names that contain the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Only list model cards with names that contain the specified string.</p>
     */
    inline ListModelCardsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Only list model cards with names that contain the specified string.</p>
     */
    inline ListModelCardsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Only list model cards with names that contain the specified string.</p>
     */
    inline ListModelCardsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>Only list model cards with the specified approval status.</p>
     */
    inline const ModelCardStatus& GetModelCardStatus() const{ return m_modelCardStatus; }

    /**
     * <p>Only list model cards with the specified approval status.</p>
     */
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }

    /**
     * <p>Only list model cards with the specified approval status.</p>
     */
    inline void SetModelCardStatus(const ModelCardStatus& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }

    /**
     * <p>Only list model cards with the specified approval status.</p>
     */
    inline void SetModelCardStatus(ModelCardStatus&& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = std::move(value); }

    /**
     * <p>Only list model cards with the specified approval status.</p>
     */
    inline ListModelCardsRequest& WithModelCardStatus(const ModelCardStatus& value) { SetModelCardStatus(value); return *this;}

    /**
     * <p>Only list model cards with the specified approval status.</p>
     */
    inline ListModelCardsRequest& WithModelCardStatus(ModelCardStatus&& value) { SetModelCardStatus(std::move(value)); return *this;}


    /**
     * <p>If the response to a previous <code>ListModelCards</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model cards, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response to a previous <code>ListModelCards</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model cards, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response to a previous <code>ListModelCards</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model cards, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response to a previous <code>ListModelCards</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model cards, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response to a previous <code>ListModelCards</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model cards, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response to a previous <code>ListModelCards</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model cards, use the token in the next request.</p>
     */
    inline ListModelCardsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response to a previous <code>ListModelCards</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model cards, use the token in the next request.</p>
     */
    inline ListModelCardsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response to a previous <code>ListModelCards</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model cards, use the token in the next request.</p>
     */
    inline ListModelCardsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Sort model cards by either name or creation time. Sorts by creation time by
     * default.</p>
     */
    inline const ModelCardSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Sort model cards by either name or creation time. Sorts by creation time by
     * default.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Sort model cards by either name or creation time. Sorts by creation time by
     * default.</p>
     */
    inline void SetSortBy(const ModelCardSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Sort model cards by either name or creation time. Sorts by creation time by
     * default.</p>
     */
    inline void SetSortBy(ModelCardSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Sort model cards by either name or creation time. Sorts by creation time by
     * default.</p>
     */
    inline ListModelCardsRequest& WithSortBy(const ModelCardSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Sort model cards by either name or creation time. Sorts by creation time by
     * default.</p>
     */
    inline ListModelCardsRequest& WithSortBy(ModelCardSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Sort model cards by ascending or descending order.</p>
     */
    inline const ModelCardSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Sort model cards by ascending or descending order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Sort model cards by ascending or descending order.</p>
     */
    inline void SetSortOrder(const ModelCardSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Sort model cards by ascending or descending order.</p>
     */
    inline void SetSortOrder(ModelCardSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Sort model cards by ascending or descending order.</p>
     */
    inline ListModelCardsRequest& WithSortOrder(const ModelCardSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Sort model cards by ascending or descending order.</p>
     */
    inline ListModelCardsRequest& WithSortOrder(ModelCardSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    ModelCardStatus m_modelCardStatus;
    bool m_modelCardStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ModelCardSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    ModelCardSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
