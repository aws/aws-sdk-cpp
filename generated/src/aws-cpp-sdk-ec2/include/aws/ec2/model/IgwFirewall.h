/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
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
 * <p>Describes the Automated Internet Firewall that inspects traffic for an
 * internet gateway or egress-only internet gateway route.</p><p><h3>See Also:</h3>
 * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IgwFirewall">AWS
 * API Reference</a></p>
 */
class IgwFirewall {
 public:
  AWS_EC2_API IgwFirewall() = default;
  AWS_EC2_API IgwFirewall(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IgwFirewall& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ARN of the firewall that inspects traffic for this route.</p>
   */
  inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
  inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
  template <typename FirewallArnT = Aws::String>
  void SetFirewallArn(FirewallArnT&& value) {
    m_firewallArnHasBeenSet = true;
    m_firewallArn = std::forward<FirewallArnT>(value);
  }
  template <typename FirewallArnT = Aws::String>
  IgwFirewall& WithFirewallArn(FirewallArnT&& value) {
    SetFirewallArn(std::forward<FirewallArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the firewall that inspects traffic for this route. Uses the
   * same values as <code>NetworkFirewallAssociation$firewallOnboardingStatus</code>:
   * <code>active</code>, <code>disabling</code>, or <code>pending</code>.</p>
   */
  inline FirewallOnboardingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FirewallOnboardingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IgwFirewall& WithStatus(FirewallOnboardingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallArn;

  FirewallOnboardingStatus m_status{FirewallOnboardingStatus::NOT_SET};
  bool m_firewallArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
