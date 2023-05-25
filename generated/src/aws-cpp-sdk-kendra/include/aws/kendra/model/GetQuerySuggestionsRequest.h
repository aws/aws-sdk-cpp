/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class GetQuerySuggestionsRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API GetQuerySuggestionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQuerySuggestions"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline GetQuerySuggestionsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline GetQuerySuggestionsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline GetQuerySuggestionsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }

    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }

    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }

    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }

    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }

    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline GetQuerySuggestionsRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}

    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline GetQuerySuggestionsRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}

    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline GetQuerySuggestionsRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}


    /**
     * <p>The maximum number of query suggestions you want to show to your users.</p>
     */
    inline int GetMaxSuggestionsCount() const{ return m_maxSuggestionsCount; }

    /**
     * <p>The maximum number of query suggestions you want to show to your users.</p>
     */
    inline bool MaxSuggestionsCountHasBeenSet() const { return m_maxSuggestionsCountHasBeenSet; }

    /**
     * <p>The maximum number of query suggestions you want to show to your users.</p>
     */
    inline void SetMaxSuggestionsCount(int value) { m_maxSuggestionsCountHasBeenSet = true; m_maxSuggestionsCount = value; }

    /**
     * <p>The maximum number of query suggestions you want to show to your users.</p>
     */
    inline GetQuerySuggestionsRequest& WithMaxSuggestionsCount(int value) { SetMaxSuggestionsCount(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    int m_maxSuggestionsCount;
    bool m_maxSuggestionsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
