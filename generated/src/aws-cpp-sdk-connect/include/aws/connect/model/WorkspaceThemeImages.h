/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ImagesLogo.h>

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
 * <p>Contains image configuration for a workspace theme.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkspaceThemeImages">AWS
 * API Reference</a></p>
 */
class WorkspaceThemeImages {
 public:
  AWS_CONNECT_API WorkspaceThemeImages() = default;
  AWS_CONNECT_API WorkspaceThemeImages(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkspaceThemeImages& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logo images used in the workspace.</p>
   */
  inline const ImagesLogo& GetLogo() const { return m_logo; }
  inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
  template <typename LogoT = ImagesLogo>
  void SetLogo(LogoT&& value) {
    m_logoHasBeenSet = true;
    m_logo = std::forward<LogoT>(value);
  }
  template <typename LogoT = ImagesLogo>
  WorkspaceThemeImages& WithLogo(LogoT&& value) {
    SetLogo(std::forward<LogoT>(value));
    return *this;
  }
  ///@}
 private:
  ImagesLogo m_logo;
  bool m_logoHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
