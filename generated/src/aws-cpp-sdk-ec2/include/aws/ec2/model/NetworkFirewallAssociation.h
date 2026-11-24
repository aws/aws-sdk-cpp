/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FirewallMode.h>
#include <aws/ec2/model/FirewallOnboardingStatus.h>

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
 * <p>Describes an Automated Internet Firewall that inspects traffic between a VPC
 * and its internet gateway or egress-only internet gateway.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkFirewallAssociation">AWS
 * API Reference</a></p>
 */
class NetworkFirewallAssociation {
 public:
  AWS_EC2_API NetworkFirewallAssociation() = default;
  AWS_EC2_API NetworkFirewallAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API NetworkFirewallAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the firewall.</p>
   */
  inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
  inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
  template <typename FirewallArnT = Aws::String>
  void SetFirewallArn(FirewallArnT&& value) {
    m_firewallArnHasBeenSet = true;
    m_firewallArn = std::forward<FirewallArnT>(value);
  }
  template <typename FirewallArnT = Aws::String>
  NetworkFirewallAssociation& WithFirewallArn(FirewallArnT&& value) {
    SetFirewallArn(std::forward<FirewallArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the firewall for the VPC. Possible values:</p> <ul> <li> <p>
   * <code>active</code>: The firewall inspects traffic for the VPC.</p> </li> <li>
   * <p> <code>disabling</code>: AWS is removing the firewall from the VPC.</p> </li>
   * <li> <p> <code>pending</code>: AWS is setting up the firewall for the VPC. The
   * firewall might not inspect traffic yet.</p> </li> </ul>
   */
  inline FirewallOnboardingStatus GetFirewallOnboardingStatus() const { return m_firewallOnboardingStatus; }
  inline bool FirewallOnboardingStatusHasBeenSet() const { return m_firewallOnboardingStatusHasBeenSet; }
  inline void SetFirewallOnboardingStatus(FirewallOnboardingStatus value) {
    m_firewallOnboardingStatusHasBeenSet = true;
    m_firewallOnboardingStatus = value;
  }
  inline NetworkFirewallAssociation& WithFirewallOnboardingStatus(FirewallOnboardingStatus value) {
    SetFirewallOnboardingStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode of the firewall. Possible values:</p> <ul> <li> <p>
   * <code>enforce</code>: The firewall applies its policy to traffic.</p> </li> <li>
   * <p> <code>monitor</code>: The firewall logs traffic that its policy would act
   * on, but doesn't block it.</p> </li> </ul>
   */
  inline FirewallMode GetFirewallMode() const { return m_firewallMode; }
  inline bool FirewallModeHasBeenSet() const { return m_firewallModeHasBeenSet; }
  inline void SetFirewallMode(FirewallMode value) {
    m_firewallModeHasBeenSet = true;
    m_firewallMode = value;
  }
  inline NetworkFirewallAssociation& WithFirewallMode(FirewallMode value) {
    SetFirewallMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallArn;

  FirewallOnboardingStatus m_firewallOnboardingStatus{FirewallOnboardingStatus::NOT_SET};

  FirewallMode m_firewallMode{FirewallMode::NOT_SET};
  bool m_firewallArnHasBeenSet = false;
  bool m_firewallOnboardingStatusHasBeenSet = false;
  bool m_firewallModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
