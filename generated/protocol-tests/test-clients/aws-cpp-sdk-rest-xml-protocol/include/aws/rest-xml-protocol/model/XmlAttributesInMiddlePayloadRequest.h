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

/**
 */
class XmlAttributesInMiddlePayloadRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlAttributesInMiddlePayloadRequest() = default;
  AWS_RESTXMLPROTOCOL_API XmlAttributesInMiddlePayloadRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API XmlAttributesInMiddlePayloadRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);
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
  XmlAttributesInMiddlePayloadRequest& WithFoo(FooT&& value) {
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
  XmlAttributesInMiddlePayloadRequest& WithAttr(AttrT&& value) {
    SetAttr(std::forward<AttrT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetBaz() const { return m_baz; }
  inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
  template <typename BazT = Aws::String>
  void SetBaz(BazT&& value) {
    m_bazHasBeenSet = true;
    m_baz = std::forward<BazT>(value);
  }
  template <typename BazT = Aws::String>
  XmlAttributesInMiddlePayloadRequest& WithBaz(BazT&& value) {
    SetBaz(std::forward<BazT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;

  Aws::String m_attr;

  Aws::String m_baz;
  bool m_fooHasBeenSet = false;
  bool m_attrHasBeenSet = false;
  bool m_bazHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
