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


    ///@{
    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline ClientVpnEndpoint& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline ClientVpnEndpoint& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ClientVpnEndpoint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ClientVpnEndpoint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline const ClientVpnEndpointStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClientVpnEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClientVpnEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClientVpnEndpoint& WithStatus(const ClientVpnEndpointStatus& value) { SetStatus(value); return *this;}
    inline ClientVpnEndpoint& WithStatus(ClientVpnEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline ClientVpnEndpoint& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline ClientVpnEndpoint& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline const Aws::String& GetDeletionTime() const{ return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    inline void SetDeletionTime(const Aws::String& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }
    inline void SetDeletionTime(Aws::String&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }
    inline void SetDeletionTime(const char* value) { m_deletionTimeHasBeenSet = true; m_deletionTime.assign(value); }
    inline ClientVpnEndpoint& WithDeletionTime(const Aws::String& value) { SetDeletionTime(value); return *this;}
    inline ClientVpnEndpoint& WithDeletionTime(Aws::String&& value) { SetDeletionTime(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithDeletionTime(const char* value) { SetDeletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline ClientVpnEndpoint& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline ClientVpnEndpoint& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline const Aws::String& GetClientCidrBlock() const{ return m_clientCidrBlock; }
    inline bool ClientCidrBlockHasBeenSet() const { return m_clientCidrBlockHasBeenSet; }
    inline void SetClientCidrBlock(const Aws::String& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = value; }
    inline void SetClientCidrBlock(Aws::String&& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = std::move(value); }
    inline void SetClientCidrBlock(const char* value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock.assign(value); }
    inline ClientVpnEndpoint& WithClientCidrBlock(const Aws::String& value) { SetClientCidrBlock(value); return *this;}
    inline ClientVpnEndpoint& WithClientCidrBlock(Aws::String&& value) { SetClientCidrBlock(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithClientCidrBlock(const char* value) { SetClientCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const{ return m_dnsServers; }
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }
    inline void SetDnsServers(const Aws::Vector<Aws::String>& value) { m_dnsServersHasBeenSet = true; m_dnsServers = value; }
    inline void SetDnsServers(Aws::Vector<Aws::String>&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::move(value); }
    inline ClientVpnEndpoint& WithDnsServers(const Aws::Vector<Aws::String>& value) { SetDnsServers(value); return *this;}
    inline ClientVpnEndpoint& WithDnsServers(Aws::Vector<Aws::String>&& value) { SetDnsServers(std::move(value)); return *this;}
    inline ClientVpnEndpoint& AddDnsServers(const Aws::String& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }
    inline ClientVpnEndpoint& AddDnsServers(Aws::String&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(std::move(value)); return *this; }
    inline ClientVpnEndpoint& AddDnsServers(const char* value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether split-tunnel is enabled in the Client VPN endpoint.</p>
     * <p>For information about split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-Tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline bool GetSplitTunnel() const{ return m_splitTunnel; }
    inline bool SplitTunnelHasBeenSet() const { return m_splitTunnelHasBeenSet; }
    inline void SetSplitTunnel(bool value) { m_splitTunnelHasBeenSet = true; m_splitTunnel = value; }
    inline ClientVpnEndpoint& WithSplitTunnel(bool value) { SetSplitTunnel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used by the VPN session.</p>
     */
    inline const VpnProtocol& GetVpnProtocol() const{ return m_vpnProtocol; }
    inline bool VpnProtocolHasBeenSet() const { return m_vpnProtocolHasBeenSet; }
    inline void SetVpnProtocol(const VpnProtocol& value) { m_vpnProtocolHasBeenSet = true; m_vpnProtocol = value; }
    inline void SetVpnProtocol(VpnProtocol&& value) { m_vpnProtocolHasBeenSet = true; m_vpnProtocol = std::move(value); }
    inline ClientVpnEndpoint& WithVpnProtocol(const VpnProtocol& value) { SetVpnProtocol(value); return *this;}
    inline ClientVpnEndpoint& WithVpnProtocol(VpnProtocol&& value) { SetVpnProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transport protocol used by the Client VPN endpoint.</p>
     */
    inline const TransportProtocol& GetTransportProtocol() const{ return m_transportProtocol; }
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }
    inline void SetTransportProtocol(const TransportProtocol& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = value; }
    inline void SetTransportProtocol(TransportProtocol&& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = std::move(value); }
    inline ClientVpnEndpoint& WithTransportProtocol(const TransportProtocol& value) { SetTransportProtocol(value); return *this;}
    inline ClientVpnEndpoint& WithTransportProtocol(TransportProtocol&& value) { SetTransportProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for the Client VPN endpoint.</p>
     */
    inline int GetVpnPort() const{ return m_vpnPort; }
    inline bool VpnPortHasBeenSet() const { return m_vpnPortHasBeenSet; }
    inline void SetVpnPort(int value) { m_vpnPortHasBeenSet = true; m_vpnPort = value; }
    inline ClientVpnEndpoint& WithVpnPort(int value) { SetVpnPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline const Aws::String& GetServerCertificateArn() const{ return m_serverCertificateArn; }
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }
    inline void SetServerCertificateArn(const Aws::String& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = value; }
    inline void SetServerCertificateArn(Aws::String&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::move(value); }
    inline void SetServerCertificateArn(const char* value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn.assign(value); }
    inline ClientVpnEndpoint& WithServerCertificateArn(const Aws::String& value) { SetServerCertificateArn(value); return *this;}
    inline ClientVpnEndpoint& WithServerCertificateArn(Aws::String&& value) { SetServerCertificateArn(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithServerCertificateArn(const char* value) { SetServerCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline const Aws::Vector<ClientVpnAuthentication>& GetAuthenticationOptions() const{ return m_authenticationOptions; }
    inline bool AuthenticationOptionsHasBeenSet() const { return m_authenticationOptionsHasBeenSet; }
    inline void SetAuthenticationOptions(const Aws::Vector<ClientVpnAuthentication>& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = value; }
    inline void SetAuthenticationOptions(Aws::Vector<ClientVpnAuthentication>&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = std::move(value); }
    inline ClientVpnEndpoint& WithAuthenticationOptions(const Aws::Vector<ClientVpnAuthentication>& value) { SetAuthenticationOptions(value); return *this;}
    inline ClientVpnEndpoint& WithAuthenticationOptions(Aws::Vector<ClientVpnAuthentication>&& value) { SetAuthenticationOptions(std::move(value)); return *this;}
    inline ClientVpnEndpoint& AddAuthenticationOptions(const ClientVpnAuthentication& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.push_back(value); return *this; }
    inline ClientVpnEndpoint& AddAuthenticationOptions(ClientVpnAuthentication&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the client connection logging options for the Client VPN
     * endpoint.</p>
     */
    inline const ConnectionLogResponseOptions& GetConnectionLogOptions() const{ return m_connectionLogOptions; }
    inline bool ConnectionLogOptionsHasBeenSet() const { return m_connectionLogOptionsHasBeenSet; }
    inline void SetConnectionLogOptions(const ConnectionLogResponseOptions& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = value; }
    inline void SetConnectionLogOptions(ConnectionLogResponseOptions&& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = std::move(value); }
    inline ClientVpnEndpoint& WithConnectionLogOptions(const ConnectionLogResponseOptions& value) { SetConnectionLogOptions(value); return *this;}
    inline ClientVpnEndpoint& WithConnectionLogOptions(ConnectionLogResponseOptions&& value) { SetConnectionLogOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ClientVpnEndpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ClientVpnEndpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ClientVpnEndpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ClientVpnEndpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline ClientVpnEndpoint& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline ClientVpnEndpoint& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline ClientVpnEndpoint& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline ClientVpnEndpoint& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline ClientVpnEndpoint& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ClientVpnEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ClientVpnEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline const Aws::String& GetSelfServicePortalUrl() const{ return m_selfServicePortalUrl; }
    inline bool SelfServicePortalUrlHasBeenSet() const { return m_selfServicePortalUrlHasBeenSet; }
    inline void SetSelfServicePortalUrl(const Aws::String& value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl = value; }
    inline void SetSelfServicePortalUrl(Aws::String&& value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl = std::move(value); }
    inline void SetSelfServicePortalUrl(const char* value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl.assign(value); }
    inline ClientVpnEndpoint& WithSelfServicePortalUrl(const Aws::String& value) { SetSelfServicePortalUrl(value); return *this;}
    inline ClientVpnEndpoint& WithSelfServicePortalUrl(Aws::String&& value) { SetSelfServicePortalUrl(std::move(value)); return *this;}
    inline ClientVpnEndpoint& WithSelfServicePortalUrl(const char* value) { SetSelfServicePortalUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline const ClientConnectResponseOptions& GetClientConnectOptions() const{ return m_clientConnectOptions; }
    inline bool ClientConnectOptionsHasBeenSet() const { return m_clientConnectOptionsHasBeenSet; }
    inline void SetClientConnectOptions(const ClientConnectResponseOptions& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = value; }
    inline void SetClientConnectOptions(ClientConnectResponseOptions&& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = std::move(value); }
    inline ClientVpnEndpoint& WithClientConnectOptions(const ClientConnectResponseOptions& value) { SetClientConnectOptions(value); return *this;}
    inline ClientVpnEndpoint& WithClientConnectOptions(ClientConnectResponseOptions&& value) { SetClientConnectOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline int GetSessionTimeoutHours() const{ return m_sessionTimeoutHours; }
    inline bool SessionTimeoutHoursHasBeenSet() const { return m_sessionTimeoutHoursHasBeenSet; }
    inline void SetSessionTimeoutHours(int value) { m_sessionTimeoutHoursHasBeenSet = true; m_sessionTimeoutHours = value; }
    inline ClientVpnEndpoint& WithSessionTimeoutHours(int value) { SetSessionTimeoutHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline const ClientLoginBannerResponseOptions& GetClientLoginBannerOptions() const{ return m_clientLoginBannerOptions; }
    inline bool ClientLoginBannerOptionsHasBeenSet() const { return m_clientLoginBannerOptionsHasBeenSet; }
    inline void SetClientLoginBannerOptions(const ClientLoginBannerResponseOptions& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = value; }
    inline void SetClientLoginBannerOptions(ClientLoginBannerResponseOptions&& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = std::move(value); }
    inline ClientVpnEndpoint& WithClientLoginBannerOptions(const ClientLoginBannerResponseOptions& value) { SetClientLoginBannerOptions(value); return *this;}
    inline ClientVpnEndpoint& WithClientLoginBannerOptions(ClientLoginBannerResponseOptions&& value) { SetClientLoginBannerOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the client VPN session is disconnected after the maximum
     * <code>sessionTimeoutHours</code> is reached. If <code>true</code>, users are
     * prompted to reconnect client VPN. If <code>false</code>, client VPN attempts to
     * reconnect automatically. The default value is <code>false</code>.</p>
     */
    inline bool GetDisconnectOnSessionTimeout() const{ return m_disconnectOnSessionTimeout; }
    inline bool DisconnectOnSessionTimeoutHasBeenSet() const { return m_disconnectOnSessionTimeoutHasBeenSet; }
    inline void SetDisconnectOnSessionTimeout(bool value) { m_disconnectOnSessionTimeoutHasBeenSet = true; m_disconnectOnSessionTimeout = value; }
    inline ClientVpnEndpoint& WithDisconnectOnSessionTimeout(bool value) { SetDisconnectOnSessionTimeout(value); return *this;}
    ///@}
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

    bool m_disconnectOnSessionTimeout;
    bool m_disconnectOnSessionTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
