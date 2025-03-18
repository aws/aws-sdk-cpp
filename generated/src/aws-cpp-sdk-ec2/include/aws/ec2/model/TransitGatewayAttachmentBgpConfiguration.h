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
    AWS_EC2_API TransitGatewayAttachmentBgpConfiguration() = default;
    AWS_EC2_API TransitGatewayAttachmentBgpConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayAttachmentBgpConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The transit gateway Autonomous System Number (ASN).</p>
     */
    inline long long GetTransitGatewayAsn() const { return m_transitGatewayAsn; }
    inline bool TransitGatewayAsnHasBeenSet() const { return m_transitGatewayAsnHasBeenSet; }
    inline void SetTransitGatewayAsn(long long value) { m_transitGatewayAsnHasBeenSet = true; m_transitGatewayAsn = value; }
    inline TransitGatewayAttachmentBgpConfiguration& WithTransitGatewayAsn(long long value) { SetTransitGatewayAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline long long GetPeerAsn() const { return m_peerAsn; }
    inline bool PeerAsnHasBeenSet() const { return m_peerAsnHasBeenSet; }
    inline void SetPeerAsn(long long value) { m_peerAsnHasBeenSet = true; m_peerAsn = value; }
    inline TransitGatewayAttachmentBgpConfiguration& WithPeerAsn(long long value) { SetPeerAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interior BGP peer IP address for the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayAddress() const { return m_transitGatewayAddress; }
    inline bool TransitGatewayAddressHasBeenSet() const { return m_transitGatewayAddressHasBeenSet; }
    template<typename TransitGatewayAddressT = Aws::String>
    void SetTransitGatewayAddress(TransitGatewayAddressT&& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = std::forward<TransitGatewayAddressT>(value); }
    template<typename TransitGatewayAddressT = Aws::String>
    TransitGatewayAttachmentBgpConfiguration& WithTransitGatewayAddress(TransitGatewayAddressT&& value) { SetTransitGatewayAddress(std::forward<TransitGatewayAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interior BGP peer IP address for the appliance.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    TransitGatewayAttachmentBgpConfiguration& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP status.</p>
     */
    inline BgpStatus GetBgpStatus() const { return m_bgpStatus; }
    inline bool BgpStatusHasBeenSet() const { return m_bgpStatusHasBeenSet; }
    inline void SetBgpStatus(BgpStatus value) { m_bgpStatusHasBeenSet = true; m_bgpStatus = value; }
    inline TransitGatewayAttachmentBgpConfiguration& WithBgpStatus(BgpStatus value) { SetBgpStatus(value); return *this;}
    ///@}
  private:

    long long m_transitGatewayAsn{0};
    bool m_transitGatewayAsnHasBeenSet = false;

    long long m_peerAsn{0};
    bool m_peerAsnHasBeenSet = false;

    Aws::String m_transitGatewayAddress;
    bool m_transitGatewayAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    BgpStatus m_bgpStatus{BgpStatus::NOT_SET};
    bool m_bgpStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
