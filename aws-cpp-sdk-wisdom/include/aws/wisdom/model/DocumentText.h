/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/Highlight.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The text of the document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DocumentText">AWS
   * API Reference</a></p>
   */
  class DocumentText
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API DocumentText();
    AWS_CONNECTWISDOMSERVICE_API DocumentText(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API DocumentText& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Highlights in the document text.</p>
     */
    inline const Aws::Vector<Highlight>& GetHighlights() const{ return m_highlights; }

    /**
     * <p>Highlights in the document text.</p>
     */
    inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }

    /**
     * <p>Highlights in the document text.</p>
     */
    inline void SetHighlights(const Aws::Vector<Highlight>& value) { m_highlightsHasBeenSet = true; m_highlights = value; }

    /**
     * <p>Highlights in the document text.</p>
     */
    inline void SetHighlights(Aws::Vector<Highlight>&& value) { m_highlightsHasBeenSet = true; m_highlights = std::move(value); }

    /**
     * <p>Highlights in the document text.</p>
     */
    inline DocumentText& WithHighlights(const Aws::Vector<Highlight>& value) { SetHighlights(value); return *this;}

    /**
     * <p>Highlights in the document text.</p>
     */
    inline DocumentText& WithHighlights(Aws::Vector<Highlight>&& value) { SetHighlights(std::move(value)); return *this;}

    /**
     * <p>Highlights in the document text.</p>
     */
    inline DocumentText& AddHighlights(const Highlight& value) { m_highlightsHasBeenSet = true; m_highlights.push_back(value); return *this; }

    /**
     * <p>Highlights in the document text.</p>
     */
    inline DocumentText& AddHighlights(Highlight&& value) { m_highlightsHasBeenSet = true; m_highlights.push_back(std::move(value)); return *this; }


    /**
     * <p>Text in the document.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Text in the document.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Text in the document.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Text in the document.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Text in the document.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Text in the document.</p>
     */
    inline DocumentText& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Text in the document.</p>
     */
    inline DocumentText& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Text in the document.</p>
     */
    inline DocumentText& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::Vector<Highlight> m_highlights;
    bool m_highlightsHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
