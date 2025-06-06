﻿/**
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
   * <p>ENA Express is compatible with both TCP and UDP transport protocols. When
   * it's enabled, TCP traffic automatically uses it. However, some UDP-based
   * applications are designed to handle network packets that are out of order,
   * without a need for retransmission, such as live video broadcasting or other
   * near-real-time applications. For UDP traffic, you can specify whether to use ENA
   * Express, based on your application environment needs.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceAttachmentEnaSrdUdpSpecification">AWS
   * API Reference</a></p>
   */
  class InstanceAttachmentEnaSrdUdpSpecification
  {
  public:
    AWS_EC2_API InstanceAttachmentEnaSrdUdpSpecification() = default;
    AWS_EC2_API InstanceAttachmentEnaSrdUdpSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceAttachmentEnaSrdUdpSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether UDP traffic to and from the instance uses ENA Express. To
     * specify this setting, you must first enable ENA Express.</p>
     */
    inline bool GetEnaSrdUdpEnabled() const { return m_enaSrdUdpEnabled; }
    inline bool EnaSrdUdpEnabledHasBeenSet() const { return m_enaSrdUdpEnabledHasBeenSet; }
    inline void SetEnaSrdUdpEnabled(bool value) { m_enaSrdUdpEnabledHasBeenSet = true; m_enaSrdUdpEnabled = value; }
    inline InstanceAttachmentEnaSrdUdpSpecification& WithEnaSrdUdpEnabled(bool value) { SetEnaSrdUdpEnabled(value); return *this;}
    ///@}
  private:

    bool m_enaSrdUdpEnabled{false};
    bool m_enaSrdUdpEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
