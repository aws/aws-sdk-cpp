/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/RouteServerPeerLivenessMode.h>
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
   * <p>The BGP configuration options for a route server peer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServerBgpOptions">AWS
   * API Reference</a></p>
   */
  class RouteServerBgpOptions
  {
  public:
    AWS_EC2_API RouteServerBgpOptions() = default;
    AWS_EC2_API RouteServerBgpOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServerBgpOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Border Gateway Protocol (BGP) Autonomous System Number (ASN) for the
     * appliance. Valid values are from 1 to 4294967295. We recommend using a private
     * ASN in the 64512–65534 (16-bit ASN) or 4200000000–4294967294 (32-bit ASN)
     * range.</p>
     */
    inline long long GetPeerAsn() const { return m_peerAsn; }
    inline bool PeerAsnHasBeenSet() const { return m_peerAsnHasBeenSet; }
    inline void SetPeerAsn(long long value) { m_peerAsnHasBeenSet = true; m_peerAsn = value; }
    inline RouteServerBgpOptions& WithPeerAsn(long long value) { SetPeerAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The liveness detection protocol used for the BGP peer.</p> <p>The requested
     * liveness detection protocol for the BGP peer.</p> <ul> <li> <p>
     * <code>bgp-keepalive</code>: The standard BGP keep alive mechanism (<a
     * href="https://www.rfc-editor.org/rfc/rfc4271#page-21">RFC4271</a>) that is
     * stable but may take longer to fail-over in cases of network impact or router
     * failure.</p> </li> <li> <p> <code>bfd</code>: An additional Bidirectional
     * Forwarding Detection (BFD) protocol (<a
     * href="https://www.rfc-editor.org/rfc/rfc5880">RFC5880</a>) that enables fast
     * failover by using more sensitive liveness detection.</p> </li> </ul> <p>Defaults
     * to <code>bgp-keepalive</code>.</p>
     */
    inline RouteServerPeerLivenessMode GetPeerLivenessDetection() const { return m_peerLivenessDetection; }
    inline bool PeerLivenessDetectionHasBeenSet() const { return m_peerLivenessDetectionHasBeenSet; }
    inline void SetPeerLivenessDetection(RouteServerPeerLivenessMode value) { m_peerLivenessDetectionHasBeenSet = true; m_peerLivenessDetection = value; }
    inline RouteServerBgpOptions& WithPeerLivenessDetection(RouteServerPeerLivenessMode value) { SetPeerLivenessDetection(value); return *this;}
    ///@}
  private:

    long long m_peerAsn{0};
    bool m_peerAsnHasBeenSet = false;

    RouteServerPeerLivenessMode m_peerLivenessDetection{RouteServerPeerLivenessMode::NOT_SET};
    bool m_peerLivenessDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
