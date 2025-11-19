/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Represents custom colors for a published portal.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CustomColors">AWS
 * API Reference</a></p>
 */
class CustomColors {
 public:
  AWS_APIGATEWAYV2_API CustomColors() = default;
  AWS_APIGATEWAYV2_API CustomColors(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API CustomColors& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Represents the accent color.</p>
   */
  inline const Aws::String& GetAccentColor() const { return m_accentColor; }
  inline bool AccentColorHasBeenSet() const { return m_accentColorHasBeenSet; }
  template <typename AccentColorT = Aws::String>
  void SetAccentColor(AccentColorT&& value) {
    m_accentColorHasBeenSet = true;
    m_accentColor = std::forward<AccentColorT>(value);
  }
  template <typename AccentColorT = Aws::String>
  CustomColors& WithAccentColor(AccentColorT&& value) {
    SetAccentColor(std::forward<AccentColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the background color.</p>
   */
  inline const Aws::String& GetBackgroundColor() const { return m_backgroundColor; }
  inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
  template <typename BackgroundColorT = Aws::String>
  void SetBackgroundColor(BackgroundColorT&& value) {
    m_backgroundColorHasBeenSet = true;
    m_backgroundColor = std::forward<BackgroundColorT>(value);
  }
  template <typename BackgroundColorT = Aws::String>
  CustomColors& WithBackgroundColor(BackgroundColorT&& value) {
    SetBackgroundColor(std::forward<BackgroundColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The errorValidationColor.</p>
   */
  inline const Aws::String& GetErrorValidationColor() const { return m_errorValidationColor; }
  inline bool ErrorValidationColorHasBeenSet() const { return m_errorValidationColorHasBeenSet; }
  template <typename ErrorValidationColorT = Aws::String>
  void SetErrorValidationColor(ErrorValidationColorT&& value) {
    m_errorValidationColorHasBeenSet = true;
    m_errorValidationColor = std::forward<ErrorValidationColorT>(value);
  }
  template <typename ErrorValidationColorT = Aws::String>
  CustomColors& WithErrorValidationColor(ErrorValidationColorT&& value) {
    SetErrorValidationColor(std::forward<ErrorValidationColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the header color.</p>
   */
  inline const Aws::String& GetHeaderColor() const { return m_headerColor; }
  inline bool HeaderColorHasBeenSet() const { return m_headerColorHasBeenSet; }
  template <typename HeaderColorT = Aws::String>
  void SetHeaderColor(HeaderColorT&& value) {
    m_headerColorHasBeenSet = true;
    m_headerColor = std::forward<HeaderColorT>(value);
  }
  template <typename HeaderColorT = Aws::String>
  CustomColors& WithHeaderColor(HeaderColorT&& value) {
    SetHeaderColor(std::forward<HeaderColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the navigation color.</p>
   */
  inline const Aws::String& GetNavigationColor() const { return m_navigationColor; }
  inline bool NavigationColorHasBeenSet() const { return m_navigationColorHasBeenSet; }
  template <typename NavigationColorT = Aws::String>
  void SetNavigationColor(NavigationColorT&& value) {
    m_navigationColorHasBeenSet = true;
    m_navigationColor = std::forward<NavigationColorT>(value);
  }
  template <typename NavigationColorT = Aws::String>
  CustomColors& WithNavigationColor(NavigationColorT&& value) {
    SetNavigationColor(std::forward<NavigationColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the text color.</p>
   */
  inline const Aws::String& GetTextColor() const { return m_textColor; }
  inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
  template <typename TextColorT = Aws::String>
  void SetTextColor(TextColorT&& value) {
    m_textColorHasBeenSet = true;
    m_textColor = std::forward<TextColorT>(value);
  }
  template <typename TextColorT = Aws::String>
  CustomColors& WithTextColor(TextColorT&& value) {
    SetTextColor(std::forward<TextColorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accentColor;
  bool m_accentColorHasBeenSet = false;

  Aws::String m_backgroundColor;
  bool m_backgroundColorHasBeenSet = false;

  Aws::String m_errorValidationColor;
  bool m_errorValidationColorHasBeenSet = false;

  Aws::String m_headerColor;
  bool m_headerColorHasBeenSet = false;

  Aws::String m_navigationColor;
  bool m_navigationColorHasBeenSet = false;

  Aws::String m_textColor;
  bool m_textColorHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
