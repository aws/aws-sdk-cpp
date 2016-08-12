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
#include <aws/kms/model/KeyUsageType.h>
#include <aws/kms/model/OriginType.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API CreateKeyRequest : public KMSRequest
  {
  public:
    CreateKeyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you specify a policy and do
     * not set <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must
     * meet the following criteria:</p> <ul> <li> <p>It must allow the principal making
     * the <code>CreateKey</code> request to make a subsequent <a>PutKeyPolicy</a>
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
     * Guide</i>.</p> </li> </ul> <p>If you do not specify a policy, AWS KMS attaches a
     * default key policy to the CMK. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you specify a policy and do
     * not set <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must
     * meet the following criteria:</p> <ul> <li> <p>It must allow the principal making
     * the <code>CreateKey</code> request to make a subsequent <a>PutKeyPolicy</a>
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
     * Guide</i>.</p> </li> </ul> <p>If you do not specify a policy, AWS KMS attaches a
     * default key policy to the CMK. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you specify a policy and do
     * not set <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must
     * meet the following criteria:</p> <ul> <li> <p>It must allow the principal making
     * the <code>CreateKey</code> request to make a subsequent <a>PutKeyPolicy</a>
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
     * Guide</i>.</p> </li> </ul> <p>If you do not specify a policy, AWS KMS attaches a
     * default key policy to the CMK. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you specify a policy and do
     * not set <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must
     * meet the following criteria:</p> <ul> <li> <p>It must allow the principal making
     * the <code>CreateKey</code> request to make a subsequent <a>PutKeyPolicy</a>
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
     * Guide</i>.</p> </li> </ul> <p>If you do not specify a policy, AWS KMS attaches a
     * default key policy to the CMK. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you specify a policy and do
     * not set <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must
     * meet the following criteria:</p> <ul> <li> <p>It must allow the principal making
     * the <code>CreateKey</code> request to make a subsequent <a>PutKeyPolicy</a>
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
     * Guide</i>.</p> </li> </ul> <p>If you do not specify a policy, AWS KMS attaches a
     * default key policy to the CMK. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline CreateKeyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you specify a policy and do
     * not set <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must
     * meet the following criteria:</p> <ul> <li> <p>It must allow the principal making
     * the <code>CreateKey</code> request to make a subsequent <a>PutKeyPolicy</a>
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
     * Guide</i>.</p> </li> </ul> <p>If you do not specify a policy, AWS KMS attaches a
     * default key policy to the CMK. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline CreateKeyRequest& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you specify a policy and do
     * not set <code>BypassPolicyLockoutSafetyCheck</code> to true, the policy must
     * meet the following criteria:</p> <ul> <li> <p>It must allow the principal making
     * the <code>CreateKey</code> request to make a subsequent <a>PutKeyPolicy</a>
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
     * Guide</i>.</p> </li> </ul> <p>If you do not specify a policy, AWS KMS attaches a
     * default key policy to the CMK. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The policy size limit is 32 KiB (32768 bytes).</p>
     */
    inline CreateKeyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline CreateKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline CreateKeyRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline CreateKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The intended use of the CMK.</p> <p>You can use CMKs only for symmetric
     * encryption and decryption.</p>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>The intended use of the CMK.</p> <p>You can use CMKs only for symmetric
     * encryption and decryption.</p>
     */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The intended use of the CMK.</p> <p>You can use CMKs only for symmetric
     * encryption and decryption.</p>
     */
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The intended use of the CMK.</p> <p>You can use CMKs only for symmetric
     * encryption and decryption.</p>
     */
    inline CreateKeyRequest& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The intended use of the CMK.</p> <p>You can use CMKs only for symmetric
     * encryption and decryption.</p>
     */
    inline CreateKeyRequest& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The source of the CMK's key material.</p> <p>The default is
     * <code>AWS_KMS</code>, which means AWS KMS creates the key material. When this
     * parameter is set to <code>EXTERNAL</code>, the request creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The CMK's <code>Origin</code> is immutable and is set when the CMK is
     * created.</p>
     */
    inline const OriginType& GetOrigin() const{ return m_origin; }

    /**
     * <p>The source of the CMK's key material.</p> <p>The default is
     * <code>AWS_KMS</code>, which means AWS KMS creates the key material. When this
     * parameter is set to <code>EXTERNAL</code>, the request creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The CMK's <code>Origin</code> is immutable and is set when the CMK is
     * created.</p>
     */
    inline void SetOrigin(const OriginType& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the CMK's key material.</p> <p>The default is
     * <code>AWS_KMS</code>, which means AWS KMS creates the key material. When this
     * parameter is set to <code>EXTERNAL</code>, the request creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The CMK's <code>Origin</code> is immutable and is set when the CMK is
     * created.</p>
     */
    inline void SetOrigin(OriginType&& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the CMK's key material.</p> <p>The default is
     * <code>AWS_KMS</code>, which means AWS KMS creates the key material. When this
     * parameter is set to <code>EXTERNAL</code>, the request creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The CMK's <code>Origin</code> is immutable and is set when the CMK is
     * created.</p>
     */
    inline CreateKeyRequest& WithOrigin(const OriginType& value) { SetOrigin(value); return *this;}

    /**
     * <p>The source of the CMK's key material.</p> <p>The default is
     * <code>AWS_KMS</code>, which means AWS KMS creates the key material. When this
     * parameter is set to <code>EXTERNAL</code>, the request creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The CMK's <code>Origin</code> is immutable and is set when the CMK is
     * created.</p>
     */
    inline CreateKeyRequest& WithOrigin(OriginType&& value) { SetOrigin(value); return *this;}

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the likelihood that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </important> <p>Use this parameter only when you include a policy
     * in the request and you intend to prevent the principal making the request from
     * making a subsequent <a>PutKeyPolicy</a> request on the CMK.</p> <p>The default
     * value is false.</p>
     */
    inline bool GetBypassPolicyLockoutSafetyCheck() const{ return m_bypassPolicyLockoutSafetyCheck; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the likelihood that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </important> <p>Use this parameter only when you include a policy
     * in the request and you intend to prevent the principal making the request from
     * making a subsequent <a>PutKeyPolicy</a> request on the CMK.</p> <p>The default
     * value is false.</p>
     */
    inline void SetBypassPolicyLockoutSafetyCheck(bool value) { m_bypassPolicyLockoutSafetyCheckHasBeenSet = true; m_bypassPolicyLockoutSafetyCheck = value; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the likelihood that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>AWS Key Management Service Developer
     * Guide</i>.</p> </important> <p>Use this parameter only when you include a policy
     * in the request and you intend to prevent the principal making the request from
     * making a subsequent <a>PutKeyPolicy</a> request on the CMK.</p> <p>The default
     * value is false.</p>
     */
    inline CreateKeyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}

  private:
    Aws::String m_policy;
    bool m_policyHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    KeyUsageType m_keyUsage;
    bool m_keyUsageHasBeenSet;
    OriginType m_origin;
    bool m_originHasBeenSet;
    bool m_bypassPolicyLockoutSafetyCheck;
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
