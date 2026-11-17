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
 * <p>The VPC peering connection options to apply to the requester VPC when you
 * create a VPC peering connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreatePeeringConnectionOptionsRequest">AWS
 * API Reference</a></p>
 */
class CreatePeeringConnectionOptionsRequest {
 public:
  AWS_EC2_API CreatePeeringConnectionOptionsRequest() = default;
  AWS_EC2_API CreatePeeringConnectionOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CreatePeeringConnectionOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Specifies whether you allow multipath resilience for the requester VPC.
   * Multipath resilience is supported only for inter-Region VPC peering connections
   * between supported Regions. It takes effect only when both the requester and the
   * accepter allow it. Accepting the VPC peering connection request also allows
   * multipath resilience for the accepter VPC. If you don't specify this parameter,
   * the default is <code>false</code>.</p>
   */
  inline bool GetAllowMultipathResilience() const { return m_allowMultipathResilience; }
  inline bool AllowMultipathResilienceHasBeenSet() const { return m_allowMultipathResilienceHasBeenSet; }
  inline void SetAllowMultipathResilience(bool value) {
    m_allowMultipathResilienceHasBeenSet = true;
    m_allowMultipathResilience = value;
  }
  inline CreatePeeringConnectionOptionsRequest& WithAllowMultipathResilience(bool value) {
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
  inline CreatePeeringConnectionOptionsRequest& WithMultipathResilienceMode(MultipathResilienceMode value) {
    SetMultipathResilienceMode(value);
    return *this;
  }
  ///@}
 private:
  bool m_allowMultipathResilience{false};

  MultipathResilienceMode m_multipathResilienceMode{MultipathResilienceMode::NOT_SET};
  bool m_allowMultipathResilienceHasBeenSet = false;
  bool m_multipathResilienceModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
