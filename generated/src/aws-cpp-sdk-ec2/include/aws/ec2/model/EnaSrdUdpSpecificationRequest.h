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
   * <p>Configures ENA Express for UDP network traffic from your launch
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnaSrdUdpSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class EnaSrdUdpSpecificationRequest
  {
  public:
    AWS_EC2_API EnaSrdUdpSpecificationRequest();
    AWS_EC2_API EnaSrdUdpSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EnaSrdUdpSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether UDP traffic uses ENA Express for your instance. To ensure
     * that UDP traffic can use ENA Express when you launch an instance, you must also
     * set <b>EnaSrdEnabled</b> in the <b>EnaSrdSpecificationRequest</b> to
     * <code>true</code> in your launch template.</p>
     */
    inline bool GetEnaSrdUdpEnabled() const{ return m_enaSrdUdpEnabled; }

    /**
     * <p>Indicates whether UDP traffic uses ENA Express for your instance. To ensure
     * that UDP traffic can use ENA Express when you launch an instance, you must also
     * set <b>EnaSrdEnabled</b> in the <b>EnaSrdSpecificationRequest</b> to
     * <code>true</code> in your launch template.</p>
     */
    inline bool EnaSrdUdpEnabledHasBeenSet() const { return m_enaSrdUdpEnabledHasBeenSet; }

    /**
     * <p>Indicates whether UDP traffic uses ENA Express for your instance. To ensure
     * that UDP traffic can use ENA Express when you launch an instance, you must also
     * set <b>EnaSrdEnabled</b> in the <b>EnaSrdSpecificationRequest</b> to
     * <code>true</code> in your launch template.</p>
     */
    inline void SetEnaSrdUdpEnabled(bool value) { m_enaSrdUdpEnabledHasBeenSet = true; m_enaSrdUdpEnabled = value; }

    /**
     * <p>Indicates whether UDP traffic uses ENA Express for your instance. To ensure
     * that UDP traffic can use ENA Express when you launch an instance, you must also
     * set <b>EnaSrdEnabled</b> in the <b>EnaSrdSpecificationRequest</b> to
     * <code>true</code> in your launch template.</p>
     */
    inline EnaSrdUdpSpecificationRequest& WithEnaSrdUdpEnabled(bool value) { SetEnaSrdUdpEnabled(value); return *this;}

  private:

    bool m_enaSrdUdpEnabled;
    bool m_enaSrdUdpEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
