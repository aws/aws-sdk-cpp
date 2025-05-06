/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ConnectionLogOptions.h>
#include <aws/ec2/model/DnsServersOptionsModifyStructure.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SelfServicePortal.h>
#include <aws/ec2/model/ClientConnectOptions.h>
#include <aws/ec2/model/ClientLoginBannerOptions.h>
#include <aws/ec2/model/ClientRouteEnforcementOptions.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyClientVpnEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyClientVpnEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClientVpnEndpoint"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    ModifyClientVpnEndpointRequest& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in Certificate Manager (ACM).</p>
     */
    inline const Aws::String& GetServerCertificateArn() const { return m_serverCertificateArn; }
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }
    template<typename ServerCertificateArnT = Aws::String>
    void SetServerCertificateArn(ServerCertificateArnT&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::forward<ServerCertificateArnT>(value); }
    template<typename ServerCertificateArnT = Aws::String>
    ModifyClientVpnEndpointRequest& WithServerCertificateArn(ServerCertificateArnT&& value) { SetServerCertificateArn(std::forward<ServerCertificateArnT>(value)); return *this;}
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
    ModifyClientVpnEndpointRequest& WithConnectionLogOptions(ConnectionLogOptionsT&& value) { SetConnectionLogOptions(std::forward<ConnectionLogOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the DNS servers to be used by Client VPN connections. A
     * Client VPN endpoint can have up to two DNS servers.</p>
     */
    inline const DnsServersOptionsModifyStructure& GetDnsServers() const { return m_dnsServers; }
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }
    template<typename DnsServersT = DnsServersOptionsModifyStructure>
    void SetDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::forward<DnsServersT>(value); }
    template<typename DnsServersT = DnsServersOptionsModifyStructure>
    ModifyClientVpnEndpointRequest& WithDnsServers(DnsServersT&& value) { SetDnsServers(std::forward<DnsServersT>(value)); return *this;}
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
    inline ModifyClientVpnEndpointRequest& WithVpnPort(int value) { SetVpnPort(value); return *this;}
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
    ModifyClientVpnEndpointRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the VPN is split-tunnel.</p> <p>For information about
     * split-tunnel VPN endpoints, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/split-tunnel-vpn.html">Split-tunnel
     * Client VPN endpoint</a> in the <i>Client VPN Administrator Guide</i>.</p>
     */
    inline bool GetSplitTunnel() const { return m_splitTunnel; }
    inline bool SplitTunnelHasBeenSet() const { return m_splitTunnelHasBeenSet; }
    inline void SetSplitTunnel(bool value) { m_splitTunnelHasBeenSet = true; m_splitTunnel = value; }
    inline ModifyClientVpnEndpointRequest& WithSplitTunnel(bool value) { SetSplitTunnel(value); return *this;}
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
    inline ModifyClientVpnEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more security groups to apply to the target network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyClientVpnEndpointRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ModifyClientVpnEndpointRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC to associate with the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    ModifyClientVpnEndpointRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether to enable the self-service portal for the Client VPN
     * endpoint.</p>
     */
    inline SelfServicePortal GetSelfServicePortal() const { return m_selfServicePortal; }
    inline bool SelfServicePortalHasBeenSet() const { return m_selfServicePortalHasBeenSet; }
    inline void SetSelfServicePortal(SelfServicePortal value) { m_selfServicePortalHasBeenSet = true; m_selfServicePortal = value; }
    inline ModifyClientVpnEndpointRequest& WithSelfServicePortal(SelfServicePortal value) { SetSelfServicePortal(value); return *this;}
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
    ModifyClientVpnEndpointRequest& WithClientConnectOptions(ClientConnectOptionsT&& value) { SetClientConnectOptions(std::forward<ClientConnectOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum VPN session duration time in hours.</p> <p>Valid values: <code>8
     * | 10 | 12 | 24</code> </p> <p>Default value: <code>24</code> </p>
     */
    inline int GetSessionTimeoutHours() const { return m_sessionTimeoutHours; }
    inline bool SessionTimeoutHoursHasBeenSet() const { return m_sessionTimeoutHoursHasBeenSet; }
    inline void SetSessionTimeoutHours(int value) { m_sessionTimeoutHoursHasBeenSet = true; m_sessionTimeoutHours = value; }
    inline ModifyClientVpnEndpointRequest& WithSessionTimeoutHours(int value) { SetSessionTimeoutHours(value); return *this;}
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
    ModifyClientVpnEndpointRequest& WithClientLoginBannerOptions(ClientLoginBannerOptionsT&& value) { SetClientLoginBannerOptions(std::forward<ClientLoginBannerOptionsT>(value)); return *this;}
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
    ModifyClientVpnEndpointRequest& WithClientRouteEnforcementOptions(ClientRouteEnforcementOptionsT&& value) { SetClientRouteEnforcementOptions(std::forward<ClientRouteEnforcementOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the client VPN session is disconnected after the maximum
     * timeout specified in <code>sessionTimeoutHours</code> is reached. If
     * <code>true</code>, users are prompted to reconnect client VPN. If
     * <code>false</code>, client VPN attempts to reconnect automatically. The default
     * value is <code>true</code>.</p>
     */
    inline bool GetDisconnectOnSessionTimeout() const { return m_disconnectOnSessionTimeout; }
    inline bool DisconnectOnSessionTimeoutHasBeenSet() const { return m_disconnectOnSessionTimeoutHasBeenSet; }
    inline void SetDisconnectOnSessionTimeout(bool value) { m_disconnectOnSessionTimeoutHasBeenSet = true; m_disconnectOnSessionTimeout = value; }
    inline ModifyClientVpnEndpointRequest& WithDisconnectOnSessionTimeout(bool value) { SetDisconnectOnSessionTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_serverCertificateArn;
    bool m_serverCertificateArnHasBeenSet = false;

    ConnectionLogOptions m_connectionLogOptions;
    bool m_connectionLogOptionsHasBeenSet = false;

    DnsServersOptionsModifyStructure m_dnsServers;
    bool m_dnsServersHasBeenSet = false;

    int m_vpnPort{0};
    bool m_vpnPortHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_splitTunnel{false};
    bool m_splitTunnelHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
