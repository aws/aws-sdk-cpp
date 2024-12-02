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
    AWS_EC2_API CreateVpcEndpointRequest();

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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVpcEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint.</p> <p>Default: Gateway</p>
     */
    inline const VpcEndpointType& GetVpcEndpointType() const{ return m_vpcEndpointType; }
    inline bool VpcEndpointTypeHasBeenSet() const { return m_vpcEndpointTypeHasBeenSet; }
    inline void SetVpcEndpointType(const VpcEndpointType& value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = value; }
    inline void SetVpcEndpointType(VpcEndpointType&& value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = std::move(value); }
    inline CreateVpcEndpointRequest& WithVpcEndpointType(const VpcEndpointType& value) { SetVpcEndpointType(value); return *this;}
    inline CreateVpcEndpointRequest& WithVpcEndpointType(VpcEndpointType&& value) { SetVpcEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CreateVpcEndpointRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateVpcEndpointRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline CreateVpcEndpointRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline CreateVpcEndpointRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface and gateway endpoints) A policy to attach to the endpoint that
     * controls access to the service. The policy must be in valid JSON format. If this
     * parameter is not specified, we attach a default policy that allows full access
     * to the service.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }
    inline CreateVpcEndpointRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline CreateVpcEndpointRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Gateway endpoint) The route table IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }
    inline CreateVpcEndpointRequest& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}
    inline CreateVpcEndpointRequest& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }
    inline CreateVpcEndpointRequest& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }
    inline CreateVpcEndpointRequest& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface and Gateway Load Balancer endpoints) The IDs of the subnets in
     * which to create endpoint network interfaces. For a Gateway Load Balancer
     * endpoint, you can specify only one subnet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateVpcEndpointRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateVpcEndpointRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateVpcEndpointRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateVpcEndpointRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint) The IDs of the security groups to associate with the
     * endpoint network interfaces. If this parameter is not specified, we use the
     * default security group for the VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline CreateVpcEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline CreateVpcEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline CreateVpcEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateVpcEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline CreateVpcEndpointRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline CreateVpcEndpointRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS options for the endpoint.</p>
     */
    inline const DnsOptionsSpecification& GetDnsOptions() const{ return m_dnsOptions; }
    inline bool DnsOptionsHasBeenSet() const { return m_dnsOptionsHasBeenSet; }
    inline void SetDnsOptions(const DnsOptionsSpecification& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = value; }
    inline void SetDnsOptions(DnsOptionsSpecification&& value) { m_dnsOptionsHasBeenSet = true; m_dnsOptions = std::move(value); }
    inline CreateVpcEndpointRequest& WithDnsOptions(const DnsOptionsSpecification& value) { SetDnsOptions(value); return *this;}
    inline CreateVpcEndpointRequest& WithDnsOptions(DnsOptionsSpecification&& value) { SetDnsOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateVpcEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateVpcEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
     * attributes.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivateDnsEnabled() const{ return m_privateDnsEnabled; }
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }
    inline CreateVpcEndpointRequest& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the endpoint.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateVpcEndpointRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateVpcEndpointRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateVpcEndpointRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet configurations for the endpoint.</p>
     */
    inline const Aws::Vector<SubnetConfiguration>& GetSubnetConfigurations() const{ return m_subnetConfigurations; }
    inline bool SubnetConfigurationsHasBeenSet() const { return m_subnetConfigurationsHasBeenSet; }
    inline void SetSubnetConfigurations(const Aws::Vector<SubnetConfiguration>& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations = value; }
    inline void SetSubnetConfigurations(Aws::Vector<SubnetConfiguration>&& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations = std::move(value); }
    inline CreateVpcEndpointRequest& WithSubnetConfigurations(const Aws::Vector<SubnetConfiguration>& value) { SetSubnetConfigurations(value); return *this;}
    inline CreateVpcEndpointRequest& WithSubnetConfigurations(Aws::Vector<SubnetConfiguration>&& value) { SetSubnetConfigurations(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& AddSubnetConfigurations(const SubnetConfiguration& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations.push_back(value); return *this; }
    inline CreateVpcEndpointRequest& AddSubnetConfigurations(SubnetConfiguration&& value) { m_subnetConfigurationsHasBeenSet = true; m_subnetConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a service network that will be associated
     * with the VPC endpoint of type service-network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn.assign(value); }
    inline CreateVpcEndpointRequest& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline CreateVpcEndpointRequest& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a resource configuration that will be
     * associated with the VPC endpoint of type resource.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const{ return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    inline void SetResourceConfigurationArn(const Aws::String& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = value; }
    inline void SetResourceConfigurationArn(Aws::String&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::move(value); }
    inline void SetResourceConfigurationArn(const char* value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn.assign(value); }
    inline CreateVpcEndpointRequest& WithResourceConfigurationArn(const Aws::String& value) { SetResourceConfigurationArn(value); return *this;}
    inline CreateVpcEndpointRequest& WithResourceConfigurationArn(Aws::String&& value) { SetResourceConfigurationArn(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& WithResourceConfigurationArn(const char* value) { SetResourceConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the service is hosted. The default is the current
     * Region.</p>
     */
    inline const Aws::String& GetServiceRegion() const{ return m_serviceRegion; }
    inline bool ServiceRegionHasBeenSet() const { return m_serviceRegionHasBeenSet; }
    inline void SetServiceRegion(const Aws::String& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = value; }
    inline void SetServiceRegion(Aws::String&& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = std::move(value); }
    inline void SetServiceRegion(const char* value) { m_serviceRegionHasBeenSet = true; m_serviceRegion.assign(value); }
    inline CreateVpcEndpointRequest& WithServiceRegion(const Aws::String& value) { SetServiceRegion(value); return *this;}
    inline CreateVpcEndpointRequest& WithServiceRegion(Aws::String&& value) { SetServiceRegion(std::move(value)); return *this;}
    inline CreateVpcEndpointRequest& WithServiceRegion(const char* value) { SetServiceRegion(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    VpcEndpointType m_vpcEndpointType;
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

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    DnsOptionsSpecification m_dnsOptions;
    bool m_dnsOptionsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_privateDnsEnabled;
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
