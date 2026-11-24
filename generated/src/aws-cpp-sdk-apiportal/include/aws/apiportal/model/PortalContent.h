/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/PortalTheme.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>The display settings of a portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/PortalContent">AWS
 * API Reference</a></p>
 */
class PortalContent {
 public:
  AWS_APIPORTAL_API PortalContent() = default;
  AWS_APIPORTAL_API PortalContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API PortalContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name shown in the portal, from 3 to 255 characters.</p>
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
   * <p>A description of the portal, up to 1024 characters.</p>
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
   * <p>The colors and logo of the portal.</p>
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
  Aws::String m_displayName;

  Aws::String m_description;

  PortalTheme m_theme;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_themeHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
