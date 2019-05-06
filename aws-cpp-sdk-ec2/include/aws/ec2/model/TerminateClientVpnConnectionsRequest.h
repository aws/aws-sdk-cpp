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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API TerminateClientVpnConnectionsRequest : public EC2Request
  {
  public:
    TerminateClientVpnConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateClientVpnConnections"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The ID of the client connection to be terminated.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the client connection to be terminated.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the client connection to be terminated.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the client connection to be terminated.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the client connection to be terminated.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the client connection to be terminated.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the client connection to be terminated.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client connection to be terminated.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The name of the user who initiated the connection. Use this option to
     * terminate all active connections for the specified user. This option can only be
     * used if the user has established up to five connections.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The name of the user who initiated the connection. Use this option to
     * terminate all active connections for the specified user. This option can only be
     * used if the user has established up to five connections.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The name of the user who initiated the connection. Use this option to
     * terminate all active connections for the specified user. This option can only be
     * used if the user has established up to five connections.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The name of the user who initiated the connection. Use this option to
     * terminate all active connections for the specified user. This option can only be
     * used if the user has established up to five connections.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The name of the user who initiated the connection. Use this option to
     * terminate all active connections for the specified user. This option can only be
     * used if the user has established up to five connections.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The name of the user who initiated the connection. Use this option to
     * terminate all active connections for the specified user. This option can only be
     * used if the user has established up to five connections.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The name of the user who initiated the connection. Use this option to
     * terminate all active connections for the specified user. This option can only be
     * used if the user has established up to five connections.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the user who initiated the connection. Use this option to
     * terminate all active connections for the specified user. This option can only be
     * used if the user has established up to five connections.</p>
     */
    inline TerminateClientVpnConnectionsRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


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
    inline TerminateClientVpnConnectionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
