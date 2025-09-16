/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/XmlUnionShape.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class XmlUnionsRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlUnionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlUnions"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const XmlUnionShape& GetUnionValue() const { return m_unionValue; }
  inline bool UnionValueHasBeenSet() const { return m_unionValueHasBeenSet; }
  template <typename UnionValueT = XmlUnionShape>
  void SetUnionValue(UnionValueT&& value) {
    m_unionValueHasBeenSet = true;
    m_unionValue = std::forward<UnionValueT>(value);
  }
  template <typename UnionValueT = XmlUnionShape>
  XmlUnionsRequest& WithUnionValue(UnionValueT&& value) {
    SetUnionValue(std::forward<UnionValueT>(value));
    return *this;
  }
  ///@}
 private:
  XmlUnionShape m_unionValue;
  bool m_unionValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
