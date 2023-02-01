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
    AWS_KENDRA_API GetQuerySuggestionsResult();
    AWS_KENDRA_API GetQuerySuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API GetQuerySuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for a list of query suggestions for an index.</p>
     */
    inline const Aws::String& GetQuerySuggestionsId() const{ return m_querySuggestionsId; }

    /**
     * <p>The identifier for a list of query suggestions for an index.</p>
     */
    inline void SetQuerySuggestionsId(const Aws::String& value) { m_querySuggestionsId = value; }

    /**
     * <p>The identifier for a list of query suggestions for an index.</p>
     */
    inline void SetQuerySuggestionsId(Aws::String&& value) { m_querySuggestionsId = std::move(value); }

    /**
     * <p>The identifier for a list of query suggestions for an index.</p>
     */
    inline void SetQuerySuggestionsId(const char* value) { m_querySuggestionsId.assign(value); }

    /**
     * <p>The identifier for a list of query suggestions for an index.</p>
     */
    inline GetQuerySuggestionsResult& WithQuerySuggestionsId(const Aws::String& value) { SetQuerySuggestionsId(value); return *this;}

    /**
     * <p>The identifier for a list of query suggestions for an index.</p>
     */
    inline GetQuerySuggestionsResult& WithQuerySuggestionsId(Aws::String&& value) { SetQuerySuggestionsId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a list of query suggestions for an index.</p>
     */
    inline GetQuerySuggestionsResult& WithQuerySuggestionsId(const char* value) { SetQuerySuggestionsId(value); return *this;}


    /**
     * <p>A list of query suggestions for an index.</p>
     */
    inline const Aws::Vector<Suggestion>& GetSuggestions() const{ return m_suggestions; }

    /**
     * <p>A list of query suggestions for an index.</p>
     */
    inline void SetSuggestions(const Aws::Vector<Suggestion>& value) { m_suggestions = value; }

    /**
     * <p>A list of query suggestions for an index.</p>
     */
    inline void SetSuggestions(Aws::Vector<Suggestion>&& value) { m_suggestions = std::move(value); }

    /**
     * <p>A list of query suggestions for an index.</p>
     */
    inline GetQuerySuggestionsResult& WithSuggestions(const Aws::Vector<Suggestion>& value) { SetSuggestions(value); return *this;}

    /**
     * <p>A list of query suggestions for an index.</p>
     */
    inline GetQuerySuggestionsResult& WithSuggestions(Aws::Vector<Suggestion>&& value) { SetSuggestions(std::move(value)); return *this;}

    /**
     * <p>A list of query suggestions for an index.</p>
     */
    inline GetQuerySuggestionsResult& AddSuggestions(const Suggestion& value) { m_suggestions.push_back(value); return *this; }

    /**
     * <p>A list of query suggestions for an index.</p>
     */
    inline GetQuerySuggestionsResult& AddSuggestions(Suggestion&& value) { m_suggestions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_querySuggestionsId;

    Aws::Vector<Suggestion> m_suggestions;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
