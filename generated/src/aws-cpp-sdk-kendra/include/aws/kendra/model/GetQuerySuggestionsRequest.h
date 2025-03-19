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
    AWS_KENDRA_API GetQuerySuggestionsRequest() = default;

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
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    GetQuerySuggestionsRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
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
    inline const Aws::String& GetQueryText() const { return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    template<typename QueryTextT = Aws::String>
    void SetQueryText(QueryTextT&& value) { m_queryTextHasBeenSet = true; m_queryText = std::forward<QueryTextT>(value); }
    template<typename QueryTextT = Aws::String>
    GetQuerySuggestionsRequest& WithQueryText(QueryTextT&& value) { SetQueryText(std::forward<QueryTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of query suggestions you want to show to your users.</p>
     */
    inline int GetMaxSuggestionsCount() const { return m_maxSuggestionsCount; }
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
    inline const Aws::Vector<SuggestionType>& GetSuggestionTypes() const { return m_suggestionTypes; }
    inline bool SuggestionTypesHasBeenSet() const { return m_suggestionTypesHasBeenSet; }
    template<typename SuggestionTypesT = Aws::Vector<SuggestionType>>
    void SetSuggestionTypes(SuggestionTypesT&& value) { m_suggestionTypesHasBeenSet = true; m_suggestionTypes = std::forward<SuggestionTypesT>(value); }
    template<typename SuggestionTypesT = Aws::Vector<SuggestionType>>
    GetQuerySuggestionsRequest& WithSuggestionTypes(SuggestionTypesT&& value) { SetSuggestionTypes(std::forward<SuggestionTypesT>(value)); return *this;}
    inline GetQuerySuggestionsRequest& AddSuggestionTypes(SuggestionType value) { m_suggestionTypesHasBeenSet = true; m_suggestionTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for the document fields/attributes that you want to
     * base query suggestions on.</p>
     */
    inline const AttributeSuggestionsGetConfig& GetAttributeSuggestionsConfig() const { return m_attributeSuggestionsConfig; }
    inline bool AttributeSuggestionsConfigHasBeenSet() const { return m_attributeSuggestionsConfigHasBeenSet; }
    template<typename AttributeSuggestionsConfigT = AttributeSuggestionsGetConfig>
    void SetAttributeSuggestionsConfig(AttributeSuggestionsConfigT&& value) { m_attributeSuggestionsConfigHasBeenSet = true; m_attributeSuggestionsConfig = std::forward<AttributeSuggestionsConfigT>(value); }
    template<typename AttributeSuggestionsConfigT = AttributeSuggestionsGetConfig>
    GetQuerySuggestionsRequest& WithAttributeSuggestionsConfig(AttributeSuggestionsConfigT&& value) { SetAttributeSuggestionsConfig(std::forward<AttributeSuggestionsConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    int m_maxSuggestionsCount{0};
    bool m_maxSuggestionsCountHasBeenSet = false;

    Aws::Vector<SuggestionType> m_suggestionTypes;
    bool m_suggestionTypesHasBeenSet = false;

    AttributeSuggestionsGetConfig m_attributeSuggestionsConfig;
    bool m_attributeSuggestionsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
