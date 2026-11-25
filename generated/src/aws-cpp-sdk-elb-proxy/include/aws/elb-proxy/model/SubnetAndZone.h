/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {

/**
 * <p>A subnet and its associated Availability Zone.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/SubnetAndZone">AWS
 * API Reference</a></p>
 */
class SubnetAndZone {
 public:
  AWS_ELBPROXY_API SubnetAndZone() = default;
  AWS_ELBPROXY_API SubnetAndZone(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API SubnetAndZone& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the subnet.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  SubnetAndZone& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone.</p>
   */
  inline const Aws::String& GetZoneId() const { return m_zoneId; }
  inline bool ZoneIdHasBeenSet() const { return m_zoneIdHasBeenSet; }
  template <typename ZoneIdT = Aws::String>
  void SetZoneId(ZoneIdT&& value) {
    m_zoneIdHasBeenSet = true;
    m_zoneId = std::forward<ZoneIdT>(value);
  }
  template <typename ZoneIdT = Aws::String>
  SubnetAndZone& WithZoneId(ZoneIdT&& value) {
    SetZoneId(std::forward<ZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Availability Zone (for example, <code>us-east-1a</code>).</p>
   */
  inline const Aws::String& GetZoneName() const { return m_zoneName; }
  inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }
  template <typename ZoneNameT = Aws::String>
  void SetZoneName(ZoneNameT&& value) {
    m_zoneNameHasBeenSet = true;
    m_zoneName = std::forward<ZoneNameT>(value);
  }
  template <typename ZoneNameT = Aws::String>
  SubnetAndZone& WithZoneName(ZoneNameT&& value) {
    SetZoneName(std::forward<ZoneNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subnetId;

  Aws::String m_zoneId;

  Aws::String m_zoneName;
  bool m_subnetIdHasBeenSet = false;
  bool m_zoneIdHasBeenSet = false;
  bool m_zoneNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
