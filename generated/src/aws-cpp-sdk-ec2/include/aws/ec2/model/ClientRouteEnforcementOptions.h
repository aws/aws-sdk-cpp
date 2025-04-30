/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Client Route Enforcement is a feature of Client VPN that helps enforce
   * administrator defined routes on devices connected through the VPN. This feature
   * helps improve your security posture by ensuring that network traffic originating
   * from a connected client is not inadvertently sent outside the VPN tunnel.</p>
   * <p>Client Route Enforcement works by monitoring the route table of a connected
   * device for routing policy changes to the VPN connection. If the feature detects
   * any VPN routing policy modifications, it will automatically force an update to
   * the route table, reverting it back to the expected route
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientRouteEnforcementOptions">AWS
   * API Reference</a></p>
   */
  class ClientRouteEnforcementOptions
  {
  public:
    AWS_EC2_API ClientRouteEnforcementOptions() = default;
    AWS_EC2_API ClientRouteEnforcementOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientRouteEnforcementOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Enable or disable Client Route Enforcement. The state can either be
     * <code>true</code> (enabled) or <code>false</code> (disabled). The default is
     * <code>false</code>.</p> <p>Valid values: <code>true | false</code> </p>
     * <p>Default value: <code>false</code> </p>
     */
    inline bool GetEnforced() const { return m_enforced; }
    inline bool EnforcedHasBeenSet() const { return m_enforcedHasBeenSet; }
    inline void SetEnforced(bool value) { m_enforcedHasBeenSet = true; m_enforced = value; }
    inline ClientRouteEnforcementOptions& WithEnforced(bool value) { SetEnforced(value); return *this;}
    ///@}
  private:

    bool m_enforced{false};
    bool m_enforcedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
