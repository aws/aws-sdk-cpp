/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearchdomain/model/SuggestionMatch.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>Container for the suggestion information returned in a
   * <code>SuggestResponse</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/SuggestModel">AWS
   * API Reference</a></p>
   */
  class SuggestModel
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API SuggestModel() = default;
    AWS_CLOUDSEARCHDOMAIN_API SuggestModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API SuggestModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline const Aws::String& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = Aws::String>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = Aws::String>
    SuggestModel& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents that were found to match the query string.</p>
     */
    inline long long GetFound() const { return m_found; }
    inline bool FoundHasBeenSet() const { return m_foundHasBeenSet; }
    inline void SetFound(long long value) { m_foundHasBeenSet = true; m_found = value; }
    inline SuggestModel& WithFound(long long value) { SetFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The documents that match the query string.</p>
     */
    inline const Aws::Vector<SuggestionMatch>& GetSuggestions() const { return m_suggestions; }
    inline bool SuggestionsHasBeenSet() const { return m_suggestionsHasBeenSet; }
    template<typename SuggestionsT = Aws::Vector<SuggestionMatch>>
    void SetSuggestions(SuggestionsT&& value) { m_suggestionsHasBeenSet = true; m_suggestions = std::forward<SuggestionsT>(value); }
    template<typename SuggestionsT = Aws::Vector<SuggestionMatch>>
    SuggestModel& WithSuggestions(SuggestionsT&& value) { SetSuggestions(std::forward<SuggestionsT>(value)); return *this;}
    template<typename SuggestionsT = SuggestionMatch>
    SuggestModel& AddSuggestions(SuggestionsT&& value) { m_suggestionsHasBeenSet = true; m_suggestions.emplace_back(std::forward<SuggestionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    long long m_found{0};
    bool m_foundHasBeenSet = false;

    Aws::Vector<SuggestionMatch> m_suggestions;
    bool m_suggestionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
