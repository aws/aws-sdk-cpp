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
  class AWS_EC2_API ModifyVpnConnectionRequest : public EC2Request
  {
  public:
    ModifyVpnConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpnConnection"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }

    
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }

    
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }

    
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::move(value); }

    
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }

    
    inline ModifyVpnConnectionRequest& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}

    
    inline ModifyVpnConnectionRequest& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}

    
    inline ModifyVpnConnectionRequest& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}


    
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    
    inline ModifyVpnConnectionRequest& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    
    inline ModifyVpnConnectionRequest& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    
    inline ModifyVpnConnectionRequest& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }

    
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }

    
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::move(value); }

    
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }

    
    inline ModifyVpnConnectionRequest& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}

    
    inline ModifyVpnConnectionRequest& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}

    
    inline ModifyVpnConnectionRequest& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}


    
    inline bool GetDryRun() const{ return m_dryRun; }

    
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    
    inline ModifyVpnConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
