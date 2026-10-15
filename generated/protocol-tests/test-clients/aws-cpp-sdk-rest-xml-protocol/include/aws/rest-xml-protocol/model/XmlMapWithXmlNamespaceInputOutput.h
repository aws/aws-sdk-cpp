/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class XmlMapWithXmlNamespaceInputOutput {
 public:
  AWS_RESTXMLPROTOCOL_API XmlMapWithXmlNamespaceInputOutput() = default;
  AWS_RESTXMLPROTOCOL_API XmlMapWithXmlNamespaceInputOutput(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API XmlMapWithXmlNamespaceInputOutput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetMyMap() const { return m_myMap; }
  inline bool MyMapHasBeenSet() const { return m_myMapHasBeenSet; }
  template <typename MyMapT = Aws::Map<Aws::String, Aws::String>>
  void SetMyMap(MyMapT&& value) {
    m_myMapHasBeenSet = true;
    m_myMap = std::forward<MyMapT>(value);
  }
  template <typename MyMapT = Aws::Map<Aws::String, Aws::String>>
  XmlMapWithXmlNamespaceInputOutput& WithMyMap(MyMapT&& value) {
    SetMyMap(std::forward<MyMapT>(value));
    return *this;
  }
  template <typename MyMapKeyT = Aws::String, typename MyMapValueT = Aws::String>
  XmlMapWithXmlNamespaceInputOutput& AddMyMap(MyMapKeyT&& key, MyMapValueT&& value) {
    m_myMapHasBeenSet = true;
    m_myMap.emplace(std::forward<MyMapKeyT>(key), std::forward<MyMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_myMap;
  bool m_myMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
