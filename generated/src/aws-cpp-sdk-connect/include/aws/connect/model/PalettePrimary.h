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
 * <p>Contains primary color configuration for a workspace theme.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PalettePrimary">AWS
 * API Reference</a></p>
 */
class PalettePrimary {
 public:
  AWS_CONNECT_API PalettePrimary() = default;
  AWS_CONNECT_API PalettePrimary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PalettePrimary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default primary color used throughout the workspace.</p>
   */
  inline const Aws::String& GetDefault() const { return m_default; }
  inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }
  template <typename DefaultT = Aws::String>
  void SetDefault(DefaultT&& value) {
    m_defaultHasBeenSet = true;
    m_default = std::forward<DefaultT>(value);
  }
  template <typename DefaultT = Aws::String>
  PalettePrimary& WithDefault(DefaultT&& value) {
    SetDefault(std::forward<DefaultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary color used for active states.</p>
   */
  inline const Aws::String& GetActive() const { return m_active; }
  inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
  template <typename ActiveT = Aws::String>
  void SetActive(ActiveT&& value) {
    m_activeHasBeenSet = true;
    m_active = std::forward<ActiveT>(value);
  }
  template <typename ActiveT = Aws::String>
  PalettePrimary& WithActive(ActiveT&& value) {
    SetActive(std::forward<ActiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text color that contrasts with the primary color for readability.</p>
   */
  inline const Aws::String& GetContrastText() const { return m_contrastText; }
  inline bool ContrastTextHasBeenSet() const { return m_contrastTextHasBeenSet; }
  template <typename ContrastTextT = Aws::String>
  void SetContrastText(ContrastTextT&& value) {
    m_contrastTextHasBeenSet = true;
    m_contrastText = std::forward<ContrastTextT>(value);
  }
  template <typename ContrastTextT = Aws::String>
  PalettePrimary& WithContrastText(ContrastTextT&& value) {
    SetContrastText(std::forward<ContrastTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_default;
  bool m_defaultHasBeenSet = false;

  Aws::String m_active;
  bool m_activeHasBeenSet = false;

  Aws::String m_contrastText;
  bool m_contrastTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
