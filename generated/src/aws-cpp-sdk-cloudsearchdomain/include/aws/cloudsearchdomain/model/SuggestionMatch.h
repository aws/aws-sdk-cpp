/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SuggestionMatch
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API SuggestionMatch() = default;
    AWS_CLOUDSEARCHDOMAIN_API SuggestionMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API SuggestionMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string that matches the query string specified in the
     * <code>SuggestRequest</code>. </p>
     */
    inline const Aws::String& GetSuggestion() const { return m_suggestion; }
    inline bool SuggestionHasBeenSet() const { return m_suggestionHasBeenSet; }
    template<typename SuggestionT = Aws::String>
    void SetSuggestion(SuggestionT&& value) { m_suggestionHasBeenSet = true; m_suggestion = std::forward<SuggestionT>(value); }
    template<typename SuggestionT = Aws::String>
    SuggestionMatch& WithSuggestion(SuggestionT&& value) { SetSuggestion(std::forward<SuggestionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of a suggested match.</p>
     */
    inline long long GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(long long value) { m_scoreHasBeenSet = true; m_score = value; }
    inline SuggestionMatch& WithScore(long long value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document ID of the suggested document.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SuggestionMatch& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_suggestion;
    bool m_suggestionHasBeenSet = false;

    long long m_score{0};
    bool m_scoreHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
