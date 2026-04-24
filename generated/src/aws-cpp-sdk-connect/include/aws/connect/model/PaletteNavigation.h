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
 * <p>Contains color configuration for navigation elements in a workspace
 * theme.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PaletteNavigation">AWS
 * API Reference</a></p>
 */
class PaletteNavigation {
 public:
  AWS_CONNECT_API PaletteNavigation() = default;
  AWS_CONNECT_API PaletteNavigation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PaletteNavigation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The background color of the navigation area.</p>
   */
  inline const Aws::String& GetBackground() const { return m_background; }
  inline bool BackgroundHasBeenSet() const { return m_backgroundHasBeenSet; }
  template <typename BackgroundT = Aws::String>
  void SetBackground(BackgroundT&& value) {
    m_backgroundHasBeenSet = true;
    m_background = std::forward<BackgroundT>(value);
  }
  template <typename BackgroundT = Aws::String>
  PaletteNavigation& WithBackground(BackgroundT&& value) {
    SetBackground(std::forward<BackgroundT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The background color when hovering over navigation text.</p>
   */
  inline const Aws::String& GetTextBackgroundHover() const { return m_textBackgroundHover; }
  inline bool TextBackgroundHoverHasBeenSet() const { return m_textBackgroundHoverHasBeenSet; }
  template <typename TextBackgroundHoverT = Aws::String>
  void SetTextBackgroundHover(TextBackgroundHoverT&& value) {
    m_textBackgroundHoverHasBeenSet = true;
    m_textBackgroundHover = std::forward<TextBackgroundHoverT>(value);
  }
  template <typename TextBackgroundHoverT = Aws::String>
  PaletteNavigation& WithTextBackgroundHover(TextBackgroundHoverT&& value) {
    SetTextBackgroundHover(std::forward<TextBackgroundHoverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The background color for active navigation items.</p>
   */
  inline const Aws::String& GetTextBackgroundActive() const { return m_textBackgroundActive; }
  inline bool TextBackgroundActiveHasBeenSet() const { return m_textBackgroundActiveHasBeenSet; }
  template <typename TextBackgroundActiveT = Aws::String>
  void SetTextBackgroundActive(TextBackgroundActiveT&& value) {
    m_textBackgroundActiveHasBeenSet = true;
    m_textBackgroundActive = std::forward<TextBackgroundActiveT>(value);
  }
  template <typename TextBackgroundActiveT = Aws::String>
  PaletteNavigation& WithTextBackgroundActive(TextBackgroundActiveT&& value) {
    SetTextBackgroundActive(std::forward<TextBackgroundActiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text color in the navigation area.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  PaletteNavigation& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text color when hovering over navigation items.</p>
   */
  inline const Aws::String& GetTextHover() const { return m_textHover; }
  inline bool TextHoverHasBeenSet() const { return m_textHoverHasBeenSet; }
  template <typename TextHoverT = Aws::String>
  void SetTextHover(TextHoverT&& value) {
    m_textHoverHasBeenSet = true;
    m_textHover = std::forward<TextHoverT>(value);
  }
  template <typename TextHoverT = Aws::String>
  PaletteNavigation& WithTextHover(TextHoverT&& value) {
    SetTextHover(std::forward<TextHoverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text color for active navigation items.</p>
   */
  inline const Aws::String& GetTextActive() const { return m_textActive; }
  inline bool TextActiveHasBeenSet() const { return m_textActiveHasBeenSet; }
  template <typename TextActiveT = Aws::String>
  void SetTextActive(TextActiveT&& value) {
    m_textActiveHasBeenSet = true;
    m_textActive = std::forward<TextActiveT>(value);
  }
  template <typename TextActiveT = Aws::String>
  PaletteNavigation& WithTextActive(TextActiveT&& value) {
    SetTextActive(std::forward<TextActiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to invert the colors of action buttons in the navigation area.</p>
   */
  inline bool GetInvertActionsColors() const { return m_invertActionsColors; }
  inline bool InvertActionsColorsHasBeenSet() const { return m_invertActionsColorsHasBeenSet; }
  inline void SetInvertActionsColors(bool value) {
    m_invertActionsColorsHasBeenSet = true;
    m_invertActionsColors = value;
  }
  inline PaletteNavigation& WithInvertActionsColors(bool value) {
    SetInvertActionsColors(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_background;

  Aws::String m_textBackgroundHover;

  Aws::String m_textBackgroundActive;

  Aws::String m_text;

  Aws::String m_textHover;

  Aws::String m_textActive;

  bool m_invertActionsColors{false};
  bool m_backgroundHasBeenSet = false;
  bool m_textBackgroundHoverHasBeenSet = false;
  bool m_textBackgroundActiveHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_textHoverHasBeenSet = false;
  bool m_textActiveHasBeenSet = false;
  bool m_invertActionsColorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
