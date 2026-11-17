/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/DynamicRoutingValue.h>
#include <aws/ec2/model/TransitGatewayPeeringAttachmentMultipathResilienceMode.h>
#include <aws/ec2/model/TransitGatewayPeeringAttachmentMultipathResilienceStatus.h>

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
 * <p>Describes dynamic routing for the transit gateway peering
 * attachment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPeeringAttachmentOptions">AWS
 * API Reference</a></p>
 */
class TransitGatewayPeeringAttachmentOptions {
 public:
  AWS_EC2_API TransitGatewayPeeringAttachmentOptions() = default;
  AWS_EC2_API TransitGatewayPeeringAttachmentOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayPeeringAttachmentOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Describes whether dynamic routing is enabled or disabled for the transit
   * gateway peering attachment.</p>
   */
  inline DynamicRoutingValue GetDynamicRouting() const { return m_dynamicRouting; }
  inline bool DynamicRoutingHasBeenSet() const { return m_dynamicRoutingHasBeenSet; }
  inline void SetDynamicRouting(DynamicRoutingValue value) {
    m_dynamicRoutingHasBeenSet = true;
    m_dynamicRouting = value;
  }
  inline TransitGatewayPeeringAttachmentOptions& WithDynamicRouting(DynamicRoutingValue value) {
    SetDynamicRouting(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the requester allows multipath resilience for the transit
   * gateway peering attachment.</p>
   */
  inline bool GetRequesterAllowMultipathResilience() const { return m_requesterAllowMultipathResilience; }
  inline bool RequesterAllowMultipathResilienceHasBeenSet() const { return m_requesterAllowMultipathResilienceHasBeenSet; }
  inline void SetRequesterAllowMultipathResilience(bool value) {
    m_requesterAllowMultipathResilienceHasBeenSet = true;
    m_requesterAllowMultipathResilience = value;
  }
  inline TransitGatewayPeeringAttachmentOptions& WithRequesterAllowMultipathResilience(bool value) {
    SetRequesterAllowMultipathResilience(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multipath resilience mode for the requester. This value is present only
   * when the requester allows multipath resilience.</p>
   */
  inline TransitGatewayPeeringAttachmentMultipathResilienceMode GetRequesterMultipathResilienceMode() const {
    return m_requesterMultipathResilienceMode;
  }
  inline bool RequesterMultipathResilienceModeHasBeenSet() const { return m_requesterMultipathResilienceModeHasBeenSet; }
  inline void SetRequesterMultipathResilienceMode(TransitGatewayPeeringAttachmentMultipathResilienceMode value) {
    m_requesterMultipathResilienceModeHasBeenSet = true;
    m_requesterMultipathResilienceMode = value;
  }
  inline TransitGatewayPeeringAttachmentOptions& WithRequesterMultipathResilienceMode(
      TransitGatewayPeeringAttachmentMultipathResilienceMode value) {
    SetRequesterMultipathResilienceMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the accepter allows multipath resilience for the transit
   * gateway peering attachment.</p>
   */
  inline bool GetAccepterAllowMultipathResilience() const { return m_accepterAllowMultipathResilience; }
  inline bool AccepterAllowMultipathResilienceHasBeenSet() const { return m_accepterAllowMultipathResilienceHasBeenSet; }
  inline void SetAccepterAllowMultipathResilience(bool value) {
    m_accepterAllowMultipathResilienceHasBeenSet = true;
    m_accepterAllowMultipathResilience = value;
  }
  inline TransitGatewayPeeringAttachmentOptions& WithAccepterAllowMultipathResilience(bool value) {
    SetAccepterAllowMultipathResilience(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multipath resilience mode for the accepter. This value is present only
   * when the accepter allows multipath resilience.</p>
   */
  inline TransitGatewayPeeringAttachmentMultipathResilienceMode GetAccepterMultipathResilienceMode() const {
    return m_accepterMultipathResilienceMode;
  }
  inline bool AccepterMultipathResilienceModeHasBeenSet() const { return m_accepterMultipathResilienceModeHasBeenSet; }
  inline void SetAccepterMultipathResilienceMode(TransitGatewayPeeringAttachmentMultipathResilienceMode value) {
    m_accepterMultipathResilienceModeHasBeenSet = true;
    m_accepterMultipathResilienceMode = value;
  }
  inline TransitGatewayPeeringAttachmentOptions& WithAccepterMultipathResilienceMode(
      TransitGatewayPeeringAttachmentMultipathResilienceMode value) {
    SetAccepterMultipathResilienceMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multipath resilience status of the transit gateway peering attachment.
   * The possible values are:</p> <ul> <li> <p> <code>enabled</code> – Both the
   * requester and the accepter allow multipath resilience.</p> </li> <li> <p>
   * <code>pending</code> – Either the requester or the accepter allows multipath
   * resilience, but not both.</p> </li> <li> <p> <code>disabled</code> – Neither the
   * requester nor the accepter allows multipath resilience.</p> </li> </ul>
   */
  inline TransitGatewayPeeringAttachmentMultipathResilienceStatus GetMultipathResilienceStatus() const {
    return m_multipathResilienceStatus;
  }
  inline bool MultipathResilienceStatusHasBeenSet() const { return m_multipathResilienceStatusHasBeenSet; }
  inline void SetMultipathResilienceStatus(TransitGatewayPeeringAttachmentMultipathResilienceStatus value) {
    m_multipathResilienceStatusHasBeenSet = true;
    m_multipathResilienceStatus = value;
  }
  inline TransitGatewayPeeringAttachmentOptions& WithMultipathResilienceStatus(
      TransitGatewayPeeringAttachmentMultipathResilienceStatus value) {
    SetMultipathResilienceStatus(value);
    return *this;
  }
  ///@}
 private:
  DynamicRoutingValue m_dynamicRouting{DynamicRoutingValue::NOT_SET};

  bool m_requesterAllowMultipathResilience{false};

  TransitGatewayPeeringAttachmentMultipathResilienceMode m_requesterMultipathResilienceMode{
      TransitGatewayPeeringAttachmentMultipathResilienceMode::NOT_SET};

  bool m_accepterAllowMultipathResilience{false};

  TransitGatewayPeeringAttachmentMultipathResilienceMode m_accepterMultipathResilienceMode{
      TransitGatewayPeeringAttachmentMultipathResilienceMode::NOT_SET};

  TransitGatewayPeeringAttachmentMultipathResilienceStatus m_multipathResilienceStatus{
      TransitGatewayPeeringAttachmentMultipathResilienceStatus::NOT_SET};
  bool m_dynamicRoutingHasBeenSet = false;
  bool m_requesterAllowMultipathResilienceHasBeenSet = false;
  bool m_requesterMultipathResilienceModeHasBeenSet = false;
  bool m_accepterAllowMultipathResilienceHasBeenSet = false;
  bool m_accepterMultipathResilienceModeHasBeenSet = false;
  bool m_multipathResilienceStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
