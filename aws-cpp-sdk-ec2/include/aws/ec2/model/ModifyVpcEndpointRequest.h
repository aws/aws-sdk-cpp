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
   * <p>Contains the parameters for ModifyVpcEndpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpointRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ModifyVpcEndpointRequest : public EC2Request
  {
  public:
    ModifyVpcEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpoint"; }

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
    inline ModifyVpcEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>(Gateway endpoint) Specify <code>true</code> to reset the policy document to
     * the default policy. The default policy allows full access to the service.</p>
     */
    inline bool GetResetPolicy() const{ return m_resetPolicy; }

    /**
     * <p>(Gateway endpoint) Specify <code>true</code> to reset the policy document to
     * the default policy. The default policy allows full access to the service.</p>
     */
    inline bool ResetPolicyHasBeenSet() const { return m_resetPolicyHasBeenSet; }

    /**
     * <p>(Gateway endpoint) Specify <code>true</code> to reset the policy document to
     * the default policy. The default policy allows full access to the service.</p>
     */
    inline void SetResetPolicy(bool value) { m_resetPolicyHasBeenSet = true; m_resetPolicy = value; }

    /**
     * <p>(Gateway endpoint) Specify <code>true</code> to reset the policy document to
     * the default policy. The default policy allows full access to the service.</p>
     */
    inline ModifyVpcEndpointRequest& WithResetPolicy(bool value) { SetResetPolicy(value); return *this;}


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
    inline ModifyVpcEndpointRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline ModifyVpcEndpointRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>A policy to attach to the endpoint that controls access to the service. The
     * policy must be in valid JSON format. If this parameter is not specified, we
     * attach a default policy that allows full access to the service.</p>
     */
    inline ModifyVpcEndpointRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddRouteTableIds() const{ return m_addRouteTableIds; }

    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline bool AddRouteTableIdsHasBeenSet() const { return m_addRouteTableIdsHasBeenSet; }

    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline void SetAddRouteTableIds(const Aws::Vector<Aws::String>& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = value; }

    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline void SetAddRouteTableIds(Aws::Vector<Aws::String>&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = std::move(value); }

    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithAddRouteTableIds(const Aws::Vector<Aws::String>& value) { SetAddRouteTableIds(value); return *this;}

    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithAddRouteTableIds(Aws::Vector<Aws::String>&& value) { SetAddRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(const Aws::String& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }

    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(Aws::String&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Gateway endpoint) One or more route tables IDs to associate with the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(const char* value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }


    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveRouteTableIds() const{ return m_removeRouteTableIds; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline bool RemoveRouteTableIdsHasBeenSet() const { return m_removeRouteTableIdsHasBeenSet; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline void SetRemoveRouteTableIds(const Aws::Vector<Aws::String>& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = value; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline void SetRemoveRouteTableIds(Aws::Vector<Aws::String>&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = std::move(value); }

    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithRemoveRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRemoveRouteTableIds(value); return *this;}

    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithRemoveRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRemoveRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(const Aws::String& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(Aws::String&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Gateway endpoint) One or more route table IDs to disassociate from the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(const char* value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetIds() const{ return m_addSubnetIds; }

    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline bool AddSubnetIdsHasBeenSet() const { return m_addSubnetIdsHasBeenSet; }

    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline void SetAddSubnetIds(const Aws::Vector<Aws::String>& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = value; }

    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline void SetAddSubnetIds(Aws::Vector<Aws::String>&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = std::move(value); }

    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithAddSubnetIds(const Aws::Vector<Aws::String>& value) { SetAddSubnetIds(value); return *this;}

    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithAddSubnetIds(Aws::Vector<Aws::String>&& value) { SetAddSubnetIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddSubnetIds(const Aws::String& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddSubnetIds(Aws::String&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) One or more subnet IDs in which to serve the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddSubnetIds(const char* value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetIds() const{ return m_removeSubnetIds; }

    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline bool RemoveSubnetIdsHasBeenSet() const { return m_removeSubnetIdsHasBeenSet; }

    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline void SetRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = value; }

    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline void SetRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = std::move(value); }

    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { SetRemoveSubnetIds(value); return *this;}

    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { SetRemoveSubnetIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveSubnetIds(const Aws::String& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveSubnetIds(Aws::String&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) One or more subnets IDs in which to remove the
     * endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveSubnetIds(const char* value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSecurityGroupIds() const{ return m_addSecurityGroupIds; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline bool AddSecurityGroupIdsHasBeenSet() const { return m_addSecurityGroupIdsHasBeenSet; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline void SetAddSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds = value; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline void SetAddSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds = std::move(value); }

    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& WithAddSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetAddSecurityGroupIds(value); return *this;}

    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& WithAddSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetAddSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddSecurityGroupIds(const Aws::String& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddSecurityGroupIds(Aws::String&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to associate with the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddSecurityGroupIds(const char* value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSecurityGroupIds() const{ return m_removeSecurityGroupIds; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline bool RemoveSecurityGroupIdsHasBeenSet() const { return m_removeSecurityGroupIdsHasBeenSet; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline void SetRemoveSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds = value; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline void SetRemoveSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds = std::move(value); }

    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& WithRemoveSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetRemoveSecurityGroupIds(value); return *this;}

    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& WithRemoveSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetRemoveSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveSecurityGroupIds(const Aws::String& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveSecurityGroupIds(Aws::String&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Interface endpoint) One or more security group IDs to disassociate from the
     * network interface.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveSecurityGroupIds(const char* value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>(Interface endpoint) Indicate whether a private hosted zone is associated
     * with the VPC.</p>
     */
    inline bool GetPrivateDnsEnabled() const{ return m_privateDnsEnabled; }

    /**
     * <p>(Interface endpoint) Indicate whether a private hosted zone is associated
     * with the VPC.</p>
     */
    inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }

    /**
     * <p>(Interface endpoint) Indicate whether a private hosted zone is associated
     * with the VPC.</p>
     */
    inline void SetPrivateDnsEnabled(bool value) { m_privateDnsEnabledHasBeenSet = true; m_privateDnsEnabled = value; }

    /**
     * <p>(Interface endpoint) Indicate whether a private hosted zone is associated
     * with the VPC.</p>
     */
    inline ModifyVpcEndpointRequest& WithPrivateDnsEnabled(bool value) { SetPrivateDnsEnabled(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet;

    bool m_resetPolicy;
    bool m_resetPolicyHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;

    Aws::Vector<Aws::String> m_addRouteTableIds;
    bool m_addRouteTableIdsHasBeenSet;

    Aws::Vector<Aws::String> m_removeRouteTableIds;
    bool m_removeRouteTableIdsHasBeenSet;

    Aws::Vector<Aws::String> m_addSubnetIds;
    bool m_addSubnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_removeSubnetIds;
    bool m_removeSubnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_addSecurityGroupIds;
    bool m_addSecurityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_removeSecurityGroupIds;
    bool m_removeSecurityGroupIdsHasBeenSet;

    bool m_privateDnsEnabled;
    bool m_privateDnsEnabledHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
