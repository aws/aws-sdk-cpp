/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/FontFamily.h>

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
 * <p>Contains typography configuration for a workspace theme.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkspaceThemeTypography">AWS
 * API Reference</a></p>
 */
class WorkspaceThemeTypography {
 public:
  AWS_CONNECT_API WorkspaceThemeTypography() = default;
  AWS_CONNECT_API WorkspaceThemeTypography(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkspaceThemeTypography& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The font family configuration for text in the workspace.</p>
   */
  inline const FontFamily& GetFontFamily() const { return m_fontFamily; }
  inline bool FontFamilyHasBeenSet() const { return m_fontFamilyHasBeenSet; }
  template <typename FontFamilyT = FontFamily>
  void SetFontFamily(FontFamilyT&& value) {
    m_fontFamilyHasBeenSet = true;
    m_fontFamily = std::forward<FontFamilyT>(value);
  }
  template <typename FontFamilyT = FontFamily>
  WorkspaceThemeTypography& WithFontFamily(FontFamilyT&& value) {
    SetFontFamily(std::forward<FontFamilyT>(value));
    return *this;
  }
  ///@}
 private:
  FontFamily m_fontFamily;
  bool m_fontFamilyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
