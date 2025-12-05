/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/CustomColors.h>
#include <aws/core/utils/DateTime.h>

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
 * <p>Defines the theme for a portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/PortalTheme">AWS
 * API Reference</a></p>
 */
class PortalTheme {
 public:
  AWS_APIGATEWAYV2_API PortalTheme() = default;
  AWS_APIGATEWAYV2_API PortalTheme(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API PortalTheme& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Defines custom color values.</p>
   */
  inline const CustomColors& GetCustomColors() const { return m_customColors; }
  inline bool CustomColorsHasBeenSet() const { return m_customColorsHasBeenSet; }
  template <typename CustomColorsT = CustomColors>
  void SetCustomColors(CustomColorsT&& value) {
    m_customColorsHasBeenSet = true;
    m_customColors = std::forward<CustomColorsT>(value);
  }
  template <typename CustomColorsT = CustomColors>
  PortalTheme& WithCustomColors(CustomColorsT&& value) {
    SetCustomColors(std::forward<CustomColorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the logo was last uploaded.</p>
   */
  inline const Aws::Utils::DateTime& GetLogoLastUploaded() const { return m_logoLastUploaded; }
  inline bool LogoLastUploadedHasBeenSet() const { return m_logoLastUploadedHasBeenSet; }
  template <typename LogoLastUploadedT = Aws::Utils::DateTime>
  void SetLogoLastUploaded(LogoLastUploadedT&& value) {
    m_logoLastUploadedHasBeenSet = true;
    m_logoLastUploaded = std::forward<LogoLastUploadedT>(value);
  }
  template <typename LogoLastUploadedT = Aws::Utils::DateTime>
  PortalTheme& WithLogoLastUploaded(LogoLastUploadedT&& value) {
    SetLogoLastUploaded(std::forward<LogoLastUploadedT>(value));
    return *this;
  }
  ///@}
 private:
  CustomColors m_customColors;

  Aws::Utils::DateTime m_logoLastUploaded{};
  bool m_customColorsHasBeenSet = false;
  bool m_logoLastUploadedHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
