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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to delete a sending authorization policy for an
   * identity. Sending authorization is an Amazon SES feature that enables you to
   * authorize other senders to use your identities. For information, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API DeleteIdentityPolicyRequest : public SESRequest
  {
  public:
    DeleteIdentityPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identity that is associated with the policy that you want to delete. You
     * can specify the identity by using its name or by using its Amazon Resource Name
     * (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity that is associated with the policy that you want to delete. You
     * can specify the identity by using its name or by using its Amazon Resource Name
     * (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity that is associated with the policy that you want to delete. You
     * can specify the identity by using its name or by using its Amazon Resource Name
     * (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity that is associated with the policy that you want to delete. You
     * can specify the identity by using its name or by using its Amazon Resource Name
     * (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The identity that is associated with the policy that you want to delete. You
     * can specify the identity by using its name or by using its Amazon Resource Name
     * (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline DeleteIdentityPolicyRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity that is associated with the policy that you want to delete. You
     * can specify the identity by using its name or by using its Amazon Resource Name
     * (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline DeleteIdentityPolicyRequest& WithIdentity(Aws::String&& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity that is associated with the policy that you want to delete. You
     * can specify the identity by using its name or by using its Amazon Resource Name
     * (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline DeleteIdentityPolicyRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

    /**
     * <p>The name of the policy to be deleted.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy to be deleted.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy to be deleted.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy to be deleted.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy to be deleted.</p>
     */
    inline DeleteIdentityPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy to be deleted.</p>
     */
    inline DeleteIdentityPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy to be deleted.</p>
     */
    inline DeleteIdentityPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

  private:
    Aws::String m_identity;
    bool m_identityHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
