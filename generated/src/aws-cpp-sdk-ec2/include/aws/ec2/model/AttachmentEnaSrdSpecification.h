﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AttachmentEnaSrdUdpSpecification.h>
#include <utility>

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
   * <p>ENA Express uses Amazon Web Services Scalable Reliable Datagram (SRD)
   * technology to increase the maximum bandwidth used per stream and minimize tail
   * latency of network traffic between EC2 instances. With ENA Express, you can
   * communicate between two EC2 instances in the same subnet within the same
   * account, or in different accounts. Both sending and receiving instances must
   * have ENA Express enabled.</p> <p>To improve the reliability of network packet
   * delivery, ENA Express reorders network packets on the receiving end by default.
   * However, some UDP-based applications are designed to handle network packets that
   * are out of order to reduce the overhead for packet delivery at the network
   * layer. When ENA Express is enabled, you can specify whether UDP network traffic
   * uses it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachmentEnaSrdSpecification">AWS
   * API Reference</a></p>
   */
  class AttachmentEnaSrdSpecification
  {
  public:
    AWS_EC2_API AttachmentEnaSrdSpecification();
    AWS_EC2_API AttachmentEnaSrdSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AttachmentEnaSrdSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether ENA Express is enabled for the network interface.</p>
     */
    inline bool GetEnaSrdEnabled() const{ return m_enaSrdEnabled; }

    /**
     * <p>Indicates whether ENA Express is enabled for the network interface.</p>
     */
    inline bool EnaSrdEnabledHasBeenSet() const { return m_enaSrdEnabledHasBeenSet; }

    /**
     * <p>Indicates whether ENA Express is enabled for the network interface.</p>
     */
    inline void SetEnaSrdEnabled(bool value) { m_enaSrdEnabledHasBeenSet = true; m_enaSrdEnabled = value; }

    /**
     * <p>Indicates whether ENA Express is enabled for the network interface.</p>
     */
    inline AttachmentEnaSrdSpecification& WithEnaSrdEnabled(bool value) { SetEnaSrdEnabled(value); return *this;}


    /**
     * <p>Configures ENA Express for UDP network traffic.</p>
     */
    inline const AttachmentEnaSrdUdpSpecification& GetEnaSrdUdpSpecification() const{ return m_enaSrdUdpSpecification; }

    /**
     * <p>Configures ENA Express for UDP network traffic.</p>
     */
    inline bool EnaSrdUdpSpecificationHasBeenSet() const { return m_enaSrdUdpSpecificationHasBeenSet; }

    /**
     * <p>Configures ENA Express for UDP network traffic.</p>
     */
    inline void SetEnaSrdUdpSpecification(const AttachmentEnaSrdUdpSpecification& value) { m_enaSrdUdpSpecificationHasBeenSet = true; m_enaSrdUdpSpecification = value; }

    /**
     * <p>Configures ENA Express for UDP network traffic.</p>
     */
    inline void SetEnaSrdUdpSpecification(AttachmentEnaSrdUdpSpecification&& value) { m_enaSrdUdpSpecificationHasBeenSet = true; m_enaSrdUdpSpecification = std::move(value); }

    /**
     * <p>Configures ENA Express for UDP network traffic.</p>
     */
    inline AttachmentEnaSrdSpecification& WithEnaSrdUdpSpecification(const AttachmentEnaSrdUdpSpecification& value) { SetEnaSrdUdpSpecification(value); return *this;}

    /**
     * <p>Configures ENA Express for UDP network traffic.</p>
     */
    inline AttachmentEnaSrdSpecification& WithEnaSrdUdpSpecification(AttachmentEnaSrdUdpSpecification&& value) { SetEnaSrdUdpSpecification(std::move(value)); return *this;}

  private:

    bool m_enaSrdEnabled;
    bool m_enaSrdEnabledHasBeenSet = false;

    AttachmentEnaSrdUdpSpecification m_enaSrdUdpSpecification;
    bool m_enaSrdUdpSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
