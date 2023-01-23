/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientVpnEndpointStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpnProtocol.h>
#include <aws/ec2/model/TransportProtocol.h>
#include <aws/ec2/model/ConnectionLogResponseOptions.h>
#include <aws/ec2/model/ClientConnectResponseOptions.h>
#include <aws/ec2/model/ClientLoginBannerResponseOptions.h>
#include <aws/ec2/model/ClientVpnAuthentication.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a Client VPN endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnEndpoint">AWS
   * API Reference</a></p>
   */
  class ClientVpnEndpoint
  {
  public:
    AWS_EC2_API ClientVpnEndpoint();
    AWS_EC2_API ClientVpnEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline ClientVpnEndpoint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline ClientVpnEndpoint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline ClientVpnEndpoint& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline const ClientVpnEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline void SetStatus(const ClientVpnEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline void SetStatus(ClientVpnEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithStatus(const ClientVpnEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithStatus(ClientVpnEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline ClientVpnEndpoint& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline ClientVpnEndpoint& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline ClientVpnEndpoint& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline const Aws::String& GetDeletionTime() const{ return m_deletionTime; }

    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }

    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline void SetDeletionTime(const Aws::String& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }

    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline void SetDeletionTime(Aws::String&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }

    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline void SetDeletionTime(const char* value) { m_deletionTimeHasBeenSet = true; m_deletionTime.assign(value); }

    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline ClientVpnEndpoint& WithDeletionTime(const Aws::String& value) { SetDeletionTime(value); return *this;}

    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline ClientVpnEndpoint& WithDeletionTime(Aws::String&& value) { SetDeletionTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline ClientVpnEndpoint& WithDeletionTime(const char* value) { SetDeletionTime(value); return *this;}


    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline const Aws::String& GetClientCidrBlock() const{ return m_clientCidrBlock; }

    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline bool ClientCidrBlockHasBeenSet() const { return m_clientCidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline void SetClientCidrBlock(const Aws::String& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = value; }

    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline void SetClientCidrBlock(Aws::String&& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = std::move(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline void SetClientCidrBlock(const char* value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock.assign(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline ClientVpnEndpoint& WithClientCidrBlock(const Aws::String& value) { SetClientCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline ClientVpnEndpoint& WithClientCidrBlock(Aws::String&& value) { SetClientCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline ClientVpnEndpoint& WithClientCidrBlock(const char* value) { SetClientCidrBlock(value); return *this;}


    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const{ return m_dnsServers; }

    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }

    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline void SetDnsServers(const Aws::Vector<Aws::String>& value) { m_dnsServersHasBeenSet = true; m_dnsServers = value; }

    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline void SetDnsServers(Aws::Vector<Aws::String>&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::move(value); }

    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline ClientVpnEndpoint& WithDnsServers(const Aws::Vector<Aws::String>& value) { SetDnsServers(value); return *this;}

    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline ClientVpnEndpoint& WithDnsServers(Aws::Vector<Aws::String>&& value) { SetDnsServers(std::move(value)); return *this;}

    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline ClientVpnEndpoint& AddDnsServers(const Aws::String& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }

    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline ClientVpnEndpoint& AddDnsServers(Aws::String&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(std::move(value)); return *this; }

    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline ClientVpnEndpoint& AddDnsServers(const char* value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }


    /**
     * <p>Indicates whether split-tunnel is enabled in the Client VPN endpoint.</p>
     * <p>For information about split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-Tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline bool GetSplitTunnel() const{ return m_splitTunnel; }

    /**
     * <p>Indicates whether split-tunnel is enabled in the Client VPN endpoint.</p>
     * <p>For information about split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-Tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline bool SplitTunnelHasBeenSet() const { return m_splitTunnelHasBeenSet; }

    /**
     * <p>Indicates whether split-tunnel is enabled in the Client VPN endpoint.</p>
     * <p>For information about split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-Tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline void SetSplitTunnel(bool value) { m_splitTunnelHasBeenSet = true; m_splitTunnel = value; }

    /**
     * <p>Indicates whether split-tunnel is enabled in the Client VPN endpoint.</p>
     * <p>For information about split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-Tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline ClientVpnEndpoint& WithSplitTunnel(bool value) { SetSplitTunnel(value); return *this;}


    /**
     * <p>The protocol used by the VPN session.</p>
     */
    inline const VpnProtocol& GetVpnProtocol() const{ return m_vpnProtocol; }

    /**
     * <p>The protocol used by the VPN session.</p>
     */
    inline bool VpnProtocolHasBeenSet() const { return m_vpnProtocolHasBeenSet; }

    /**
     * <p>The protocol used by the VPN session.</p>
     */
    inline void SetVpnProtocol(const VpnProtocol& value) { m_vpnProtocolHasBeenSet = true; m_vpnProtocol = value; }

    /**
     * <p>The protocol used by the VPN session.</p>
     */
    inline void SetVpnProtocol(VpnProtocol&& value) { m_vpnProtocolHasBeenSet = true; m_vpnProtocol = std::move(value); }

    /**
     * <p>The protocol used by the VPN session.</p>
     */
    inline ClientVpnEndpoint& WithVpnProtocol(const VpnProtocol& value) { SetVpnProtocol(value); return *this;}

    /**
     * <p>The protocol used by the VPN session.</p>
     */
    inline ClientVpnEndpoint& WithVpnProtocol(VpnProtocol&& value) { SetVpnProtocol(std::move(value)); return *this;}


    /**
     * <p>The transport protocol used by the Client VPN endpoint.</p>
     */
    inline const TransportProtocol& GetTransportProtocol() const{ return m_transportProtocol; }

    /**
     * <p>The transport protocol used by the Client VPN endpoint.</p>
     */
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }

    /**
     * <p>The transport protocol used by the Client VPN endpoint.</p>
     */
    inline void SetTransportProtocol(const TransportProtocol& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = value; }

    /**
     * <p>The transport protocol used by the Client VPN endpoint.</p>
     */
    inline void SetTransportProtocol(TransportProtocol&& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = std::move(value); }

    /**
     * <p>The transport protocol used by the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithTransportProtocol(const TransportProtocol& value) { SetTransportProtocol(value); return *this;}

    /**
     * <p>The transport protocol used by the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithTransportProtocol(TransportProtocol&& value) { SetTransportProtocol(std::move(value)); return *this;}


    /**
     * <p>The port number for the Client VPN endpoint.</p>
     */
    inline int GetVpnPort() const{ return m_vpnPort; }

    /**
     * <p>The port number for the Client VPN endpoint.</p>
     */
    inline bool VpnPortHasBeenSet() const { return m_vpnPortHasBeenSet; }

    /**
     * <p>The port number for the Client VPN endpoint.</p>
     */
    inline void SetVpnPort(int value) { m_vpnPortHasBeenSet = true; m_vpnPort = value; }

    /**
     * <p>The port number for the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithVpnPort(int value) { SetVpnPort(value); return *this;}


    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline const Aws::String& GetServerCertificateArn() const{ return m_serverCertificateArn; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetServerCertificateArn(const Aws::String& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = value; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetServerCertificateArn(Aws::String&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::move(value); }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetServerCertificateArn(const char* value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn.assign(value); }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline ClientVpnEndpoint& WithServerCertificateArn(const Aws::String& value) { SetServerCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline ClientVpnEndpoint& WithServerCertificateArn(Aws::String&& value) { SetServerCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline ClientVpnEndpoint& WithServerCertificateArn(const char* value) { SetServerCertificateArn(value); return *this;}


    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline const Aws::Vector<ClientVpnAuthentication>& GetAuthenticationOptions() const{ return m_authenticationOptions; }

    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline bool AuthenticationOptionsHasBeenSet() const { return m_authenticationOptionsHasBeenSet; }

    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline void SetAuthenticationOptions(const Aws::Vector<ClientVpnAuthentication>& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = value; }

    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline void SetAuthenticationOptions(Aws::Vector<ClientVpnAuthentication>&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = std::move(value); }

    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& WithAuthenticationOptions(const Aws::Vector<ClientVpnAuthentication>& value) { SetAuthenticationOptions(value); return *this;}

    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& WithAuthenticationOptions(Aws::Vector<ClientVpnAuthentication>&& value) { SetAuthenticationOptions(std::move(value)); return *this;}

    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& AddAuthenticationOptions(const ClientVpnAuthentication& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.push_back(value); return *this; }

    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& AddAuthenticationOptions(ClientVpnAuthentication&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the client connection logging options for the Client VPN
     * endpoint.</p>
     */
    inline const ConnectionLogResponseOptions& GetConnectionLogOptions() const{ return m_connectionLogOptions; }

    /**
     * <p>Information about the client connection logging options for the Client VPN
     * endpoint.</p>
     */
    inline bool ConnectionLogOptionsHasBeenSet() const { return m_connectionLogOptionsHasBeenSet; }

    /**
     * <p>Information about the client connection logging options for the Client VPN
     * endpoint.</p>
     */
    inline void SetConnectionLogOptions(const ConnectionLogResponseOptions& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = value; }

    /**
     * <p>Information about the client connection logging options for the Client VPN
     * endpoint.</p>
     */
    inline void SetConnectionLogOptions(ConnectionLogResponseOptions&& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = std::move(value); }

    /**
     * <p>Information about the client connection logging options for the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& WithConnectionLogOptions(const ConnectionLogResponseOptions& value) { SetConnectionLogOptions(value); return *this;}

    /**
     * <p>Information about the client connection logging options for the Client VPN
     * endpoint.</p>
     */
    inline ClientVpnEndpoint& WithConnectionLogOptions(ConnectionLogResponseOptions&& value) { SetConnectionLogOptions(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline ClientVpnEndpoint& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline ClientVpnEndpoint& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline ClientVpnEndpoint& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline ClientVpnEndpoint& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline ClientVpnEndpoint& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ClientVpnEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ClientVpnEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ClientVpnEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline const Aws::String& GetSelfServicePortalUrl() const{ return m_selfServicePortalUrl; }

    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline bool SelfServicePortalUrlHasBeenSet() const { return m_selfServicePortalUrlHasBeenSet; }

    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline void SetSelfServicePortalUrl(const Aws::String& value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl = value; }

    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline void SetSelfServicePortalUrl(Aws::String&& value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl = std::move(value); }

    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline void SetSelfServicePortalUrl(const char* value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl.assign(value); }

    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline ClientVpnEndpoint& WithSelfServicePortalUrl(const Aws::String& value) { SetSelfServicePortalUrl(value); return *this;}

    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline ClientVpnEndpoint& WithSelfServicePortalUrl(Aws::String&& value) { SetSelfServicePortalUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline ClientVpnEndpoint& WithSelfServicePortalUrl(const char* value) { SetSelfServicePortalUrl(value); return *this;}


    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline const ClientConnectResponseOptions& GetClientConnectOptions() const{ return m_clientConnectOptions; }

    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline bool ClientConnectOptionsHasBeenSet() const { return m_clientConnectOptionsHasBeenSet; }

    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline void SetClientConnectOptions(const ClientConnectResponseOptions& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = value; }

    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline void SetClientConnectOptions(ClientConnectResponseOptions&& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = std::move(value); }

    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline ClientVpnEndpoint& WithClientConnectOptions(const ClientConnectResponseOptions& value) { SetClientConnectOptions(value); return *this;}

    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline ClientVpnEndpoint& WithClientConnectOptions(ClientConnectResponseOptions&& value) { SetClientConnectOptions(std::move(value)); return *this;}


    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline int GetSessionTimeoutHours() const{ return m_sessionTimeoutHours; }

    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline bool SessionTimeoutHoursHasBeenSet() const { return m_sessionTimeoutHoursHasBeenSet; }

    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline void SetSessionTimeoutHours(int value) { m_sessionTimeoutHoursHasBeenSet = true; m_sessionTimeoutHours = value; }

    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline ClientVpnEndpoint& WithSessionTimeoutHours(int value) { SetSessionTimeoutHours(value); return *this;}


    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline const ClientLoginBannerResponseOptions& GetClientLoginBannerOptions() const{ return m_clientLoginBannerOptions; }

    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline bool ClientLoginBannerOptionsHasBeenSet() const { return m_clientLoginBannerOptionsHasBeenSet; }

    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline void SetClientLoginBannerOptions(const ClientLoginBannerResponseOptions& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = value; }

    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline void SetClientLoginBannerOptions(ClientLoginBannerResponseOptions&& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = std::move(value); }

    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline ClientVpnEndpoint& WithClientLoginBannerOptions(const ClientLoginBannerResponseOptions& value) { SetClientLoginBannerOptions(value); return *this;}

    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline ClientVpnEndpoint& WithClientLoginBannerOptions(ClientLoginBannerResponseOptions&& value) { SetClientLoginBannerOptions(std::move(value)); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ClientVpnEndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_deletionTime;
    bool m_deletionTimeHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    Aws::String m_clientCidrBlock;
    bool m_clientCidrBlockHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsServers;
    bool m_dnsServersHasBeenSet = false;

    bool m_splitTunnel;
    bool m_splitTunnelHasBeenSet = false;

    VpnProtocol m_vpnProtocol;
    bool m_vpnProtocolHasBeenSet = false;

    TransportProtocol m_transportProtocol;
    bool m_transportProtocolHasBeenSet = false;

    int m_vpnPort;
    bool m_vpnPortHasBeenSet = false;

    Aws::String m_serverCertificateArn;
    bool m_serverCertificateArnHasBeenSet = false;

    Aws::Vector<ClientVpnAuthentication> m_authenticationOptions;
    bool m_authenticationOptionsHasBeenSet = false;

    ConnectionLogResponseOptions m_connectionLogOptions;
    bool m_connectionLogOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_selfServicePortalUrl;
    bool m_selfServicePortalUrlHasBeenSet = false;

    ClientConnectResponseOptions m_clientConnectOptions;
    bool m_clientConnectOptionsHasBeenSet = false;

    int m_sessionTimeoutHours;
    bool m_sessionTimeoutHoursHasBeenSet = false;

    ClientLoginBannerResponseOptions m_clientLoginBannerOptions;
    bool m_clientLoginBannerOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
