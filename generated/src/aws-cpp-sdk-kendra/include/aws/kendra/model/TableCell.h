/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about a table cell in a table excerpt.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TableCell">AWS
   * API Reference</a></p>
   */
  class TableCell
  {
  public:
    AWS_KENDRA_API TableCell();
    AWS_KENDRA_API TableCell(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TableCell& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline TableCell& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline TableCell& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline TableCell& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p> <code>TRUE</code> if the response of the table cell is the top answer. This
     * is the cell value or content with the highest confidence score or is the most
     * relevant to the query.</p>
     */
    inline bool GetTopAnswer() const{ return m_topAnswer; }

    /**
     * <p> <code>TRUE</code> if the response of the table cell is the top answer. This
     * is the cell value or content with the highest confidence score or is the most
     * relevant to the query.</p>
     */
    inline bool TopAnswerHasBeenSet() const { return m_topAnswerHasBeenSet; }

    /**
     * <p> <code>TRUE</code> if the response of the table cell is the top answer. This
     * is the cell value or content with the highest confidence score or is the most
     * relevant to the query.</p>
     */
    inline void SetTopAnswer(bool value) { m_topAnswerHasBeenSet = true; m_topAnswer = value; }

    /**
     * <p> <code>TRUE</code> if the response of the table cell is the top answer. This
     * is the cell value or content with the highest confidence score or is the most
     * relevant to the query.</p>
     */
    inline TableCell& WithTopAnswer(bool value) { SetTopAnswer(value); return *this;}


    /**
     * <p> <code>TRUE</code> means that the table cell has a high enough confidence and
     * is relevant to the query, so the value or content should be highlighted.</p>
     */
    inline bool GetHighlighted() const{ return m_highlighted; }

    /**
     * <p> <code>TRUE</code> means that the table cell has a high enough confidence and
     * is relevant to the query, so the value or content should be highlighted.</p>
     */
    inline bool HighlightedHasBeenSet() const { return m_highlightedHasBeenSet; }

    /**
     * <p> <code>TRUE</code> means that the table cell has a high enough confidence and
     * is relevant to the query, so the value or content should be highlighted.</p>
     */
    inline void SetHighlighted(bool value) { m_highlightedHasBeenSet = true; m_highlighted = value; }

    /**
     * <p> <code>TRUE</code> means that the table cell has a high enough confidence and
     * is relevant to the query, so the value or content should be highlighted.</p>
     */
    inline TableCell& WithHighlighted(bool value) { SetHighlighted(value); return *this;}


    /**
     * <p> <code>TRUE</code> means that the table cell should be treated as a
     * header.</p>
     */
    inline bool GetHeader() const{ return m_header; }

    /**
     * <p> <code>TRUE</code> means that the table cell should be treated as a
     * header.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p> <code>TRUE</code> means that the table cell should be treated as a
     * header.</p>
     */
    inline void SetHeader(bool value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p> <code>TRUE</code> means that the table cell should be treated as a
     * header.</p>
     */
    inline TableCell& WithHeader(bool value) { SetHeader(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_topAnswer;
    bool m_topAnswerHasBeenSet = false;

    bool m_highlighted;
    bool m_highlightedHasBeenSet = false;

    bool m_header;
    bool m_headerHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
