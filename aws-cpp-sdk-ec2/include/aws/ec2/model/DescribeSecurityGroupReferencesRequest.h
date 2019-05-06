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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSecurityGroupReferences"; }

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
    inline DescribeSecurityGroupReferencesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the security groups in your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The IDs of the security groups in your account.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The IDs of the security groups in your account.</p>
     */
    inline void SetGroupId(const Aws::Vector<Aws::String>& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The IDs of the security groups in your account.</p>
     */
    inline void SetGroupId(Aws::Vector<Aws::String>&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The IDs of the security groups in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& WithGroupId(const Aws::Vector<Aws::String>& value) { SetGroupId(value); return *this;}

    /**
     * <p>The IDs of the security groups in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& WithGroupId(Aws::Vector<Aws::String>&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& AddGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups in your account.</p>
     */
    inline DescribeSecurityGroupReferencesRequest& AddGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups in your account.</p>
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
