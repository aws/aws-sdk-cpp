/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ModifyVpnConnectionRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpnConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpnConnection"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const { return m_vpnConnectionId; }
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }
    template<typename VpnConnectionIdT = Aws::String>
    void SetVpnConnectionId(VpnConnectionIdT&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::forward<VpnConnectionIdT>(value); }
    template<typename VpnConnectionIdT = Aws::String>
    ModifyVpnConnectionRequest& WithVpnConnectionId(VpnConnectionIdT&& value) { SetVpnConnectionId(std::forward<VpnConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    ModifyVpnConnectionRequest& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const { return m_customerGatewayId; }
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }
    template<typename CustomerGatewayIdT = Aws::String>
    void SetCustomerGatewayId(CustomerGatewayIdT&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::forward<CustomerGatewayIdT>(value); }
    template<typename CustomerGatewayIdT = Aws::String>
    ModifyVpnConnectionRequest& WithCustomerGatewayId(CustomerGatewayIdT&& value) { SetCustomerGatewayId(std::forward<CustomerGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const { return m_vpnGatewayId; }
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }
    template<typename VpnGatewayIdT = Aws::String>
    void SetVpnGatewayId(VpnGatewayIdT&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::forward<VpnGatewayIdT>(value); }
    template<typename VpnGatewayIdT = Aws::String>
    ModifyVpnConnectionRequest& WithVpnGatewayId(VpnGatewayIdT&& value) { SetVpnGatewayId(std::forward<VpnGatewayIdT>(value)); return *this;}
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
    inline ModifyVpnConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
