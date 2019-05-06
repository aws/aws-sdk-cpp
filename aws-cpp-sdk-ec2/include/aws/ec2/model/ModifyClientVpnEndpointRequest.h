/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ConnectionLogOptions.h>
#include <aws/ec2/model/DnsServersOptionsModifyStructure.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyClientVpnEndpointRequest : public EC2Request
  {
  public:
    ModifyClientVpnEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClientVpnEndpoint"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to modify.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in AWS Certificate Manager (ACM).</p>
     */
    inline const Aws::String& GetServerCertificateArn() const{ return m_serverCertificateArn; }

    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in AWS Certificate Manager (ACM).</p>
     */
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in AWS Certificate Manager (ACM).</p>
     */
    inline void SetServerCertificateArn(const Aws::String& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = value; }

    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in AWS Certificate Manager (ACM).</p>
     */
    inline void SetServerCertificateArn(Aws::String&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::move(value); }

    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in AWS Certificate Manager (ACM).</p>
     */
    inline void SetServerCertificateArn(const char* value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn.assign(value); }

    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in AWS Certificate Manager (ACM).</p>
     */
    inline ModifyClientVpnEndpointRequest& WithServerCertificateArn(const Aws::String& value) { SetServerCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in AWS Certificate Manager (ACM).</p>
     */
    inline ModifyClientVpnEndpointRequest& WithServerCertificateArn(Aws::String&& value) { SetServerCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the server certificate to be used. The server certificate must be
     * provisioned in AWS Certificate Manager (ACM).</p>
     */
    inline ModifyClientVpnEndpointRequest& WithServerCertificateArn(const char* value) { SetServerCertificateArn(value); return *this;}


    /**
     * <p>Information about the client connection logging options.</p> <p>If you enable
     * client connection logging, data about client connections is sent to a Cloudwatch
     * Logs log stream. The following information is logged:</p> <ul> <li> <p>Client
     * connection requests</p> </li> <li> <p>Client connection results (successful and
     * unsuccessful)</p> </li> <li> <p>Reasons for unsuccessful client connection
     * requests</p> </li> <li> <p>Client connection termination time</p> </li> </ul>
     */
    inline const ConnectionLogOptions& GetConnectionLogOptions() const{ return m_connectionLogOptions; }

    /**
     * <p>Information about the client connection logging options.</p> <p>If you enable
     * client connection logging, data about client connections is sent to a Cloudwatch
     * Logs log stream. The following information is logged:</p> <ul> <li> <p>Client
     * connection requests</p> </li> <li> <p>Client connection results (successful and
     * unsuccessful)</p> </li> <li> <p>Reasons for unsuccessful client connection
     * requests</p> </li> <li> <p>Client connection termination time</p> </li> </ul>
     */
    inline bool ConnectionLogOptionsHasBeenSet() const { return m_connectionLogOptionsHasBeenSet; }

    /**
     * <p>Information about the client connection logging options.</p> <p>If you enable
     * client connection logging, data about client connections is sent to a Cloudwatch
     * Logs log stream. The following information is logged:</p> <ul> <li> <p>Client
     * connection requests</p> </li> <li> <p>Client connection results (successful and
     * unsuccessful)</p> </li> <li> <p>Reasons for unsuccessful client connection
     * requests</p> </li> <li> <p>Client connection termination time</p> </li> </ul>
     */
    inline void SetConnectionLogOptions(const ConnectionLogOptions& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = value; }

    /**
     * <p>Information about the client connection logging options.</p> <p>If you enable
     * client connection logging, data about client connections is sent to a Cloudwatch
     * Logs log stream. The following information is logged:</p> <ul> <li> <p>Client
     * connection requests</p> </li> <li> <p>Client connection results (successful and
     * unsuccessful)</p> </li> <li> <p>Reasons for unsuccessful client connection
     * requests</p> </li> <li> <p>Client connection termination time</p> </li> </ul>
     */
    inline void SetConnectionLogOptions(ConnectionLogOptions&& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = std::move(value); }

    /**
     * <p>Information about the client connection logging options.</p> <p>If you enable
     * client connection logging, data about client connections is sent to a Cloudwatch
     * Logs log stream. The following information is logged:</p> <ul> <li> <p>Client
     * connection requests</p> </li> <li> <p>Client connection results (successful and
     * unsuccessful)</p> </li> <li> <p>Reasons for unsuccessful client connection
     * requests</p> </li> <li> <p>Client connection termination time</p> </li> </ul>
     */
    inline ModifyClientVpnEndpointRequest& WithConnectionLogOptions(const ConnectionLogOptions& value) { SetConnectionLogOptions(value); return *this;}

    /**
     * <p>Information about the client connection logging options.</p> <p>If you enable
     * client connection logging, data about client connections is sent to a Cloudwatch
     * Logs log stream. The following information is logged:</p> <ul> <li> <p>Client
     * connection requests</p> </li> <li> <p>Client connection results (successful and
     * unsuccessful)</p> </li> <li> <p>Reasons for unsuccessful client connection
     * requests</p> </li> <li> <p>Client connection termination time</p> </li> </ul>
     */
    inline ModifyClientVpnEndpointRequest& WithConnectionLogOptions(ConnectionLogOptions&& value) { SetConnectionLogOptions(std::move(value)); return *this;}


    /**
     * <p>Information about the DNS servers to be used by Client VPN connections. A
     * Client VPN endpoint can have up to two DNS servers.</p>
     */
    inline const DnsServersOptionsModifyStructure& GetDnsServers() const{ return m_dnsServers; }

    /**
     * <p>Information about the DNS servers to be used by Client VPN connections. A
     * Client VPN endpoint can have up to two DNS servers.</p>
     */
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }

    /**
     * <p>Information about the DNS servers to be used by Client VPN connections. A
     * Client VPN endpoint can have up to two DNS servers.</p>
     */
    inline void SetDnsServers(const DnsServersOptionsModifyStructure& value) { m_dnsServersHasBeenSet = true; m_dnsServers = value; }

    /**
     * <p>Information about the DNS servers to be used by Client VPN connections. A
     * Client VPN endpoint can have up to two DNS servers.</p>
     */
    inline void SetDnsServers(DnsServersOptionsModifyStructure&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::move(value); }

    /**
     * <p>Information about the DNS servers to be used by Client VPN connections. A
     * Client VPN endpoint can have up to two DNS servers.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithDnsServers(const DnsServersOptionsModifyStructure& value) { SetDnsServers(value); return *this;}

    /**
     * <p>Information about the DNS servers to be used by Client VPN connections. A
     * Client VPN endpoint can have up to two DNS servers.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithDnsServers(DnsServersOptionsModifyStructure&& value) { SetDnsServers(std::move(value)); return *this;}


    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the Client VPN endpoint.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyClientVpnEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    Aws::String m_serverCertificateArn;
    bool m_serverCertificateArnHasBeenSet;

    ConnectionLogOptions m_connectionLogOptions;
    bool m_connectionLogOptionsHasBeenSet;

    DnsServersOptionsModifyStructure m_dnsServers;
    bool m_dnsServersHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
