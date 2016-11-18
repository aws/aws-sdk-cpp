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

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateSecurityGroup.</p>
   */
  class AWS_EC2_API CreateSecurityGroupRequest : public EC2Request
  {
  public:
    CreateSecurityGroupRequest();
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
    inline CreateSecurityGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length</p> <p>Constraints for EC2-Classic: ASCII characters</p> <p>Constraints
     * for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length</p> <p>Constraints for EC2-Classic: ASCII characters</p> <p>Constraints
     * for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length</p> <p>Constraints for EC2-Classic: ASCII characters</p> <p>Constraints
     * for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length</p> <p>Constraints for EC2-Classic: ASCII characters</p> <p>Constraints
     * for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length</p> <p>Constraints for EC2-Classic: ASCII characters</p> <p>Constraints
     * for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length</p> <p>Constraints for EC2-Classic: ASCII characters</p> <p>Constraints
     * for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length</p> <p>Constraints for EC2-Classic: ASCII characters</p> <p>Constraints
     * for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=<![CDATA[&amp;]]>;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline CreateSecurityGroupRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline CreateSecurityGroupRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline CreateSecurityGroupRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
