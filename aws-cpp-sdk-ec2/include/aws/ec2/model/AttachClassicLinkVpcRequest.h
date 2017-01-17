﻿/*
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
   * <p>Contains the parameters for AttachClassicLinkVpc.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachClassicLinkVpcRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AttachClassicLinkVpcRequest : public EC2Request
  {
  public:
    AttachClassicLinkVpcRequest();
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
    inline AttachClassicLinkVpcRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of an EC2-Classic instance to link to the ClassicLink-enabled VPC.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of an EC2-Classic instance to link to the ClassicLink-enabled VPC.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of an EC2-Classic instance to link to the ClassicLink-enabled VPC.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of an EC2-Classic instance to link to the ClassicLink-enabled VPC.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of an EC2-Classic instance to link to the ClassicLink-enabled VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of an EC2-Classic instance to link to the ClassicLink-enabled VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of an EC2-Classic instance to link to the ClassicLink-enabled VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of a ClassicLink-enabled VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of a ClassicLink-enabled VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of a ClassicLink-enabled VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of a ClassicLink-enabled VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of a ClassicLink-enabled VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of a ClassicLink-enabled VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of a ClassicLink-enabled VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of one or more of the VPC's security groups. You cannot specify
     * security groups from a different VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The ID of one or more of the VPC's security groups. You cannot specify
     * security groups from a different VPC.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The ID of one or more of the VPC's security groups. You cannot specify
     * security groups from a different VPC.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The ID of one or more of the VPC's security groups. You cannot specify
     * security groups from a different VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The ID of one or more of the VPC's security groups. You cannot specify
     * security groups from a different VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(value); return *this;}

    /**
     * <p>The ID of one or more of the VPC's security groups. You cannot specify
     * security groups from a different VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The ID of one or more of the VPC's security groups. You cannot specify
     * security groups from a different VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The ID of one or more of the VPC's security groups. You cannot specify
     * security groups from a different VPC.</p>
     */
    inline AttachClassicLinkVpcRequest& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
