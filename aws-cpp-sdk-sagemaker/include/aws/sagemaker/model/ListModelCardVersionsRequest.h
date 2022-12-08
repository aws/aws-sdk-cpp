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
#include <aws/sagemaker/model/ModelCardVersionSortBy.h>
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
  class ListModelCardVersionsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListModelCardVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelCardVersions"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Only list model card versions that were created after the time specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Only list model card versions that were created after the time specified.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Only list model card versions that were created after the time specified.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Only list model card versions that were created after the time specified.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Only list model card versions that were created after the time specified.</p>
     */
    inline ListModelCardVersionsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Only list model card versions that were created after the time specified.</p>
     */
    inline ListModelCardVersionsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Only list model card versions that were created before the time
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Only list model card versions that were created before the time
     * specified.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Only list model card versions that were created before the time
     * specified.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Only list model card versions that were created before the time
     * specified.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Only list model card versions that were created before the time
     * specified.</p>
     */
    inline ListModelCardVersionsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Only list model card versions that were created before the time
     * specified.</p>
     */
    inline ListModelCardVersionsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>The maximum number of model card versions to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of model card versions to list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of model card versions to list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of model card versions to list.</p>
     */
    inline ListModelCardVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>List model card versions for the model card with the specified name.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }

    /**
     * <p>List model card versions for the model card with the specified name.</p>
     */
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }

    /**
     * <p>List model card versions for the model card with the specified name.</p>
     */
    inline void SetModelCardName(const Aws::String& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = value; }

    /**
     * <p>List model card versions for the model card with the specified name.</p>
     */
    inline void SetModelCardName(Aws::String&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::move(value); }

    /**
     * <p>List model card versions for the model card with the specified name.</p>
     */
    inline void SetModelCardName(const char* value) { m_modelCardNameHasBeenSet = true; m_modelCardName.assign(value); }

    /**
     * <p>List model card versions for the model card with the specified name.</p>
     */
    inline ListModelCardVersionsRequest& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}

    /**
     * <p>List model card versions for the model card with the specified name.</p>
     */
    inline ListModelCardVersionsRequest& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}

    /**
     * <p>List model card versions for the model card with the specified name.</p>
     */
    inline ListModelCardVersionsRequest& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}


    /**
     * <p>Only list model card versions with the specified approval status.</p>
     */
    inline const ModelCardStatus& GetModelCardStatus() const{ return m_modelCardStatus; }

    /**
     * <p>Only list model card versions with the specified approval status.</p>
     */
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }

    /**
     * <p>Only list model card versions with the specified approval status.</p>
     */
    inline void SetModelCardStatus(const ModelCardStatus& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }

    /**
     * <p>Only list model card versions with the specified approval status.</p>
     */
    inline void SetModelCardStatus(ModelCardStatus&& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = std::move(value); }

    /**
     * <p>Only list model card versions with the specified approval status.</p>
     */
    inline ListModelCardVersionsRequest& WithModelCardStatus(const ModelCardStatus& value) { SetModelCardStatus(value); return *this;}

    /**
     * <p>Only list model card versions with the specified approval status.</p>
     */
    inline ListModelCardVersionsRequest& WithModelCardStatus(ModelCardStatus&& value) { SetModelCardStatus(std::move(value)); return *this;}


    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline ListModelCardVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline ListModelCardVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline ListModelCardVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Sort listed model card versions by version. Sorts by version by default.</p>
     */
    inline const ModelCardVersionSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Sort listed model card versions by version. Sorts by version by default.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Sort listed model card versions by version. Sorts by version by default.</p>
     */
    inline void SetSortBy(const ModelCardVersionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Sort listed model card versions by version. Sorts by version by default.</p>
     */
    inline void SetSortBy(ModelCardVersionSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Sort listed model card versions by version. Sorts by version by default.</p>
     */
    inline ListModelCardVersionsRequest& WithSortBy(const ModelCardVersionSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Sort listed model card versions by version. Sorts by version by default.</p>
     */
    inline ListModelCardVersionsRequest& WithSortBy(ModelCardVersionSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Sort model card versions by ascending or descending order.</p>
     */
    inline const ModelCardSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Sort model card versions by ascending or descending order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Sort model card versions by ascending or descending order.</p>
     */
    inline void SetSortOrder(const ModelCardSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Sort model card versions by ascending or descending order.</p>
     */
    inline void SetSortOrder(ModelCardSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Sort model card versions by ascending or descending order.</p>
     */
    inline ListModelCardVersionsRequest& WithSortOrder(const ModelCardSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Sort model card versions by ascending or descending order.</p>
     */
    inline ListModelCardVersionsRequest& WithSortOrder(ModelCardSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    ModelCardStatus m_modelCardStatus;
    bool m_modelCardStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ModelCardVersionSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    ModelCardSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
