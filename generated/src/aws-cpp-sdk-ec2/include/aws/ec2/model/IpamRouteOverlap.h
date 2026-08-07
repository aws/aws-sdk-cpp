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
 * <p>Contains information about an overlapping route detected for a BYOIP
 * prefix.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamRouteOverlap">AWS
 * API Reference</a></p>
 */
class IpamRouteOverlap {
 public:
  AWS_EC2_API IpamRouteOverlap() = default;
  AWS_EC2_API IpamRouteOverlap(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamRouteOverlap& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The overlapping IP address prefix in CIDR notation.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  IpamRouteOverlap& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ASN originating the overlapping route.</p>
   */
  inline const Aws::String& GetAsn() const { return m_asn; }
  inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
  template <typename AsnT = Aws::String>
  void SetAsn(AsnT&& value) {
    m_asnHasBeenSet = true;
    m_asn = std::forward<AsnT>(value);
  }
  template <typename AsnT = Aws::String>
  IpamRouteOverlap& WithAsn(AsnT&& value) {
    SetAsn(std::forward<AsnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the overlap was detected.</p>
   */
  inline const Aws::Utils::DateTime& GetDetectedAt() const { return m_detectedAt; }
  inline bool DetectedAtHasBeenSet() const { return m_detectedAtHasBeenSet; }
  template <typename DetectedAtT = Aws::Utils::DateTime>
  void SetDetectedAt(DetectedAtT&& value) {
    m_detectedAtHasBeenSet = true;
    m_detectedAt = std::forward<DetectedAtT>(value);
  }
  template <typename DetectedAtT = Aws::Utils::DateTime>
  IpamRouteOverlap& WithDetectedAt(DetectedAtT&& value) {
    SetDetectedAt(std::forward<DetectedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_prefix;

  Aws::String m_asn;

  Aws::Utils::DateTime m_detectedAt{};
  bool m_prefixHasBeenSet = false;
  bool m_asnHasBeenSet = false;
  bool m_detectedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
