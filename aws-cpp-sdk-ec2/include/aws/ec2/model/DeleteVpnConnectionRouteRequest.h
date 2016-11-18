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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DeleteVpnConnectionRoute.</p>
   */
  class AWS_EC2_API DeleteVpnConnectionRouteRequest : public EC2Request
  {
  public:
    DeleteVpnConnectionRouteRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline DeleteVpnConnectionRouteRequest& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline DeleteVpnConnectionRouteRequest& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline DeleteVpnConnectionRouteRequest& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The CIDR block associated with the local subnet of the customer network.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The CIDR block associated with the local subnet of the customer network.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The CIDR block associated with the local subnet of the customer network.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The CIDR block associated with the local subnet of the customer network.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The CIDR block associated with the local subnet of the customer network.</p>
     */
    inline DeleteVpnConnectionRouteRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The CIDR block associated with the local subnet of the customer network.</p>
     */
    inline DeleteVpnConnectionRouteRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The CIDR block associated with the local subnet of the customer network.</p>
     */
    inline DeleteVpnConnectionRouteRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}

  private:
    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet;
    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
