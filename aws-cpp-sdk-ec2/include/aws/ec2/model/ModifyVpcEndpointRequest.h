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
   * <p>Contains the parameters for ModifyVpcEndpoint.</p>
   */
  class AWS_EC2_API ModifyVpcEndpointRequest : public EC2Request
  {
  public:
    ModifyVpcEndpointRequest();
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
    inline ModifyVpcEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

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
    inline ModifyVpcEndpointRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>Specify <code>true</code> to reset the policy document to the default policy.
     * The default policy allows access to the service.</p>
     */
    inline bool GetResetPolicy() const{ return m_resetPolicy; }

    /**
     * <p>Specify <code>true</code> to reset the policy document to the default policy.
     * The default policy allows access to the service.</p>
     */
    inline void SetResetPolicy(bool value) { m_resetPolicyHasBeenSet = true; m_resetPolicy = value; }

    /**
     * <p>Specify <code>true</code> to reset the policy document to the default policy.
     * The default policy allows access to the service.</p>
     */
    inline ModifyVpcEndpointRequest& WithResetPolicy(bool value) { SetResetPolicy(value); return *this;}

    /**
     * <p>A policy document to attach to the endpoint. The policy must be in valid JSON
     * format. </p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>A policy document to attach to the endpoint. The policy must be in valid JSON
     * format. </p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>A policy document to attach to the endpoint. The policy must be in valid JSON
     * format. </p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>A policy document to attach to the endpoint. The policy must be in valid JSON
     * format. </p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>A policy document to attach to the endpoint. The policy must be in valid JSON
     * format. </p>
     */
    inline ModifyVpcEndpointRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>A policy document to attach to the endpoint. The policy must be in valid JSON
     * format. </p>
     */
    inline ModifyVpcEndpointRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>A policy document to attach to the endpoint. The policy must be in valid JSON
     * format. </p>
     */
    inline ModifyVpcEndpointRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>One or more route tables IDs to associate with the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddRouteTableIds() const{ return m_addRouteTableIds; }

    /**
     * <p>One or more route tables IDs to associate with the endpoint.</p>
     */
    inline void SetAddRouteTableIds(const Aws::Vector<Aws::String>& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = value; }

    /**
     * <p>One or more route tables IDs to associate with the endpoint.</p>
     */
    inline void SetAddRouteTableIds(Aws::Vector<Aws::String>&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = value; }

    /**
     * <p>One or more route tables IDs to associate with the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithAddRouteTableIds(const Aws::Vector<Aws::String>& value) { SetAddRouteTableIds(value); return *this;}

    /**
     * <p>One or more route tables IDs to associate with the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithAddRouteTableIds(Aws::Vector<Aws::String>&& value) { SetAddRouteTableIds(value); return *this;}

    /**
     * <p>One or more route tables IDs to associate with the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(const Aws::String& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }

    /**
     * <p>One or more route tables IDs to associate with the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(Aws::String&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }

    /**
     * <p>One or more route tables IDs to associate with the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddAddRouteTableIds(const char* value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }

    /**
     * <p>One or more route table IDs to disassociate from the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveRouteTableIds() const{ return m_removeRouteTableIds; }

    /**
     * <p>One or more route table IDs to disassociate from the endpoint.</p>
     */
    inline void SetRemoveRouteTableIds(const Aws::Vector<Aws::String>& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = value; }

    /**
     * <p>One or more route table IDs to disassociate from the endpoint.</p>
     */
    inline void SetRemoveRouteTableIds(Aws::Vector<Aws::String>&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = value; }

    /**
     * <p>One or more route table IDs to disassociate from the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithRemoveRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRemoveRouteTableIds(value); return *this;}

    /**
     * <p>One or more route table IDs to disassociate from the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& WithRemoveRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRemoveRouteTableIds(value); return *this;}

    /**
     * <p>One or more route table IDs to disassociate from the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(const Aws::String& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }

    /**
     * <p>One or more route table IDs to disassociate from the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(Aws::String&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }

    /**
     * <p>One or more route table IDs to disassociate from the endpoint.</p>
     */
    inline ModifyVpcEndpointRequest& AddRemoveRouteTableIds(const char* value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
