/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/SuggestionTextWithHighlights.h>
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
   * <p>The <code>SuggestionTextWithHighlights</code> structure
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SuggestionValue">AWS
   * API Reference</a></p>
   */
  class SuggestionValue
  {
  public:
    AWS_KENDRA_API SuggestionValue() = default;
    AWS_KENDRA_API SuggestionValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SuggestionValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>SuggestionTextWithHighlights</code> structure that contains the
     * query suggestion text and highlights.</p>
     */
    inline const SuggestionTextWithHighlights& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = SuggestionTextWithHighlights>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = SuggestionTextWithHighlights>
    SuggestionValue& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    SuggestionTextWithHighlights m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
