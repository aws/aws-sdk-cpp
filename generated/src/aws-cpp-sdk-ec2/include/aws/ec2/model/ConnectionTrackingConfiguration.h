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
   * <p>A security group connection tracking configuration that enables you to set
   * the idle timeout for connection tracking on an Elastic network interface. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
   * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConnectionTrackingConfiguration">AWS
   * API Reference</a></p>
   */
  class ConnectionTrackingConfiguration
  {
  public:
    AWS_EC2_API ConnectionTrackingConfiguration();
    AWS_EC2_API ConnectionTrackingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ConnectionTrackingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Timeout (in seconds) for idle TCP connections in an established state. Min:
     * 60 seconds. Max: 432000 seconds (5 days). Default: 432000 seconds. Recommended:
     * Less than 432000 seconds.</p>
     */
    inline int GetTcpEstablishedTimeout() const{ return m_tcpEstablishedTimeout; }
    inline bool TcpEstablishedTimeoutHasBeenSet() const { return m_tcpEstablishedTimeoutHasBeenSet; }
    inline void SetTcpEstablishedTimeout(int value) { m_tcpEstablishedTimeoutHasBeenSet = true; m_tcpEstablishedTimeout = value; }
    inline ConnectionTrackingConfiguration& WithTcpEstablishedTimeout(int value) { SetTcpEstablishedTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timeout (in seconds) for idle UDP flows classified as streams which have seen
     * more than one request-response transaction. Min: 60 seconds. Max: 180 seconds (3
     * minutes). Default: 180 seconds.</p>
     */
    inline int GetUdpStreamTimeout() const{ return m_udpStreamTimeout; }
    inline bool UdpStreamTimeoutHasBeenSet() const { return m_udpStreamTimeoutHasBeenSet; }
    inline void SetUdpStreamTimeout(int value) { m_udpStreamTimeoutHasBeenSet = true; m_udpStreamTimeout = value; }
    inline ConnectionTrackingConfiguration& WithUdpStreamTimeout(int value) { SetUdpStreamTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timeout (in seconds) for idle UDP flows that have seen traffic only in a
     * single direction or a single request-response transaction. Min: 30 seconds. Max:
     * 60 seconds. Default: 30 seconds.</p>
     */
    inline int GetUdpTimeout() const{ return m_udpTimeout; }
    inline bool UdpTimeoutHasBeenSet() const { return m_udpTimeoutHasBeenSet; }
    inline void SetUdpTimeout(int value) { m_udpTimeoutHasBeenSet = true; m_udpTimeout = value; }
    inline ConnectionTrackingConfiguration& WithUdpTimeout(int value) { SetUdpTimeout(value); return *this;}
    ///@}
  private:

    int m_tcpEstablishedTimeout;
    bool m_tcpEstablishedTimeoutHasBeenSet = false;

    int m_udpStreamTimeout;
    bool m_udpStreamTimeoutHasBeenSet = false;

    int m_udpTimeout;
    bool m_udpTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
