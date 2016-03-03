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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API DetachGroupPolicyRequest : public IAMRequest
  {
  public:
    DetachGroupPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name (friendly name, not ARN) of the group to detach the policy from.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name (friendly name, not ARN) of the group to detach the policy from.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name (friendly name, not ARN) of the group to detach the policy from.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name (friendly name, not ARN) of the group to detach the policy from.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name (friendly name, not ARN) of the group to detach the policy from.</p>
     */
    inline DetachGroupPolicyRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the group to detach the policy from.</p>
     */
    inline DetachGroupPolicyRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the group to detach the policy from.</p>
     */
    inline DetachGroupPolicyRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    
    inline DetachGroupPolicyRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    
    inline DetachGroupPolicyRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(value); return *this;}

    
    inline DetachGroupPolicyRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

  private:
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
