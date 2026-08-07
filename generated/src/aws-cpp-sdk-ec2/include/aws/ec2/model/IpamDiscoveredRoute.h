/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamByoipAdvertisementType.h>
#include <aws/ec2/model/IpamByoipCidrState.h>

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
 * <p>Contains information about a BGP route discovered by IPAM resource
 * discovery.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamDiscoveredRoute">AWS
 * API Reference</a></p>
 */
class IpamDiscoveredRoute {
 public:
  AWS_EC2_API IpamDiscoveredRoute() = default;
  AWS_EC2_API IpamDiscoveredRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamDiscoveredRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the IPAM resource discovery that discovered the route.</p>
   */
  inline const Aws::String& GetIpamResourceDiscoveryId() const { return m_ipamResourceDiscoveryId; }
  inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
  template <typename IpamResourceDiscoveryIdT = Aws::String>
  void SetIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) {
    m_ipamResourceDiscoveryIdHasBeenSet = true;
    m_ipamResourceDiscoveryId = std::forward<IpamResourceDiscoveryIdT>(value);
  }
  template <typename IpamResourceDiscoveryIdT = Aws::String>
  IpamDiscoveredRoute& WithIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) {
    SetIpamResourceDiscoveryId(std::forward<IpamResourceDiscoveryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the route was discovered.</p>
   */
  inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
  inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
  template <typename ResourceRegionT = Aws::String>
  void SetResourceRegion(ResourceRegionT&& value) {
    m_resourceRegionHasBeenSet = true;
    m_resourceRegion = std::forward<ResourceRegionT>(value);
  }
  template <typename ResourceRegionT = Aws::String>
  IpamDiscoveredRoute& WithResourceRegion(ResourceRegionT&& value) {
    SetResourceRegion(std::forward<ResourceRegionT>(value));
    return *this;
  }
  ///@}

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
  IpamDiscoveredRoute& WithResourceOwnerId(ResourceOwnerIdT&& value) {
    SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address prefix of the discovered route in CIDR notation.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  IpamDiscoveredRoute& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
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
  IpamDiscoveredRoute& WithAsn(AsnT&& value) {
    SetAsn(std::forward<AsnT>(value));
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
  inline IpamDiscoveredRoute& WithState(IpamByoipCidrState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The advertisement type of the route. Possible values:</p> <ul> <li> <p>
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
  inline IpamDiscoveredRoute& WithAdvertisementType(IpamByoipAdvertisementType value) {
    SetAdvertisementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network border group for the route.</p>
   */
  inline const Aws::String& GetNetworkBorderGroup() const { return m_networkBorderGroup; }
  inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
  template <typename NetworkBorderGroupT = Aws::String>
  void SetNetworkBorderGroup(NetworkBorderGroupT&& value) {
    m_networkBorderGroupHasBeenSet = true;
    m_networkBorderGroup = std::forward<NetworkBorderGroupT>(value);
  }
  template <typename NetworkBorderGroupT = Aws::String>
  IpamDiscoveredRoute& WithNetworkBorderGroup(NetworkBorderGroupT&& value) {
    SetNetworkBorderGroup(std::forward<NetworkBorderGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the BYOIP pool associated with the route.</p>
   */
  inline const Aws::String& GetPoolId() const { return m_poolId; }
  inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
  template <typename PoolIdT = Aws::String>
  void SetPoolId(PoolIdT&& value) {
    m_poolIdHasBeenSet = true;
    m_poolId = std::forward<PoolIdT>(value);
  }
  template <typename PoolIdT = Aws::String>
  IpamDiscoveredRoute& WithPoolId(PoolIdT&& value) {
    SetPoolId(std::forward<PoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM pool associated with the route.</p>
   */
  inline const Aws::String& GetIpamPoolId() const { return m_ipamPoolId; }
  inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
  template <typename IpamPoolIdT = Aws::String>
  void SetIpamPoolId(IpamPoolIdT&& value) {
    m_ipamPoolIdHasBeenSet = true;
    m_ipamPoolId = std::forward<IpamPoolIdT>(value);
  }
  template <typename IpamPoolIdT = Aws::String>
  IpamDiscoveredRoute& WithIpamPoolId(IpamPoolIdT&& value) {
    SetIpamPoolId(std::forward<IpamPoolIdT>(value));
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
  IpamDiscoveredRoute& WithSampleTime(SampleTimeT&& value) {
    SetSampleTime(std::forward<SampleTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ipamResourceDiscoveryId;

  Aws::String m_resourceRegion;

  Aws::String m_resourceOwnerId;

  Aws::String m_cidr;

  Aws::String m_asn;

  IpamByoipCidrState m_state{IpamByoipCidrState::NOT_SET};

  IpamByoipAdvertisementType m_advertisementType{IpamByoipAdvertisementType::NOT_SET};

  Aws::String m_networkBorderGroup;

  Aws::String m_poolId;

  Aws::String m_ipamPoolId;

  Aws::Utils::DateTime m_sampleTime{};
  bool m_ipamResourceDiscoveryIdHasBeenSet = false;
  bool m_resourceRegionHasBeenSet = false;
  bool m_resourceOwnerIdHasBeenSet = false;
  bool m_cidrHasBeenSet = false;
  bool m_asnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_advertisementTypeHasBeenSet = false;
  bool m_networkBorderGroupHasBeenSet = false;
  bool m_poolIdHasBeenSet = false;
  bool m_ipamPoolIdHasBeenSet = false;
  bool m_sampleTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
