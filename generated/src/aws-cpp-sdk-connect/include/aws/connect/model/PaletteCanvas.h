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
 * <p>Contains color configuration for canvas elements in a workspace
 * theme.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PaletteCanvas">AWS
 * API Reference</a></p>
 */
class PaletteCanvas {
 public:
  AWS_CONNECT_API PaletteCanvas() = default;
  AWS_CONNECT_API PaletteCanvas(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PaletteCanvas& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The background color for container elements.</p>
   */
  inline const Aws::String& GetContainerBackground() const { return m_containerBackground; }
  inline bool ContainerBackgroundHasBeenSet() const { return m_containerBackgroundHasBeenSet; }
  template <typename ContainerBackgroundT = Aws::String>
  void SetContainerBackground(ContainerBackgroundT&& value) {
    m_containerBackgroundHasBeenSet = true;
    m_containerBackground = std::forward<ContainerBackgroundT>(value);
  }
  template <typename ContainerBackgroundT = Aws::String>
  PaletteCanvas& WithContainerBackground(ContainerBackgroundT&& value) {
    SetContainerBackground(std::forward<ContainerBackgroundT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The background color for page elements.</p>
   */
  inline const Aws::String& GetPageBackground() const { return m_pageBackground; }
  inline bool PageBackgroundHasBeenSet() const { return m_pageBackgroundHasBeenSet; }
  template <typename PageBackgroundT = Aws::String>
  void SetPageBackground(PageBackgroundT&& value) {
    m_pageBackgroundHasBeenSet = true;
    m_pageBackground = std::forward<PageBackgroundT>(value);
  }
  template <typename PageBackgroundT = Aws::String>
  PaletteCanvas& WithPageBackground(PageBackgroundT&& value) {
    SetPageBackground(std::forward<PageBackgroundT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The background color for active elements.</p>
   */
  inline const Aws::String& GetActiveBackground() const { return m_activeBackground; }
  inline bool ActiveBackgroundHasBeenSet() const { return m_activeBackgroundHasBeenSet; }
  template <typename ActiveBackgroundT = Aws::String>
  void SetActiveBackground(ActiveBackgroundT&& value) {
    m_activeBackgroundHasBeenSet = true;
    m_activeBackground = std::forward<ActiveBackgroundT>(value);
  }
  template <typename ActiveBackgroundT = Aws::String>
  PaletteCanvas& WithActiveBackground(ActiveBackgroundT&& value) {
    SetActiveBackground(std::forward<ActiveBackgroundT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_containerBackground;

  Aws::String m_pageBackground;

  Aws::String m_activeBackground;
  bool m_containerBackgroundHasBeenSet = false;
  bool m_pageBackgroundHasBeenSet = false;
  bool m_activeBackgroundHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
