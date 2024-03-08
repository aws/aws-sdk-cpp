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
   * <p>A security group connection tracking specification response that enables you
   * to set the idle timeout for connection tracking on an Elastic network interface.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">Connection
   * tracking timeouts</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConnectionTrackingSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class ConnectionTrackingSpecificationResponse
  {
  public:
    AWS_EC2_API ConnectionTrackingSpecificationResponse();
    AWS_EC2_API ConnectionTrackingSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ConnectionTrackingSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Timeout (in seconds) for idle TCP connections in an established state. Min:
     * 60 seconds. Max: 432000 seconds (5 days). Default: 432000 seconds. Recommended:
     * Less than 432000 seconds.</p>
     */
    inline int GetTcpEstablishedTimeout() const{ return m_tcpEstablishedTimeout; }

    /**
     * <p>Timeout (in seconds) for idle TCP connections in an established state. Min:
     * 60 seconds. Max: 432000 seconds (5 days). Default: 432000 seconds. Recommended:
     * Less than 432000 seconds.</p>
     */
    inline bool TcpEstablishedTimeoutHasBeenSet() const { return m_tcpEstablishedTimeoutHasBeenSet; }

    /**
     * <p>Timeout (in seconds) for idle TCP connections in an established state. Min:
     * 60 seconds. Max: 432000 seconds (5 days). Default: 432000 seconds. Recommended:
     * Less than 432000 seconds.</p>
     */
    inline void SetTcpEstablishedTimeout(int value) { m_tcpEstablishedTimeoutHasBeenSet = true; m_tcpEstablishedTimeout = value; }

    /**
     * <p>Timeout (in seconds) for idle TCP connections in an established state. Min:
     * 60 seconds. Max: 432000 seconds (5 days). Default: 432000 seconds. Recommended:
     * Less than 432000 seconds.</p>
     */
    inline ConnectionTrackingSpecificationResponse& WithTcpEstablishedTimeout(int value) { SetTcpEstablishedTimeout(value); return *this;}


    /**
     * <p>Timeout (in seconds) for idle UDP flows classified as streams which have seen
     * more than one request-response transaction. Min: 60 seconds. Max: 180 seconds (3
     * minutes). Default: 180 seconds.</p>
     */
    inline int GetUdpStreamTimeout() const{ return m_udpStreamTimeout; }

    /**
     * <p>Timeout (in seconds) for idle UDP flows classified as streams which have seen
     * more than one request-response transaction. Min: 60 seconds. Max: 180 seconds (3
     * minutes). Default: 180 seconds.</p>
     */
    inline bool UdpStreamTimeoutHasBeenSet() const { return m_udpStreamTimeoutHasBeenSet; }

    /**
     * <p>Timeout (in seconds) for idle UDP flows classified as streams which have seen
     * more than one request-response transaction. Min: 60 seconds. Max: 180 seconds (3
     * minutes). Default: 180 seconds.</p>
     */
    inline void SetUdpStreamTimeout(int value) { m_udpStreamTimeoutHasBeenSet = true; m_udpStreamTimeout = value; }

    /**
     * <p>Timeout (in seconds) for idle UDP flows classified as streams which have seen
     * more than one request-response transaction. Min: 60 seconds. Max: 180 seconds (3
     * minutes). Default: 180 seconds.</p>
     */
    inline ConnectionTrackingSpecificationResponse& WithUdpStreamTimeout(int value) { SetUdpStreamTimeout(value); return *this;}


    /**
     * <p>Timeout (in seconds) for idle UDP flows that have seen traffic only in a
     * single direction or a single request-response transaction. Min: 30 seconds. Max:
     * 60 seconds. Default: 30 seconds.</p>
     */
    inline int GetUdpTimeout() const{ return m_udpTimeout; }

    /**
     * <p>Timeout (in seconds) for idle UDP flows that have seen traffic only in a
     * single direction or a single request-response transaction. Min: 30 seconds. Max:
     * 60 seconds. Default: 30 seconds.</p>
     */
    inline bool UdpTimeoutHasBeenSet() const { return m_udpTimeoutHasBeenSet; }

    /**
     * <p>Timeout (in seconds) for idle UDP flows that have seen traffic only in a
     * single direction or a single request-response transaction. Min: 30 seconds. Max:
     * 60 seconds. Default: 30 seconds.</p>
     */
    inline void SetUdpTimeout(int value) { m_udpTimeoutHasBeenSet = true; m_udpTimeout = value; }

    /**
     * <p>Timeout (in seconds) for idle UDP flows that have seen traffic only in a
     * single direction or a single request-response transaction. Min: 30 seconds. Max:
     * 60 seconds. Default: 30 seconds.</p>
     */
    inline ConnectionTrackingSpecificationResponse& WithUdpTimeout(int value) { SetUdpTimeout(value); return *this;}

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
