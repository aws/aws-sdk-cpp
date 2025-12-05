/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains color configuration for header elements in a workspace
 * theme.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PaletteHeader">AWS
 * API Reference</a></p>
 */
class PaletteHeader {
 public:
  AWS_CONNECT_API PaletteHeader() = default;
  AWS_CONNECT_API PaletteHeader(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PaletteHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The background color of the header.</p>
   */
  inline const Aws::String& GetBackground() const { return m_background; }
  inline bool BackgroundHasBeenSet() const { return m_backgroundHasBeenSet; }
  template <typename BackgroundT = Aws::String>
  void SetBackground(BackgroundT&& value) {
    m_backgroundHasBeenSet = true;
    m_background = std::forward<BackgroundT>(value);
  }
  template <typename BackgroundT = Aws::String>
  PaletteHeader& WithBackground(BackgroundT&& value) {
    SetBackground(std::forward<BackgroundT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text color in the header.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  PaletteHeader& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text color when hovering over header elements.</p>
   */
  inline const Aws::String& GetTextHover() const { return m_textHover; }
  inline bool TextHoverHasBeenSet() const { return m_textHoverHasBeenSet; }
  template <typename TextHoverT = Aws::String>
  void SetTextHover(TextHoverT&& value) {
    m_textHoverHasBeenSet = true;
    m_textHover = std::forward<TextHoverT>(value);
  }
  template <typename TextHoverT = Aws::String>
  PaletteHeader& WithTextHover(TextHoverT&& value) {
    SetTextHover(std::forward<TextHoverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to invert the colors of action buttons in the header.</p>
   */
  inline bool GetInvertActionsColors() const { return m_invertActionsColors; }
  inline bool InvertActionsColorsHasBeenSet() const { return m_invertActionsColorsHasBeenSet; }
  inline void SetInvertActionsColors(bool value) {
    m_invertActionsColorsHasBeenSet = true;
    m_invertActionsColors = value;
  }
  inline PaletteHeader& WithInvertActionsColors(bool value) {
    SetInvertActionsColors(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_background;

  Aws::String m_text;

  Aws::String m_textHover;

  bool m_invertActionsColors{false};
  bool m_backgroundHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_textHoverHasBeenSet = false;
  bool m_invertActionsColorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
