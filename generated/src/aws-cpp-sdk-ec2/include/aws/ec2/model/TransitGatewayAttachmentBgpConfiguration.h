/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/BgpStatus.h>
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
   * <p>The BGP configuration information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayAttachmentBgpConfiguration">AWS
   * API Reference</a></p>
   */
  class TransitGatewayAttachmentBgpConfiguration
  {
  public:
    AWS_EC2_API TransitGatewayAttachmentBgpConfiguration();
    AWS_EC2_API TransitGatewayAttachmentBgpConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayAttachmentBgpConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The transit gateway Autonomous System Number (ASN).</p>
     */
    inline long long GetTransitGatewayAsn() const{ return m_transitGatewayAsn; }

    /**
     * <p>The transit gateway Autonomous System Number (ASN).</p>
     */
    inline bool TransitGatewayAsnHasBeenSet() const { return m_transitGatewayAsnHasBeenSet; }

    /**
     * <p>The transit gateway Autonomous System Number (ASN).</p>
     */
    inline void SetTransitGatewayAsn(long long value) { m_transitGatewayAsnHasBeenSet = true; m_transitGatewayAsn = value; }

    /**
     * <p>The transit gateway Autonomous System Number (ASN).</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithTransitGatewayAsn(long long value) { SetTransitGatewayAsn(value); return *this;}


    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline long long GetPeerAsn() const{ return m_peerAsn; }

    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline bool PeerAsnHasBeenSet() const { return m_peerAsnHasBeenSet; }

    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline void SetPeerAsn(long long value) { m_peerAsnHasBeenSet = true; m_peerAsn = value; }

    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithPeerAsn(long long value) { SetPeerAsn(value); return *this;}


    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayAddress() const{ return m_transitGatewayAddress; }

    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline bool TransitGatewayAddressHasBeenSet() const { return m_transitGatewayAddressHasBeenSet; }

    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline void SetTransitGatewayAddress(const Aws::String& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = value; }

    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline void SetTransitGatewayAddress(Aws::String&& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = std::move(value); }

    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline void SetTransitGatewayAddress(const char* value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress.assign(value); }

    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithTransitGatewayAddress(const Aws::String& value) { SetTransitGatewayAddress(value); return *this;}

    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithTransitGatewayAddress(Aws::String&& value) { SetTransitGatewayAddress(std::move(value)); return *this;}

    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithTransitGatewayAddress(const char* value) { SetTransitGatewayAddress(value); return *this;}


    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline const Aws::String& GetPeerAddress() const{ return m_peerAddress; }

    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }

    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline void SetPeerAddress(const Aws::String& value) { m_peerAddressHasBeenSet = true; m_peerAddress = value; }

    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline void SetPeerAddress(Aws::String&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::move(value); }

    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline void SetPeerAddress(const char* value) { m_peerAddressHasBeenSet = true; m_peerAddress.assign(value); }

    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithPeerAddress(const Aws::String& value) { SetPeerAddress(value); return *this;}

    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithPeerAddress(Aws::String&& value) { SetPeerAddress(std::move(value)); return *this;}

    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithPeerAddress(const char* value) { SetPeerAddress(value); return *this;}


    /**
     * <p>The BGP status.</p>
     */
    inline const BgpStatus& GetBgpStatus() const{ return m_bgpStatus; }

    /**
     * <p>The BGP status.</p>
     */
    inline bool BgpStatusHasBeenSet() const { return m_bgpStatusHasBeenSet; }

    /**
     * <p>The BGP status.</p>
     */
    inline void SetBgpStatus(const BgpStatus& value) { m_bgpStatusHasBeenSet = true; m_bgpStatus = value; }

    /**
     * <p>The BGP status.</p>
     */
    inline void SetBgpStatus(BgpStatus&& value) { m_bgpStatusHasBeenSet = true; m_bgpStatus = std::move(value); }

    /**
     * <p>The BGP status.</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithBgpStatus(const BgpStatus& value) { SetBgpStatus(value); return *this;}

    /**
     * <p>The BGP status.</p>
     */
    inline TransitGatewayAttachmentBgpConfiguration& WithBgpStatus(BgpStatus&& value) { SetBgpStatus(std::move(value)); return *this;}

  private:

    long long m_transitGatewayAsn;
    bool m_transitGatewayAsnHasBeenSet = false;

    long long m_peerAsn;
    bool m_peerAsnHasBeenSet = false;

    Aws::String m_transitGatewayAddress;
    bool m_transitGatewayAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    BgpStatus m_bgpStatus;
    bool m_bgpStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
