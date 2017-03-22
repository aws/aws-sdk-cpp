/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to theHostedConnection operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateHostedConnectionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API AllocateHostedConnectionRequest : public DirectConnectRequest
  {
  public:
    AllocateHostedConnectionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the interconnect or LAG on which the connection will be
     * provisioned.</p> <p>Example: dxcon-456abc78 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the interconnect or LAG on which the connection will be
     * provisioned.</p> <p>Example: dxcon-456abc78 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the interconnect or LAG on which the connection will be
     * provisioned.</p> <p>Example: dxcon-456abc78 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the interconnect or LAG on which the connection will be
     * provisioned.</p> <p>Example: dxcon-456abc78 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the interconnect or LAG on which the connection will be
     * provisioned.</p> <p>Example: dxcon-456abc78 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the interconnect or LAG on which the connection will be
     * provisioned.</p> <p>Example: dxcon-456abc78 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the interconnect or LAG on which the connection will be
     * provisioned.</p> <p>Example: dxcon-456abc78 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    /**
     * <p>The numeric account ID of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The numeric account ID of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The numeric account ID of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The numeric account ID of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The numeric account ID of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline AllocateHostedConnectionRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The numeric account ID of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline AllocateHostedConnectionRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The numeric account ID of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline AllocateHostedConnectionRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The bandwidth of the connection.</p> <p>Example: <code>500Mbps</code> </p>
     * <p>Default: None</p> <p>Values: 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or
     * 500Mbps</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>The bandwidth of the connection.</p> <p>Example: <code>500Mbps</code> </p>
     * <p>Default: None</p> <p>Values: 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or
     * 500Mbps</p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>The bandwidth of the connection.</p> <p>Example: <code>500Mbps</code> </p>
     * <p>Default: None</p> <p>Values: 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or
     * 500Mbps</p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>The bandwidth of the connection.</p> <p>Example: <code>500Mbps</code> </p>
     * <p>Default: None</p> <p>Values: 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or
     * 500Mbps</p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidthHasBeenSet = true; m_bandwidth.assign(value); }

    /**
     * <p>The bandwidth of the connection.</p> <p>Example: <code>500Mbps</code> </p>
     * <p>Default: None</p> <p>Values: 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or
     * 500Mbps</p>
     */
    inline AllocateHostedConnectionRequest& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>The bandwidth of the connection.</p> <p>Example: <code>500Mbps</code> </p>
     * <p>Default: None</p> <p>Values: 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or
     * 500Mbps</p>
     */
    inline AllocateHostedConnectionRequest& WithBandwidth(Aws::String&& value) { SetBandwidth(value); return *this;}

    /**
     * <p>The bandwidth of the connection.</p> <p>Example: <code>500Mbps</code> </p>
     * <p>Default: None</p> <p>Values: 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, or
     * 500Mbps</p>
     */
    inline AllocateHostedConnectionRequest& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}

    /**
     * <p>The name of the provisioned connection.</p> <p>Example: "<code>500M
     * Connection to AWS</code>"</p> <p>Default: None</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the provisioned connection.</p> <p>Example: "<code>500M
     * Connection to AWS</code>"</p> <p>Default: None</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the provisioned connection.</p> <p>Example: "<code>500M
     * Connection to AWS</code>"</p> <p>Default: None</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the provisioned connection.</p> <p>Example: "<code>500M
     * Connection to AWS</code>"</p> <p>Default: None</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the provisioned connection.</p> <p>Example: "<code>500M
     * Connection to AWS</code>"</p> <p>Default: None</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the provisioned connection.</p> <p>Example: "<code>500M
     * Connection to AWS</code>"</p> <p>Default: None</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the provisioned connection.</p> <p>Example: "<code>500M
     * Connection to AWS</code>"</p> <p>Default: None</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}

    /**
     * <p>The dedicated VLAN provisioned to the hosted connection.</p> <p>Example:
     * 101</p> <p>Default: None</p>
     */
    inline int GetVlan() const{ return m_vlan; }

    /**
     * <p>The dedicated VLAN provisioned to the hosted connection.</p> <p>Example:
     * 101</p> <p>Default: None</p>
     */
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    /**
     * <p>The dedicated VLAN provisioned to the hosted connection.</p> <p>Example:
     * 101</p> <p>Default: None</p>
     */
    inline AllocateHostedConnectionRequest& WithVlan(int value) { SetVlan(value); return *this;}

  private:
    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;
    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;
    Aws::String m_bandwidth;
    bool m_bandwidthHasBeenSet;
    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;
    int m_vlan;
    bool m_vlanHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
