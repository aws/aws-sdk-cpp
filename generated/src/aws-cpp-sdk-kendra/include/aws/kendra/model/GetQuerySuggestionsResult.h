/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/Suggestion.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{
  class GetQuerySuggestionsResult
  {
  public:
    AWS_KENDRA_API GetQuerySuggestionsResult() = default;
    AWS_KENDRA_API GetQuerySuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API GetQuerySuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for a list of query suggestions for an index.</p>
     */
    inline const Aws::String& GetQuerySuggestionsId() const { return m_querySuggestionsId; }
    template<typename QuerySuggestionsIdT = Aws::String>
    void SetQuerySuggestionsId(QuerySuggestionsIdT&& value) { m_querySuggestionsIdHasBeenSet = true; m_querySuggestionsId = std::forward<QuerySuggestionsIdT>(value); }
    template<typename QuerySuggestionsIdT = Aws::String>
    GetQuerySuggestionsResult& WithQuerySuggestionsId(QuerySuggestionsIdT&& value) { SetQuerySuggestionsId(std::forward<QuerySuggestionsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of query suggestions for an index.</p>
     */
    inline const Aws::Vector<Suggestion>& GetSuggestions() const { return m_suggestions; }
    template<typename SuggestionsT = Aws::Vector<Suggestion>>
    void SetSuggestions(SuggestionsT&& value) { m_suggestionsHasBeenSet = true; m_suggestions = std::forward<SuggestionsT>(value); }
    template<typename SuggestionsT = Aws::Vector<Suggestion>>
    GetQuerySuggestionsResult& WithSuggestions(SuggestionsT&& value) { SetSuggestions(std::forward<SuggestionsT>(value)); return *this;}
    template<typename SuggestionsT = Suggestion>
    GetQuerySuggestionsResult& AddSuggestions(SuggestionsT&& value) { m_suggestionsHasBeenSet = true; m_suggestions.emplace_back(std::forward<SuggestionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQuerySuggestionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_querySuggestionsId;
    bool m_querySuggestionsIdHasBeenSet = false;

    Aws::Vector<Suggestion> m_suggestions;
    bool m_suggestionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
