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
#include <aws/ec2/model/VpcEndpointType.h>
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
   * <p>Contains the parameters for CreateVpcEndpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcEndpointRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateVpcEndpointRequest : public EC2Request
  {
  public:
    CreateVpcEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcEndpoint"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline CreateVpcEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The type of endpoint.</p> <p>Default: Gateway</p>
     */
    inline const VpcEndpointType& GetVpcEndpointType() const{ return m_vpcEndpointType; }

    /**
     * <p>The type of endpoint.</p> <p>Default: Gateway</p>
     */
    inline bool VpcEndpointTypeHasBeenSet() const { return m_vpcEndpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint.</p> <p>Default: Gateway</p>
     */
    inline void SetVpcEndpointType(const VpcEndpointType& value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = value; }

    /**
     * <p>The type of endpoint.</p> <p>Default: Gateway</p>
     */
    inline void SetVpcEndpointType(VpcEndpointType&& value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = std::move(value); }

    /**
     * <p>The type of endpoint.</p> <p>Default: Gateway</p>
     */
    inline CreateVpcEndpointRequest& WithVpcEndpointType(const VpcEndpointType& value) { SetVpcEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint.</p> <p>Default: Gateway</p>
     */
    inline CreateVpcEndpointRequest& WithVpcEndpointType(VpcEndpointType&& value) { SetVpcEndpointType(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline CreateVpcEndpointRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline CreateVpcEndpointRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline CreateVpcEndpointRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The service name. To get a list of available services, use the
     * <a>DescribeVpcEndpointServices</a> request, or get the name from the service
     * provider.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The service name. To get a list of available services, use the
     * <a>DescribeVpcEndpointServices</a> request, or get the name from the service
     * provider.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The service name. To get a list of available services, use the
     * <a>DescribeVpcEndpointServices</a> request, or get the name from the service
     * provider.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The service name. To get a list of available services, use the
     * <a>DescribeVpcEndpointServices</a> request, or get the name from the service
     * provider.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The service name. To get a list of available services, use the
     * <a>DescribeVpcEndpointServices</a> request, or get the name from the service
     * provider.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The service name. To get a list of available services, use the
     * <a>DescribeVpcEndpointServices</a> request, or get the name from the service
     * provider.</p>
     */
    inline CreateVpcEndpointRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The service name. To get a list of available services, use the
     * <a>DescribeVpcEndpointServices</a> request, or get the name from the service
     * provider.</p>
     */
    inline CreateVpcEndpointRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The service name. To get a list of available services, use the
     * <a>DescribeVpcEndpointServices</a> request, or get the name from the service
     * provider.</p>
     */
    inline CreateVpcEndpointRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline CreateVpcEndpointRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline CreateVpcEndpointRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline CreateVpcEndpointRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }

    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}

    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) The ID of one or more subnets in which to create an
     * endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) The ID of one or more security groups to associate with
     * the endpoint network interface.</p>
     */
    inline CreateVpcEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>(Interface endpoint) Indicate whether to associate a private hosted zone with
     * the specified VPC. The private hosted zone contains a record set for the default
     * public DNS name for the service for the Region (for example,
     * <code>kinesis.us-east-1.amazonaws.com</code>) which resolves to the private IP
     * addresses of the endpoint network interfaces in the VPC. This enables you to
     * make requests to the default public DNS name for the service instead of the
     * public DNS names that are automatically generated by the VPC endpoint
     * service.</p> <p>To use a private hosted zone, you must set the following VPC
     * attributes to <code>true</code>: <code>enableDnsHostnames</code> and
     * <code>enableDnsSupport</code>. Use <a>ModifyVpcAttribute</a> to set the VPC
     * attributes.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivateDnsEnabled() const{ return m_privateDnsEnabled; }

    /**
     * <p>(Interface endpoint) Indicate whether to associate a private hosted zone with
     * the specified VPC. The private hosted zone contains a record set for the default
     * public DNS name for the service for the Region (for example,
     * <code>kinesis.us-east-1.amazonaws.com</code>) which resolves to the private IP
     * addresses of the endpoint network interfaces in the VPC. This enables you to
     * make requests to the default public DNS name for the service instead of the
     * public DNS names that are automatically generated by the VPC endpoint
     * service.</p> <p>To use a private hosted zone, you must set the following VPC
     * attributes to <code>true</code>: <code>enableDnsHostnames</code> and
     * <code>enableDnsSupport</code>. Use <a>ModifyVpcAttribute</a> to set the VPC
     * attributes.</p> <p>Default: <code>true</code> </p>
     */
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }

    /**
     * <p>(Interface endpoint) Indicate whether to associate a private hosted zone with
     * the specified VPC. The private hosted zone contains a record set for the default
     * public DNS name for the service for the Region (for example,
     * <code>kinesis.us-east-1.amazonaws.com</code>) which resolves to the private IP
     * addresses of the endpoint network interfaces in the VPC. This enables you to
     * make requests to the default public DNS name for the service instead of the
     * public DNS names that are automatically generated by the VPC endpoint
     * service.</p> <p>To use a private hosted zone, you must set the following VPC
     * attributes to <code>true</code>: <code>enableDnsHostnames</code> and
     * <code>enableDnsSupport</code>. Use <a>ModifyVpcAttribute</a> to set the VPC
     * attributes.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }

    /**
     * <p>(Interface endpoint) Indicate whether to associate a private hosted zone with
     * the specified VPC. The private hosted zone contains a record set for the default
     * public DNS name for the service for the Region (for example,
     * <code>kinesis.us-east-1.amazonaws.com</code>) which resolves to the private IP
     * addresses of the endpoint network interfaces in the VPC. This enables you to
     * make requests to the default public DNS name for the service instead of the
     * public DNS names that are automatically generated by the VPC endpoint
     * service.</p> <p>To use a private hosted zone, you must set the following VPC
     * attributes to <code>true</code>: <code>enableDnsHostnames</code> and
     * <code>enableDnsSupport</code>. Use <a>ModifyVpcAttribute</a> to set the VPC
     * attributes.</p> <p>Default: <code>true</code> </p>
     */
    inline CreateVpcEndpointRequest& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    VpcEndpointType m_vpcEndpointType;
    bool m_vpcEndpointTypeHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    bool m_privateDnsEnabled;
    bool m_privateDnsEnabledHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
