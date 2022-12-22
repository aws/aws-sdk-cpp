/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SecurityGroupRuleUpdate.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifySecurityGroupRulesRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifySecurityGroupRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySecurityGroupRules"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline ModifySecurityGroupRulesRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline ModifySecurityGroupRulesRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline ModifySecurityGroupRulesRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>Information about the security group properties to update.</p>
     */
    inline const Aws::Vector<SecurityGroupRuleUpdate>& GetSecurityGroupRules() const{ return m_securityGroupRules; }

    /**
     * <p>Information about the security group properties to update.</p>
     */
    inline bool SecurityGroupRulesHasBeenSet() const { return m_securityGroupRulesHasBeenSet; }

    /**
     * <p>Information about the security group properties to update.</p>
     */
    inline void SetSecurityGroupRules(const Aws::Vector<SecurityGroupRuleUpdate>& value) { m_securityGroupRulesHasBeenSet = true; m_securityGroupRules = value; }

    /**
     * <p>Information about the security group properties to update.</p>
     */
    inline void SetSecurityGroupRules(Aws::Vector<SecurityGroupRuleUpdate>&& value) { m_securityGroupRulesHasBeenSet = true; m_securityGroupRules = std::move(value); }

    /**
     * <p>Information about the security group properties to update.</p>
     */
    inline ModifySecurityGroupRulesRequest& WithSecurityGroupRules(const Aws::Vector<SecurityGroupRuleUpdate>& value) { SetSecurityGroupRules(value); return *this;}

    /**
     * <p>Information about the security group properties to update.</p>
     */
    inline ModifySecurityGroupRulesRequest& WithSecurityGroupRules(Aws::Vector<SecurityGroupRuleUpdate>&& value) { SetSecurityGroupRules(std::move(value)); return *this;}

    /**
     * <p>Information about the security group properties to update.</p>
     */
    inline ModifySecurityGroupRulesRequest& AddSecurityGroupRules(const SecurityGroupRuleUpdate& value) { m_securityGroupRulesHasBeenSet = true; m_securityGroupRules.push_back(value); return *this; }

    /**
     * <p>Information about the security group properties to update.</p>
     */
    inline ModifySecurityGroupRulesRequest& AddSecurityGroupRules(SecurityGroupRuleUpdate&& value) { m_securityGroupRulesHasBeenSet = true; m_securityGroupRules.push_back(std::move(value)); return *this; }


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
    inline ModifySecurityGroupRulesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<SecurityGroupRuleUpdate> m_securityGroupRules;
    bool m_securityGroupRulesHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
