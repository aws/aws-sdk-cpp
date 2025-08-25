/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ConnectionLogOptions.h>
#include <aws/ec2/model/TransportProtocol.h>
#include <aws/ec2/model/SelfServicePortal.h>
#include <aws/ec2/model/ClientConnectOptions.h>
#include <aws/ec2/model/ClientLoginBannerOptions.h>
#include <aws/ec2/model/ClientRouteEnforcementOptions.h>
#include <aws/ec2/model/EndpointIpAddressType.h>
#include <aws/ec2/model/TrafficIpAddressType.h>
#include <aws/ec2/model/ClientVpnAuthenticationRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateClientVpnEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateClientVpnEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClientVpnEndpoint"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, from which to assign client IP
     * addresses. The address range cannot overlap with the local CIDR of the VPC in
     * which the associated subnet is located, or the routes that you add manually. The
     * address range cannot be changed after the Client VPN endpoint has been created.
     * Client CIDR range must have a size of at least /22 and must not be greater than
     * /12.</p>
     */
    inline const Aws::String& GetClientCidrBlock() const { return m_clientCidrBlock; }
    inline bool ClientCidrBlockHasBeenSet() const { return m_clientCidrBlockHasBeenSet; }
    template<typename ClientCidrBlockT = Aws::String>
    void SetClientCidrBlock(ClientCidrBlockT&& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = std::forward<ClientCidrBlockT>(value); }
    template<typename ClientCidrBlockT = Aws::String>
    CreateClientVpnEndpointRequest& WithClientCidrBlock(ClientCidrBlockT&& value) { SetClientCidrBlock(std::forward<ClientCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the server certificate. For more information, see the <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/">Certificate Manager
     * User Guide</a>.</p>
     */
    inline const Aws::String& GetServerCertificateArn() const { return m_serverCertificateArn; }
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }
    template<typename ServerCertificateArnT = Aws::String>
    void SetServerCertificateArn(ServerCertificateArnT&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::forward<ServerCertificateArnT>(value); }
    template<typename ServerCertificateArnT = Aws::String>
    CreateClientVpnEndpointRequest& WithServerCertificateArn(ServerCertificateArnT&& value) { SetServerCertificateArn(std::forward<ServerCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the authentication method to be used to authenticate
     * clients.</p>
     */
    inline const Aws::Vector<ClientVpnAuthenticationRequest>& GetAuthenticationOptions() const { return m_authenticationOptions; }
    inline bool AuthenticationOptionsHasBeenSet() const { return m_authenticationOptionsHasBeenSet; }
    template<typename AuthenticationOptionsT = Aws::Vector<ClientVpnAuthenticationRequest>>
    void SetAuthenticationOptions(AuthenticationOptionsT&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = std::forward<AuthenticationOptionsT>(value); }
    template<typename AuthenticationOptionsT = Aws::Vector<ClientVpnAuthenticationRequest>>
    CreateClientVpnEndpointRequest& WithAuthenticationOptions(AuthenticationOptionsT&& value) { SetAuthenticationOptions(std::forward<AuthenticationOptionsT>(value)); return *this;}
    template<typename AuthenticationOptionsT = ClientVpnAuthenticationRequest>
    CreateClientVpnEndpointRequest& AddAuthenticationOptions(AuthenticationOptionsT&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.emplace_back(std::forward<AuthenticationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the client connection logging options.</p> <p>If you enable
     * client connection logging, data about client connections is sent to a Cloudwatch
     * Logs log stream. The following information is logged:</p> <ul> <li> <p>Client
     * connection requests</p> </li> <li> <p>Client connection results (successful and
     * unsuccessful)</p> </li> <li> <p>Reasons for unsuccessful client connection
     * requests</p> </li> <li> <p>Client connection termination time</p> </li> </ul>
     */
    inline const ConnectionLogOptions& GetConnectionLogOptions() const { return m_connectionLogOptions; }
    inline bool ConnectionLogOptionsHasBeenSet() const { return m_connectionLogOptionsHasBeenSet; }
    template<typename ConnectionLogOptionsT = ConnectionLogOptions>
    void SetConnectionLogOptions(ConnectionLogOptionsT&& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = std::forward<ConnectionLogOptionsT>(value); }
    template<typename ConnectionLogOptionsT = ConnectionLogOptions>
    CreateClientVpnEndpointRequest& WithConnectionLogOptions(ConnectionLogOptionsT&& value) { SetConnectionLogOptions(std::forward<ConnectionLogOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the DNS servers to be used for DNS resolution. A Client VPN
     * endpoint can have up to two DNS servers. If no DNS server is specified, the DNS
     * address configured on the device is used for the DNS server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const { return m_dnsServers; }
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }
    template<typename DnsServersT = Aws::Vector<Aws::String>>
    void SetDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::forward<DnsServersT>(value); }
    template<typename DnsServersT = Aws::Vector<Aws::String>>
    CreateClientVpnEndpointRequest& WithDnsServers(DnsServersT&& value) { SetDnsServers(std::forward<DnsServersT>(value)); return *this;}
    template<typename DnsServersT = Aws::String>
    CreateClientVpnEndpointRequest& AddDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.emplace_back(std::forward<DnsServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The transport protocol to be used by the VPN session.</p> <p>Default value:
     * <code>udp</code> </p>
     */
    inline TransportProtocol GetTransportProtocol() const { return m_transportProtocol; }
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }
    inline void SetTransportProtocol(TransportProtocol value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = value; }
    inline CreateClientVpnEndpointRequest& WithTransportProtocol(TransportProtocol value) { SetTransportProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number to assign to the Client VPN endpoint for TCP and UDP
     * traffic.</p> <p>Valid Values: <code>443</code> | <code>1194</code> </p>
     * <p>Default Value: <code>443</code> </p>
     */
    inline int GetVpnPort() const { return m_vpnPort; }
    inline bool VpnPortHasBeenSet() const { return m_vpnPortHasBeenSet; }
    inline void SetVpnPort(int value) { m_vpnPortHasBeenSet = true; m_vpnPort = value; }
    inline CreateClientVpnEndpointRequest& WithVpnPort(int value) { SetVpnPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateClientVpnEndpointRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether split-tunnel is enabled on the Client VPN endpoint.</p>
     * <p>By default, split-tunnel on a VPN endpoint is disabled.</p> <p>For
     * information about split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline bool GetSplitTunnel() const { return m_splitTunnel; }
    inline bool SplitTunnelHasBeenSet() const { return m_splitTunnelHasBeenSet; }
    inline void SetSplitTunnel(bool value) { m_splitTunnelHasBeenSet = true; m_splitTunnel = value; }
    inline CreateClientVpnEndpointRequest& WithSplitTunnel(bool value) { SetSplitTunnel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateClientVpnEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateClientVpnEndpointRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Client VPN endpoint during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateClientVpnEndpointRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateClientVpnEndpointRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more security groups to apply to the target network. You
     * must also specify the ID of the VPC that contains the security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateClientVpnEndpointRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateClientVpnEndpointRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC to associate with the Client VPN endpoint. If no security
     * group IDs are specified in the request, the default security group for the VPC
     * is applied.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateClientVpnEndpointRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether to enable the self-service portal for the Client VPN
     * endpoint.</p> <p>Default Value: <code>enabled</code> </p>
     */
    inline SelfServicePortal GetSelfServicePortal() const { return m_selfServicePortal; }
    inline bool SelfServicePortalHasBeenSet() const { return m_selfServicePortalHasBeenSet; }
    inline void SetSelfServicePortal(SelfServicePortal value) { m_selfServicePortalHasBeenSet = true; m_selfServicePortal = value; }
    inline CreateClientVpnEndpointRequest& WithSelfServicePortal(SelfServicePortal value) { SetSelfServicePortal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline const ClientConnectOptions& GetClientConnectOptions() const { return m_clientConnectOptions; }
    inline bool ClientConnectOptionsHasBeenSet() const { return m_clientConnectOptionsHasBeenSet; }
    template<typename ClientConnectOptionsT = ClientConnectOptions>
    void SetClientConnectOptions(ClientConnectOptionsT&& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = std::forward<ClientConnectOptionsT>(value); }
    template<typename ClientConnectOptionsT = ClientConnectOptions>
    CreateClientVpnEndpointRequest& WithClientConnectOptions(ClientConnectOptionsT&& value) { SetClientConnectOptions(std::forward<ClientConnectOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline int GetSessionTimeoutHours() const { return m_sessionTimeoutHours; }
    inline bool SessionTimeoutHoursHasBeenSet() const { return m_sessionTimeoutHoursHasBeenSet; }
    inline void SetSessionTimeoutHours(int value) { m_sessionTimeoutHoursHasBeenSet = true; m_sessionTimeoutHours = value; }
    inline CreateClientVpnEndpointRequest& WithSessionTimeoutHours(int value) { SetSessionTimeoutHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline const ClientLoginBannerOptions& GetClientLoginBannerOptions() const { return m_clientLoginBannerOptions; }
    inline bool ClientLoginBannerOptionsHasBeenSet() const { return m_clientLoginBannerOptionsHasBeenSet; }
    template<typename ClientLoginBannerOptionsT = ClientLoginBannerOptions>
    void SetClientLoginBannerOptions(ClientLoginBannerOptionsT&& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = std::forward<ClientLoginBannerOptionsT>(value); }
    template<typename ClientLoginBannerOptionsT = ClientLoginBannerOptions>
    CreateClientVpnEndpointRequest& WithClientLoginBannerOptions(ClientLoginBannerOptionsT&& value) { SetClientLoginBannerOptions(std::forward<ClientLoginBannerOptionsT>(value)); return *this;}
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
    inline const ClientRouteEnforcementOptions& GetClientRouteEnforcementOptions() const { return m_clientRouteEnforcementOptions; }
    inline bool ClientRouteEnforcementOptionsHasBeenSet() const { return m_clientRouteEnforcementOptionsHasBeenSet; }
    template<typename ClientRouteEnforcementOptionsT = ClientRouteEnforcementOptions>
    void SetClientRouteEnforcementOptions(ClientRouteEnforcementOptionsT&& value) { m_clientRouteEnforcementOptionsHasBeenSet = true; m_clientRouteEnforcementOptions = std::forward<ClientRouteEnforcementOptionsT>(value); }
    template<typename ClientRouteEnforcementOptionsT = ClientRouteEnforcementOptions>
    CreateClientVpnEndpointRequest& WithClientRouteEnforcementOptions(ClientRouteEnforcementOptionsT&& value) { SetClientRouteEnforcementOptions(std::forward<ClientRouteEnforcementOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the client VPN session is disconnected after the maximum
     * timeout specified in <code>SessionTimeoutHours</code> is reached. If
     * <code>true</code>, users are prompted to reconnect client VPN. If
     * <code>false</code>, client VPN attempts to reconnect automatically. The default
     * value is <code>true</code>.</p>
     */
    inline bool GetDisconnectOnSessionTimeout() const { return m_disconnectOnSessionTimeout; }
    inline bool DisconnectOnSessionTimeoutHasBeenSet() const { return m_disconnectOnSessionTimeoutHasBeenSet; }
    inline void SetDisconnectOnSessionTimeout(bool value) { m_disconnectOnSessionTimeoutHasBeenSet = true; m_disconnectOnSessionTimeout = value; }
    inline CreateClientVpnEndpointRequest& WithDisconnectOnSessionTimeout(bool value) { SetDisconnectOnSessionTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type for the Client VPN endpoint. Valid values are
     * <code>ipv4</code> (default) for IPv4 addressing only, <code>ipv6</code> for IPv6
     * addressing only, or <code>dual-stack</code> for both IPv4 and IPv6 addressing.
     * When set to <code>dual-stack,</code> clients can connect to the endpoint using
     * either IPv4 or IPv6 addresses..</p>
     */
    inline EndpointIpAddressType GetEndpointIpAddressType() const { return m_endpointIpAddressType; }
    inline bool EndpointIpAddressTypeHasBeenSet() const { return m_endpointIpAddressTypeHasBeenSet; }
    inline void SetEndpointIpAddressType(EndpointIpAddressType value) { m_endpointIpAddressTypeHasBeenSet = true; m_endpointIpAddressType = value; }
    inline CreateClientVpnEndpointRequest& WithEndpointIpAddressType(EndpointIpAddressType value) { SetEndpointIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type for traffic within the Client VPN tunnel. Valid values
     * are <code>ipv4</code> (default) for IPv4 traffic only, <code>ipv6</code> for
     * IPv6 addressing only, or <code>dual-stack</code> for both IPv4 and IPv6 traffic.
     * When set to <code>dual-stack</code>, clients can access both IPv4 and IPv6
     * resources through the VPN .</p>
     */
    inline TrafficIpAddressType GetTrafficIpAddressType() const { return m_trafficIpAddressType; }
    inline bool TrafficIpAddressTypeHasBeenSet() const { return m_trafficIpAddressTypeHasBeenSet; }
    inline void SetTrafficIpAddressType(TrafficIpAddressType value) { m_trafficIpAddressTypeHasBeenSet = true; m_trafficIpAddressType = value; }
    inline CreateClientVpnEndpointRequest& WithTrafficIpAddressType(TrafficIpAddressType value) { SetTrafficIpAddressType(value); return *this;}
    ///@}
  private:

    Aws::String m_clientCidrBlock;
    bool m_clientCidrBlockHasBeenSet = false;

    Aws::String m_serverCertificateArn;
    bool m_serverCertificateArnHasBeenSet = false;

    Aws::Vector<ClientVpnAuthenticationRequest> m_authenticationOptions;
    bool m_authenticationOptionsHasBeenSet = false;

    ConnectionLogOptions m_connectionLogOptions;
    bool m_connectionLogOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsServers;
    bool m_dnsServersHasBeenSet = false;

    TransportProtocol m_transportProtocol{TransportProtocol::NOT_SET};
    bool m_transportProtocolHasBeenSet = false;

    int m_vpnPort{0};
    bool m_vpnPortHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_splitTunnel{false};
    bool m_splitTunnelHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    SelfServicePortal m_selfServicePortal{SelfServicePortal::NOT_SET};
    bool m_selfServicePortalHasBeenSet = false;

    ClientConnectOptions m_clientConnectOptions;
    bool m_clientConnectOptionsHasBeenSet = false;

    int m_sessionTimeoutHours{0};
    bool m_sessionTimeoutHoursHasBeenSet = false;

    ClientLoginBannerOptions m_clientLoginBannerOptions;
    bool m_clientLoginBannerOptionsHasBeenSet = false;

    ClientRouteEnforcementOptions m_clientRouteEnforcementOptions;
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
