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
class NestedXmlMapWithXmlNameInputOutput {
 public:
  AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameInputOutput() = default;
  AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameInputOutput(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameInputOutput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetNestedXmlMapWithXmlNameMap() const {
    return m_nestedXmlMapWithXmlNameMap;
  }
  inline bool NestedXmlMapWithXmlNameMapHasBeenSet() const { return m_nestedXmlMapWithXmlNameMapHasBeenSet; }
  template <typename NestedXmlMapWithXmlNameMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  void SetNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapT&& value) {
    m_nestedXmlMapWithXmlNameMapHasBeenSet = true;
    m_nestedXmlMapWithXmlNameMap = std::forward<NestedXmlMapWithXmlNameMapT>(value);
  }
  template <typename NestedXmlMapWithXmlNameMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  NestedXmlMapWithXmlNameInputOutput& WithNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapT&& value) {
    SetNestedXmlMapWithXmlNameMap(std::forward<NestedXmlMapWithXmlNameMapT>(value));
    return *this;
  }
  template <typename NestedXmlMapWithXmlNameMapKeyT = Aws::String,
            typename NestedXmlMapWithXmlNameMapValueT = Aws::Map<Aws::String, Aws::String>>
  NestedXmlMapWithXmlNameInputOutput& AddNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapKeyT&& key,
                                                                    NestedXmlMapWithXmlNameMapValueT&& value) {
    m_nestedXmlMapWithXmlNameMapHasBeenSet = true;
    m_nestedXmlMapWithXmlNameMap.emplace(std::forward<NestedXmlMapWithXmlNameMapKeyT>(key),
                                         std::forward<NestedXmlMapWithXmlNameMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_nestedXmlMapWithXmlNameMap;
  bool m_nestedXmlMapWithXmlNameMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
