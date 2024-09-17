/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/AttributeSuggestionsGetConfig.h>
#include <aws/kendra/model/SuggestionType.h>
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


    ///@{
    /**
     * <p>The identifier of the index you want to get query suggestions from.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline GetQuerySuggestionsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline GetQuerySuggestionsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline GetQuerySuggestionsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of a user's query to generate query suggestions.</p> <p>A query is
     * suggested if the query prefix matches what a user starts to type as their
     * query.</p> <p>Amazon Kendra does not show any suggestions if a user types fewer
     * than two characters or more than 60 characters. A query must also have at least
     * one search result and contain at least one word of more than four
     * characters.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }
    inline GetQuerySuggestionsRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}
    inline GetQuerySuggestionsRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}
    inline GetQuerySuggestionsRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of query suggestions you want to show to your users.</p>
     */
    inline int GetMaxSuggestionsCount() const{ return m_maxSuggestionsCount; }
    inline bool MaxSuggestionsCountHasBeenSet() const { return m_maxSuggestionsCountHasBeenSet; }
    inline void SetMaxSuggestionsCount(int value) { m_maxSuggestionsCountHasBeenSet = true; m_maxSuggestionsCount = value; }
    inline GetQuerySuggestionsRequest& WithMaxSuggestionsCount(int value) { SetMaxSuggestionsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suggestions type to base query suggestions on. The suggestion types are
     * query history or document fields/attributes. You can set one type or the
     * other.</p> <p>If you set query history as your suggestions type, Amazon Kendra
     * suggests queries relevant to your users based on popular queries in the query
     * history.</p> <p>If you set document fields/attributes as your suggestions type,
     * Amazon Kendra suggests queries relevant to your users based on the contents of
     * document fields.</p>
     */
    inline const Aws::Vector<SuggestionType>& GetSuggestionTypes() const{ return m_suggestionTypes; }
    inline bool SuggestionTypesHasBeenSet() const { return m_suggestionTypesHasBeenSet; }
    inline void SetSuggestionTypes(const Aws::Vector<SuggestionType>& value) { m_suggestionTypesHasBeenSet = true; m_suggestionTypes = value; }
    inline void SetSuggestionTypes(Aws::Vector<SuggestionType>&& value) { m_suggestionTypesHasBeenSet = true; m_suggestionTypes = std::move(value); }
    inline GetQuerySuggestionsRequest& WithSuggestionTypes(const Aws::Vector<SuggestionType>& value) { SetSuggestionTypes(value); return *this;}
    inline GetQuerySuggestionsRequest& WithSuggestionTypes(Aws::Vector<SuggestionType>&& value) { SetSuggestionTypes(std::move(value)); return *this;}
    inline GetQuerySuggestionsRequest& AddSuggestionTypes(const SuggestionType& value) { m_suggestionTypesHasBeenSet = true; m_suggestionTypes.push_back(value); return *this; }
    inline GetQuerySuggestionsRequest& AddSuggestionTypes(SuggestionType&& value) { m_suggestionTypesHasBeenSet = true; m_suggestionTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for the document fields/attributes that you want to
     * base query suggestions on.</p>
     */
    inline const AttributeSuggestionsGetConfig& GetAttributeSuggestionsConfig() const{ return m_attributeSuggestionsConfig; }
    inline bool AttributeSuggestionsConfigHasBeenSet() const { return m_attributeSuggestionsConfigHasBeenSet; }
    inline void SetAttributeSuggestionsConfig(const AttributeSuggestionsGetConfig& value) { m_attributeSuggestionsConfigHasBeenSet = true; m_attributeSuggestionsConfig = value; }
    inline void SetAttributeSuggestionsConfig(AttributeSuggestionsGetConfig&& value) { m_attributeSuggestionsConfigHasBeenSet = true; m_attributeSuggestionsConfig = std::move(value); }
    inline GetQuerySuggestionsRequest& WithAttributeSuggestionsConfig(const AttributeSuggestionsGetConfig& value) { SetAttributeSuggestionsConfig(value); return *this;}
    inline GetQuerySuggestionsRequest& WithAttributeSuggestionsConfig(AttributeSuggestionsGetConfig&& value) { SetAttributeSuggestionsConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    int m_maxSuggestionsCount;
    bool m_maxSuggestionsCountHasBeenSet = false;

    Aws::Vector<SuggestionType> m_suggestionTypes;
    bool m_suggestionTypesHasBeenSet = false;

    AttributeSuggestionsGetConfig m_attributeSuggestionsConfig;
    bool m_attributeSuggestionsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
