/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a private IPv4 address for a secondary interface.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecondaryInterfaceIpv4Address">AWS
 * API Reference</a></p>
 */
class SecondaryInterfaceIpv4Address {
 public:
  AWS_EC2_API SecondaryInterfaceIpv4Address() = default;
  AWS_EC2_API SecondaryInterfaceIpv4Address(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SecondaryInterfaceIpv4Address& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The private IPv4 address.</p>
   */
  inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
  inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
  template <typename PrivateIpAddressT = Aws::String>
  void SetPrivateIpAddress(PrivateIpAddressT&& value) {
    m_privateIpAddressHasBeenSet = true;
    m_privateIpAddress = std::forward<PrivateIpAddressT>(value);
  }
  template <typename PrivateIpAddressT = Aws::String>
  SecondaryInterfaceIpv4Address& WithPrivateIpAddress(PrivateIpAddressT&& value) {
    SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_privateIpAddress;
  bool m_privateIpAddressHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
