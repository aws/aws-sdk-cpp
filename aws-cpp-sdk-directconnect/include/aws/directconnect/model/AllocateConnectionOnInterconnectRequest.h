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
   * <p>Container for the parameters to the AllocateConnectionOnInterconnect
   * operation.</p>
   */
  class AWS_DIRECTCONNECT_API AllocateConnectionOnInterconnectRequest : public DirectConnectRequest
  {
  public:
    AllocateConnectionOnInterconnectRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: "<i>500Mbps</i>"</p> <p>Default:
     * None</p> <p>Values: 50M, 100M, 200M, 300M, 400M, or 500M</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: "<i>500Mbps</i>"</p> <p>Default:
     * None</p> <p>Values: 50M, 100M, 200M, 300M, 400M, or 500M</p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: "<i>500Mbps</i>"</p> <p>Default:
     * None</p> <p>Values: 50M, 100M, 200M, 300M, 400M, or 500M</p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: "<i>500Mbps</i>"</p> <p>Default:
     * None</p> <p>Values: 50M, 100M, 200M, 300M, 400M, or 500M</p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidthHasBeenSet = true; m_bandwidth.assign(value); }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: "<i>500Mbps</i>"</p> <p>Default:
     * None</p> <p>Values: 50M, 100M, 200M, 300M, 400M, or 500M</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: "<i>500Mbps</i>"</p> <p>Default:
     * None</p> <p>Values: 50M, 100M, 200M, 300M, 400M, or 500M</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithBandwidth(Aws::String&& value) { SetBandwidth(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: "<i>500Mbps</i>"</p> <p>Default:
     * None</p> <p>Values: 50M, 100M, 200M, 300M, 400M, or 500M</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}

    /**
     * <p>Name of the provisioned connection.</p> <p>Example: "<i>500M Connection to
     * AWS</i>"</p> <p>Default: None</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>Name of the provisioned connection.</p> <p>Example: "<i>500M Connection to
     * AWS</i>"</p> <p>Default: None</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>Name of the provisioned connection.</p> <p>Example: "<i>500M Connection to
     * AWS</i>"</p> <p>Default: None</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>Name of the provisioned connection.</p> <p>Example: "<i>500M Connection to
     * AWS</i>"</p> <p>Default: None</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>Name of the provisioned connection.</p> <p>Example: "<i>500M Connection to
     * AWS</i>"</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>Name of the provisioned connection.</p> <p>Example: "<i>500M Connection to
     * AWS</i>"</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(value); return *this;}

    /**
     * <p>Name of the provisioned connection.</p> <p>Example: "<i>500M Connection to
     * AWS</i>"</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}

    /**
     * <p>Numeric account Id of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>Numeric account Id of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>Numeric account Id of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>Numeric account Id of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>Numeric account Id of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>Numeric account Id of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>Numeric account Id of the customer for whom the connection will be
     * provisioned.</p> <p>Example: 123443215678</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>ID of the interconnect on which the connection will be provisioned.</p>
     * <p>Example: dxcon-456abc78</p> <p>Default: None</p>
     */
    inline const Aws::String& GetInterconnectId() const{ return m_interconnectId; }

    /**
     * <p>ID of the interconnect on which the connection will be provisioned.</p>
     * <p>Example: dxcon-456abc78</p> <p>Default: None</p>
     */
    inline void SetInterconnectId(const Aws::String& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = value; }

    /**
     * <p>ID of the interconnect on which the connection will be provisioned.</p>
     * <p>Example: dxcon-456abc78</p> <p>Default: None</p>
     */
    inline void SetInterconnectId(Aws::String&& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = value; }

    /**
     * <p>ID of the interconnect on which the connection will be provisioned.</p>
     * <p>Example: dxcon-456abc78</p> <p>Default: None</p>
     */
    inline void SetInterconnectId(const char* value) { m_interconnectIdHasBeenSet = true; m_interconnectId.assign(value); }

    /**
     * <p>ID of the interconnect on which the connection will be provisioned.</p>
     * <p>Example: dxcon-456abc78</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithInterconnectId(const Aws::String& value) { SetInterconnectId(value); return *this;}

    /**
     * <p>ID of the interconnect on which the connection will be provisioned.</p>
     * <p>Example: dxcon-456abc78</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithInterconnectId(Aws::String&& value) { SetInterconnectId(value); return *this;}

    /**
     * <p>ID of the interconnect on which the connection will be provisioned.</p>
     * <p>Example: dxcon-456abc78</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithInterconnectId(const char* value) { SetInterconnectId(value); return *this;}

    /**
     * <p>The dedicated VLAN provisioned to the connection.</p> <p>Example: 101</p>
     * <p>Default: None</p>
     */
    inline int GetVlan() const{ return m_vlan; }

    /**
     * <p>The dedicated VLAN provisioned to the connection.</p> <p>Example: 101</p>
     * <p>Default: None</p>
     */
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    /**
     * <p>The dedicated VLAN provisioned to the connection.</p> <p>Example: 101</p>
     * <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectRequest& WithVlan(int value) { SetVlan(value); return *this;}

  private:
    Aws::String m_bandwidth;
    bool m_bandwidthHasBeenSet;
    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;
    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;
    Aws::String m_interconnectId;
    bool m_interconnectIdHasBeenSet;
    int m_vlan;
    bool m_vlanHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
