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

class UnionPayload {
 public:
  AWS_RESTXMLPROTOCOL_API UnionPayload() = default;
  AWS_RESTXMLPROTOCOL_API UnionPayload(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API UnionPayload& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const Aws::String& GetGreeting() const { return m_greeting; }
  inline bool GreetingHasBeenSet() const { return m_greetingHasBeenSet; }
  template <typename GreetingT = Aws::String>
  void SetGreeting(GreetingT&& value) {
    m_greetingHasBeenSet = true;
    m_greeting = std::forward<GreetingT>(value);
  }
  template <typename GreetingT = Aws::String>
  UnionPayload& WithGreeting(GreetingT&& value) {
    SetGreeting(std::forward<GreetingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_greeting;
  bool m_greetingHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
