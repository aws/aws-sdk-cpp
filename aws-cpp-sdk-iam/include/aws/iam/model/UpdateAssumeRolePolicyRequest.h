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
  class AWS_IAM_API UpdateAssumeRolePolicyRequest : public IAMRequest
  {
  public:
    UpdateAssumeRolePolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the role to update.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the role to update.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role to update.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role to update.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the role to update.</p>
     */
    inline UpdateAssumeRolePolicyRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role to update.</p>
     */
    inline UpdateAssumeRolePolicyRequest& WithRoleName(Aws::String&& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role to update.</p>
     */
    inline UpdateAssumeRolePolicyRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline UpdateAssumeRolePolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline UpdateAssumeRolePolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline UpdateAssumeRolePolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

  private:
    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;
    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
