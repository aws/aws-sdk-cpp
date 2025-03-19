/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpAddressType.h>
#include <aws/ec2/model/DnsOptionsSpecification.h>
#include <aws/ec2/model/SubnetConfiguration.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpcEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpoint"; }

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
    inline ModifyVpcEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    ModifyVpcEndpointRequest& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) Specify <code>true</code> to reset the policy document to
     * the default policy. The default policy allows full access to the service.</p>
     */
    inline bool GetResetPolicy() const { return m_resetPolicy; }
    inline bool ResetPolicyHasBeenSet() const { return m_resetPolicyHasBeenSet; }
    inline void SetResetPolicy(bool value) { m_resetPolicyHasBeenSet = true; m_resetPolicy = value; }
    inline ModifyVpcEndpointRequest& WithResetPolicy(bool value) { SetResetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface and gateway endpoints) A policy to attach to the endpoint that
     * controls access to the service. The policy must be in valid JSON format.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    ModifyVpcEndpointRequest& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) The IDs of the route tables to associate with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddRouteTableIds() const { return m_addRouteTableIds; }
    inline bool AddRouteTableIdsHasBeenSet() const { return m_addRouteTableIdsHasBeenSet; }
    template<typename AddRouteTableIdsT = Aws::Vector<Aws::String>>
    void SetAddRouteTableIds(AddRouteTableIdsT&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = std::forward<AddRouteTableIdsT>(value); }
    template<typename AddRouteTableIdsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointRequest& WithAddRouteTableIds(AddRouteTableIdsT&& value) { SetAddRouteTableIds(std::forward<AddRouteTableIdsT>(value)); return *this;}
    template<typename AddRouteTableIdsT = Aws::String>
    ModifyVpcEndpointRequest& AddAddRouteTableIds(AddRouteTableIdsT&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.emplace_back(std::forward<AddRouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) The IDs of the route tables to disassociate from the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveRouteTableIds() const { return m_removeRouteTableIds; }
    inline bool RemoveRouteTableIdsHasBeenSet() const { return m_removeRouteTableIdsHasBeenSet; }
    template<typename RemoveRouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = std::forward<RemoveRouteTableIdsT>(value); }
    template<typename RemoveRouteTableIdsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointRequest& WithRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { SetRemoveRouteTableIds(std::forward<RemoveRouteTableIdsT>(value)); return *this;}
    template<typename RemoveRouteTableIdsT = Aws::String>
    ModifyVpcEndpointRequest& AddRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.emplace_back(std::forward<RemoveRouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface and Gateway Load Balancer endpoints) The IDs of the subnets in
     * which to serve the endpoint. For a Gateway Load Balancer endpoint, you can
     * specify only one subnet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetIds() const { return m_addSubnetIds; }
    inline bool AddSubnetIdsHasBeenSet() const { return m_addSubnetIdsHasBeenSet; }
    template<typename AddSubnetIdsT = Aws::Vector<Aws::String>>
    void SetAddSubnetIds(AddSubnetIdsT&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = std::forward<AddSubnetIdsT>(value); }
    template<typename AddSubnetIdsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointRequest& WithAddSubnetIds(AddSubnetIdsT&& value) { SetAddSubnetIds(std::forward<AddSubnetIdsT>(value)); return *this;}
    template<typename AddSubnetIdsT = Aws::String>
    ModifyVpcEndpointRequest& AddAddSubnetIds(AddSubnetIdsT&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.emplace_back(std::forward<AddSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The IDs of the subnets from which to remove the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetIds() const { return m_removeSubnetIds; }
    inline bool RemoveSubnetIdsHasBeenSet() const { return m_removeSubnetIdsHasBeenSet; }
    template<typename RemoveSubnetIdsT = Aws::Vector<Aws::String>>
    void SetRemoveSubnetIds(RemoveSubnetIdsT&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = std::forward<RemoveSubnetIdsT>(value); }
    template<typename RemoveSubnetIdsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointRequest& WithRemoveSubnetIds(RemoveSubnetIdsT&& value) { SetRemoveSubnetIds(std::forward<RemoveSubnetIdsT>(value)); return *this;}
    template<typename RemoveSubnetIdsT = Aws::String>
    ModifyVpcEndpointRequest& AddRemoveSubnetIds(RemoveSubnetIdsT&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.emplace_back(std::forward<RemoveSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The IDs of the security groups to associate with the
     * endpoint network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSecurityGroupIds() const { return m_addSecurityGroupIds; }
    inline bool AddSecurityGroupIdsHasBeenSet() const { return m_addSecurityGroupIdsHasBeenSet; }
    template<typename AddSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetAddSecurityGroupIds(AddSecurityGroupIdsT&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds = std::forward<AddSecurityGroupIdsT>(value); }
    template<typename AddSecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointRequest& WithAddSecurityGroupIds(AddSecurityGroupIdsT&& value) { SetAddSecurityGroupIds(std::forward<AddSecurityGroupIdsT>(value)); return *this;}
    template<typename AddSecurityGroupIdsT = Aws::String>
    ModifyVpcEndpointRequest& AddAddSecurityGroupIds(AddSecurityGroupIdsT&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.emplace_back(std::forward<AddSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The IDs of the security groups to disassociate from the
     * endpoint network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSecurityGroupIds() const { return m_removeSecurityGroupIds; }
    inline bool RemoveSecurityGroupIdsHasBeenSet() const { return m_removeSecurityGroupIdsHasBeenSet; }
    template<typename RemoveSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetRemoveSecurityGroupIds(RemoveSecurityGroupIdsT&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds = std::forward<RemoveSecurityGroupIdsT>(value); }
    template<typename RemoveSecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointRequest& WithRemoveSecurityGroupIds(RemoveSecurityGroupIdsT&& value) { SetRemoveSecurityGroupIds(std::forward<RemoveSecurityGroupIdsT>(value)); return *this;}
    template<typename RemoveSecurityGroupIdsT = Aws::String>
    ModifyVpcEndpointRequest& AddRemoveSecurityGroupIds(RemoveSecurityGroupIdsT&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.emplace_back(std::forward<RemoveSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline ModifyVpcEndpointRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline const DnsOptionsSpecification& GetDnsOptions() const { return m_dnsOptions; }
    inline bool DnsOptionsHasBeenSet() const { return m_dnsOptionsHasBeenSet; }
    template<typename DnsOptionsT = DnsOptionsSpecification>
    void SetDnsOptions(DnsOptionsT&& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = std::forward<DnsOptionsT>(value); }
    template<typename DnsOptionsT = DnsOptionsSpecification>
    ModifyVpcEndpointRequest& WithDnsOptions(DnsOptionsT&& value) { SetDnsOptions(std::forward<DnsOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) Indicates whether a private hosted zone is associated
     * with the VPC.</p>
     */
    inline bool GetPrivateDnsEnabled() const { return m_privateDnsEnabled; }
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }
    inline ModifyVpcEndpointRequest& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet configurations for the endpoint.</p>
     */
    inline const Aws::Vector<SubnetConfiguration>& GetSubnetConfigurations() const { return m_subnetConfigurations; }
    inline bool SubnetConfigurationsHasBeenSet() const { return m_subnetConfigurationsHasBeenSet; }
    template<typename SubnetConfigurationsT = Aws::Vector<SubnetConfiguration>>
    void SetSubnetConfigurations(SubnetConfigurationsT&& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations = std::forward<SubnetConfigurationsT>(value); }
    template<typename SubnetConfigurationsT = Aws::Vector<SubnetConfiguration>>
    ModifyVpcEndpointRequest& WithSubnetConfigurations(SubnetConfigurationsT&& value) { SetSubnetConfigurations(std::forward<SubnetConfigurationsT>(value)); return *this;}
    template<typename SubnetConfigurationsT = SubnetConfiguration>
    ModifyVpcEndpointRequest& AddSubnetConfigurations(SubnetConfigurationsT&& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations.emplace_back(std::forward<SubnetConfigurationsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    bool m_resetPolicy{false};
    bool m_resetPolicyHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Vector<Aws::String> m_addRouteTableIds;
    bool m_addRouteTableIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeRouteTableIds;
    bool m_removeRouteTableIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSubnetIds;
    bool m_addSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSubnetIds;
    bool m_removeSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSecurityGroupIds;
    bool m_addSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSecurityGroupIds;
    bool m_removeSecurityGroupIdsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    DnsOptionsSpecification m_dnsOptions;
    bool m_dnsOptionsHasBeenSet = false;

    bool m_privateDnsEnabled{false};
    bool m_privateDnsEnabledHasBeenSet = false;

    Aws::Vector<SubnetConfiguration> m_subnetConfigurations;
    bool m_subnetConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
