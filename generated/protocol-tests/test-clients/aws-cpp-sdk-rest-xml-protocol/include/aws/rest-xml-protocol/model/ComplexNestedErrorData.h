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

class ComplexNestedErrorData {
 public:
  AWS_RESTXMLPROTOCOL_API ComplexNestedErrorData() = default;
  AWS_RESTXMLPROTOCOL_API ComplexNestedErrorData(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API ComplexNestedErrorData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  ComplexNestedErrorData& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
