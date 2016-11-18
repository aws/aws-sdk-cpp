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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeSecurityGroupReferencesRequest : public EC2Request
  {
  public:
    DescribeSecurityGroupReferencesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is DryRunOperation. Otherwise, it is
     * UnauthorizedOperation.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is DryRunOperation. Otherwise, it is
     * UnauthorizedOperation.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is DryRunOperation. Otherwise, it is
     * UnauthorizedOperation.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more security group IDs in your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupId() const{ return m_groupId; }

    /**
     * <p>One or more security group IDs in your account.</p>
     */
    inline void SetGroupId(const Aws::Vector<Aws::String>& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>One or more security group IDs in your account.</p>
     */
    inline void SetGroupId(Aws::Vector<Aws::String>&& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>One or more security group IDs in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& WithGroupId(const Aws::Vector<Aws::String>& value) { SetGroupId(value); return *this;}

    /**
     * <p>One or more security group IDs in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& WithGroupId(Aws::Vector<Aws::String>&& value) { SetGroupId(value); return *this;}

    /**
     * <p>One or more security group IDs in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& AddGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& AddGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& AddGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_groupId;
    bool m_groupIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
