/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elb-proxy/ELBProxyRequest.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ELBProxy {
namespace Model {

/**
 */
class GetProxyConfigurationContentsRequest : public ELBProxyRequest {
 public:
  AWS_ELBPROXY_API GetProxyConfigurationContentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProxyConfigurationContents"; }

  AWS_ELBPROXY_API Aws::String SerializePayload() const override;

  AWS_ELBPROXY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the proxy.</p>
   */
  inline const Aws::String& GetProxyIdentifier() const { return m_proxyIdentifier; }
  inline bool ProxyIdentifierHasBeenSet() const { return m_proxyIdentifierHasBeenSet; }
  template <typename ProxyIdentifierT = Aws::String>
  void SetProxyIdentifier(ProxyIdentifierT&& value) {
    m_proxyIdentifierHasBeenSet = true;
    m_proxyIdentifier = std::forward<ProxyIdentifierT>(value);
  }
  template <typename ProxyIdentifierT = Aws::String>
  GetProxyConfigurationContentsRequest& WithProxyIdentifier(ProxyIdentifierT&& value) {
    SetProxyIdentifier(std::forward<ProxyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to include the configuration file contents in the response.
   * The default is <code>false</code>.</p>
   */
  inline bool GetIncludeConfigFile() const { return m_includeConfigFile; }
  inline bool IncludeConfigFileHasBeenSet() const { return m_includeConfigFileHasBeenSet; }
  inline void SetIncludeConfigFile(bool value) {
    m_includeConfigFileHasBeenSet = true;
    m_includeConfigFile = value;
  }
  inline GetProxyConfigurationContentsRequest& WithIncludeConfigFile(bool value) {
    SetIncludeConfigFile(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to include the configuration archive contents in the
   * response. The default is <code>false</code>.</p>
   */
  inline bool GetIncludeConfigArchive() const { return m_includeConfigArchive; }
  inline bool IncludeConfigArchiveHasBeenSet() const { return m_includeConfigArchiveHasBeenSet; }
  inline void SetIncludeConfigArchive(bool value) {
    m_includeConfigArchiveHasBeenSet = true;
    m_includeConfigArchive = value;
  }
  inline GetProxyConfigurationContentsRequest& WithIncludeConfigArchive(bool value) {
    SetIncludeConfigArchive(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyIdentifier;

  bool m_includeConfigFile{false};

  bool m_includeConfigArchive{false};
  bool m_proxyIdentifierHasBeenSet = false;
  bool m_includeConfigFileHasBeenSet = false;
  bool m_includeConfigArchiveHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
