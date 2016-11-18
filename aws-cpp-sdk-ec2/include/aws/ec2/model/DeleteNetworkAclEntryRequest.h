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
   * <p>Contains the parameters for DeleteNetworkAclEntry.</p>
   */
  class AWS_EC2_API DeleteNetworkAclEntryRequest : public EC2Request
  {
  public:
    DeleteNetworkAclEntryRequest();
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
    inline DeleteNetworkAclEntryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline DeleteNetworkAclEntryRequest& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline DeleteNetworkAclEntryRequest& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline DeleteNetworkAclEntryRequest& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The rule number of the entry to delete.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p>The rule number of the entry to delete.</p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p>The rule number of the entry to delete.</p>
     */
    inline DeleteNetworkAclEntryRequest& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}

    /**
     * <p>Indicates whether the rule is an egress rule.</p>
     */
    inline bool GetEgress() const{ return m_egress; }

    /**
     * <p>Indicates whether the rule is an egress rule.</p>
     */
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }

    /**
     * <p>Indicates whether the rule is an egress rule.</p>
     */
    inline DeleteNetworkAclEntryRequest& WithEgress(bool value) { SetEgress(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet;
    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet;
    bool m_egress;
    bool m_egressHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
