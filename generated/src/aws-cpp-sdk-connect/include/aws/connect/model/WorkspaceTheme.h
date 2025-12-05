/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/WorkspaceThemeConfig.h>

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
 * <p>Contains theme configuration for a workspace, supporting both light and dark
 * modes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkspaceTheme">AWS
 * API Reference</a></p>
 */
class WorkspaceTheme {
 public:
  AWS_CONNECT_API WorkspaceTheme() = default;
  AWS_CONNECT_API WorkspaceTheme(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkspaceTheme& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The theme configuration for light mode.</p>
   */
  inline const WorkspaceThemeConfig& GetLight() const { return m_light; }
  inline bool LightHasBeenSet() const { return m_lightHasBeenSet; }
  template <typename LightT = WorkspaceThemeConfig>
  void SetLight(LightT&& value) {
    m_lightHasBeenSet = true;
    m_light = std::forward<LightT>(value);
  }
  template <typename LightT = WorkspaceThemeConfig>
  WorkspaceTheme& WithLight(LightT&& value) {
    SetLight(std::forward<LightT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The theme configuration for dark mode.</p>
   */
  inline const WorkspaceThemeConfig& GetDark() const { return m_dark; }
  inline bool DarkHasBeenSet() const { return m_darkHasBeenSet; }
  template <typename DarkT = WorkspaceThemeConfig>
  void SetDark(DarkT&& value) {
    m_darkHasBeenSet = true;
    m_dark = std::forward<DarkT>(value);
  }
  template <typename DarkT = WorkspaceThemeConfig>
  WorkspaceTheme& WithDark(DarkT&& value) {
    SetDark(std::forward<DarkT>(value));
    return *this;
  }
  ///@}
 private:
  WorkspaceThemeConfig m_light;

  WorkspaceThemeConfig m_dark;
  bool m_lightHasBeenSet = false;
  bool m_darkHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
