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
 * <p>Contains logo image configuration for workspace themes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ImagesLogo">AWS
 * API Reference</a></p>
 */
class ImagesLogo {
 public:
  AWS_CONNECT_API ImagesLogo() = default;
  AWS_CONNECT_API ImagesLogo(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ImagesLogo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default logo image displayed in the workspace.</p>
   */
  inline const Aws::String& GetDefault() const { return m_default; }
  inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }
  template <typename DefaultT = Aws::String>
  void SetDefault(DefaultT&& value) {
    m_defaultHasBeenSet = true;
    m_default = std::forward<DefaultT>(value);
  }
  template <typename DefaultT = Aws::String>
  ImagesLogo& WithDefault(DefaultT&& value) {
    SetDefault(std::forward<DefaultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The favicon image displayed in the browser tab.</p>
   */
  inline const Aws::String& GetFavicon() const { return m_favicon; }
  inline bool FaviconHasBeenSet() const { return m_faviconHasBeenSet; }
  template <typename FaviconT = Aws::String>
  void SetFavicon(FaviconT&& value) {
    m_faviconHasBeenSet = true;
    m_favicon = std::forward<FaviconT>(value);
  }
  template <typename FaviconT = Aws::String>
  ImagesLogo& WithFavicon(FaviconT&& value) {
    SetFavicon(std::forward<FaviconT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_default;

  Aws::String m_favicon;
  bool m_defaultHasBeenSet = false;
  bool m_faviconHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
