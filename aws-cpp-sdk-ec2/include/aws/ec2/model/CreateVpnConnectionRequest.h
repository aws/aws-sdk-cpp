﻿/*
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpnConnectionOptionsSpecification.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateVpnConnection.</p>
   */
  class AWS_EC2_API CreateVpnConnectionRequest : public EC2Request
  {
  public:
    CreateVpnConnectionRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateVpnConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline CreateVpnConnectionRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline CreateVpnConnectionRequest& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline CreateVpnConnectionRequest& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline void SetCustomerGatewayId(const char* value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId.assign(value); }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithCustomerGatewayId(const Aws::String& value) { SetCustomerGatewayId(value); return *this;}

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(value); return *this;}

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>Indicates whether the VPN connection requires static routes. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>.</p> <p>Default: <code>false</code></p>
     */
    inline const VpnConnectionOptionsSpecification& GetOptions() const{ return m_options; }

    /**
     * <p>Indicates whether the VPN connection requires static routes. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>.</p> <p>Default: <code>false</code></p>
     */
    inline void SetOptions(const VpnConnectionOptionsSpecification& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Indicates whether the VPN connection requires static routes. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>.</p> <p>Default: <code>false</code></p>
     */
    inline void SetOptions(VpnConnectionOptionsSpecification&& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Indicates whether the VPN connection requires static routes. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>.</p> <p>Default: <code>false</code></p>
     */
    inline CreateVpnConnectionRequest& WithOptions(const VpnConnectionOptionsSpecification& value) { SetOptions(value); return *this;}

    /**
     * <p>Indicates whether the VPN connection requires static routes. If you are
     * creating a VPN connection for a device that does not support BGP, you must
     * specify <code>true</code>.</p> <p>Default: <code>false</code></p>
     */
    inline CreateVpnConnectionRequest& WithOptions(VpnConnectionOptionsSpecification&& value) { SetOptions(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_type;
    bool m_typeHasBeenSet;
    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet;
    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet;
    VpnConnectionOptionsSpecification m_options;
    bool m_optionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
