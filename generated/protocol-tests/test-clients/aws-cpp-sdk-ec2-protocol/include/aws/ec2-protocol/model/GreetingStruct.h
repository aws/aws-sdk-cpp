/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

class GreetingStruct {
 public:
  AWS_EC2PROTOCOL_API GreetingStruct() = default;
  AWS_EC2PROTOCOL_API GreetingStruct(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2PROTOCOL_API GreetingStruct& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{

  inline const Aws::String& GetHi() const { return m_hi; }
  inline bool HiHasBeenSet() const { return m_hiHasBeenSet; }
  template <typename HiT = Aws::String>
  void SetHi(HiT&& value) {
    m_hiHasBeenSet = true;
    m_hi = std::forward<HiT>(value);
  }
  template <typename HiT = Aws::String>
  GreetingStruct& WithHi(HiT&& value) {
    SetHi(std::forward<HiT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hi;
  bool m_hiHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
