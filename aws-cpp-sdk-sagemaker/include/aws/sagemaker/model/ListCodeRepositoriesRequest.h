﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CodeRepositorySortBy.h>
#include <aws/sagemaker/model/CodeRepositorySortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API ListCodeRepositoriesRequest : public SageMakerRequest
  {
  public:
    ListCodeRepositoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCodeRepositories"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns only Git repositories that were created after the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only Git repositories that were created after the
     * specified time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only Git repositories that were created after the
     * specified time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only Git repositories that were created after the
     * specified time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only Git repositories that were created after the
     * specified time.</p>
     */
    inline ListCodeRepositoriesRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only Git repositories that were created after the
     * specified time.</p>
     */
    inline ListCodeRepositoriesRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only Git repositories that were created before the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only Git repositories that were created before the
     * specified time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only Git repositories that were created before the
     * specified time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only Git repositories that were created before the
     * specified time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only Git repositories that were created before the
     * specified time.</p>
     */
    inline ListCodeRepositoriesRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only Git repositories that were created before the
     * specified time.</p>
     */
    inline ListCodeRepositoriesRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only Git repositories that were last modified after the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>A filter that returns only Git repositories that were last modified after the
     * specified time.</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only Git repositories that were last modified after the
     * specified time.</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>A filter that returns only Git repositories that were last modified after the
     * specified time.</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only Git repositories that were last modified after the
     * specified time.</p>
     */
    inline ListCodeRepositoriesRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only Git repositories that were last modified after the
     * specified time.</p>
     */
    inline ListCodeRepositoriesRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only Git repositories that were last modified before
     * the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>A filter that returns only Git repositories that were last modified before
     * the specified time.</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only Git repositories that were last modified before
     * the specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>A filter that returns only Git repositories that were last modified before
     * the specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only Git repositories that were last modified before
     * the specified time.</p>
     */
    inline ListCodeRepositoriesRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only Git repositories that were last modified before
     * the specified time.</p>
     */
    inline ListCodeRepositoriesRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>The maximum number of Git repositories to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of Git repositories to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of Git repositories to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of Git repositories to return in the response.</p>
     */
    inline ListCodeRepositoriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A string in the Git repositories name. This filter returns only repositories
     * whose name contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in the Git repositories name. This filter returns only repositories
     * whose name contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in the Git repositories name. This filter returns only repositories
     * whose name contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in the Git repositories name. This filter returns only repositories
     * whose name contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in the Git repositories name. This filter returns only repositories
     * whose name contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in the Git repositories name. This filter returns only repositories
     * whose name contains the specified string.</p>
     */
    inline ListCodeRepositoriesRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in the Git repositories name. This filter returns only repositories
     * whose name contains the specified string.</p>
     */
    inline ListCodeRepositoriesRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in the Git repositories name. This filter returns only repositories
     * whose name contains the specified string.</p>
     */
    inline ListCodeRepositoriesRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline ListCodeRepositoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline ListCodeRepositoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline ListCodeRepositoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline const CodeRepositorySortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline void SetSortBy(const CodeRepositorySortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline void SetSortBy(CodeRepositorySortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline ListCodeRepositoriesRequest& WithSortBy(const CodeRepositorySortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline ListCodeRepositoriesRequest& WithSortBy(CodeRepositorySortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline const CodeRepositorySortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const CodeRepositorySortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(CodeRepositorySortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListCodeRepositoriesRequest& WithSortOrder(const CodeRepositorySortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListCodeRepositoriesRequest& WithSortOrder(CodeRepositorySortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    CodeRepositorySortBy m_sortBy;
    bool m_sortByHasBeenSet;

    CodeRepositorySortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
