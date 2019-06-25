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
#include <aws/ec2/model/VpnConnectionOptionsSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateVpnConnection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnectionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateVpnConnectionRequest : public EC2Request
  {
  public:
    CreateVpnConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpnConnection"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::move(value); }

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
    inline CreateVpnConnectionRequest& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}


    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

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
    inline CreateVpnConnectionRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline CreateVpnConnectionRequest& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }

    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}


    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline CreateVpnConnectionRequest& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


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
    inline CreateVpnConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The options for the VPN connection.</p>
     */
    inline const VpnConnectionOptionsSpecification& GetOptions() const{ return m_options; }

    /**
     * <p>The options for the VPN connection.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The options for the VPN connection.</p>
     */
    inline void SetOptions(const VpnConnectionOptionsSpecification& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The options for the VPN connection.</p>
     */
    inline void SetOptions(VpnConnectionOptionsSpecification&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The options for the VPN connection.</p>
     */
    inline CreateVpnConnectionRequest& WithOptions(const VpnConnectionOptionsSpecification& value) { SetOptions(value); return *this;}

    /**
     * <p>The options for the VPN connection.</p>
     */
    inline CreateVpnConnectionRequest& WithOptions(VpnConnectionOptionsSpecification&& value) { SetOptions(std::move(value)); return *this;}

  private:

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    VpnConnectionOptionsSpecification m_options;
    bool m_optionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
