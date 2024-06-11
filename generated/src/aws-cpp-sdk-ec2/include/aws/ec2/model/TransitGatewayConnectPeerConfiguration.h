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
    AWS_EC2_API TransitGatewayConnectPeerConfiguration();
    AWS_EC2_API TransitGatewayConnectPeerConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayConnectPeerConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Connect peer IP address on the transit gateway side of the tunnel.</p>
     */
    inline const Aws::String& GetTransitGatewayAddress() const{ return m_transitGatewayAddress; }
    inline bool TransitGatewayAddressHasBeenSet() const { return m_transitGatewayAddressHasBeenSet; }
    inline void SetTransitGatewayAddress(const Aws::String& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = value; }
    inline void SetTransitGatewayAddress(Aws::String&& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = std::move(value); }
    inline void SetTransitGatewayAddress(const char* value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress.assign(value); }
    inline TransitGatewayConnectPeerConfiguration& WithTransitGatewayAddress(const Aws::String& value) { SetTransitGatewayAddress(value); return *this;}
    inline TransitGatewayConnectPeerConfiguration& WithTransitGatewayAddress(Aws::String&& value) { SetTransitGatewayAddress(std::move(value)); return *this;}
    inline TransitGatewayConnectPeerConfiguration& WithTransitGatewayAddress(const char* value) { SetTransitGatewayAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer IP address on the appliance side of the tunnel.</p>
     */
    inline const Aws::String& GetPeerAddress() const{ return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    inline void SetPeerAddress(const Aws::String& value) { m_peerAddressHasBeenSet = true; m_peerAddress = value; }
    inline void SetPeerAddress(Aws::String&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::move(value); }
    inline void SetPeerAddress(const char* value) { m_peerAddressHasBeenSet = true; m_peerAddress.assign(value); }
    inline TransitGatewayConnectPeerConfiguration& WithPeerAddress(const Aws::String& value) { SetPeerAddress(value); return *this;}
    inline TransitGatewayConnectPeerConfiguration& WithPeerAddress(Aws::String&& value) { SetPeerAddress(std::move(value)); return *this;}
    inline TransitGatewayConnectPeerConfiguration& WithPeerAddress(const char* value) { SetPeerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of interior BGP peer IP addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const{ return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    inline void SetInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = value; }
    inline void SetInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::move(value); }
    inline TransitGatewayConnectPeerConfiguration& WithInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { SetInsideCidrBlocks(value); return *this;}
    inline TransitGatewayConnectPeerConfiguration& WithInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { SetInsideCidrBlocks(std::move(value)); return *this;}
    inline TransitGatewayConnectPeerConfiguration& AddInsideCidrBlocks(const Aws::String& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }
    inline TransitGatewayConnectPeerConfiguration& AddInsideCidrBlocks(Aws::String&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(std::move(value)); return *this; }
    inline TransitGatewayConnectPeerConfiguration& AddInsideCidrBlocks(const char* value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tunnel protocol.</p>
     */
    inline const ProtocolValue& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const ProtocolValue& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(ProtocolValue&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline TransitGatewayConnectPeerConfiguration& WithProtocol(const ProtocolValue& value) { SetProtocol(value); return *this;}
    inline TransitGatewayConnectPeerConfiguration& WithProtocol(ProtocolValue&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP configuration details.</p>
     */
    inline const Aws::Vector<TransitGatewayAttachmentBgpConfiguration>& GetBgpConfigurations() const{ return m_bgpConfigurations; }
    inline bool BgpConfigurationsHasBeenSet() const { return m_bgpConfigurationsHasBeenSet; }
    inline void SetBgpConfigurations(const Aws::Vector<TransitGatewayAttachmentBgpConfiguration>& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations = value; }
    inline void SetBgpConfigurations(Aws::Vector<TransitGatewayAttachmentBgpConfiguration>&& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations = std::move(value); }
    inline TransitGatewayConnectPeerConfiguration& WithBgpConfigurations(const Aws::Vector<TransitGatewayAttachmentBgpConfiguration>& value) { SetBgpConfigurations(value); return *this;}
    inline TransitGatewayConnectPeerConfiguration& WithBgpConfigurations(Aws::Vector<TransitGatewayAttachmentBgpConfiguration>&& value) { SetBgpConfigurations(std::move(value)); return *this;}
    inline TransitGatewayConnectPeerConfiguration& AddBgpConfigurations(const TransitGatewayAttachmentBgpConfiguration& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations.push_back(value); return *this; }
    inline TransitGatewayConnectPeerConfiguration& AddBgpConfigurations(TransitGatewayAttachmentBgpConfiguration&& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayAddress;
    bool m_transitGatewayAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;

    ProtocolValue m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<TransitGatewayAttachmentBgpConfiguration> m_bgpConfigurations;
    bool m_bgpConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
