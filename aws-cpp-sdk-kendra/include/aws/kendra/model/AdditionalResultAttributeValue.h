/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/TextWithHighlights.h>
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
   * <p>An attribute returned with a document from a search.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AdditionalResultAttributeValue">AWS
   * API Reference</a></p>
   */
  class AdditionalResultAttributeValue
  {
  public:
    AWS_KENDRA_API AdditionalResultAttributeValue();
    AWS_KENDRA_API AdditionalResultAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AdditionalResultAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text associated with the attribute and information about the highlight to
     * apply to the text.</p>
     */
    inline const TextWithHighlights& GetTextWithHighlightsValue() const{ return m_textWithHighlightsValue; }

    /**
     * <p>The text associated with the attribute and information about the highlight to
     * apply to the text.</p>
     */
    inline bool TextWithHighlightsValueHasBeenSet() const { return m_textWithHighlightsValueHasBeenSet; }

    /**
     * <p>The text associated with the attribute and information about the highlight to
     * apply to the text.</p>
     */
    inline void SetTextWithHighlightsValue(const TextWithHighlights& value) { m_textWithHighlightsValueHasBeenSet = true; m_textWithHighlightsValue = value; }

    /**
     * <p>The text associated with the attribute and information about the highlight to
     * apply to the text.</p>
     */
    inline void SetTextWithHighlightsValue(TextWithHighlights&& value) { m_textWithHighlightsValueHasBeenSet = true; m_textWithHighlightsValue = std::move(value); }

    /**
     * <p>The text associated with the attribute and information about the highlight to
     * apply to the text.</p>
     */
    inline AdditionalResultAttributeValue& WithTextWithHighlightsValue(const TextWithHighlights& value) { SetTextWithHighlightsValue(value); return *this;}

    /**
     * <p>The text associated with the attribute and information about the highlight to
     * apply to the text.</p>
     */
    inline AdditionalResultAttributeValue& WithTextWithHighlightsValue(TextWithHighlights&& value) { SetTextWithHighlightsValue(std::move(value)); return *this;}

  private:

    TextWithHighlights m_textWithHighlightsValue;
    bool m_textWithHighlightsValueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
