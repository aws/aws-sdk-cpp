/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/UrlRedirectionConfig.h>

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
 * <p>Configuration for bidirectional URL redirection between the streaming session
 * and the local client. Use HostToClient to redirect URLs from the remote desktop
 * to the local browser.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ContentRedirection">AWS
 * API Reference</a></p>
 */
class ContentRedirection {
 public:
  AWS_APPSTREAM_API ContentRedirection() = default;
  AWS_APPSTREAM_API ContentRedirection(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API ContentRedirection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for redirecting URLs from the remote desktop to the local
   * client browser.</p>
   */
  inline const UrlRedirectionConfig& GetHostToClient() const { return m_hostToClient; }
  inline bool HostToClientHasBeenSet() const { return m_hostToClientHasBeenSet; }
  template <typename HostToClientT = UrlRedirectionConfig>
  void SetHostToClient(HostToClientT&& value) {
    m_hostToClientHasBeenSet = true;
    m_hostToClient = std::forward<HostToClientT>(value);
  }
  template <typename HostToClientT = UrlRedirectionConfig>
  ContentRedirection& WithHostToClient(HostToClientT&& value) {
    SetHostToClient(std::forward<HostToClientT>(value));
    return *this;
  }
  ///@}
 private:
  UrlRedirectionConfig m_hostToClient;
  bool m_hostToClientHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
