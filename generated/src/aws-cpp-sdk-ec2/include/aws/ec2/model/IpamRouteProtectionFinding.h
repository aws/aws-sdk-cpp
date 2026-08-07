/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamByoipAdvertisementType.h>
#include <aws/ec2/model/IpamByoipCidrState.h>
#include <aws/ec2/model/IpamRouteOriginAuthorization.h>
#include <aws/ec2/model/IpamRouteOverlap.h>
#include <aws/ec2/model/IpamRpkiStatus.h>
#include <aws/ec2/model/IpamRpkiStrength.h>

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
 * <p>Contains information about a route protection finding, including the RPKI
 * validation status of a BYOIP route announcement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamRouteProtectionFinding">AWS
 * API Reference</a></p>
 */
class IpamRouteProtectionFinding {
 public:
  AWS_EC2_API IpamRouteProtectionFinding() = default;
  AWS_EC2_API IpamRouteProtectionFinding(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamRouteProtectionFinding& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the resource owner.</p>
   */
  inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
  inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
  template <typename ResourceOwnerIdT = Aws::String>
  void SetResourceOwnerId(ResourceOwnerIdT&& value) {
    m_resourceOwnerIdHasBeenSet = true;
    m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value);
  }
  template <typename ResourceOwnerIdT = Aws::String>
  IpamRouteProtectionFinding& WithResourceOwnerId(ResourceOwnerIdT&& value) {
    SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region of the resource.</p>
   */
  inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
  inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
  template <typename ResourceRegionT = Aws::String>
  void SetResourceRegion(ResourceRegionT&& value) {
    m_resourceRegionHasBeenSet = true;
    m_resourceRegion = std::forward<ResourceRegionT>(value);
  }
  template <typename ResourceRegionT = Aws::String>
  IpamRouteProtectionFinding& WithResourceRegion(ResourceRegionT&& value) {
    SetResourceRegion(std::forward<ResourceRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM pool associated with the finding.</p>
   */
  inline const Aws::String& GetIpamPoolId() const { return m_ipamPoolId; }
  inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
  template <typename IpamPoolIdT = Aws::String>
  void SetIpamPoolId(IpamPoolIdT&& value) {
    m_ipamPoolIdHasBeenSet = true;
    m_ipamPoolId = std::forward<IpamPoolIdT>(value);
  }
  template <typename IpamPoolIdT = Aws::String>
  IpamRouteProtectionFinding& WithIpamPoolId(IpamPoolIdT&& value) {
    SetIpamPoolId(std::forward<IpamPoolIdT>(value));
    return *this;
  }
  ///@}

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
  IpamRouteProtectionFinding& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the BYOIP CIDR. Possible values:</p> <ul> <li> <p>
   * <code>advertised</code> - The CIDR is being advertised.</p> </li> <li> <p>
   * <code>deprovisioned</code> - The CIDR has been deprovisioned.</p> </li> <li> <p>
   * <code>failed-deprovision</code> - Deprovisioning failed.</p> </li> <li> <p>
   * <code>failed-provision</code> - Provisioning failed.</p> </li> <li> <p>
   * <code>pending-deprovision</code> - Deprovisioning is in progress.</p> </li> <li>
   * <p> <code>pending-provision</code> - Provisioning is in progress.</p> </li> <li>
   * <p> <code>provisioned</code> - The CIDR is provisioned.</p> </li> <li> <p>
   * <code>provisioned-not-publicly-advertisable</code> - The CIDR is provisioned but
   * not publicly advertisable.</p> </li> </ul>
   */
  inline IpamByoipCidrState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IpamByoipCidrState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IpamRouteProtectionFinding& WithState(IpamByoipCidrState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The advertisement type. Possible values:</p> <ul> <li> <p>
   * <code>regional</code> - The IP address is advertised from a single location
   * (regional services such as Amazon EC2).</p> </li> <li> <p> <code>global</code> -
   * The IP address is advertised from multiple global locations simultaneously
   * (global services such as Amazon CloudFront).</p> </li> </ul>
   */
  inline IpamByoipAdvertisementType GetAdvertisementType() const { return m_advertisementType; }
  inline bool AdvertisementTypeHasBeenSet() const { return m_advertisementTypeHasBeenSet; }
  inline void SetAdvertisementType(IpamByoipAdvertisementType value) {
    m_advertisementTypeHasBeenSet = true;
    m_advertisementType = value;
  }
  inline IpamRouteProtectionFinding& WithAdvertisementType(IpamByoipAdvertisementType value) {
    SetAdvertisementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network border group.</p>
   */
  inline const Aws::String& GetNetworkBorderGroup() const { return m_networkBorderGroup; }
  inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
  template <typename NetworkBorderGroupT = Aws::String>
  void SetNetworkBorderGroup(NetworkBorderGroupT&& value) {
    m_networkBorderGroupHasBeenSet = true;
    m_networkBorderGroup = std::forward<NetworkBorderGroupT>(value);
  }
  template <typename NetworkBorderGroupT = Aws::String>
  IpamRouteProtectionFinding& WithNetworkBorderGroup(NetworkBorderGroupT&& value) {
    SetNetworkBorderGroup(std::forward<NetworkBorderGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the BYOIP pool.</p>
   */
  inline const Aws::String& GetPoolId() const { return m_poolId; }
  inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
  template <typename PoolIdT = Aws::String>
  void SetPoolId(PoolIdT&& value) {
    m_poolIdHasBeenSet = true;
    m_poolId = std::forward<PoolIdT>(value);
  }
  template <typename PoolIdT = Aws::String>
  IpamRouteProtectionFinding& WithPoolId(PoolIdT&& value) {
    SetPoolId(std::forward<PoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Autonomous System Number (ASN) that originates the route.</p>
   */
  inline const Aws::String& GetAsn() const { return m_asn; }
  inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
  template <typename AsnT = Aws::String>
  void SetAsn(AsnT&& value) {
    m_asnHasBeenSet = true;
    m_asn = std::forward<AsnT>(value);
  }
  template <typename AsnT = Aws::String>
  IpamRouteProtectionFinding& WithAsn(AsnT&& value) {
    SetAsn(std::forward<AsnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The RPKI validation status of the route. Possible values:</p> <ul> <li> <p>
   * <code>valid</code> - The route has a matching ROA that covers the prefix and
   * origin ASN.</p> </li> <li> <p> <code>invalid</code> - The route has a ROA for
   * the prefix, but the origin ASN or prefix length does not match.</p> </li> <li>
   * <p> <code>unknown</code> - No ROA exists for the prefix, so RPKI validation
   * cannot be performed.</p> </li> </ul>
   */
  inline IpamRpkiStatus GetRpkiStatus() const { return m_rpkiStatus; }
  inline bool RpkiStatusHasBeenSet() const { return m_rpkiStatusHasBeenSet; }
  inline void SetRpkiStatus(IpamRpkiStatus value) {
    m_rpkiStatusHasBeenSet = true;
    m_rpkiStatus = value;
  }
  inline IpamRouteProtectionFinding& WithRpkiStatus(IpamRpkiStatus value) {
    SetRpkiStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The RPKI enforcement strength for the route. Possible values:</p> <ul> <li>
   * <p> <code>strict</code> - Invalid routes are rejected.</p> </li> <li> <p>
   * <code>permissive</code> - Invalid routes are accepted but flagged.</p> </li>
   * </ul>
   */
  inline IpamRpkiStrength GetRpkiStrength() const { return m_rpkiStrength; }
  inline bool RpkiStrengthHasBeenSet() const { return m_rpkiStrengthHasBeenSet; }
  inline void SetRpkiStrength(IpamRpkiStrength value) {
    m_rpkiStrengthHasBeenSet = true;
    m_rpkiStrength = value;
  }
  inline IpamRouteProtectionFinding& WithRpkiStrength(IpamRpkiStrength value) {
    SetRpkiStrength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Route Origin Authorizations (ROAs) that cover the prefix.</p>
   */
  inline const Aws::Vector<IpamRouteOriginAuthorization>& GetRoas() const { return m_roas; }
  inline bool RoasHasBeenSet() const { return m_roasHasBeenSet; }
  template <typename RoasT = Aws::Vector<IpamRouteOriginAuthorization>>
  void SetRoas(RoasT&& value) {
    m_roasHasBeenSet = true;
    m_roas = std::forward<RoasT>(value);
  }
  template <typename RoasT = Aws::Vector<IpamRouteOriginAuthorization>>
  IpamRouteProtectionFinding& WithRoas(RoasT&& value) {
    SetRoas(std::forward<RoasT>(value));
    return *this;
  }
  template <typename RoasT = IpamRouteOriginAuthorization>
  IpamRouteProtectionFinding& AddRoas(RoasT&& value) {
    m_roasHasBeenSet = true;
    m_roas.emplace_back(std::forward<RoasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overlapping routes detected for this prefix.</p>
   */
  inline const Aws::Vector<IpamRouteOverlap>& GetRouteOverlaps() const { return m_routeOverlaps; }
  inline bool RouteOverlapsHasBeenSet() const { return m_routeOverlapsHasBeenSet; }
  template <typename RouteOverlapsT = Aws::Vector<IpamRouteOverlap>>
  void SetRouteOverlaps(RouteOverlapsT&& value) {
    m_routeOverlapsHasBeenSet = true;
    m_routeOverlaps = std::forward<RouteOverlapsT>(value);
  }
  template <typename RouteOverlapsT = Aws::Vector<IpamRouteOverlap>>
  IpamRouteProtectionFinding& WithRouteOverlaps(RouteOverlapsT&& value) {
    SetRouteOverlaps(std::forward<RouteOverlapsT>(value));
    return *this;
  }
  template <typename RouteOverlapsT = IpamRouteOverlap>
  IpamRouteProtectionFinding& AddRouteOverlaps(RouteOverlapsT&& value) {
    m_routeOverlapsHasBeenSet = true;
    m_routeOverlaps.emplace_back(std::forward<RouteOverlapsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the route was last sampled.</p>
   */
  inline const Aws::Utils::DateTime& GetSampleTime() const { return m_sampleTime; }
  inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
  template <typename SampleTimeT = Aws::Utils::DateTime>
  void SetSampleTime(SampleTimeT&& value) {
    m_sampleTimeHasBeenSet = true;
    m_sampleTime = std::forward<SampleTimeT>(value);
  }
  template <typename SampleTimeT = Aws::Utils::DateTime>
  IpamRouteProtectionFinding& WithSampleTime(SampleTimeT&& value) {
    SetSampleTime(std::forward<SampleTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the ROA data was last sampled.</p>
   */
  inline const Aws::Utils::DateTime& GetRoaSampleTime() const { return m_roaSampleTime; }
  inline bool RoaSampleTimeHasBeenSet() const { return m_roaSampleTimeHasBeenSet; }
  template <typename RoaSampleTimeT = Aws::Utils::DateTime>
  void SetRoaSampleTime(RoaSampleTimeT&& value) {
    m_roaSampleTimeHasBeenSet = true;
    m_roaSampleTime = std::forward<RoaSampleTimeT>(value);
  }
  template <typename RoaSampleTimeT = Aws::Utils::DateTime>
  IpamRouteProtectionFinding& WithRoaSampleTime(RoaSampleTimeT&& value) {
    SetRoaSampleTime(std::forward<RoaSampleTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceOwnerId;

  Aws::String m_resourceRegion;

  Aws::String m_ipamPoolId;

  Aws::String m_cidr;

  IpamByoipCidrState m_state{IpamByoipCidrState::NOT_SET};

  IpamByoipAdvertisementType m_advertisementType{IpamByoipAdvertisementType::NOT_SET};

  Aws::String m_networkBorderGroup;

  Aws::String m_poolId;

  Aws::String m_asn;

  IpamRpkiStatus m_rpkiStatus{IpamRpkiStatus::NOT_SET};

  IpamRpkiStrength m_rpkiStrength{IpamRpkiStrength::NOT_SET};

  Aws::Vector<IpamRouteOriginAuthorization> m_roas;

  Aws::Vector<IpamRouteOverlap> m_routeOverlaps;

  Aws::Utils::DateTime m_sampleTime{};

  Aws::Utils::DateTime m_roaSampleTime{};
  bool m_resourceOwnerIdHasBeenSet = false;
  bool m_resourceRegionHasBeenSet = false;
  bool m_ipamPoolIdHasBeenSet = false;
  bool m_cidrHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_advertisementTypeHasBeenSet = false;
  bool m_networkBorderGroupHasBeenSet = false;
  bool m_poolIdHasBeenSet = false;
  bool m_asnHasBeenSet = false;
  bool m_rpkiStatusHasBeenSet = false;
  bool m_rpkiStrengthHasBeenSet = false;
  bool m_roasHasBeenSet = false;
  bool m_routeOverlapsHasBeenSet = false;
  bool m_sampleTimeHasBeenSet = false;
  bool m_roaSampleTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
