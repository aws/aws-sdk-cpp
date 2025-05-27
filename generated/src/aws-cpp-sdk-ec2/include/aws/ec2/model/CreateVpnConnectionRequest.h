/**
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
    AWS_EC2_API CreateVpnConnectionRequest() = default;

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
    inline const Aws::String& GetCustomerGatewayId() const { return m_customerGatewayId; }
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }
    template<typename CustomerGatewayIdT = Aws::String>
    void SetCustomerGatewayId(CustomerGatewayIdT&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::forward<CustomerGatewayIdT>(value); }
    template<typename CustomerGatewayIdT = Aws::String>
    CreateVpnConnectionRequest& WithCustomerGatewayId(CustomerGatewayIdT&& value) { SetCustomerGatewayId(std::forward<CustomerGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection (<code>ipsec.1</code>).</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    CreateVpnConnectionRequest& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway. If you specify a virtual private
     * gateway, you cannot specify a transit gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const { return m_vpnGatewayId; }
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }
    template<typename VpnGatewayIdT = Aws::String>
    void SetVpnGatewayId(VpnGatewayIdT&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::forward<VpnGatewayIdT>(value); }
    template<typename VpnGatewayIdT = Aws::String>
    CreateVpnConnectionRequest& WithVpnGatewayId(VpnGatewayIdT&& value) { SetVpnGatewayId(std::forward<VpnGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway. If you specify a transit gateway, you cannot
     * specify a virtual private gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    CreateVpnConnectionRequest& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the VPN connection.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateVpnConnectionRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateVpnConnectionRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the storage mode for the pre-shared key (PSK). Valid values are
     * <code>Standard</code>" (stored in the Site-to-Site VPN service) or
     * <code>SecretsManager</code> (stored in Amazon Web Services Secrets Manager).</p>
     */
    inline const Aws::String& GetPreSharedKeyStorage() const { return m_preSharedKeyStorage; }
    inline bool PreSharedKeyStorageHasBeenSet() const { return m_preSharedKeyStorageHasBeenSet; }
    template<typename PreSharedKeyStorageT = Aws::String>
    void SetPreSharedKeyStorage(PreSharedKeyStorageT&& value) { m_preSharedKeyStorageHasBeenSet = true; m_preSharedKeyStorage = std::forward<PreSharedKeyStorageT>(value); }
    template<typename PreSharedKeyStorageT = Aws::String>
    CreateVpnConnectionRequest& WithPreSharedKeyStorage(PreSharedKeyStorageT&& value) { SetPreSharedKeyStorage(std::forward<PreSharedKeyStorageT>(value)); return *this;}
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
    inline CreateVpnConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the VPN connection.</p>
     */
    inline const VpnConnectionOptionsSpecification& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = VpnConnectionOptionsSpecification>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = VpnConnectionOptionsSpecification>
    CreateVpnConnectionRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
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

    Aws::String m_preSharedKeyStorage;
    bool m_preSharedKeyStorageHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    VpnConnectionOptionsSpecification m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
