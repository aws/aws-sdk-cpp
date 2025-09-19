/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2Protocol {
namespace Model {

class NestedStructWithList {
 public:
  AWS_EC2PROTOCOL_API NestedStructWithList() = default;
  AWS_EC2PROTOCOL_API NestedStructWithList(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2PROTOCOL_API NestedStructWithList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{

  inline const Aws::Vector<Aws::String>& GetListArg() const { return m_listArg; }
  inline bool ListArgHasBeenSet() const { return m_listArgHasBeenSet; }
  template <typename ListArgT = Aws::Vector<Aws::String>>
  void SetListArg(ListArgT&& value) {
    m_listArgHasBeenSet = true;
    m_listArg = std::forward<ListArgT>(value);
  }
  template <typename ListArgT = Aws::Vector<Aws::String>>
  NestedStructWithList& WithListArg(ListArgT&& value) {
    SetListArg(std::forward<ListArgT>(value));
    return *this;
  }
  template <typename ListArgT = Aws::String>
  NestedStructWithList& AddListArg(ListArgT&& value) {
    m_listArgHasBeenSet = true;
    m_listArg.emplace_back(std::forward<ListArgT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_listArg;
  bool m_listArgHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
