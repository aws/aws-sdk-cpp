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
    AWS_EC2_API CreateClientVpnEndpointRequest();

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
    inline const Aws::String& GetClientCidrBlock() const{ return m_clientCidrBlock; }
    inline bool ClientCidrBlockHasBeenSet() const { return m_clientCidrBlockHasBeenSet; }
    inline void SetClientCidrBlock(const Aws::String& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = value; }
    inline void SetClientCidrBlock(Aws::String&& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = std::move(value); }
    inline void SetClientCidrBlock(const char* value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock.assign(value); }
    inline CreateClientVpnEndpointRequest& WithClientCidrBlock(const Aws::String& value) { SetClientCidrBlock(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithClientCidrBlock(Aws::String&& value) { SetClientCidrBlock(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& WithClientCidrBlock(const char* value) { SetClientCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the server certificate. For more information, see the <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/">Certificate Manager
     * User Guide</a>.</p>
     */
    inline const Aws::String& GetServerCertificateArn() const{ return m_serverCertificateArn; }
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }
    inline void SetServerCertificateArn(const Aws::String& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = value; }
    inline void SetServerCertificateArn(Aws::String&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::move(value); }
    inline void SetServerCertificateArn(const char* value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn.assign(value); }
    inline CreateClientVpnEndpointRequest& WithServerCertificateArn(const Aws::String& value) { SetServerCertificateArn(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithServerCertificateArn(Aws::String&& value) { SetServerCertificateArn(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& WithServerCertificateArn(const char* value) { SetServerCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the authentication method to be used to authenticate
     * clients.</p>
     */
    inline const Aws::Vector<ClientVpnAuthenticationRequest>& GetAuthenticationOptions() const{ return m_authenticationOptions; }
    inline bool AuthenticationOptionsHasBeenSet() const { return m_authenticationOptionsHasBeenSet; }
    inline void SetAuthenticationOptions(const Aws::Vector<ClientVpnAuthenticationRequest>& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = value; }
    inline void SetAuthenticationOptions(Aws::Vector<ClientVpnAuthenticationRequest>&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithAuthenticationOptions(const Aws::Vector<ClientVpnAuthenticationRequest>& value) { SetAuthenticationOptions(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithAuthenticationOptions(Aws::Vector<ClientVpnAuthenticationRequest>&& value) { SetAuthenticationOptions(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& AddAuthenticationOptions(const ClientVpnAuthenticationRequest& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.push_back(value); return *this; }
    inline CreateClientVpnEndpointRequest& AddAuthenticationOptions(ClientVpnAuthenticationRequest&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.push_back(std::move(value)); return *this; }
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
    inline const ConnectionLogOptions& GetConnectionLogOptions() const{ return m_connectionLogOptions; }
    inline bool ConnectionLogOptionsHasBeenSet() const { return m_connectionLogOptionsHasBeenSet; }
    inline void SetConnectionLogOptions(const ConnectionLogOptions& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = value; }
    inline void SetConnectionLogOptions(ConnectionLogOptions&& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithConnectionLogOptions(const ConnectionLogOptions& value) { SetConnectionLogOptions(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithConnectionLogOptions(ConnectionLogOptions&& value) { SetConnectionLogOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the DNS servers to be used for DNS resolution. A Client VPN
     * endpoint can have up to two DNS servers. If no DNS server is specified, the DNS
     * address configured on the device is used for the DNS server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const{ return m_dnsServers; }
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }
    inline void SetDnsServers(const Aws::Vector<Aws::String>& value) { m_dnsServersHasBeenSet = true; m_dnsServers = value; }
    inline void SetDnsServers(Aws::Vector<Aws::String>&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithDnsServers(const Aws::Vector<Aws::String>& value) { SetDnsServers(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithDnsServers(Aws::Vector<Aws::String>&& value) { SetDnsServers(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& AddDnsServers(const Aws::String& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }
    inline CreateClientVpnEndpointRequest& AddDnsServers(Aws::String&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(std::move(value)); return *this; }
    inline CreateClientVpnEndpointRequest& AddDnsServers(const char* value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The transport protocol to be used by the VPN session.</p> <p>Default value:
     * <code>udp</code> </p>
     */
    inline const TransportProtocol& GetTransportProtocol() const{ return m_transportProtocol; }
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }
    inline void SetTransportProtocol(const TransportProtocol& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = value; }
    inline void SetTransportProtocol(TransportProtocol&& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithTransportProtocol(const TransportProtocol& value) { SetTransportProtocol(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithTransportProtocol(TransportProtocol&& value) { SetTransportProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number to assign to the Client VPN endpoint for TCP and UDP
     * traffic.</p> <p>Valid Values: <code>443</code> | <code>1194</code> </p>
     * <p>Default Value: <code>443</code> </p>
     */
    inline int GetVpnPort() const{ return m_vpnPort; }
    inline bool VpnPortHasBeenSet() const { return m_vpnPortHasBeenSet; }
    inline void SetVpnPort(int value) { m_vpnPortHasBeenSet = true; m_vpnPort = value; }
    inline CreateClientVpnEndpointRequest& WithVpnPort(int value) { SetVpnPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateClientVpnEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether split-tunnel is enabled on the Client VPN endpoint.</p>
     * <p>By default, split-tunnel on a VPN endpoint is disabled.</p> <p>For
     * information about split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline bool GetSplitTunnel() const{ return m_splitTunnel; }
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
    inline bool GetDryRun() const{ return m_dryRun; }
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateClientVpnEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Client VPN endpoint during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateClientVpnEndpointRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more security groups to apply to the target network. You
     * must also specify the ID of the VPC that contains the security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline CreateClientVpnEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateClientVpnEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC to associate with the Client VPN endpoint. If no security
     * group IDs are specified in the request, the default security group for the VPC
     * is applied.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CreateClientVpnEndpointRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateClientVpnEndpointRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether to enable the self-service portal for the Client VPN
     * endpoint.</p> <p>Default Value: <code>enabled</code> </p>
     */
    inline const SelfServicePortal& GetSelfServicePortal() const{ return m_selfServicePortal; }
    inline bool SelfServicePortalHasBeenSet() const { return m_selfServicePortalHasBeenSet; }
    inline void SetSelfServicePortal(const SelfServicePortal& value) { m_selfServicePortalHasBeenSet = true; m_selfServicePortal = value; }
    inline void SetSelfServicePortal(SelfServicePortal&& value) { m_selfServicePortalHasBeenSet = true; m_selfServicePortal = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithSelfServicePortal(const SelfServicePortal& value) { SetSelfServicePortal(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithSelfServicePortal(SelfServicePortal&& value) { SetSelfServicePortal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for managing connection authorization for new client
     * connections.</p>
     */
    inline const ClientConnectOptions& GetClientConnectOptions() const{ return m_clientConnectOptions; }
    inline bool ClientConnectOptionsHasBeenSet() const { return m_clientConnectOptionsHasBeenSet; }
    inline void SetClientConnectOptions(const ClientConnectOptions& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = value; }
    inline void SetClientConnectOptions(ClientConnectOptions&& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithClientConnectOptions(const ClientConnectOptions& value) { SetClientConnectOptions(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithClientConnectOptions(ClientConnectOptions&& value) { SetClientConnectOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline int GetSessionTimeoutHours() const{ return m_sessionTimeoutHours; }
    inline bool SessionTimeoutHoursHasBeenSet() const { return m_sessionTimeoutHoursHasBeenSet; }
    inline void SetSessionTimeoutHours(int value) { m_sessionTimeoutHoursHasBeenSet = true; m_sessionTimeoutHours = value; }
    inline CreateClientVpnEndpointRequest& WithSessionTimeoutHours(int value) { SetSessionTimeoutHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established.</p>
     */
    inline const ClientLoginBannerOptions& GetClientLoginBannerOptions() const{ return m_clientLoginBannerOptions; }
    inline bool ClientLoginBannerOptionsHasBeenSet() const { return m_clientLoginBannerOptionsHasBeenSet; }
    inline void SetClientLoginBannerOptions(const ClientLoginBannerOptions& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = value; }
    inline void SetClientLoginBannerOptions(ClientLoginBannerOptions&& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = std::move(value); }
    inline CreateClientVpnEndpointRequest& WithClientLoginBannerOptions(const ClientLoginBannerOptions& value) { SetClientLoginBannerOptions(value); return *this;}
    inline CreateClientVpnEndpointRequest& WithClientLoginBannerOptions(ClientLoginBannerOptions&& value) { SetClientLoginBannerOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the client VPN session is disconnected after the maximum
     * timeout specified in <code>SessionTimeoutHours</code> is reached. If
     * <code>true</code>, users are prompted to reconnect client VPN. If
     * <code>false</code>, client VPN attempts to reconnect automatically. The default
     * value is <code>false</code>.</p>
     */
    inline bool GetDisconnectOnSessionTimeout() const{ return m_disconnectOnSessionTimeout; }
    inline bool DisconnectOnSessionTimeoutHasBeenSet() const { return m_disconnectOnSessionTimeoutHasBeenSet; }
    inline void SetDisconnectOnSessionTimeout(bool value) { m_disconnectOnSessionTimeoutHasBeenSet = true; m_disconnectOnSessionTimeout = value; }
    inline CreateClientVpnEndpointRequest& WithDisconnectOnSessionTimeout(bool value) { SetDisconnectOnSessionTimeout(value); return *this;}
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

    TransportProtocol m_transportProtocol;
    bool m_transportProtocolHasBeenSet = false;

    int m_vpnPort;
    bool m_vpnPortHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_splitTunnel;
    bool m_splitTunnelHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    SelfServicePortal m_selfServicePortal;
    bool m_selfServicePortalHasBeenSet = false;

    ClientConnectOptions m_clientConnectOptions;
    bool m_clientConnectOptionsHasBeenSet = false;

    int m_sessionTimeoutHours;
    bool m_sessionTimeoutHoursHasBeenSet = false;

    ClientLoginBannerOptions m_clientLoginBannerOptions;
    bool m_clientLoginBannerOptionsHasBeenSet = false;

    bool m_disconnectOnSessionTimeout;
    bool m_disconnectOnSessionTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
