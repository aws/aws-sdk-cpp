﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class PutKeyPolicyRequest : public KMSRequest
  {
  public:
    AWS_KMS_API PutKeyPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutKeyPolicy"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    PutKeyPolicyRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key policy. If no policy name is specified, the default value
     * is <code>default</code>. The only valid value is <code>default</code>.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PutKeyPolicyRequest& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>The key policy must allow the calling
     * principal to make a subsequent <code>PutKeyPolicy</code> request on the KMS key.
     * This reduces the risk that the KMS key becomes unmanageable. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html#prevent-unmanageable-key">Default
     * key policy</a> in the <i>Key Management Service Developer Guide</i>. (To omit
     * this condition, set <code>BypassPolicyLockoutSafetyCheck</code> to true.)</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal, you might need to enforce a
     * delay before including the new principal in a key policy because the new
     * principal might not be immediately visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul>  <p>If
     * either of the required <code>Resource</code> or <code>Action</code> elements are
     * missing from a key policy statement, the policy statement has no effect. When a
     * key policy statement is missing one of these elements, the KMS console correctly
     * reports an error, but the <code>PutKeyPolicy</code> API request succeeds, even
     * though the policy statement is ineffective.</p> <p>For more information on
     * required key policy elements, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-overview.html#key-policy-elements">Elements
     * in a key policy</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>A key policy document can include only the following characters:</p>
     * <ul> <li> <p>Printable ASCII characters from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range.</p> </li>
     * <li> <p>Printable characters in the Basic Latin and Latin-1 Supplement character
     * set (through <code>\u00FF</code>).</p> </li> <li> <p>The tab
     * (<code>\u0009</code>), line feed (<code>\u000A</code>), and carriage return
     * (<code>\u000D</code>) special characters</p> </li> </ul>  <p>If the key
     * policy exceeds the length constraint, KMS returns a
     * <code>LimitExceededException</code>.</p>  <p>For information about key
     * policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>.For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutKeyPolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Skips ("bypasses") the key policy lockout safety check. The default value is
     * false.</p>  <p>Setting this value to true increases the risk that the
     * KMS key becomes unmanageable. Do not set this value to true
     * indiscriminately.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html#prevent-unmanageable-key">Default
     * key policy</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_PutKeyPolicy.html">PutKeyPolicy</a>
     * request on the KMS key.</p>
     */
    inline bool GetBypassPolicyLockoutSafetyCheck() const { return m_bypassPolicyLockoutSafetyCheck; }
    inline bool BypassPolicyLockoutSafetyCheckHasBeenSet() const { return m_bypassPolicyLockoutSafetyCheckHasBeenSet; }
    inline void SetBypassPolicyLockoutSafetyCheck(bool value) { m_bypassPolicyLockoutSafetyCheckHasBeenSet = true; m_bypassPolicyLockoutSafetyCheck = value; }
    inline PutKeyPolicyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    bool m_bypassPolicyLockoutSafetyCheck{false};
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
