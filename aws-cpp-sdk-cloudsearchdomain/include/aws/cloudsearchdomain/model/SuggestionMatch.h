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
   * <p>An autocomplete suggestion that matches the query string specified in a
   * <code>SuggestRequest</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/SuggestionMatch">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API SuggestionMatch
  {
  public:
    SuggestionMatch();
    SuggestionMatch(Aws::Utils::Json::JsonView jsonValue);
    SuggestionMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline const Aws::String& GetSuggestion() const{ return m_suggestion; }

    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline bool SuggestionHasBeenSet() const { return m_suggestionHasBeenSet; }

    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline void SetSuggestion(const Aws::String& value) { m_suggestionHasBeenSet = true; m_suggestion = value; }

    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline void SetSuggestion(Aws::String&& value) { m_suggestionHasBeenSet = true; m_suggestion = std::move(value); }

    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline void SetSuggestion(const char* value) { m_suggestionHasBeenSet = true; m_suggestion.assign(value); }

    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline SuggestionMatch& WithSuggestion(const Aws::String& value) { SetSuggestion(value); return *this;}

    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline SuggestionMatch& WithSuggestion(Aws::String&& value) { SetSuggestion(std::move(value)); return *this;}

    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline SuggestionMatch& WithSuggestion(const char* value) { SetSuggestion(value); return *this;}


    /**
     * <p>The relevance score of a suggested match.</p>
     */
    inline long long GetScore() const{ return m_score; }

    /**
     * <p>The relevance score of a suggested match.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The relevance score of a suggested match.</p>
     */
    inline void SetScore(long long value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The relevance score of a suggested match.</p>
     */
    inline SuggestionMatch& WithScore(long long value) { SetScore(value); return *this;}


    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline SuggestionMatch& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline SuggestionMatch& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline SuggestionMatch& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_suggestion;
    bool m_suggestionHasBeenSet;

    long long m_score;
    bool m_scoreHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
