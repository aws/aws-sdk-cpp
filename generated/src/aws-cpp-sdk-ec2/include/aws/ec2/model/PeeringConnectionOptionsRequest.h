/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/MultipathResilienceMode.h>

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
 * <p>The VPC peering connection options.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PeeringConnectionOptionsRequest">AWS
 * API Reference</a></p>
 */
class PeeringConnectionOptionsRequest {
 public:
  AWS_EC2_API PeeringConnectionOptionsRequest() = default;
  AWS_EC2_API PeeringConnectionOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API PeeringConnectionOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>If true, enables a local VPC to resolve public DNS hostnames to private IP
   * addresses when queried from instances in the peer VPC.</p>
   */
  inline bool GetAllowDnsResolutionFromRemoteVpc() const { return m_allowDnsResolutionFromRemoteVpc; }
  inline bool AllowDnsResolutionFromRemoteVpcHasBeenSet() const { return m_allowDnsResolutionFromRemoteVpcHasBeenSet; }
  inline void SetAllowDnsResolutionFromRemoteVpc(bool value) {
    m_allowDnsResolutionFromRemoteVpcHasBeenSet = true;
    m_allowDnsResolutionFromRemoteVpc = value;
  }
  inline PeeringConnectionOptionsRequest& WithAllowDnsResolutionFromRemoteVpc(bool value) {
    SetAllowDnsResolutionFromRemoteVpc(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Deprecated.</p>
   */
  inline bool GetAllowEgressFromLocalClassicLinkToRemoteVpc() const { return m_allowEgressFromLocalClassicLinkToRemoteVpc; }
  inline bool AllowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet() const {
    return m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet;
  }
  inline void SetAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) {
    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true;
    m_allowEgressFromLocalClassicLinkToRemoteVpc = value;
  }
  inline PeeringConnectionOptionsRequest& WithAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) {
    SetAllowEgressFromLocalClassicLinkToRemoteVpc(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Deprecated.</p>
   */
  inline bool GetAllowEgressFromLocalVpcToRemoteClassicLink() const { return m_allowEgressFromLocalVpcToRemoteClassicLink; }
  inline bool AllowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet() const {
    return m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet;
  }
  inline void SetAllowEgressFromLocalVpcToRemoteClassicLink(bool value) {
    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true;
    m_allowEgressFromLocalVpcToRemoteClassicLink = value;
  }
  inline PeeringConnectionOptionsRequest& WithAllowEgressFromLocalVpcToRemoteClassicLink(bool value) {
    SetAllowEgressFromLocalVpcToRemoteClassicLink(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether you allow multipath resilience for this side of the VPC
   * peering connection. Multipath resilience is supported only for inter-Region VPC
   * peering connections between supported Regions. It takes effect only when both
   * the requester and the accepter allow it. If you don't specify this parameter,
   * the current setting doesn't change.</p>
   */
  inline bool GetAllowMultipathResilience() const { return m_allowMultipathResilience; }
  inline bool AllowMultipathResilienceHasBeenSet() const { return m_allowMultipathResilienceHasBeenSet; }
  inline void SetAllowMultipathResilience(bool value) {
    m_allowMultipathResilienceHasBeenSet = true;
    m_allowMultipathResilience = value;
  }
  inline PeeringConnectionOptionsRequest& WithAllowMultipathResilience(bool value) {
    SetAllowMultipathResilience(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multipath resilience mode. You can specify this parameter only if
   * <code>AllowMultipathResilience</code> is <code>true</code>.</p> <p>The following
   * value is valid:</p> <ul> <li> <p> <code>always-on</code> – Replicates traffic
   * across multiple network paths while multipath resilience is in effect.</p> </li>
   * </ul> <p>If <code>AllowMultipathResilience</code> is <code>true</code> and you
   * don't specify a mode, the default is <code>always-on</code>.</p>
   */
  inline MultipathResilienceMode GetMultipathResilienceMode() const { return m_multipathResilienceMode; }
  inline bool MultipathResilienceModeHasBeenSet() const { return m_multipathResilienceModeHasBeenSet; }
  inline void SetMultipathResilienceMode(MultipathResilienceMode value) {
    m_multipathResilienceModeHasBeenSet = true;
    m_multipathResilienceMode = value;
  }
  inline PeeringConnectionOptionsRequest& WithMultipathResilienceMode(MultipathResilienceMode value) {
    SetMultipathResilienceMode(value);
    return *this;
  }
  ///@}
 private:
  bool m_allowDnsResolutionFromRemoteVpc{false};

  bool m_allowEgressFromLocalClassicLinkToRemoteVpc{false};

  bool m_allowEgressFromLocalVpcToRemoteClassicLink{false};

  bool m_allowMultipathResilience{false};

  MultipathResilienceMode m_multipathResilienceMode{MultipathResilienceMode::NOT_SET};
  bool m_allowDnsResolutionFromRemoteVpcHasBeenSet = false;
  bool m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = false;
  bool m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = false;
  bool m_allowMultipathResilienceHasBeenSet = false;
  bool m_multipathResilienceModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
