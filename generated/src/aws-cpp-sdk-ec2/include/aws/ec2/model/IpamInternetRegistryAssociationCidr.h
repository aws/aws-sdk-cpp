/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>Contains information about an IP address CIDR registered at an internet
 * registry and associated with an IPAM.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamInternetRegistryAssociationCidr">AWS
 * API Reference</a></p>
 */
class IpamInternetRegistryAssociationCidr {
 public:
  AWS_EC2_API IpamInternetRegistryAssociationCidr() = default;
  AWS_EC2_API IpamInternetRegistryAssociationCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamInternetRegistryAssociationCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The IP address prefix in CIDR notation.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  IpamInternetRegistryAssociationCidr& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the CIDR was last observed at the internet registry.</p>
   */
  inline const Aws::Utils::DateTime& GetLastObservedAt() const { return m_lastObservedAt; }
  inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
  template <typename LastObservedAtT = Aws::Utils::DateTime>
  void SetLastObservedAt(LastObservedAtT&& value) {
    m_lastObservedAtHasBeenSet = true;
    m_lastObservedAt = std::forward<LastObservedAtT>(value);
  }
  template <typename LastObservedAtT = Aws::Utils::DateTime>
  IpamInternetRegistryAssociationCidr& WithLastObservedAt(LastObservedAtT&& value) {
    SetLastObservedAt(std::forward<LastObservedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidr;

  Aws::Utils::DateTime m_lastObservedAt{};
  bool m_cidrHasBeenSet = false;
  bool m_lastObservedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
