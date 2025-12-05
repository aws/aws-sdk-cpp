/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/PortalTheme.h>
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
 * <p>Contains the content that is visible to portal consumers including the
 * themes, display names, and description.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/PortalContent">AWS
 * API Reference</a></p>
 */
class PortalContent {
 public:
  AWS_APIGATEWAYV2_API PortalContent() = default;
  AWS_APIGATEWAYV2_API PortalContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API PortalContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the portal.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PortalContent& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name for the portal.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  PortalContent& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The theme for the portal.</p>
   */
  inline const PortalTheme& GetTheme() const { return m_theme; }
  inline bool ThemeHasBeenSet() const { return m_themeHasBeenSet; }
  template <typename ThemeT = PortalTheme>
  void SetTheme(ThemeT&& value) {
    m_themeHasBeenSet = true;
    m_theme = std::forward<ThemeT>(value);
  }
  template <typename ThemeT = PortalTheme>
  PortalContent& WithTheme(ThemeT&& value) {
    SetTheme(std::forward<ThemeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_displayName;

  PortalTheme m_theme;
  bool m_descriptionHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_themeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
