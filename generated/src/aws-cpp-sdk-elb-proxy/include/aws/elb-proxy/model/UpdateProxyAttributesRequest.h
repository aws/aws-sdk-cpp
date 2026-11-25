/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elb-proxy/ELBProxyRequest.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/Attribute.h>

#include <utility>

namespace Aws {
namespace ELBProxy {
namespace Model {

/**
 */
class UpdateProxyAttributesRequest : public ELBProxyRequest {
 public:
  AWS_ELBPROXY_API UpdateProxyAttributesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProxyAttributes"; }

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
  UpdateProxyAttributesRequest& WithProxyIdentifier(ProxyIdentifierT&& value) {
    SetProxyIdentifier(std::forward<ProxyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attributes to update. Attributes that you don't specify are
   * unchanged.</p>
   */
  inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Vector<Attribute>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Vector<Attribute>>
  UpdateProxyAttributesRequest& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesT = Attribute>
  UpdateProxyAttributesRequest& AddAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace_back(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyIdentifier;

  Aws::Vector<Attribute> m_attributes;
  bool m_proxyIdentifierHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
