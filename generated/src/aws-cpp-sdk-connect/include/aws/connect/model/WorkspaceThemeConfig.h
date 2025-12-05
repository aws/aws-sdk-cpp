/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/WorkspaceThemeImages.h>
#include <aws/connect/model/WorkspaceThemePalette.h>
#include <aws/connect/model/WorkspaceThemeTypography.h>

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
 * <p>Contains detailed theme configuration for a workspace, including colors,
 * images, and typography.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkspaceThemeConfig">AWS
 * API Reference</a></p>
 */
class WorkspaceThemeConfig {
 public:
  AWS_CONNECT_API WorkspaceThemeConfig() = default;
  AWS_CONNECT_API WorkspaceThemeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkspaceThemeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The color palette configuration for the workspace theme.</p>
   */
  inline const WorkspaceThemePalette& GetPalette() const { return m_palette; }
  inline bool PaletteHasBeenSet() const { return m_paletteHasBeenSet; }
  template <typename PaletteT = WorkspaceThemePalette>
  void SetPalette(PaletteT&& value) {
    m_paletteHasBeenSet = true;
    m_palette = std::forward<PaletteT>(value);
  }
  template <typename PaletteT = WorkspaceThemePalette>
  WorkspaceThemeConfig& WithPalette(PaletteT&& value) {
    SetPalette(std::forward<PaletteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image assets used in the workspace theme.</p>
   */
  inline const WorkspaceThemeImages& GetImages() const { return m_images; }
  inline bool ImagesHasBeenSet() const { return m_imagesHasBeenSet; }
  template <typename ImagesT = WorkspaceThemeImages>
  void SetImages(ImagesT&& value) {
    m_imagesHasBeenSet = true;
    m_images = std::forward<ImagesT>(value);
  }
  template <typename ImagesT = WorkspaceThemeImages>
  WorkspaceThemeConfig& WithImages(ImagesT&& value) {
    SetImages(std::forward<ImagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The typography configuration for the workspace theme.</p>
   */
  inline const WorkspaceThemeTypography& GetTypography() const { return m_typography; }
  inline bool TypographyHasBeenSet() const { return m_typographyHasBeenSet; }
  template <typename TypographyT = WorkspaceThemeTypography>
  void SetTypography(TypographyT&& value) {
    m_typographyHasBeenSet = true;
    m_typography = std::forward<TypographyT>(value);
  }
  template <typename TypographyT = WorkspaceThemeTypography>
  WorkspaceThemeConfig& WithTypography(TypographyT&& value) {
    SetTypography(std::forward<TypographyT>(value));
    return *this;
  }
  ///@}
 private:
  WorkspaceThemePalette m_palette;

  WorkspaceThemeImages m_images;

  WorkspaceThemeTypography m_typography;
  bool m_paletteHasBeenSet = false;
  bool m_imagesHasBeenSet = false;
  bool m_typographyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
