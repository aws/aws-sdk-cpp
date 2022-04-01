﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API ListFlowDefinitionsRequest : public SageMakerRequest
  {
  public:
    ListFlowDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFlowDefinitions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns only flow definitions with a creation time greater than
     * or equal to the specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only flow definitions with a creation time greater than
     * or equal to the specified timestamp.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only flow definitions with a creation time greater than
     * or equal to the specified timestamp.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only flow definitions with a creation time greater than
     * or equal to the specified timestamp.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only flow definitions with a creation time greater than
     * or equal to the specified timestamp.</p>
     */
    inline ListFlowDefinitionsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only flow definitions with a creation time greater than
     * or equal to the specified timestamp.</p>
     */
    inline ListFlowDefinitionsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only flow definitions that were created before the
     * specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only flow definitions that were created before the
     * specified timestamp.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only flow definitions that were created before the
     * specified timestamp.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only flow definitions that were created before the
     * specified timestamp.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only flow definitions that were created before the
     * specified timestamp.</p>
     */
    inline ListFlowDefinitionsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only flow definitions that were created before the
     * specified timestamp.</p>
     */
    inline ListFlowDefinitionsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline ListFlowDefinitionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline ListFlowDefinitionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>A token to resume pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListFlowDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListFlowDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListFlowDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of items to return. If the total number of available items
     * is more than the value specified in <code>MaxResults</code>, then a
     * <code>NextToken</code> will be provided in the output that you can use to resume
     * pagination.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of items to return. If the total number of available items
     * is more than the value specified in <code>MaxResults</code>, then a
     * <code>NextToken</code> will be provided in the output that you can use to resume
     * pagination.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of items to return. If the total number of available items
     * is more than the value specified in <code>MaxResults</code>, then a
     * <code>NextToken</code> will be provided in the output that you can use to resume
     * pagination.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of items to return. If the total number of available items
     * is more than the value specified in <code>MaxResults</code>, then a
     * <code>NextToken</code> will be provided in the output that you can use to resume
     * pagination.</p>
     */
    inline ListFlowDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
