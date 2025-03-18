/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/SuggestionHighlight.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides text and information about where to highlight the query suggestion
   * text.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SuggestionTextWithHighlights">AWS
   * API Reference</a></p>
   */
  class SuggestionTextWithHighlights
  {
  public:
    AWS_KENDRA_API SuggestionTextWithHighlights() = default;
    AWS_KENDRA_API SuggestionTextWithHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SuggestionTextWithHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query suggestion text to display to the user.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    SuggestionTextWithHighlights& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning and end of the query suggestion text that should be
     * highlighted.</p>
     */
    inline const Aws::Vector<SuggestionHighlight>& GetHighlights() const { return m_highlights; }
    inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }
    template<typename HighlightsT = Aws::Vector<SuggestionHighlight>>
    void SetHighlights(HighlightsT&& value) { m_highlightsHasBeenSet = true; m_highlights = std::forward<HighlightsT>(value); }
    template<typename HighlightsT = Aws::Vector<SuggestionHighlight>>
    SuggestionTextWithHighlights& WithHighlights(HighlightsT&& value) { SetHighlights(std::forward<HighlightsT>(value)); return *this;}
    template<typename HighlightsT = SuggestionHighlight>
    SuggestionTextWithHighlights& AddHighlights(HighlightsT&& value) { m_highlightsHasBeenSet = true; m_highlights.emplace_back(std::forward<HighlightsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<SuggestionHighlight> m_highlights;
    bool m_highlightsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
