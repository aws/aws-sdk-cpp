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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API PutKeyPolicyRequest : public KMSRequest
  {
  public:
    PutKeyPolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline PutKeyPolicyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline PutKeyPolicyRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline PutKeyPolicyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>The name of the key policy.</p> <p>This value must be
     * <code>default</code>.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the key policy.</p> <p>This value must be
     * <code>default</code>.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the key policy.</p> <p>This value must be
     * <code>default</code>.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the key policy.</p> <p>This value must be
     * <code>default</code>.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the key policy.</p> <p>This value must be
     * <code>default</code>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the key policy.</p> <p>This value must be
     * <code>default</code>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the key policy.</p> <p>This value must be
     * <code>default</code>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you do not set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must meet the
     * following criteria:</p> <ul> <li> <p>It must allow the principal making the
     * <code>PutKeyPolicy</code> request to make a subsequent <code>PutKeyPolicy</code>
     * request on the CMK. This reduces the likelihood that the CMK becomes
     * unmanageable. For more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p>The principal(s) specified in the key policy must
     * exist and be visible to AWS KMS. When you create a new AWS principal (for
     * example, an IAM user or role), you might need to enforce a delay before
     * specifying the new principal in a key policy because the new principal might not
     * immediately be visible to AWS KMS. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>IAM User
     * Guide</i>.</p> </li> </ul> <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you do not set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must meet the
     * following criteria:</p> <ul> <li> <p>It must allow the principal making the
     * <code>PutKeyPolicy</code> request to make a subsequent <code>PutKeyPolicy</code>
     * request on the CMK. This reduces the likelihood that the CMK becomes
     * unmanageable. For more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p>The principal(s) specified in the key policy must
     * exist and be visible to AWS KMS. When you create a new AWS principal (for
     * example, an IAM user or role), you might need to enforce a delay before
     * specifying the new principal in a key policy because the new principal might not
     * immediately be visible to AWS KMS. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>IAM User
     * Guide</i>.</p> </li> </ul> <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you do not set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must meet the
     * following criteria:</p> <ul> <li> <p>It must allow the principal making the
     * <code>PutKeyPolicy</code> request to make a subsequent <code>PutKeyPolicy</code>
     * request on the CMK. This reduces the likelihood that the CMK becomes
     * unmanageable. For more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p>The principal(s) specified in the key policy must
     * exist and be visible to AWS KMS. When you create a new AWS principal (for
     * example, an IAM user or role), you might need to enforce a delay before
     * specifying the new principal in a key policy because the new principal might not
     * immediately be visible to AWS KMS. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>IAM User
     * Guide</i>.</p> </li> </ul> <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you do not set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must meet the
     * following criteria:</p> <ul> <li> <p>It must allow the principal making the
     * <code>PutKeyPolicy</code> request to make a subsequent <code>PutKeyPolicy</code>
     * request on the CMK. This reduces the likelihood that the CMK becomes
     * unmanageable. For more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p>The principal(s) specified in the key policy must
     * exist and be visible to AWS KMS. When you create a new AWS principal (for
     * example, an IAM user or role), you might need to enforce a delay before
     * specifying the new principal in a key policy because the new principal might not
     * immediately be visible to AWS KMS. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>IAM User
     * Guide</i>.</p> </li> </ul> <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you do not set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must meet the
     * following criteria:</p> <ul> <li> <p>It must allow the principal making the
     * <code>PutKeyPolicy</code> request to make a subsequent <code>PutKeyPolicy</code>
     * request on the CMK. This reduces the likelihood that the CMK becomes
     * unmanageable. For more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p>The principal(s) specified in the key policy must
     * exist and be visible to AWS KMS. When you create a new AWS principal (for
     * example, an IAM user or role), you might need to enforce a delay before
     * specifying the new principal in a key policy because the new principal might not
     * immediately be visible to AWS KMS. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>IAM User
     * Guide</i>.</p> </li> </ul> <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline PutKeyPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you do not set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must meet the
     * following criteria:</p> <ul> <li> <p>It must allow the principal making the
     * <code>PutKeyPolicy</code> request to make a subsequent <code>PutKeyPolicy</code>
     * request on the CMK. This reduces the likelihood that the CMK becomes
     * unmanageable. For more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p>The principal(s) specified in the key policy must
     * exist and be visible to AWS KMS. When you create a new AWS principal (for
     * example, an IAM user or role), you might need to enforce a delay before
     * specifying the new principal in a key policy because the new principal might not
     * immediately be visible to AWS KMS. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>IAM User
     * Guide</i>.</p> </li> </ul> <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline PutKeyPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you do not set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must meet the
     * following criteria:</p> <ul> <li> <p>It must allow the principal making the
     * <code>PutKeyPolicy</code> request to make a subsequent <code>PutKeyPolicy</code>
     * request on the CMK. This reduces the likelihood that the CMK becomes
     * unmanageable. For more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </li> <li> <p>The principal(s) specified in the key policy must
     * exist and be visible to AWS KMS. When you create a new AWS principal (for
     * example, an IAM user or role), you might need to enforce a delay before
     * specifying the new principal in a key policy because the new principal might not
     * immediately be visible to AWS KMS. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>IAM User
     * Guide</i>.</p> </li> </ul> <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline PutKeyPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the likelihood that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </important> <p>Use this parameter only when you intend to
     * prevent the principal making the request from making a subsequent
     * <code>PutKeyPolicy</code> request on the CMK.</p> <p>The default value is
     * false.</p>
     */
    inline bool GetBypassPolicyLockoutSafetyCheck() const{ return m_bypassPolicyLockoutSafetyCheck; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the likelihood that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </important> <p>Use this parameter only when you intend to
     * prevent the principal making the request from making a subsequent
     * <code>PutKeyPolicy</code> request on the CMK.</p> <p>The default value is
     * false.</p>
     */
    inline void SetBypassPolicyLockoutSafetyCheck(bool value) { m_bypassPolicyLockoutSafetyCheckHasBeenSet = true; m_bypassPolicyLockoutSafetyCheck = value; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the likelihood that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </important> <p>Use this parameter only when you intend to
     * prevent the principal making the request from making a subsequent
     * <code>PutKeyPolicy</code> request on the CMK.</p> <p>The default value is
     * false.</p>
     */
    inline PutKeyPolicyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_policy;
    bool m_policyHasBeenSet;
    bool m_bypassPolicyLockoutSafetyCheck;
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
