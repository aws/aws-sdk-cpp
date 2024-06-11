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
    AWS_EC2_API ModifyVpcEndpointRequest();

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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVpcEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline ModifyVpcEndpointRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline ModifyVpcEndpointRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) Specify <code>true</code> to reset the policy document to
     * the default policy. The default policy allows full access to the service.</p>
     */
    inline bool GetResetPolicy() const{ return m_resetPolicy; }
    inline bool ResetPolicyHasBeenSet() const { return m_resetPolicyHasBeenSet; }
    inline void SetResetPolicy(bool value) { m_resetPolicyHasBeenSet = true; m_resetPolicy = value; }
    inline ModifyVpcEndpointRequest& WithResetPolicy(bool value) { SetResetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface and gateway endpoints) A policy to attach to the endpoint that
     * controls access to the service. The policy must be in valid JSON format.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }
    inline ModifyVpcEndpointRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline ModifyVpcEndpointRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) The IDs of the route tables to associate with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddRouteTableIds() const{ return m_addRouteTableIds; }
    inline bool AddRouteTableIdsHasBeenSet() const { return m_addRouteTableIdsHasBeenSet; }
    inline void SetAddRouteTableIds(const Aws::Vector<Aws::String>& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = value; }
    inline void SetAddRouteTableIds(Aws::Vector<Aws::String>&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = std::move(value); }
    inline ModifyVpcEndpointRequest& WithAddRouteTableIds(const Aws::Vector<Aws::String>& value) { SetAddRouteTableIds(value); return *this;}
    inline ModifyVpcEndpointRequest& WithAddRouteTableIds(Aws::Vector<Aws::String>&& value) { SetAddRouteTableIds(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(const Aws::String& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(Aws::String&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(std::move(value)); return *this; }
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(const char* value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) The IDs of the route tables to disassociate from the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveRouteTableIds() const{ return m_removeRouteTableIds; }
    inline bool RemoveRouteTableIdsHasBeenSet() const { return m_removeRouteTableIdsHasBeenSet; }
    inline void SetRemoveRouteTableIds(const Aws::Vector<Aws::String>& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = value; }
    inline void SetRemoveRouteTableIds(Aws::Vector<Aws::String>&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = std::move(value); }
    inline ModifyVpcEndpointRequest& WithRemoveRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRemoveRouteTableIds(value); return *this;}
    inline ModifyVpcEndpointRequest& WithRemoveRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRemoveRouteTableIds(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(const Aws::String& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(Aws::String&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(std::move(value)); return *this; }
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(const char* value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface and Gateway Load Balancer endpoints) The IDs of the subnets in
     * which to serve the endpoint. For a Gateway Load Balancer endpoint, you can
     * specify only one subnet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetIds() const{ return m_addSubnetIds; }
    inline bool AddSubnetIdsHasBeenSet() const { return m_addSubnetIdsHasBeenSet; }
    inline void SetAddSubnetIds(const Aws::Vector<Aws::String>& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = value; }
    inline void SetAddSubnetIds(Aws::Vector<Aws::String>&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = std::move(value); }
    inline ModifyVpcEndpointRequest& WithAddSubnetIds(const Aws::Vector<Aws::String>& value) { SetAddSubnetIds(value); return *this;}
    inline ModifyVpcEndpointRequest& WithAddSubnetIds(Aws::Vector<Aws::String>&& value) { SetAddSubnetIds(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& AddAddSubnetIds(const Aws::String& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }
    inline ModifyVpcEndpointRequest& AddAddSubnetIds(Aws::String&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(std::move(value)); return *this; }
    inline ModifyVpcEndpointRequest& AddAddSubnetIds(const char* value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The IDs of the subnets from which to remove the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetIds() const{ return m_removeSubnetIds; }
    inline bool RemoveSubnetIdsHasBeenSet() const { return m_removeSubnetIdsHasBeenSet; }
    inline void SetRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = value; }
    inline void SetRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = std::move(value); }
    inline ModifyVpcEndpointRequest& WithRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { SetRemoveSubnetIds(value); return *this;}
    inline ModifyVpcEndpointRequest& WithRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { SetRemoveSubnetIds(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& AddRemoveSubnetIds(const Aws::String& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }
    inline ModifyVpcEndpointRequest& AddRemoveSubnetIds(Aws::String&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(std::move(value)); return *this; }
    inline ModifyVpcEndpointRequest& AddRemoveSubnetIds(const char* value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The IDs of the security groups to associate with the
     * endpoint network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSecurityGroupIds() const{ return m_addSecurityGroupIds; }
    inline bool AddSecurityGroupIdsHasBeenSet() const { return m_addSecurityGroupIdsHasBeenSet; }
    inline void SetAddSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds = value; }
    inline void SetAddSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds = std::move(value); }
    inline ModifyVpcEndpointRequest& WithAddSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetAddSecurityGroupIds(value); return *this;}
    inline ModifyVpcEndpointRequest& WithAddSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetAddSecurityGroupIds(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& AddAddSecurityGroupIds(const Aws::String& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(value); return *this; }
    inline ModifyVpcEndpointRequest& AddAddSecurityGroupIds(Aws::String&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyVpcEndpointRequest& AddAddSecurityGroupIds(const char* value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The IDs of the security groups to disassociate from the
     * endpoint network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSecurityGroupIds() const{ return m_removeSecurityGroupIds; }
    inline bool RemoveSecurityGroupIdsHasBeenSet() const { return m_removeSecurityGroupIdsHasBeenSet; }
    inline void SetRemoveSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds = value; }
    inline void SetRemoveSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds = std::move(value); }
    inline ModifyVpcEndpointRequest& WithRemoveSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetRemoveSecurityGroupIds(value); return *this;}
    inline ModifyVpcEndpointRequest& WithRemoveSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetRemoveSecurityGroupIds(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& AddRemoveSecurityGroupIds(const Aws::String& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(value); return *this; }
    inline ModifyVpcEndpointRequest& AddRemoveSecurityGroupIds(Aws::String&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyVpcEndpointRequest& AddRemoveSecurityGroupIds(const char* value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline ModifyVpcEndpointRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline ModifyVpcEndpointRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline const DnsOptionsSpecification& GetDnsOptions() const{ return m_dnsOptions; }
    inline bool DnsOptionsHasBeenSet() const { return m_dnsOptionsHasBeenSet; }
    inline void SetDnsOptions(const DnsOptionsSpecification& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = value; }
    inline void SetDnsOptions(DnsOptionsSpecification&& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = std::move(value); }
    inline ModifyVpcEndpointRequest& WithDnsOptions(const DnsOptionsSpecification& value) { SetDnsOptions(value); return *this;}
    inline ModifyVpcEndpointRequest& WithDnsOptions(DnsOptionsSpecification&& value) { SetDnsOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) Indicates whether a private hosted zone is associated
     * with the VPC.</p>
     */
    inline bool GetPrivateDnsEnabled() const{ return m_privateDnsEnabled; }
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }
    inline ModifyVpcEndpointRequest& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet configurations for the endpoint.</p>
     */
    inline const Aws::Vector<SubnetConfiguration>& GetSubnetConfigurations() const{ return m_subnetConfigurations; }
    inline bool SubnetConfigurationsHasBeenSet() const { return m_subnetConfigurationsHasBeenSet; }
    inline void SetSubnetConfigurations(const Aws::Vector<SubnetConfiguration>& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations = value; }
    inline void SetSubnetConfigurations(Aws::Vector<SubnetConfiguration>&& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations = std::move(value); }
    inline ModifyVpcEndpointRequest& WithSubnetConfigurations(const Aws::Vector<SubnetConfiguration>& value) { SetSubnetConfigurations(value); return *this;}
    inline ModifyVpcEndpointRequest& WithSubnetConfigurations(Aws::Vector<SubnetConfiguration>&& value) { SetSubnetConfigurations(std::move(value)); return *this;}
    inline ModifyVpcEndpointRequest& AddSubnetConfigurations(const SubnetConfiguration& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations.push_back(value); return *this; }
    inline ModifyVpcEndpointRequest& AddSubnetConfigurations(SubnetConfiguration&& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    bool m_resetPolicy;
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

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    DnsOptionsSpecification m_dnsOptions;
    bool m_dnsOptionsHasBeenSet = false;

    bool m_privateDnsEnabled;
    bool m_privateDnsEnabledHasBeenSet = false;

    Aws::Vector<SubnetConfiguration> m_subnetConfigurations;
    bool m_subnetConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
