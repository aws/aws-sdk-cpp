/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/VpcEndpointType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpAddressType.h>
#include <aws/ec2/model/DnsOptionsSpecification.h>
#include <aws/ec2/model/TagSpecification.h>
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
  class CreateVpcEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVpcEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcEndpoint"; }

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
    inline CreateVpcEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint.</p> <p>Default: Gateway</p>
     */
    inline VpcEndpointType GetVpcEndpointType() const { return m_vpcEndpointType; }
    inline bool VpcEndpointTypeHasBeenSet() const { return m_vpcEndpointTypeHasBeenSet; }
    inline void SetVpcEndpointType(VpcEndpointType value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = value; }
    inline CreateVpcEndpointRequest& WithVpcEndpointType(VpcEndpointType value) { SetVpcEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateVpcEndpointRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    CreateVpcEndpointRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface and gateway endpoints) A policy to attach to the endpoint that
     * controls access to the service. The policy must be in valid JSON format. If this
     * parameter is not specified, we attach a default policy that allows full access
     * to the service.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    CreateVpcEndpointRequest& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) The route table IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const { return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::forward<RouteTableIdsT>(value); }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    CreateVpcEndpointRequest& WithRouteTableIds(RouteTableIdsT&& value) { SetRouteTableIds(std::forward<RouteTableIdsT>(value)); return *this;}
    template<typename RouteTableIdsT = Aws::String>
    CreateVpcEndpointRequest& AddRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.emplace_back(std::forward<RouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface and Gateway Load Balancer endpoints) The IDs of the subnets in
     * which to create endpoint network interfaces. For a Gateway Load Balancer
     * endpoint, you can specify only one subnet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateVpcEndpointRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateVpcEndpointRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The IDs of the security groups to associate with the
     * endpoint network interfaces. If this parameter is not specified, we use the
     * default security group for the VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateVpcEndpointRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateVpcEndpointRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateVpcEndpointRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
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
    CreateVpcEndpointRequest& WithDnsOptions(DnsOptionsT&& value) { SetDnsOptions(std::forward<DnsOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateVpcEndpointRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) Indicates whether to associate a private hosted zone
     * with the specified VPC. The private hosted zone contains a record set for the
     * default public DNS name for the service for the Region (for example,
     * <code>kinesis.us-east-1.amazonaws.com</code>), which resolves to the private IP
     * addresses of the endpoint network interfaces in the VPC. This enables you to
     * make requests to the default public DNS name for the service instead of the
     * public DNS names that are automatically generated by the VPC endpoint
     * service.</p> <p>To use a private hosted zone, you must set the following VPC
     * attributes to <code>true</code>: <code>enableDnsHostnames</code> and
     * <code>enableDnsSupport</code>. Use <a>ModifyVpcAttribute</a> to set the VPC
     * attributes.</p>
     */
    inline bool GetPrivateDnsEnabled() const { return m_privateDnsEnabled; }
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }
    inline CreateVpcEndpointRequest& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the endpoint.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateVpcEndpointRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateVpcEndpointRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
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
    CreateVpcEndpointRequest& WithSubnetConfigurations(SubnetConfigurationsT&& value) { SetSubnetConfigurations(std::forward<SubnetConfigurationsT>(value)); return *this;}
    template<typename SubnetConfigurationsT = SubnetConfiguration>
    CreateVpcEndpointRequest& AddSubnetConfigurations(SubnetConfigurationsT&& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations.emplace_back(std::forward<SubnetConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a service network that will be associated
     * with the VPC endpoint of type service-network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const { return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    template<typename ServiceNetworkArnT = Aws::String>
    void SetServiceNetworkArn(ServiceNetworkArnT&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::forward<ServiceNetworkArnT>(value); }
    template<typename ServiceNetworkArnT = Aws::String>
    CreateVpcEndpointRequest& WithServiceNetworkArn(ServiceNetworkArnT&& value) { SetServiceNetworkArn(std::forward<ServiceNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a resource configuration that will be
     * associated with the VPC endpoint of type resource.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const { return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    template<typename ResourceConfigurationArnT = Aws::String>
    void SetResourceConfigurationArn(ResourceConfigurationArnT&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::forward<ResourceConfigurationArnT>(value); }
    template<typename ResourceConfigurationArnT = Aws::String>
    CreateVpcEndpointRequest& WithResourceConfigurationArn(ResourceConfigurationArnT&& value) { SetResourceConfigurationArn(std::forward<ResourceConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the service is hosted. The default is the current
     * Region.</p>
     */
    inline const Aws::String& GetServiceRegion() const { return m_serviceRegion; }
    inline bool ServiceRegionHasBeenSet() const { return m_serviceRegionHasBeenSet; }
    template<typename ServiceRegionT = Aws::String>
    void SetServiceRegion(ServiceRegionT&& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = std::forward<ServiceRegionT>(value); }
    template<typename ServiceRegionT = Aws::String>
    CreateVpcEndpointRequest& WithServiceRegion(ServiceRegionT&& value) { SetServiceRegion(std::forward<ServiceRegionT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    VpcEndpointType m_vpcEndpointType{VpcEndpointType::NOT_SET};
    bool m_vpcEndpointTypeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    DnsOptionsSpecification m_dnsOptions;
    bool m_dnsOptionsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_privateDnsEnabled{false};
    bool m_privateDnsEnabledHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::Vector<SubnetConfiguration> m_subnetConfigurations;
    bool m_subnetConfigurationsHasBeenSet = false;

    Aws::String m_serviceNetworkArn;
    bool m_serviceNetworkArnHasBeenSet = false;

    Aws::String m_resourceConfigurationArn;
    bool m_resourceConfigurationArnHasBeenSet = false;

    Aws::String m_serviceRegion;
    bool m_serviceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
