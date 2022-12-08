/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The text format for the title.</p> <p>This is a union type structure. For
   * this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ShortFormatText">AWS
   * API Reference</a></p>
   */
  class ShortFormatText
  {
  public:
    AWS_QUICKSIGHT_API ShortFormatText();
    AWS_QUICKSIGHT_API ShortFormatText(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ShortFormatText& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Plain text format.</p>
     */
    inline const Aws::String& GetPlainText() const{ return m_plainText; }

    /**
     * <p>Plain text format.</p>
     */
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }

    /**
     * <p>Plain text format.</p>
     */
    inline void SetPlainText(const Aws::String& value) { m_plainTextHasBeenSet = true; m_plainText = value; }

    /**
     * <p>Plain text format.</p>
     */
    inline void SetPlainText(Aws::String&& value) { m_plainTextHasBeenSet = true; m_plainText = std::move(value); }

    /**
     * <p>Plain text format.</p>
     */
    inline void SetPlainText(const char* value) { m_plainTextHasBeenSet = true; m_plainText.assign(value); }

    /**
     * <p>Plain text format.</p>
     */
    inline ShortFormatText& WithPlainText(const Aws::String& value) { SetPlainText(value); return *this;}

    /**
     * <p>Plain text format.</p>
     */
    inline ShortFormatText& WithPlainText(Aws::String&& value) { SetPlainText(std::move(value)); return *this;}

    /**
     * <p>Plain text format.</p>
     */
    inline ShortFormatText& WithPlainText(const char* value) { SetPlainText(value); return *this;}


    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline const Aws::String& GetRichText() const{ return m_richText; }

    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline bool RichTextHasBeenSet() const { return m_richTextHasBeenSet; }

    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline void SetRichText(const Aws::String& value) { m_richTextHasBeenSet = true; m_richText = value; }

    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline void SetRichText(Aws::String&& value) { m_richTextHasBeenSet = true; m_richText = std::move(value); }

    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline void SetRichText(const char* value) { m_richTextHasBeenSet = true; m_richText.assign(value); }

    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline ShortFormatText& WithRichText(const Aws::String& value) { SetRichText(value); return *this;}

    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline ShortFormatText& WithRichText(Aws::String&& value) { SetRichText(std::move(value)); return *this;}

    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline ShortFormatText& WithRichText(const char* value) { SetRichText(value); return *this;}

  private:

    Aws::String m_plainText;
    bool m_plainTextHasBeenSet = false;

    Aws::String m_richText;
    bool m_richTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
