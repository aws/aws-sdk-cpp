/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PaletteCanvas.h>
#include <aws/connect/model/PaletteHeader.h>
#include <aws/connect/model/PaletteNavigation.h>
#include <aws/connect/model/PalettePrimary.h>

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
 * <p>Contains color palette configuration for different areas of a
 * workspace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkspaceThemePalette">AWS
 * API Reference</a></p>
 */
class WorkspaceThemePalette {
 public:
  AWS_CONNECT_API WorkspaceThemePalette() = default;
  AWS_CONNECT_API WorkspaceThemePalette(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkspaceThemePalette& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The color configuration for the header area.</p>
   */
  inline const PaletteHeader& GetHeader() const { return m_header; }
  inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
  template <typename HeaderT = PaletteHeader>
  void SetHeader(HeaderT&& value) {
    m_headerHasBeenSet = true;
    m_header = std::forward<HeaderT>(value);
  }
  template <typename HeaderT = PaletteHeader>
  WorkspaceThemePalette& WithHeader(HeaderT&& value) {
    SetHeader(std::forward<HeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The color configuration for the navigation area.</p>
   */
  inline const PaletteNavigation& GetNavigation() const { return m_navigation; }
  inline bool NavigationHasBeenSet() const { return m_navigationHasBeenSet; }
  template <typename NavigationT = PaletteNavigation>
  void SetNavigation(NavigationT&& value) {
    m_navigationHasBeenSet = true;
    m_navigation = std::forward<NavigationT>(value);
  }
  template <typename NavigationT = PaletteNavigation>
  WorkspaceThemePalette& WithNavigation(NavigationT&& value) {
    SetNavigation(std::forward<NavigationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The color configuration for the canvas area.</p>
   */
  inline const PaletteCanvas& GetCanvas() const { return m_canvas; }
  inline bool CanvasHasBeenSet() const { return m_canvasHasBeenSet; }
  template <typename CanvasT = PaletteCanvas>
  void SetCanvas(CanvasT&& value) {
    m_canvasHasBeenSet = true;
    m_canvas = std::forward<CanvasT>(value);
  }
  template <typename CanvasT = PaletteCanvas>
  WorkspaceThemePalette& WithCanvas(CanvasT&& value) {
    SetCanvas(std::forward<CanvasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary color configuration used throughout the workspace.</p>
   */
  inline const PalettePrimary& GetPrimary() const { return m_primary; }
  inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
  template <typename PrimaryT = PalettePrimary>
  void SetPrimary(PrimaryT&& value) {
    m_primaryHasBeenSet = true;
    m_primary = std::forward<PrimaryT>(value);
  }
  template <typename PrimaryT = PalettePrimary>
  WorkspaceThemePalette& WithPrimary(PrimaryT&& value) {
    SetPrimary(std::forward<PrimaryT>(value));
    return *this;
  }
  ///@}
 private:
  PaletteHeader m_header;
  bool m_headerHasBeenSet = false;

  PaletteNavigation m_navigation;
  bool m_navigationHasBeenSet = false;

  PaletteCanvas m_canvas;
  bool m_canvasHasBeenSet = false;

  PalettePrimary m_primary;
  bool m_primaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
