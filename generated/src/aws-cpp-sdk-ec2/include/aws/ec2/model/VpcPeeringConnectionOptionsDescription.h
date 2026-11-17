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
 * <p>Describes the VPC peering connection options.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcPeeringConnectionOptionsDescription">AWS
 * API Reference</a></p>
 */
class VpcPeeringConnectionOptionsDescription {
 public:
  AWS_EC2_API VpcPeeringConnectionOptionsDescription() = default;
  AWS_EC2_API VpcPeeringConnectionOptionsDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpcPeeringConnectionOptionsDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Indicates whether a local VPC can resolve public DNS hostnames to private IP
   * addresses when queried from instances in a peer VPC.</p>
   */
  inline bool GetAllowDnsResolutionFromRemoteVpc() const { return m_allowDnsResolutionFromRemoteVpc; }
  inline bool AllowDnsResolutionFromRemoteVpcHasBeenSet() const { return m_allowDnsResolutionFromRemoteVpcHasBeenSet; }
  inline void SetAllowDnsResolutionFromRemoteVpc(bool value) {
    m_allowDnsResolutionFromRemoteVpcHasBeenSet = true;
    m_allowDnsResolutionFromRemoteVpc = value;
  }
  inline VpcPeeringConnectionOptionsDescription& WithAllowDnsResolutionFromRemoteVpc(bool value) {
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
  inline VpcPeeringConnectionOptionsDescription& WithAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) {
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
  inline VpcPeeringConnectionOptionsDescription& WithAllowEgressFromLocalVpcToRemoteClassicLink(bool value) {
    SetAllowEgressFromLocalVpcToRemoteClassicLink(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this side of the VPC peering connection allows multipath
   * resilience.</p>
   */
  inline bool GetAllowMultipathResilience() const { return m_allowMultipathResilience; }
  inline bool AllowMultipathResilienceHasBeenSet() const { return m_allowMultipathResilienceHasBeenSet; }
  inline void SetAllowMultipathResilience(bool value) {
    m_allowMultipathResilienceHasBeenSet = true;
    m_allowMultipathResilience = value;
  }
  inline VpcPeeringConnectionOptionsDescription& WithAllowMultipathResilience(bool value) {
    SetAllowMultipathResilience(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multipath resilience mode for this side of the VPC peering connection.
   * This value is present only when this side allows multipath resilience.</p>
   */
  inline MultipathResilienceMode GetMultipathResilienceMode() const { return m_multipathResilienceMode; }
  inline bool MultipathResilienceModeHasBeenSet() const { return m_multipathResilienceModeHasBeenSet; }
  inline void SetMultipathResilienceMode(MultipathResilienceMode value) {
    m_multipathResilienceModeHasBeenSet = true;
    m_multipathResilienceMode = value;
  }
  inline VpcPeeringConnectionOptionsDescription& WithMultipathResilienceMode(MultipathResilienceMode value) {
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
