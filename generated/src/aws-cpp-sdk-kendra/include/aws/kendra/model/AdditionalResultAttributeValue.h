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
    AWS_KENDRA_API AdditionalResultAttributeValue() = default;
    AWS_KENDRA_API AdditionalResultAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AdditionalResultAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text associated with the attribute and information about the highlight to
     * apply to the text.</p>
     */
    inline const TextWithHighlights& GetTextWithHighlightsValue() const { return m_textWithHighlightsValue; }
    inline bool TextWithHighlightsValueHasBeenSet() const { return m_textWithHighlightsValueHasBeenSet; }
    template<typename TextWithHighlightsValueT = TextWithHighlights>
    void SetTextWithHighlightsValue(TextWithHighlightsValueT&& value) { m_textWithHighlightsValueHasBeenSet = true; m_textWithHighlightsValue = std::forward<TextWithHighlightsValueT>(value); }
    template<typename TextWithHighlightsValueT = TextWithHighlights>
    AdditionalResultAttributeValue& WithTextWithHighlightsValue(TextWithHighlightsValueT&& value) { SetTextWithHighlightsValue(std::forward<TextWithHighlightsValueT>(value)); return *this;}
    ///@}
  private:

    TextWithHighlights m_textWithHighlightsValue;
    bool m_textWithHighlightsValueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
