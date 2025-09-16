/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RestXmlProtocol {
namespace Model {

class XmlAttributesPayloadRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlAttributesPayloadRequest() = default;
  AWS_RESTXMLPROTOCOL_API XmlAttributesPayloadRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API XmlAttributesPayloadRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  XmlAttributesPayloadRequest& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetAttr() const { return m_attr; }
  inline bool AttrHasBeenSet() const { return m_attrHasBeenSet; }
  template <typename AttrT = Aws::String>
  void SetAttr(AttrT&& value) {
    m_attrHasBeenSet = true;
    m_attr = std::forward<AttrT>(value);
  }
  template <typename AttrT = Aws::String>
  XmlAttributesPayloadRequest& WithAttr(AttrT&& value) {
    SetAttr(std::forward<AttrT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  Aws::String m_attr;
  bool m_attrHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
