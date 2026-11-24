/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/CustomColors.h>
#include <aws/core/utils/DateTime.h>

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
 * <p>The visual theme of a portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/PortalTheme">AWS
 * API Reference</a></p>
 */
class PortalTheme {
 public:
  AWS_APIPORTAL_API PortalTheme() = default;
  AWS_APIPORTAL_API PortalTheme(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API PortalTheme& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The colors used in the portal.</p>
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
   * <p>When the portal logo was last uploaded. Absent if the portal has no logo.</p>
   */
  inline const Aws::Utils::DateTime& GetLogoUploadedAt() const { return m_logoUploadedAt; }
  inline bool LogoUploadedAtHasBeenSet() const { return m_logoUploadedAtHasBeenSet; }
  template <typename LogoUploadedAtT = Aws::Utils::DateTime>
  void SetLogoUploadedAt(LogoUploadedAtT&& value) {
    m_logoUploadedAtHasBeenSet = true;
    m_logoUploadedAt = std::forward<LogoUploadedAtT>(value);
  }
  template <typename LogoUploadedAtT = Aws::Utils::DateTime>
  PortalTheme& WithLogoUploadedAt(LogoUploadedAtT&& value) {
    SetLogoUploadedAt(std::forward<LogoUploadedAtT>(value));
    return *this;
  }
  ///@}
 private:
  CustomColors m_customColors;

  Aws::Utils::DateTime m_logoUploadedAt{};
  bool m_customColorsHasBeenSet = false;
  bool m_logoUploadedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
