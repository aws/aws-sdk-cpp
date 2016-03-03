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
  class AWS_IAM_API CreatePolicyVersionRequest : public IAMRequest
  {
  public:
    CreatePolicyVersionRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    
    inline CreatePolicyVersionRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    
    inline CreatePolicyVersionRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(value); return *this;}

    
    inline CreatePolicyVersionRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The policy document.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>Specifies whether to set this version as the policy's default version.</p>
     * <p>When this parameter is <code>true</code>, the new policy version becomes the
     * operative version; that is, the version that is in effect for the IAM users,
     * groups, and roles that the policy is attached to.</p> <p>For more information
     * about managed policy versions, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>IAM User Guide</i>. </p>
     */
    inline bool GetSetAsDefault() const{ return m_setAsDefault; }

    /**
     * <p>Specifies whether to set this version as the policy's default version.</p>
     * <p>When this parameter is <code>true</code>, the new policy version becomes the
     * operative version; that is, the version that is in effect for the IAM users,
     * groups, and roles that the policy is attached to.</p> <p>For more information
     * about managed policy versions, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetSetAsDefault(bool value) { m_setAsDefaultHasBeenSet = true; m_setAsDefault = value; }

    /**
     * <p>Specifies whether to set this version as the policy's default version.</p>
     * <p>When this parameter is <code>true</code>, the new policy version becomes the
     * operative version; that is, the version that is in effect for the IAM users,
     * groups, and roles that the policy is attached to.</p> <p>For more information
     * about managed policy versions, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>IAM User Guide</i>. </p>
     */
    inline CreatePolicyVersionRequest& WithSetAsDefault(bool value) { SetSetAsDefault(value); return *this;}

  private:
    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;
    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;
    bool m_setAsDefault;
    bool m_setAsDefaultHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
