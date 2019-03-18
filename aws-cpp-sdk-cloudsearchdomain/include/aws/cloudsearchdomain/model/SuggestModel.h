/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDSEARCHDOMAIN_API SuggestModel
  {
  public:
    SuggestModel();
    SuggestModel(Aws::Utils::Json::JsonView jsonValue);
    SuggestModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline SuggestModel& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline SuggestModel& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}

    /**
     * <p>The query string specified in the suggest request.</p>
     */
    inline SuggestModel& WithQuery(const char* value) { SetQuery(value); return *this;}


    /**
     * <p>The number of documents that were found to match the query string.</p>
     */
    inline long long GetFound() const{ return m_found; }

    /**
     * <p>The number of documents that were found to match the query string.</p>
     */
    inline bool FoundHasBeenSet() const { return m_foundHasBeenSet; }

    /**
     * <p>The number of documents that were found to match the query string.</p>
     */
    inline void SetFound(long long value) { m_foundHasBeenSet = true; m_found = value; }

    /**
     * <p>The number of documents that were found to match the query string.</p>
     */
    inline SuggestModel& WithFound(long long value) { SetFound(value); return *this;}


    /**
     * <p>The documents that match the query string.</p>
     */
    inline const Aws::Vector<SuggestionMatch>& GetSuggestions() const{ return m_suggestions; }

    /**
     * <p>The documents that match the query string.</p>
     */
    inline bool SuggestionsHasBeenSet() const { return m_suggestionsHasBeenSet; }

    /**
     * <p>The documents that match the query string.</p>
     */
    inline void SetSuggestions(const Aws::Vector<SuggestionMatch>& value) { m_suggestionsHasBeenSet = true; m_suggestions = value; }

    /**
     * <p>The documents that match the query string.</p>
     */
    inline void SetSuggestions(Aws::Vector<SuggestionMatch>&& value) { m_suggestionsHasBeenSet = true; m_suggestions = std::move(value); }

    /**
     * <p>The documents that match the query string.</p>
     */
    inline SuggestModel& WithSuggestions(const Aws::Vector<SuggestionMatch>& value) { SetSuggestions(value); return *this;}

    /**
     * <p>The documents that match the query string.</p>
     */
    inline SuggestModel& WithSuggestions(Aws::Vector<SuggestionMatch>&& value) { SetSuggestions(std::move(value)); return *this;}

    /**
     * <p>The documents that match the query string.</p>
     */
    inline SuggestModel& AddSuggestions(const SuggestionMatch& value) { m_suggestionsHasBeenSet = true; m_suggestions.push_back(value); return *this; }

    /**
     * <p>The documents that match the query string.</p>
     */
    inline SuggestModel& AddSuggestions(SuggestionMatch&& value) { m_suggestionsHasBeenSet = true; m_suggestions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_query;
    bool m_queryHasBeenSet;

    long long m_found;
    bool m_foundHasBeenSet;

    Aws::Vector<SuggestionMatch> m_suggestions;
    bool m_suggestionsHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
