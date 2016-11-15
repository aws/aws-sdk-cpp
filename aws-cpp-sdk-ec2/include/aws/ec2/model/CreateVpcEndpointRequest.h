/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateVpcEndpoint.</p>
   */
  class AWS_EC2_API CreateVpcEndpointRequest : public EC2Request
  {
  public:
    CreateVpcEndpointRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateVpcEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

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
    inline CreateVpcEndpointRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC in which the endpoint will be used.</p>
     */
    inline CreateVpcEndpointRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The AWS service name, in the form
     * <code>com.amazonaws.<i>region</i>.<i>service</i></code>. To get a list of
     * available services, use the <a>DescribeVpcEndpointServices</a> request.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The AWS service name, in the form
     * <code>com.amazonaws.<i>region</i>.<i>service</i></code>. To get a list of
     * available services, use the <a>DescribeVpcEndpointServices</a> request.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The AWS service name, in the form
     * <code>com.amazonaws.<i>region</i>.<i>service</i></code>. To get a list of
     * available services, use the <a>DescribeVpcEndpointServices</a> request.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The AWS service name, in the form
     * <code>com.amazonaws.<i>region</i>.<i>service</i></code>. To get a list of
     * available services, use the <a>DescribeVpcEndpointServices</a> request.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The AWS service name, in the form
     * <code>com.amazonaws.<i>region</i>.<i>service</i></code>. To get a list of
     * available services, use the <a>DescribeVpcEndpointServices</a> request.</p>
     */
    inline CreateVpcEndpointRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The AWS service name, in the form
     * <code>com.amazonaws.<i>region</i>.<i>service</i></code>. To get a list of
     * available services, use the <a>DescribeVpcEndpointServices</a> request.</p>
     */
    inline CreateVpcEndpointRequest& WithServiceName(Aws::String&& value) { SetServiceName(value); return *this;}

    /**
     * <p>The AWS service name, in the form
     * <code>com.amazonaws.<i>region</i>.<i>service</i></code>. To get a list of
     * available services, use the <a>DescribeVpcEndpointServices</a> request.</p>
     */
    inline CreateVpcEndpointRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service. </p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service. </p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service. </p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service. </p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service. </p>
     */
    inline CreateVpcEndpointRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service. </p>
     */
    inline CreateVpcEndpointRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service. </p>
     */
    inline CreateVpcEndpointRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>One or more route table IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }

    /**
     * <p>One or more route table IDs.</p>
     */
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }

    /**
     * <p>One or more route table IDs.</p>
     */
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }

    /**
     * <p>One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}

    /**
     * <p>One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(value); return *this;}

    /**
     * <p>One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

    /**
     * <p>One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

    /**
     * <p>One or more route table IDs.</p>
     */
    inline CreateVpcEndpointRequest& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;
    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
