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
#include <aws/ec2/model/ClientRouteEnforcementResponseOptions.h>
#include <aws/ec2/model/EndpointIpAddressType.h>
#include <aws/ec2/model/TrafficIpAddressType.h>
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
    AWS_EC2_API ClientVpnEndpoint() = default;
    AWS_EC2_API ClientVpnEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    ClientVpnEndpoint& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the endpoint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ClientVpnEndpoint& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline const ClientVpnEndpointStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ClientVpnEndpointStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ClientVpnEndpointStatus>
    ClientVpnEndpoint& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Client VPN endpoint was created.</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    ClientVpnEndpoint& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Client VPN endpoint was deleted, if applicable.</p>
     */
    inline const Aws::String& GetDeletionTime() const { return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    template<typename DeletionTimeT = Aws::String>
    void SetDeletionTime(DeletionTimeT&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::forward<DeletionTimeT>(value); }
    template<typename DeletionTimeT = Aws::String>
    ClientVpnEndpoint& WithDeletionTime(DeletionTimeT&& value) { SetDeletionTime(std::forward<DeletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name to be used by clients when connecting to the Client VPN
     * endpoint.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    ClientVpnEndpoint& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned.</p>
     */
    inline const Aws::String& GetClientCidrBlock() const { return m_clientCidrBlock; }
    inline bool ClientCidrBlockHasBeenSet() const { return m_clientCidrBlockHasBeenSet; }
    template<typename ClientCidrBlockT = Aws::String>
    void SetClientCidrBlock(ClientCidrBlockT&& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = std::forward<ClientCidrBlockT>(value); }
    template<typename ClientCidrBlockT = Aws::String>
    ClientVpnEndpoint& WithClientCidrBlock(ClientCidrBlockT&& value) { SetClientCidrBlock(std::forward<ClientCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const { return m_dnsServers; }
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }
    template<typename DnsServersT = Aws::Vector<Aws::String>>
    void SetDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::forward<DnsServersT>(value); }
    template<typename DnsServersT = Aws::Vector<Aws::String>>
    ClientVpnEndpoint& WithDnsServers(DnsServersT&& value) { SetDnsServers(std::forward<DnsServersT>(value)); return *this;}
    template<typename DnsServersT = Aws::String>
    ClientVpnEndpoint& AddDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.emplace_back(std::forward<DnsServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether split-tunnel is enabled in the Client VPN endpoint.</p>
     * <p>For information about split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-Tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline bool GetSplitTunnel() const { return m_splitTunnel; }
    inline bool SplitTunnelHasBeenSet() const { return m_splitTunnelHasBeenSet; }
    inline void SetSplitTunnel(bool value) { m_splitTunnelHasBeenSet = true; m_splitTunnel = value; }
    inline ClientVpnEndpoint& WithSplitTunnel(bool value) { SetSplitTunnel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used by the VPN session.</p>
     */
    inline VpnProtocol GetVpnProtocol() const { return m_vpnProtocol; }
    inline bool VpnProtocolHasBeenSet() const { return m_vpnProtocolHasBeenSet; }
    inline void SetVpnProtocol(VpnProtocol value) { m_vpnProtocolHasBeenSet = true; m_vpnProtocol = value; }
    inline ClientVpnEndpoint& WithVpnProtocol(VpnProtocol value) { SetVpnProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transport protocol used by the Client VPN endpoint.</p>
     */
    inline TransportProtocol GetTransportProtocol() const { return m_transportProtocol; }
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }
    inline void SetTransportProtocol(TransportProtocol value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = value; }
    inline ClientVpnEndpoint& WithTransportProtocol(TransportProtocol value) { SetTransportProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for the Client VPN endpoint.</p>
     */
    inline int GetVpnPort() const { return m_vpnPort; }
    inline bool VpnPortHasBeenSet() const { return m_vpnPortHasBeenSet; }
    inline void SetVpnPort(int value) { m_vpnPortHasBeenSet = true; m_vpnPort = value; }
    inline ClientVpnEndpoint& WithVpnPort(int value) { SetVpnPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline const Aws::String& GetServerCertificateArn() const { return m_serverCertificateArn; }
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }
    template<typename ServerCertificateArnT = Aws::String>
    void SetServerCertificateArn(ServerCertificateArnT&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::forward<ServerCertificateArnT>(value); }
    template<typename ServerCertificateArnT = Aws::String>
    ClientVpnEndpoint& WithServerCertificateArn(ServerCertificateArnT&& value) { SetServerCertificateArn(std::forward<ServerCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the authentication method used by the Client VPN
     * endpoint.</p>
     */
    inline const Aws::Vector<ClientVpnAuthentication>& GetAuthenticationOptions() const { return m_authenticationOptions; }
    inline bool AuthenticationOptionsHasBeenSet() const { return m_authenticationOptionsHasBeenSet; }
    template<typename AuthenticationOptionsT = Aws::Vector<ClientVpnAuthentication>>
    void SetAuthenticationOptions(AuthenticationOptionsT&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = std::forward<AuthenticationOptionsT>(value); }
    template<typename AuthenticationOptionsT = Aws::Vector<ClientVpnAuthentication>>
    ClientVpnEndpoint& WithAuthenticationOptions(AuthenticationOptionsT&& value) { SetAuthenticationOptions(std::forward<AuthenticationOptionsT>(value)); return *this;}
    template<typename AuthenticationOptionsT = ClientVpnAuthentication>
    ClientVpnEndpoint& AddAuthenticationOptions(AuthenticationOptionsT&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.emplace_back(std::forward<AuthenticationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the client connection logging options for the Client VPN
     * endpoint.</p>
     */
    inline const ConnectionLogResponseOptions& GetConnectionLogOptions() const { return m_connectionLogOptions; }
    inline bool ConnectionLogOptionsHasBeenSet() const { return m_connectionLogOptionsHasBeenSet; }
    template<typename ConnectionLogOptionsT = ConnectionLogResponseOptions>
    void SetConnectionLogOptions(ConnectionLogOptionsT&& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = std::forward<ConnectionLogOptionsT>(value); }
    template<typename ConnectionLogOptionsT = ConnectionLogResponseOptions>
    ClientVpnEndpoint& WithConnectionLogOptions(ConnectionLogOptionsT&& value) { SetConnectionLogOptions(std::forward<ConnectionLogOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Client VPN endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ClientVpnEndpoint& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ClientVpnEndpoint& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for the target network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ClientVpnEndpoint& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ClientVpnEndpoint& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    ClientVpnEndpoint& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the self-service portal.</p>
     */
    inline const Aws::String& GetSelfServicePortalUrl() const { return m_selfServicePortalUrl; }
    inline bool SelfServicePortalUrlHasBeenSet() const { return m_selfServicePortalUrlHasBeenSet; }
    template<typename SelfServicePortalUrlT = Aws::String>
    void SetSelfServicePortalUrl(SelfServicePortalUrlT&& value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl = std::forward<SelfServicePortalUrlT>(value); }
    template<typename SelfServicePortalUrlT = Aws::String>
    ClientVpnEndpoint& WithSelfServicePortalUrl(SelfServicePortalUrlT&& value) { SetSelfServicePortalUrl(std::forward<SelfServicePortalUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline const ClientConnectResponseOptions& GetClientConnectOptions() const { return m_clientConnectOptions; }
    inline bool ClientConnectOptionsHasBeenSet() const { return m_clientConnectOptionsHasBeenSet; }
    template<typename ClientConnectOptionsT = ClientConnectResponseOptions>
    void SetClientConnectOptions(ClientConnectOptionsT&& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = std::forward<ClientConnectOptionsT>(value); }
    template<typename ClientConnectOptionsT = ClientConnectResponseOptions>
    ClientVpnEndpoint& WithClientConnectOptions(ClientConnectOptionsT&& value) { SetClientConnectOptions(std::forward<ClientConnectOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline int GetSessionTimeoutHours() const { return m_sessionTimeoutHours; }
    inline bool SessionTimeoutHoursHasBeenSet() const { return m_sessionTimeoutHoursHasBeenSet; }
    inline void SetSessionTimeoutHours(int value) { m_sessionTimeoutHoursHasBeenSet = true; m_sessionTimeoutHours = value; }
    inline ClientVpnEndpoint& WithSessionTimeoutHours(int value) { SetSessionTimeoutHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline const ClientLoginBannerResponseOptions& GetClientLoginBannerOptions() const { return m_clientLoginBannerOptions; }
    inline bool ClientLoginBannerOptionsHasBeenSet() const { return m_clientLoginBannerOptionsHasBeenSet; }
    template<typename ClientLoginBannerOptionsT = ClientLoginBannerResponseOptions>
    void SetClientLoginBannerOptions(ClientLoginBannerOptionsT&& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = std::forward<ClientLoginBannerOptionsT>(value); }
    template<typename ClientLoginBannerOptionsT = ClientLoginBannerResponseOptions>
    ClientVpnEndpoint& WithClientLoginBannerOptions(ClientLoginBannerOptionsT&& value) { SetClientLoginBannerOptions(std::forward<ClientLoginBannerOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Client route enforcement is a feature of the Client VPN service that helps
     * enforce administrator defined routes on devices connected through the VPN. T his
     * feature helps improve your security posture by ensuring that network traffic
     * originating from a connected client is not inadvertently sent outside the VPN
     * tunnel.</p> <p>Client route enforcement works by monitoring the route table of a
     * connected device for routing policy changes to the VPN connection. If the
     * feature detects any VPN routing policy modifications, it will automatically
     * force an update to the route table, reverting it back to the expected route
     * configurations.</p>
     */
    inline const ClientRouteEnforcementResponseOptions& GetClientRouteEnforcementOptions() const { return m_clientRouteEnforcementOptions; }
    inline bool ClientRouteEnforcementOptionsHasBeenSet() const { return m_clientRouteEnforcementOptionsHasBeenSet; }
    template<typename ClientRouteEnforcementOptionsT = ClientRouteEnforcementResponseOptions>
    void SetClientRouteEnforcementOptions(ClientRouteEnforcementOptionsT&& value) { m_clientRouteEnforcementOptionsHasBeenSet = true; m_clientRouteEnforcementOptions = std::forward<ClientRouteEnforcementOptionsT>(value); }
    template<typename ClientRouteEnforcementOptionsT = ClientRouteEnforcementResponseOptions>
    ClientVpnEndpoint& WithClientRouteEnforcementOptions(ClientRouteEnforcementOptionsT&& value) { SetClientRouteEnforcementOptions(std::forward<ClientRouteEnforcementOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the client VPN session is disconnected after the maximum
     * <code>sessionTimeoutHours</code> is reached. If <code>true</code>, users are
     * prompted to reconnect client VPN. If <code>false</code>, client VPN attempts to
     * reconnect automatically. The default value is <code>true</code>.</p>
     */
    inline bool GetDisconnectOnSessionTimeout() const { return m_disconnectOnSessionTimeout; }
    inline bool DisconnectOnSessionTimeoutHasBeenSet() const { return m_disconnectOnSessionTimeoutHasBeenSet; }
    inline void SetDisconnectOnSessionTimeout(bool value) { m_disconnectOnSessionTimeoutHasBeenSet = true; m_disconnectOnSessionTimeout = value; }
    inline ClientVpnEndpoint& WithDisconnectOnSessionTimeout(bool value) { SetDisconnectOnSessionTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type of the Client VPN endpoint. Possible values are
     * <code>ipv4</code> for IPv4 addressing only, <code>ipv6</code> for IPv6
     * addressing only, or <code>dual-stack </code>for both IPv4 and IPv6
     * addressing.</p>
     */
    inline EndpointIpAddressType GetEndpointIpAddressType() const { return m_endpointIpAddressType; }
    inline bool EndpointIpAddressTypeHasBeenSet() const { return m_endpointIpAddressTypeHasBeenSet; }
    inline void SetEndpointIpAddressType(EndpointIpAddressType value) { m_endpointIpAddressTypeHasBeenSet = true; m_endpointIpAddressType = value; }
    inline ClientVpnEndpoint& WithEndpointIpAddressType(EndpointIpAddressType value) { SetEndpointIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type of the Client VPN endpoint. Possible values are either
     * <code>ipv4</code> for IPv4 addressing only, <code>ipv6</code> for IPv6
     * addressing only, or <code>dual-stack</code> for both IPv4 and IPv6
     * addressing.</p>
     */
    inline TrafficIpAddressType GetTrafficIpAddressType() const { return m_trafficIpAddressType; }
    inline bool TrafficIpAddressTypeHasBeenSet() const { return m_trafficIpAddressTypeHasBeenSet; }
    inline void SetTrafficIpAddressType(TrafficIpAddressType value) { m_trafficIpAddressTypeHasBeenSet = true; m_trafficIpAddressType = value; }
    inline ClientVpnEndpoint& WithTrafficIpAddressType(TrafficIpAddressType value) { SetTrafficIpAddressType(value); return *this;}
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

    bool m_splitTunnel{false};
    bool m_splitTunnelHasBeenSet = false;

    VpnProtocol m_vpnProtocol{VpnProtocol::NOT_SET};
    bool m_vpnProtocolHasBeenSet = false;

    TransportProtocol m_transportProtocol{TransportProtocol::NOT_SET};
    bool m_transportProtocolHasBeenSet = false;

    int m_vpnPort{0};
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

    int m_sessionTimeoutHours{0};
    bool m_sessionTimeoutHoursHasBeenSet = false;

    ClientLoginBannerResponseOptions m_clientLoginBannerOptions;
    bool m_clientLoginBannerOptionsHasBeenSet = false;

    ClientRouteEnforcementResponseOptions m_clientRouteEnforcementOptions;
    bool m_clientRouteEnforcementOptionsHasBeenSet = false;

    bool m_disconnectOnSessionTimeout{false};
    bool m_disconnectOnSessionTimeoutHasBeenSet = false;

    EndpointIpAddressType m_endpointIpAddressType{EndpointIpAddressType::NOT_SET};
    bool m_endpointIpAddressTypeHasBeenSet = false;

    TrafficIpAddressType m_trafficIpAddressType{TrafficIpAddressType::NOT_SET};
    bool m_trafficIpAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
