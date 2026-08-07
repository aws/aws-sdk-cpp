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
 * <p>Contains information about an Autonomous System Number (ASN) registered at an
 * internet registry and associated with an IPAM.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamInternetRegistryAssociationAsn">AWS
 * API Reference</a></p>
 */
class IpamInternetRegistryAssociationAsn {
 public:
  AWS_EC2_API IpamInternetRegistryAssociationAsn() = default;
  AWS_EC2_API IpamInternetRegistryAssociationAsn(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamInternetRegistryAssociationAsn& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Autonomous System Number.</p>
   */
  inline const Aws::String& GetAsn() const { return m_asn; }
  inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
  template <typename AsnT = Aws::String>
  void SetAsn(AsnT&& value) {
    m_asnHasBeenSet = true;
    m_asn = std::forward<AsnT>(value);
  }
  template <typename AsnT = Aws::String>
  IpamInternetRegistryAssociationAsn& WithAsn(AsnT&& value) {
    SetAsn(std::forward<AsnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the ASN was last observed at the internet registry.</p>
   */
  inline const Aws::Utils::DateTime& GetLastObservedAt() const { return m_lastObservedAt; }
  inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
  template <typename LastObservedAtT = Aws::Utils::DateTime>
  void SetLastObservedAt(LastObservedAtT&& value) {
    m_lastObservedAtHasBeenSet = true;
    m_lastObservedAt = std::forward<LastObservedAtT>(value);
  }
  template <typename LastObservedAtT = Aws::Utils::DateTime>
  IpamInternetRegistryAssociationAsn& WithLastObservedAt(LastObservedAtT&& value) {
    SetLastObservedAt(std::forward<LastObservedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_asn;

  Aws::Utils::DateTime m_lastObservedAt{};
  bool m_asnHasBeenSet = false;
  bool m_lastObservedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
