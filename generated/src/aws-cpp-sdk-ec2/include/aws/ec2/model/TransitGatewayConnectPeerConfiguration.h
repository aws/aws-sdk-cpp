/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ProtocolValue.h>
#include <aws/ec2/model/TransitGatewayAttachmentBgpConfiguration.h>
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
   * <p>Describes the Connect peer details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayConnectPeerConfiguration">AWS
   * API Reference</a></p>
   */
  class TransitGatewayConnectPeerConfiguration
  {
  public:
    AWS_EC2_API TransitGatewayConnectPeerConfiguration() = default;
    AWS_EC2_API TransitGatewayConnectPeerConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayConnectPeerConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Connect peer IP address on the transit gateway side of the tunnel.</p>
     */
    inline const Aws::String& GetTransitGatewayAddress() const { return m_transitGatewayAddress; }
    inline bool TransitGatewayAddressHasBeenSet() const { return m_transitGatewayAddressHasBeenSet; }
    template<typename TransitGatewayAddressT = Aws::String>
    void SetTransitGatewayAddress(TransitGatewayAddressT&& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = std::forward<TransitGatewayAddressT>(value); }
    template<typename TransitGatewayAddressT = Aws::String>
    TransitGatewayConnectPeerConfiguration& WithTransitGatewayAddress(TransitGatewayAddressT&& value) { SetTransitGatewayAddress(std::forward<TransitGatewayAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer IP address on the appliance side of the tunnel.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    TransitGatewayConnectPeerConfiguration& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of interior BGP peer IP addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const { return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    void SetInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::forward<InsideCidrBlocksT>(value); }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    TransitGatewayConnectPeerConfiguration& WithInsideCidrBlocks(InsideCidrBlocksT&& value) { SetInsideCidrBlocks(std::forward<InsideCidrBlocksT>(value)); return *this;}
    template<typename InsideCidrBlocksT = Aws::String>
    TransitGatewayConnectPeerConfiguration& AddInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.emplace_back(std::forward<InsideCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tunnel protocol.</p>
     */
    inline ProtocolValue GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(ProtocolValue value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline TransitGatewayConnectPeerConfiguration& WithProtocol(ProtocolValue value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP configuration details.</p>
     */
    inline const Aws::Vector<TransitGatewayAttachmentBgpConfiguration>& GetBgpConfigurations() const { return m_bgpConfigurations; }
    inline bool BgpConfigurationsHasBeenSet() const { return m_bgpConfigurationsHasBeenSet; }
    template<typename BgpConfigurationsT = Aws::Vector<TransitGatewayAttachmentBgpConfiguration>>
    void SetBgpConfigurations(BgpConfigurationsT&& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations = std::forward<BgpConfigurationsT>(value); }
    template<typename BgpConfigurationsT = Aws::Vector<TransitGatewayAttachmentBgpConfiguration>>
    TransitGatewayConnectPeerConfiguration& WithBgpConfigurations(BgpConfigurationsT&& value) { SetBgpConfigurations(std::forward<BgpConfigurationsT>(value)); return *this;}
    template<typename BgpConfigurationsT = TransitGatewayAttachmentBgpConfiguration>
    TransitGatewayConnectPeerConfiguration& AddBgpConfigurations(BgpConfigurationsT&& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations.emplace_back(std::forward<BgpConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayAddress;
    bool m_transitGatewayAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;

    ProtocolValue m_protocol{ProtocolValue::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::Vector<TransitGatewayAttachmentBgpConfiguration> m_bgpConfigurations;
    bool m_bgpConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
