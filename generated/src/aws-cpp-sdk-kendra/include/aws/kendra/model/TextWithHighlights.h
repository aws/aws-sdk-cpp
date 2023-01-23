/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/Highlight.h>
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
   * <p>Provides text and information about where to highlight the
   * text.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TextWithHighlights">AWS
   * API Reference</a></p>
   */
  class TextWithHighlights
  {
  public:
    AWS_KENDRA_API TextWithHighlights();
    AWS_KENDRA_API TextWithHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TextWithHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text to display to the user.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text to display to the user.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text to display to the user.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text to display to the user.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text to display to the user.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text to display to the user.</p>
     */
    inline TextWithHighlights& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text to display to the user.</p>
     */
    inline TextWithHighlights& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text to display to the user.</p>
     */
    inline TextWithHighlights& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The beginning and end of the text that should be highlighted.</p>
     */
    inline const Aws::Vector<Highlight>& GetHighlights() const{ return m_highlights; }

    /**
     * <p>The beginning and end of the text that should be highlighted.</p>
     */
    inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }

    /**
     * <p>The beginning and end of the text that should be highlighted.</p>
     */
    inline void SetHighlights(const Aws::Vector<Highlight>& value) { m_highlightsHasBeenSet = true; m_highlights = value; }

    /**
     * <p>The beginning and end of the text that should be highlighted.</p>
     */
    inline void SetHighlights(Aws::Vector<Highlight>&& value) { m_highlightsHasBeenSet = true; m_highlights = std::move(value); }

    /**
     * <p>The beginning and end of the text that should be highlighted.</p>
     */
    inline TextWithHighlights& WithHighlights(const Aws::Vector<Highlight>& value) { SetHighlights(value); return *this;}

    /**
     * <p>The beginning and end of the text that should be highlighted.</p>
     */
    inline TextWithHighlights& WithHighlights(Aws::Vector<Highlight>&& value) { SetHighlights(std::move(value)); return *this;}

    /**
     * <p>The beginning and end of the text that should be highlighted.</p>
     */
    inline TextWithHighlights& AddHighlights(const Highlight& value) { m_highlightsHasBeenSet = true; m_highlights.push_back(value); return *this; }

    /**
     * <p>The beginning and end of the text that should be highlighted.</p>
     */
    inline TextWithHighlights& AddHighlights(Highlight&& value) { m_highlightsHasBeenSet = true; m_highlights.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<Highlight> m_highlights;
    bool m_highlightsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
