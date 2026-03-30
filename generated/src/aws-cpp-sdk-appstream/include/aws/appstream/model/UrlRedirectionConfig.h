/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Configuration for URL redirection in a specific direction (host-to-client or
 * client-to-host). When enabled, URLs matching the allowed or denied patterns are
 * redirected accordingly. The denied list takes precedence over the allowed
 * list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UrlRedirectionConfig">AWS
 * API Reference</a></p>
 */
class UrlRedirectionConfig {
 public:
  AWS_APPSTREAM_API UrlRedirectionConfig() = default;
  AWS_APPSTREAM_API UrlRedirectionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API UrlRedirectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether URL redirection is enabled for this direction.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline UrlRedirectionConfig& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of URL patterns that are allowed to be redirected. URLs matching these
   * patterns will be redirected unless they also match a pattern in the denied
   * list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedUrls() const { return m_allowedUrls; }
  inline bool AllowedUrlsHasBeenSet() const { return m_allowedUrlsHasBeenSet; }
  template <typename AllowedUrlsT = Aws::Vector<Aws::String>>
  void SetAllowedUrls(AllowedUrlsT&& value) {
    m_allowedUrlsHasBeenSet = true;
    m_allowedUrls = std::forward<AllowedUrlsT>(value);
  }
  template <typename AllowedUrlsT = Aws::Vector<Aws::String>>
  UrlRedirectionConfig& WithAllowedUrls(AllowedUrlsT&& value) {
    SetAllowedUrls(std::forward<AllowedUrlsT>(value));
    return *this;
  }
  template <typename AllowedUrlsT = Aws::String>
  UrlRedirectionConfig& AddAllowedUrls(AllowedUrlsT&& value) {
    m_allowedUrlsHasBeenSet = true;
    m_allowedUrls.emplace_back(std::forward<AllowedUrlsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of URL patterns that are denied from redirection. This list takes
   * precedence over the allowed list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDeniedUrls() const { return m_deniedUrls; }
  inline bool DeniedUrlsHasBeenSet() const { return m_deniedUrlsHasBeenSet; }
  template <typename DeniedUrlsT = Aws::Vector<Aws::String>>
  void SetDeniedUrls(DeniedUrlsT&& value) {
    m_deniedUrlsHasBeenSet = true;
    m_deniedUrls = std::forward<DeniedUrlsT>(value);
  }
  template <typename DeniedUrlsT = Aws::Vector<Aws::String>>
  UrlRedirectionConfig& WithDeniedUrls(DeniedUrlsT&& value) {
    SetDeniedUrls(std::forward<DeniedUrlsT>(value));
    return *this;
  }
  template <typename DeniedUrlsT = Aws::String>
  UrlRedirectionConfig& AddDeniedUrls(DeniedUrlsT&& value) {
    m_deniedUrlsHasBeenSet = true;
    m_deniedUrls.emplace_back(std::forward<DeniedUrlsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::Vector<Aws::String> m_allowedUrls;

  Aws::Vector<Aws::String> m_deniedUrls;
  bool m_enabledHasBeenSet = false;
  bool m_allowedUrlsHasBeenSet = false;
  bool m_deniedUrlsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
