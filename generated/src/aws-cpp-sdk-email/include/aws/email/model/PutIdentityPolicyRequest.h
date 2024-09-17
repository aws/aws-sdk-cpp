/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to add or update a sending authorization policy for an
   * identity. Sending authorization is an Amazon SES feature that enables you to
   * authorize other senders to use your identities. For information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutIdentityPolicyRequest">AWS
   * API Reference</a></p>
   */
  class PutIdentityPolicyRequest : public SESRequest
  {
  public:
    AWS_SES_API PutIdentityPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIdentityPolicy"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identity to which that the policy applies. You can specify an identity by
     * using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this operation, you must own the identity.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }
    inline PutIdentityPolicyRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}
    inline PutIdentityPolicyRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}
    inline PutIdentityPolicyRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline PutIdentityPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline PutIdentityPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline PutIdentityPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p>
     * <p>For information about the syntax of sending authorization policies, see the
     * <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>. </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline PutIdentityPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline PutIdentityPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline PutIdentityPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
