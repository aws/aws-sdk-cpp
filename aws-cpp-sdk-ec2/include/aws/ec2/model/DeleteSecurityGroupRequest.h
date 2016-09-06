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

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DeleteSecurityGroup.</p>
   */
  class AWS_EC2_API DeleteSecurityGroupRequest : public EC2Request
  {
  public:
    DeleteSecurityGroupRequest();
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
    inline DeleteSecurityGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You can specify
     * either the security group name or the security group ID.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You can specify
     * either the security group name or the security group ID.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You can specify
     * either the security group name or the security group ID.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You can specify
     * either the security group name or the security group ID.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You can specify
     * either the security group name or the security group ID.</p>
     */
    inline DeleteSecurityGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You can specify
     * either the security group name or the security group ID.</p>
     */
    inline DeleteSecurityGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group. You can specify
     * either the security group name or the security group ID.</p>
     */
    inline DeleteSecurityGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline DeleteSecurityGroupRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline DeleteSecurityGroupRequest& WithGroupId(Aws::String&& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline DeleteSecurityGroupRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
