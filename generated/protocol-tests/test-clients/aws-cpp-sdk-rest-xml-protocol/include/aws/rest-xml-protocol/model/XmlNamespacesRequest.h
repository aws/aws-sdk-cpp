/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/XmlNamespaceNested.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class XmlNamespacesRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlNamespacesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlNamespaces"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const XmlNamespaceNested& GetNested() const { return m_nested; }
  inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
  template <typename NestedT = XmlNamespaceNested>
  void SetNested(NestedT&& value) {
    m_nestedHasBeenSet = true;
    m_nested = std::forward<NestedT>(value);
  }
  template <typename NestedT = XmlNamespaceNested>
  XmlNamespacesRequest& WithNested(NestedT&& value) {
    SetNested(std::forward<NestedT>(value));
    return *this;
  }
  ///@}
 private:
  XmlNamespaceNested m_nested;
  bool m_nestedHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
