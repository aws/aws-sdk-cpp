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
   * <p>Describes the ENA Express configuration for UDP traffic on the network
   * interface that's attached to the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachmentEnaSrdUdpSpecification">AWS
   * API Reference</a></p>
   */
  class AttachmentEnaSrdUdpSpecification
  {
  public:
    AWS_EC2_API AttachmentEnaSrdUdpSpecification();
    AWS_EC2_API AttachmentEnaSrdUdpSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AttachmentEnaSrdUdpSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether UDP traffic to and from the instance uses ENA Express. To
     * specify this setting, you must first enable ENA Express.</p>
     */
    inline bool GetEnaSrdUdpEnabled() const{ return m_enaSrdUdpEnabled; }

    /**
     * <p>Indicates whether UDP traffic to and from the instance uses ENA Express. To
     * specify this setting, you must first enable ENA Express.</p>
     */
    inline bool EnaSrdUdpEnabledHasBeenSet() const { return m_enaSrdUdpEnabledHasBeenSet; }

    /**
     * <p>Indicates whether UDP traffic to and from the instance uses ENA Express. To
     * specify this setting, you must first enable ENA Express.</p>
     */
    inline void SetEnaSrdUdpEnabled(bool value) { m_enaSrdUdpEnabledHasBeenSet = true; m_enaSrdUdpEnabled = value; }

    /**
     * <p>Indicates whether UDP traffic to and from the instance uses ENA Express. To
     * specify this setting, you must first enable ENA Express.</p>
     */
    inline AttachmentEnaSrdUdpSpecification& WithEnaSrdUdpEnabled(bool value) { SetEnaSrdUdpEnabled(value); return *this;}

  private:

    bool m_enaSrdUdpEnabled;
    bool m_enaSrdUdpEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
