/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpcEndpointServiceConfigurationRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcEndpointServiceConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpointServiceConfiguration"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifyVpcEndpointServiceConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const { return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    template<typename PrivateDnsNameT = Aws::String>
    void SetPrivateDnsName(PrivateDnsNameT&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::forward<PrivateDnsNameT>(value); }
    template<typename PrivateDnsNameT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(PrivateDnsNameT&& value) { SetPrivateDnsName(std::forward<PrivateDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint configuration) Removes the private DNS name of the
     * endpoint service.</p>
     */
    inline bool GetRemovePrivateDnsName() const { return m_removePrivateDnsName; }
    inline bool RemovePrivateDnsNameHasBeenSet() const { return m_removePrivateDnsNameHasBeenSet; }
    inline void SetRemovePrivateDnsName(bool value) { m_removePrivateDnsNameHasBeenSet = true; m_removePrivateDnsName = value; }
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemovePrivateDnsName(bool value) { SetRemovePrivateDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether requests to create an endpoint to the service must be
     * accepted.</p>
     */
    inline bool GetAcceptanceRequired() const { return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to the
     * service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddNetworkLoadBalancerArns() const { return m_addNetworkLoadBalancerArns; }
    inline bool AddNetworkLoadBalancerArnsHasBeenSet() const { return m_addNetworkLoadBalancerArnsHasBeenSet; }
    template<typename AddNetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetAddNetworkLoadBalancerArns(AddNetworkLoadBalancerArnsT&& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns = std::forward<AddNetworkLoadBalancerArnsT>(value); }
    template<typename AddNetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServiceConfigurationRequest& WithAddNetworkLoadBalancerArns(AddNetworkLoadBalancerArnsT&& value) { SetAddNetworkLoadBalancerArns(std::forward<AddNetworkLoadBalancerArnsT>(value)); return *this;}
    template<typename AddNetworkLoadBalancerArnsT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& AddAddNetworkLoadBalancerArns(AddNetworkLoadBalancerArnsT&& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns.emplace_back(std::forward<AddNetworkLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from the
     * service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveNetworkLoadBalancerArns() const { return m_removeNetworkLoadBalancerArns; }
    inline bool RemoveNetworkLoadBalancerArnsHasBeenSet() const { return m_removeNetworkLoadBalancerArnsHasBeenSet; }
    template<typename RemoveNetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetRemoveNetworkLoadBalancerArns(RemoveNetworkLoadBalancerArnsT&& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns = std::forward<RemoveNetworkLoadBalancerArnsT>(value); }
    template<typename RemoveNetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServiceConfigurationRequest& WithRemoveNetworkLoadBalancerArns(RemoveNetworkLoadBalancerArnsT&& value) { SetRemoveNetworkLoadBalancerArns(std::forward<RemoveNetworkLoadBalancerArnsT>(value)); return *this;}
    template<typename RemoveNetworkLoadBalancerArnsT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& AddRemoveNetworkLoadBalancerArns(RemoveNetworkLoadBalancerArnsT&& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns.emplace_back(std::forward<RemoveNetworkLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to the
     * service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddGatewayLoadBalancerArns() const { return m_addGatewayLoadBalancerArns; }
    inline bool AddGatewayLoadBalancerArnsHasBeenSet() const { return m_addGatewayLoadBalancerArnsHasBeenSet; }
    template<typename AddGatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetAddGatewayLoadBalancerArns(AddGatewayLoadBalancerArnsT&& value) { m_addGatewayLoadBalancerArnsHasBeenSet = true; m_addGatewayLoadBalancerArns = std::forward<AddGatewayLoadBalancerArnsT>(value); }
    template<typename AddGatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServiceConfigurationRequest& WithAddGatewayLoadBalancerArns(AddGatewayLoadBalancerArnsT&& value) { SetAddGatewayLoadBalancerArns(std::forward<AddGatewayLoadBalancerArnsT>(value)); return *this;}
    template<typename AddGatewayLoadBalancerArnsT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& AddAddGatewayLoadBalancerArns(AddGatewayLoadBalancerArnsT&& value) { m_addGatewayLoadBalancerArnsHasBeenSet = true; m_addGatewayLoadBalancerArns.emplace_back(std::forward<AddGatewayLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from the
     * service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveGatewayLoadBalancerArns() const { return m_removeGatewayLoadBalancerArns; }
    inline bool RemoveGatewayLoadBalancerArnsHasBeenSet() const { return m_removeGatewayLoadBalancerArnsHasBeenSet; }
    template<typename RemoveGatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetRemoveGatewayLoadBalancerArns(RemoveGatewayLoadBalancerArnsT&& value) { m_removeGatewayLoadBalancerArnsHasBeenSet = true; m_removeGatewayLoadBalancerArns = std::forward<RemoveGatewayLoadBalancerArnsT>(value); }
    template<typename RemoveGatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServiceConfigurationRequest& WithRemoveGatewayLoadBalancerArns(RemoveGatewayLoadBalancerArnsT&& value) { SetRemoveGatewayLoadBalancerArns(std::forward<RemoveGatewayLoadBalancerArnsT>(value)); return *this;}
    template<typename RemoveGatewayLoadBalancerArnsT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& AddRemoveGatewayLoadBalancerArns(RemoveGatewayLoadBalancerArnsT&& value) { m_removeGatewayLoadBalancerArnsHasBeenSet = true; m_removeGatewayLoadBalancerArns.emplace_back(std::forward<RemoveGatewayLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address types to add to the service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSupportedIpAddressTypes() const { return m_addSupportedIpAddressTypes; }
    inline bool AddSupportedIpAddressTypesHasBeenSet() const { return m_addSupportedIpAddressTypesHasBeenSet; }
    template<typename AddSupportedIpAddressTypesT = Aws::Vector<Aws::String>>
    void SetAddSupportedIpAddressTypes(AddSupportedIpAddressTypesT&& value) { m_addSupportedIpAddressTypesHasBeenSet = true; m_addSupportedIpAddressTypes = std::forward<AddSupportedIpAddressTypesT>(value); }
    template<typename AddSupportedIpAddressTypesT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServiceConfigurationRequest& WithAddSupportedIpAddressTypes(AddSupportedIpAddressTypesT&& value) { SetAddSupportedIpAddressTypes(std::forward<AddSupportedIpAddressTypesT>(value)); return *this;}
    template<typename AddSupportedIpAddressTypesT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& AddAddSupportedIpAddressTypes(AddSupportedIpAddressTypesT&& value) { m_addSupportedIpAddressTypesHasBeenSet = true; m_addSupportedIpAddressTypes.emplace_back(std::forward<AddSupportedIpAddressTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address types to remove from the service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSupportedIpAddressTypes() const { return m_removeSupportedIpAddressTypes; }
    inline bool RemoveSupportedIpAddressTypesHasBeenSet() const { return m_removeSupportedIpAddressTypesHasBeenSet; }
    template<typename RemoveSupportedIpAddressTypesT = Aws::Vector<Aws::String>>
    void SetRemoveSupportedIpAddressTypes(RemoveSupportedIpAddressTypesT&& value) { m_removeSupportedIpAddressTypesHasBeenSet = true; m_removeSupportedIpAddressTypes = std::forward<RemoveSupportedIpAddressTypesT>(value); }
    template<typename RemoveSupportedIpAddressTypesT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServiceConfigurationRequest& WithRemoveSupportedIpAddressTypes(RemoveSupportedIpAddressTypesT&& value) { SetRemoveSupportedIpAddressTypes(std::forward<RemoveSupportedIpAddressTypesT>(value)); return *this;}
    template<typename RemoveSupportedIpAddressTypesT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& AddRemoveSupportedIpAddressTypes(RemoveSupportedIpAddressTypesT&& value) { m_removeSupportedIpAddressTypesHasBeenSet = true; m_removeSupportedIpAddressTypes.emplace_back(std::forward<RemoveSupportedIpAddressTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported Regions to add to the service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSupportedRegions() const { return m_addSupportedRegions; }
    inline bool AddSupportedRegionsHasBeenSet() const { return m_addSupportedRegionsHasBeenSet; }
    template<typename AddSupportedRegionsT = Aws::Vector<Aws::String>>
    void SetAddSupportedRegions(AddSupportedRegionsT&& value) { m_addSupportedRegionsHasBeenSet = true; m_addSupportedRegions = std::forward<AddSupportedRegionsT>(value); }
    template<typename AddSupportedRegionsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServiceConfigurationRequest& WithAddSupportedRegions(AddSupportedRegionsT&& value) { SetAddSupportedRegions(std::forward<AddSupportedRegionsT>(value)); return *this;}
    template<typename AddSupportedRegionsT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& AddAddSupportedRegions(AddSupportedRegionsT&& value) { m_addSupportedRegionsHasBeenSet = true; m_addSupportedRegions.emplace_back(std::forward<AddSupportedRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported Regions to remove from the service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSupportedRegions() const { return m_removeSupportedRegions; }
    inline bool RemoveSupportedRegionsHasBeenSet() const { return m_removeSupportedRegionsHasBeenSet; }
    template<typename RemoveSupportedRegionsT = Aws::Vector<Aws::String>>
    void SetRemoveSupportedRegions(RemoveSupportedRegionsT&& value) { m_removeSupportedRegionsHasBeenSet = true; m_removeSupportedRegions = std::forward<RemoveSupportedRegionsT>(value); }
    template<typename RemoveSupportedRegionsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointServiceConfigurationRequest& WithRemoveSupportedRegions(RemoveSupportedRegionsT&& value) { SetRemoveSupportedRegions(std::forward<RemoveSupportedRegionsT>(value)); return *this;}
    template<typename RemoveSupportedRegionsT = Aws::String>
    ModifyVpcEndpointServiceConfigurationRequest& AddRemoveSupportedRegions(RemoveSupportedRegionsT&& value) { m_removeSupportedRegionsHasBeenSet = true; m_removeSupportedRegions.emplace_back(std::forward<RemoveSupportedRegionsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    bool m_removePrivateDnsName{false};
    bool m_removePrivateDnsNameHasBeenSet = false;

    bool m_acceptanceRequired{false};
    bool m_acceptanceRequiredHasBeenSet = false;

    Aws::Vector<Aws::String> m_addNetworkLoadBalancerArns;
    bool m_addNetworkLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeNetworkLoadBalancerArns;
    bool m_removeNetworkLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_addGatewayLoadBalancerArns;
    bool m_addGatewayLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeGatewayLoadBalancerArns;
    bool m_removeGatewayLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSupportedIpAddressTypes;
    bool m_addSupportedIpAddressTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSupportedIpAddressTypes;
    bool m_removeSupportedIpAddressTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSupportedRegions;
    bool m_addSupportedRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSupportedRegions;
    bool m_removeSupportedRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
