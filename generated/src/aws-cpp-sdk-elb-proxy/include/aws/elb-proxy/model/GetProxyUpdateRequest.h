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
class GetProxyUpdateRequest : public ELBProxyRequest {
 public:
  AWS_ELBPROXY_API GetProxyUpdateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProxyUpdate"; }

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
  GetProxyUpdateRequest& WithProxyIdentifier(ProxyIdentifierT&& value) {
    SetProxyIdentifier(std::forward<ProxyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the update.</p>
   */
  inline const Aws::String& GetUpdateIdentifier() const { return m_updateIdentifier; }
  inline bool UpdateIdentifierHasBeenSet() const { return m_updateIdentifierHasBeenSet; }
  template <typename UpdateIdentifierT = Aws::String>
  void SetUpdateIdentifier(UpdateIdentifierT&& value) {
    m_updateIdentifierHasBeenSet = true;
    m_updateIdentifier = std::forward<UpdateIdentifierT>(value);
  }
  template <typename UpdateIdentifierT = Aws::String>
  GetProxyUpdateRequest& WithUpdateIdentifier(UpdateIdentifierT&& value) {
    SetUpdateIdentifier(std::forward<UpdateIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyIdentifier;

  Aws::String m_updateIdentifier;
  bool m_proxyIdentifierHasBeenSet = false;
  bool m_updateIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
