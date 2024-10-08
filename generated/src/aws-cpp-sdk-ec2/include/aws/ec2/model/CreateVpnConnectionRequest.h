﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpnConnectionOptionsSpecification.h>
#include <aws/ec2/model/TagSpecification.h>
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
  class CreateVpnConnectionRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVpnConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpnConnection"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::move(value); }
    inline void SetCustomerGatewayId(const char* value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId.assign(value); }
    inline CreateVpnConnectionRequest& WithCustomerGatewayId(const Aws::String& value) { SetCustomerGatewayId(value); return *this;}
    inline CreateVpnConnectionRequest& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(std::move(value)); return *this;}
    inline CreateVpnConnectionRequest& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline CreateVpnConnectionRequest& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline CreateVpnConnectionRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline CreateVpnConnectionRequest& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::move(value); }
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }
    inline CreateVpnConnectionRequest& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}
    inline CreateVpnConnectionRequest& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}
    inline CreateVpnConnectionRequest& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }
    inline CreateVpnConnectionRequest& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}
    inline CreateVpnConnectionRequest& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}
    inline CreateVpnConnectionRequest& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the VPN connection.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateVpnConnectionRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateVpnConnectionRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateVpnConnectionRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateVpnConnectionRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVpnConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the VPN connection.</p>
     */
    inline const VpnConnectionOptionsSpecification& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const VpnConnectionOptionsSpecification& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(VpnConnectionOptionsSpecification&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline CreateVpnConnectionRequest& WithOptions(const VpnConnectionOptionsSpecification& value) { SetOptions(value); return *this;}
    inline CreateVpnConnectionRequest& WithOptions(VpnConnectionOptionsSpecification&& value) { SetOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    VpnConnectionOptionsSpecification m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
