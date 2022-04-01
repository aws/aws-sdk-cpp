﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/KeyUsageType.h>
#include <aws/kms/model/KeySpec.h>
#include <aws/kms/model/OriginType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/Tag.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKey"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the KMS key. This reduces the risk
     * that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>If you do not
     * provide a key policy, KMS attaches a default key policy to the KMS key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>Key Management Service Developer Guide</i>. </p> <p>The
     * key policy size quota is 32 kilobytes (32768 bytes).</p> <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the KMS key. This reduces the risk
     * that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>If you do not
     * provide a key policy, KMS attaches a default key policy to the KMS key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>Key Management Service Developer Guide</i>. </p> <p>The
     * key policy size quota is 32 kilobytes (32768 bytes).</p> <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the KMS key. This reduces the risk
     * that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>If you do not
     * provide a key policy, KMS attaches a default key policy to the KMS key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>Key Management Service Developer Guide</i>. </p> <p>The
     * key policy size quota is 32 kilobytes (32768 bytes).</p> <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the KMS key. This reduces the risk
     * that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>If you do not
     * provide a key policy, KMS attaches a default key policy to the KMS key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>Key Management Service Developer Guide</i>. </p> <p>The
     * key policy size quota is 32 kilobytes (32768 bytes).</p> <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the KMS key. This reduces the risk
     * that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>If you do not
     * provide a key policy, KMS attaches a default key policy to the KMS key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>Key Management Service Developer Guide</i>. </p> <p>The
     * key policy size quota is 32 kilobytes (32768 bytes).</p> <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the KMS key. This reduces the risk
     * that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>If you do not
     * provide a key policy, KMS attaches a default key policy to the KMS key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>Key Management Service Developer Guide</i>. </p> <p>The
     * key policy size quota is 32 kilobytes (32768 bytes).</p> <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline CreateKeyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the KMS key. This reduces the risk
     * that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>If you do not
     * provide a key policy, KMS attaches a default key policy to the KMS key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>Key Management Service Developer Guide</i>. </p> <p>The
     * key policy size quota is 32 kilobytes (32768 bytes).</p> <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline CreateKeyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the KMS key. This reduces the risk
     * that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> </li> <li> <p>Each statement in the key policy must contain one or
     * more principals. The principals in the key policy must exist and be visible to
     * KMS. When you create a new Amazon Web Services principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>If you do not
     * provide a key policy, KMS attaches a default key policy to the KMS key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>Key Management Service Developer Guide</i>. </p> <p>The
     * key policy size quota is 32 kilobytes (32768 bytes).</p> <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline CreateKeyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>A description of the KMS key.</p> <p>Use a description that helps you decide
     * whether the KMS key is appropriate for a task. The default value is an empty
     * string (no description).</p> <p>To set or change the description after the key
     * is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the KMS key.</p> <p>Use a description that helps you decide
     * whether the KMS key is appropriate for a task. The default value is an empty
     * string (no description).</p> <p>To set or change the description after the key
     * is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the KMS key.</p> <p>Use a description that helps you decide
     * whether the KMS key is appropriate for a task. The default value is an empty
     * string (no description).</p> <p>To set or change the description after the key
     * is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the KMS key.</p> <p>Use a description that helps you decide
     * whether the KMS key is appropriate for a task. The default value is an empty
     * string (no description).</p> <p>To set or change the description after the key
     * is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the KMS key.</p> <p>Use a description that helps you decide
     * whether the KMS key is appropriate for a task. The default value is an empty
     * string (no description).</p> <p>To set or change the description after the key
     * is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the KMS key.</p> <p>Use a description that helps you decide
     * whether the KMS key is appropriate for a task. The default value is an empty
     * string (no description).</p> <p>To set or change the description after the key
     * is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline CreateKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the KMS key.</p> <p>Use a description that helps you decide
     * whether the KMS key is appropriate for a task. The default value is an empty
     * string (no description).</p> <p>To set or change the description after the key
     * is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline CreateKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the KMS key.</p> <p>Use a description that helps you decide
     * whether the KMS key is appropriate for a task. The default value is an empty
     * string (no description).</p> <p>To set or change the description after the key
     * is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline CreateKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Determines the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key. The default value is
     * <code>ENCRYPT_DECRYPT</code>. This parameter is required only for asymmetric KMS
     * keys. You can't change the <code>KeyUsage</code> value after the KMS key is
     * created.</p> <p>Select only one valid value.</p> <ul> <li> <p>For symmetric KMS
     * keys, omit the parameter or specify <code>ENCRYPT_DECRYPT</code>.</p> </li> <li>
     * <p>For asymmetric KMS keys with RSA key material, specify
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For
     * asymmetric KMS keys with ECC key material, specify <code>SIGN_VERIFY</code>.</p>
     * </li> </ul>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>Determines the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key. The default value is
     * <code>ENCRYPT_DECRYPT</code>. This parameter is required only for asymmetric KMS
     * keys. You can't change the <code>KeyUsage</code> value after the KMS key is
     * created.</p> <p>Select only one valid value.</p> <ul> <li> <p>For symmetric KMS
     * keys, omit the parameter or specify <code>ENCRYPT_DECRYPT</code>.</p> </li> <li>
     * <p>For asymmetric KMS keys with RSA key material, specify
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For
     * asymmetric KMS keys with ECC key material, specify <code>SIGN_VERIFY</code>.</p>
     * </li> </ul>
     */
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }

    /**
     * <p>Determines the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key. The default value is
     * <code>ENCRYPT_DECRYPT</code>. This parameter is required only for asymmetric KMS
     * keys. You can't change the <code>KeyUsage</code> value after the KMS key is
     * created.</p> <p>Select only one valid value.</p> <ul> <li> <p>For symmetric KMS
     * keys, omit the parameter or specify <code>ENCRYPT_DECRYPT</code>.</p> </li> <li>
     * <p>For asymmetric KMS keys with RSA key material, specify
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For
     * asymmetric KMS keys with ECC key material, specify <code>SIGN_VERIFY</code>.</p>
     * </li> </ul>
     */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>Determines the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key. The default value is
     * <code>ENCRYPT_DECRYPT</code>. This parameter is required only for asymmetric KMS
     * keys. You can't change the <code>KeyUsage</code> value after the KMS key is
     * created.</p> <p>Select only one valid value.</p> <ul> <li> <p>For symmetric KMS
     * keys, omit the parameter or specify <code>ENCRYPT_DECRYPT</code>.</p> </li> <li>
     * <p>For asymmetric KMS keys with RSA key material, specify
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For
     * asymmetric KMS keys with ECC key material, specify <code>SIGN_VERIFY</code>.</p>
     * </li> </ul>
     */
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::move(value); }

    /**
     * <p>Determines the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key. The default value is
     * <code>ENCRYPT_DECRYPT</code>. This parameter is required only for asymmetric KMS
     * keys. You can't change the <code>KeyUsage</code> value after the KMS key is
     * created.</p> <p>Select only one valid value.</p> <ul> <li> <p>For symmetric KMS
     * keys, omit the parameter or specify <code>ENCRYPT_DECRYPT</code>.</p> </li> <li>
     * <p>For asymmetric KMS keys with RSA key material, specify
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For
     * asymmetric KMS keys with ECC key material, specify <code>SIGN_VERIFY</code>.</p>
     * </li> </ul>
     */
    inline CreateKeyRequest& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>Determines the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key. The default value is
     * <code>ENCRYPT_DECRYPT</code>. This parameter is required only for asymmetric KMS
     * keys. You can't change the <code>KeyUsage</code> value after the KMS key is
     * created.</p> <p>Select only one valid value.</p> <ul> <li> <p>For symmetric KMS
     * keys, omit the parameter or specify <code>ENCRYPT_DECRYPT</code>.</p> </li> <li>
     * <p>For asymmetric KMS keys with RSA key material, specify
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For
     * asymmetric KMS keys with ECC key material, specify <code>SIGN_VERIFY</code>.</p>
     * </li> </ul>
     */
    inline CreateKeyRequest& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of KMS key to create. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, creates a KMS key with a 256-bit symmetric key
     * for encryption and decryption. For help choosing a key spec for your KMS key,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-choose.html">How
     * to Choose Your KMS key Configuration</a> in the <i> <i>Key Management Service
     * Developer Guide</i> </i>.</p> <p>The <code>KeySpec</code> determines whether the
     * KMS key contains a symmetric key or an asymmetric key pair. It also determines
     * the encryption algorithms or signing algorithms that the KMS key supports. You
     * can't change the <code>KeySpec</code> after the KMS key is created. To further
     * restrict the algorithms that can be used with the KMS key, use a condition key
     * in its key policy or IAM policy. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a>
     * or <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-signing-algorithm">kms:Signing
     * Algorithm</a> in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
     *  <p> <a
     * href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">Amazon Web
     * Services services that are integrated with KMS</a> use symmetric KMS keys to
     * protect your data. These services do not support asymmetric KMS keys. For help
     * determining whether a KMS key is symmetric or asymmetric, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/find-symm-asymm.html">Identifying
     * Symmetric and Asymmetric KMS keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>  <p>KMS supports the following key specs for KMS
     * keys:</p> <ul> <li> <p>Symmetric key (default)</p> <ul> <li> <p>
     * <code>SYMMETRIC_DEFAULT</code> (AES-256-GCM)</p> </li> </ul> </li> <li>
     * <p>Asymmetric RSA key pairs</p> <ul> <li> <p> <code>RSA_2048</code> </p> </li>
     * <li> <p> <code>RSA_3072</code> </p> </li> <li> <p> <code>RSA_4096</code> </p>
     * </li> </ul> </li> <li> <p>Asymmetric NIST-recommended elliptic curve key
     * pairs</p> <ul> <li> <p> <code>ECC_NIST_P256</code> (secp256r1)</p> </li> <li>
     * <p> <code>ECC_NIST_P384</code> (secp384r1)</p> </li> <li> <p>
     * <code>ECC_NIST_P521</code> (secp521r1)</p> </li> </ul> </li> <li> <p>Other
     * asymmetric elliptic curve key pairs</p> <ul> <li> <p>
     * <code>ECC_SECG_P256K1</code> (secp256k1), commonly used for
     * cryptocurrencies.</p> </li> </ul> </li> </ul>
     */
    inline const KeySpec& GetKeySpec() const{ return m_keySpec; }

    /**
     * <p>Specifies the type of KMS key to create. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, creates a KMS key with a 256-bit symmetric key
     * for encryption and decryption. For help choosing a key spec for your KMS key,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-choose.html">How
     * to Choose Your KMS key Configuration</a> in the <i> <i>Key Management Service
     * Developer Guide</i> </i>.</p> <p>The <code>KeySpec</code> determines whether the
     * KMS key contains a symmetric key or an asymmetric key pair. It also determines
     * the encryption algorithms or signing algorithms that the KMS key supports. You
     * can't change the <code>KeySpec</code> after the KMS key is created. To further
     * restrict the algorithms that can be used with the KMS key, use a condition key
     * in its key policy or IAM policy. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a>
     * or <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-signing-algorithm">kms:Signing
     * Algorithm</a> in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
     *  <p> <a
     * href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">Amazon Web
     * Services services that are integrated with KMS</a> use symmetric KMS keys to
     * protect your data. These services do not support asymmetric KMS keys. For help
     * determining whether a KMS key is symmetric or asymmetric, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/find-symm-asymm.html">Identifying
     * Symmetric and Asymmetric KMS keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>  <p>KMS supports the following key specs for KMS
     * keys:</p> <ul> <li> <p>Symmetric key (default)</p> <ul> <li> <p>
     * <code>SYMMETRIC_DEFAULT</code> (AES-256-GCM)</p> </li> </ul> </li> <li>
     * <p>Asymmetric RSA key pairs</p> <ul> <li> <p> <code>RSA_2048</code> </p> </li>
     * <li> <p> <code>RSA_3072</code> </p> </li> <li> <p> <code>RSA_4096</code> </p>
     * </li> </ul> </li> <li> <p>Asymmetric NIST-recommended elliptic curve key
     * pairs</p> <ul> <li> <p> <code>ECC_NIST_P256</code> (secp256r1)</p> </li> <li>
     * <p> <code>ECC_NIST_P384</code> (secp384r1)</p> </li> <li> <p>
     * <code>ECC_NIST_P521</code> (secp521r1)</p> </li> </ul> </li> <li> <p>Other
     * asymmetric elliptic curve key pairs</p> <ul> <li> <p>
     * <code>ECC_SECG_P256K1</code> (secp256k1), commonly used for
     * cryptocurrencies.</p> </li> </ul> </li> </ul>
     */
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }

    /**
     * <p>Specifies the type of KMS key to create. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, creates a KMS key with a 256-bit symmetric key
     * for encryption and decryption. For help choosing a key spec for your KMS key,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-choose.html">How
     * to Choose Your KMS key Configuration</a> in the <i> <i>Key Management Service
     * Developer Guide</i> </i>.</p> <p>The <code>KeySpec</code> determines whether the
     * KMS key contains a symmetric key or an asymmetric key pair. It also determines
     * the encryption algorithms or signing algorithms that the KMS key supports. You
     * can't change the <code>KeySpec</code> after the KMS key is created. To further
     * restrict the algorithms that can be used with the KMS key, use a condition key
     * in its key policy or IAM policy. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a>
     * or <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-signing-algorithm">kms:Signing
     * Algorithm</a> in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
     *  <p> <a
     * href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">Amazon Web
     * Services services that are integrated with KMS</a> use symmetric KMS keys to
     * protect your data. These services do not support asymmetric KMS keys. For help
     * determining whether a KMS key is symmetric or asymmetric, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/find-symm-asymm.html">Identifying
     * Symmetric and Asymmetric KMS keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>  <p>KMS supports the following key specs for KMS
     * keys:</p> <ul> <li> <p>Symmetric key (default)</p> <ul> <li> <p>
     * <code>SYMMETRIC_DEFAULT</code> (AES-256-GCM)</p> </li> </ul> </li> <li>
     * <p>Asymmetric RSA key pairs</p> <ul> <li> <p> <code>RSA_2048</code> </p> </li>
     * <li> <p> <code>RSA_3072</code> </p> </li> <li> <p> <code>RSA_4096</code> </p>
     * </li> </ul> </li> <li> <p>Asymmetric NIST-recommended elliptic curve key
     * pairs</p> <ul> <li> <p> <code>ECC_NIST_P256</code> (secp256r1)</p> </li> <li>
     * <p> <code>ECC_NIST_P384</code> (secp384r1)</p> </li> <li> <p>
     * <code>ECC_NIST_P521</code> (secp521r1)</p> </li> </ul> </li> <li> <p>Other
     * asymmetric elliptic curve key pairs</p> <ul> <li> <p>
     * <code>ECC_SECG_P256K1</code> (secp256k1), commonly used for
     * cryptocurrencies.</p> </li> </ul> </li> </ul>
     */
    inline void SetKeySpec(const KeySpec& value) { m_keySpecHasBeenSet = true; m_keySpec = value; }

    /**
     * <p>Specifies the type of KMS key to create. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, creates a KMS key with a 256-bit symmetric key
     * for encryption and decryption. For help choosing a key spec for your KMS key,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-choose.html">How
     * to Choose Your KMS key Configuration</a> in the <i> <i>Key Management Service
     * Developer Guide</i> </i>.</p> <p>The <code>KeySpec</code> determines whether the
     * KMS key contains a symmetric key or an asymmetric key pair. It also determines
     * the encryption algorithms or signing algorithms that the KMS key supports. You
     * can't change the <code>KeySpec</code> after the KMS key is created. To further
     * restrict the algorithms that can be used with the KMS key, use a condition key
     * in its key policy or IAM policy. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a>
     * or <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-signing-algorithm">kms:Signing
     * Algorithm</a> in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
     *  <p> <a
     * href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">Amazon Web
     * Services services that are integrated with KMS</a> use symmetric KMS keys to
     * protect your data. These services do not support asymmetric KMS keys. For help
     * determining whether a KMS key is symmetric or asymmetric, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/find-symm-asymm.html">Identifying
     * Symmetric and Asymmetric KMS keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>  <p>KMS supports the following key specs for KMS
     * keys:</p> <ul> <li> <p>Symmetric key (default)</p> <ul> <li> <p>
     * <code>SYMMETRIC_DEFAULT</code> (AES-256-GCM)</p> </li> </ul> </li> <li>
     * <p>Asymmetric RSA key pairs</p> <ul> <li> <p> <code>RSA_2048</code> </p> </li>
     * <li> <p> <code>RSA_3072</code> </p> </li> <li> <p> <code>RSA_4096</code> </p>
     * </li> </ul> </li> <li> <p>Asymmetric NIST-recommended elliptic curve key
     * pairs</p> <ul> <li> <p> <code>ECC_NIST_P256</code> (secp256r1)</p> </li> <li>
     * <p> <code>ECC_NIST_P384</code> (secp384r1)</p> </li> <li> <p>
     * <code>ECC_NIST_P521</code> (secp521r1)</p> </li> </ul> </li> <li> <p>Other
     * asymmetric elliptic curve key pairs</p> <ul> <li> <p>
     * <code>ECC_SECG_P256K1</code> (secp256k1), commonly used for
     * cryptocurrencies.</p> </li> </ul> </li> </ul>
     */
    inline void SetKeySpec(KeySpec&& value) { m_keySpecHasBeenSet = true; m_keySpec = std::move(value); }

    /**
     * <p>Specifies the type of KMS key to create. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, creates a KMS key with a 256-bit symmetric key
     * for encryption and decryption. For help choosing a key spec for your KMS key,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-choose.html">How
     * to Choose Your KMS key Configuration</a> in the <i> <i>Key Management Service
     * Developer Guide</i> </i>.</p> <p>The <code>KeySpec</code> determines whether the
     * KMS key contains a symmetric key or an asymmetric key pair. It also determines
     * the encryption algorithms or signing algorithms that the KMS key supports. You
     * can't change the <code>KeySpec</code> after the KMS key is created. To further
     * restrict the algorithms that can be used with the KMS key, use a condition key
     * in its key policy or IAM policy. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a>
     * or <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-signing-algorithm">kms:Signing
     * Algorithm</a> in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
     *  <p> <a
     * href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">Amazon Web
     * Services services that are integrated with KMS</a> use symmetric KMS keys to
     * protect your data. These services do not support asymmetric KMS keys. For help
     * determining whether a KMS key is symmetric or asymmetric, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/find-symm-asymm.html">Identifying
     * Symmetric and Asymmetric KMS keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>  <p>KMS supports the following key specs for KMS
     * keys:</p> <ul> <li> <p>Symmetric key (default)</p> <ul> <li> <p>
     * <code>SYMMETRIC_DEFAULT</code> (AES-256-GCM)</p> </li> </ul> </li> <li>
     * <p>Asymmetric RSA key pairs</p> <ul> <li> <p> <code>RSA_2048</code> </p> </li>
     * <li> <p> <code>RSA_3072</code> </p> </li> <li> <p> <code>RSA_4096</code> </p>
     * </li> </ul> </li> <li> <p>Asymmetric NIST-recommended elliptic curve key
     * pairs</p> <ul> <li> <p> <code>ECC_NIST_P256</code> (secp256r1)</p> </li> <li>
     * <p> <code>ECC_NIST_P384</code> (secp384r1)</p> </li> <li> <p>
     * <code>ECC_NIST_P521</code> (secp521r1)</p> </li> </ul> </li> <li> <p>Other
     * asymmetric elliptic curve key pairs</p> <ul> <li> <p>
     * <code>ECC_SECG_P256K1</code> (secp256k1), commonly used for
     * cryptocurrencies.</p> </li> </ul> </li> </ul>
     */
    inline CreateKeyRequest& WithKeySpec(const KeySpec& value) { SetKeySpec(value); return *this;}

    /**
     * <p>Specifies the type of KMS key to create. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, creates a KMS key with a 256-bit symmetric key
     * for encryption and decryption. For help choosing a key spec for your KMS key,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-choose.html">How
     * to Choose Your KMS key Configuration</a> in the <i> <i>Key Management Service
     * Developer Guide</i> </i>.</p> <p>The <code>KeySpec</code> determines whether the
     * KMS key contains a symmetric key or an asymmetric key pair. It also determines
     * the encryption algorithms or signing algorithms that the KMS key supports. You
     * can't change the <code>KeySpec</code> after the KMS key is created. To further
     * restrict the algorithms that can be used with the KMS key, use a condition key
     * in its key policy or IAM policy. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a>
     * or <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-signing-algorithm">kms:Signing
     * Algorithm</a> in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
     *  <p> <a
     * href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">Amazon Web
     * Services services that are integrated with KMS</a> use symmetric KMS keys to
     * protect your data. These services do not support asymmetric KMS keys. For help
     * determining whether a KMS key is symmetric or asymmetric, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/find-symm-asymm.html">Identifying
     * Symmetric and Asymmetric KMS keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>  <p>KMS supports the following key specs for KMS
     * keys:</p> <ul> <li> <p>Symmetric key (default)</p> <ul> <li> <p>
     * <code>SYMMETRIC_DEFAULT</code> (AES-256-GCM)</p> </li> </ul> </li> <li>
     * <p>Asymmetric RSA key pairs</p> <ul> <li> <p> <code>RSA_2048</code> </p> </li>
     * <li> <p> <code>RSA_3072</code> </p> </li> <li> <p> <code>RSA_4096</code> </p>
     * </li> </ul> </li> <li> <p>Asymmetric NIST-recommended elliptic curve key
     * pairs</p> <ul> <li> <p> <code>ECC_NIST_P256</code> (secp256r1)</p> </li> <li>
     * <p> <code>ECC_NIST_P384</code> (secp384r1)</p> </li> <li> <p>
     * <code>ECC_NIST_P521</code> (secp521r1)</p> </li> </ul> </li> <li> <p>Other
     * asymmetric elliptic curve key pairs</p> <ul> <li> <p>
     * <code>ECC_SECG_P256K1</code> (secp256k1), commonly used for
     * cryptocurrencies.</p> </li> </ul> </li> </ul>
     */
    inline CreateKeyRequest& WithKeySpec(KeySpec&& value) { SetKeySpec(std::move(value)); return *this;}


    /**
     * <p>The source of the key material for the KMS key. You cannot change the origin
     * after you create the KMS key. The default is <code>AWS_KMS</code>, which means
     * that KMS creates the key material.</p> <p>To create a KMS key with no key
     * material (for imported key material), set the value to <code>EXTERNAL</code>.
     * For more information about importing key material into KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>Key Management Service Developer Guide</i>. This
     * value is valid only for symmetric KMS keys.</p> <p>To create a KMS key in an KMS
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and create its key material in the associated CloudHSM cluster,
     * set this value to <code>AWS_CLOUDHSM</code>. You must also use the
     * <code>CustomKeyStoreId</code> parameter to identify the custom key store. This
     * value is valid only for symmetric KMS keys.</p>
     */
    inline const OriginType& GetOrigin() const{ return m_origin; }

    /**
     * <p>The source of the key material for the KMS key. You cannot change the origin
     * after you create the KMS key. The default is <code>AWS_KMS</code>, which means
     * that KMS creates the key material.</p> <p>To create a KMS key with no key
     * material (for imported key material), set the value to <code>EXTERNAL</code>.
     * For more information about importing key material into KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>Key Management Service Developer Guide</i>. This
     * value is valid only for symmetric KMS keys.</p> <p>To create a KMS key in an KMS
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and create its key material in the associated CloudHSM cluster,
     * set this value to <code>AWS_CLOUDHSM</code>. You must also use the
     * <code>CustomKeyStoreId</code> parameter to identify the custom key store. This
     * value is valid only for symmetric KMS keys.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>The source of the key material for the KMS key. You cannot change the origin
     * after you create the KMS key. The default is <code>AWS_KMS</code>, which means
     * that KMS creates the key material.</p> <p>To create a KMS key with no key
     * material (for imported key material), set the value to <code>EXTERNAL</code>.
     * For more information about importing key material into KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>Key Management Service Developer Guide</i>. This
     * value is valid only for symmetric KMS keys.</p> <p>To create a KMS key in an KMS
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and create its key material in the associated CloudHSM cluster,
     * set this value to <code>AWS_CLOUDHSM</code>. You must also use the
     * <code>CustomKeyStoreId</code> parameter to identify the custom key store. This
     * value is valid only for symmetric KMS keys.</p>
     */
    inline void SetOrigin(const OriginType& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the key material for the KMS key. You cannot change the origin
     * after you create the KMS key. The default is <code>AWS_KMS</code>, which means
     * that KMS creates the key material.</p> <p>To create a KMS key with no key
     * material (for imported key material), set the value to <code>EXTERNAL</code>.
     * For more information about importing key material into KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>Key Management Service Developer Guide</i>. This
     * value is valid only for symmetric KMS keys.</p> <p>To create a KMS key in an KMS
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and create its key material in the associated CloudHSM cluster,
     * set this value to <code>AWS_CLOUDHSM</code>. You must also use the
     * <code>CustomKeyStoreId</code> parameter to identify the custom key store. This
     * value is valid only for symmetric KMS keys.</p>
     */
    inline void SetOrigin(OriginType&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>The source of the key material for the KMS key. You cannot change the origin
     * after you create the KMS key. The default is <code>AWS_KMS</code>, which means
     * that KMS creates the key material.</p> <p>To create a KMS key with no key
     * material (for imported key material), set the value to <code>EXTERNAL</code>.
     * For more information about importing key material into KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>Key Management Service Developer Guide</i>. This
     * value is valid only for symmetric KMS keys.</p> <p>To create a KMS key in an KMS
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and create its key material in the associated CloudHSM cluster,
     * set this value to <code>AWS_CLOUDHSM</code>. You must also use the
     * <code>CustomKeyStoreId</code> parameter to identify the custom key store. This
     * value is valid only for symmetric KMS keys.</p>
     */
    inline CreateKeyRequest& WithOrigin(const OriginType& value) { SetOrigin(value); return *this;}

    /**
     * <p>The source of the key material for the KMS key. You cannot change the origin
     * after you create the KMS key. The default is <code>AWS_KMS</code>, which means
     * that KMS creates the key material.</p> <p>To create a KMS key with no key
     * material (for imported key material), set the value to <code>EXTERNAL</code>.
     * For more information about importing key material into KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>Key Management Service Developer Guide</i>. This
     * value is valid only for symmetric KMS keys.</p> <p>To create a KMS key in an KMS
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and create its key material in the associated CloudHSM cluster,
     * set this value to <code>AWS_CLOUDHSM</code>. You must also use the
     * <code>CustomKeyStoreId</code> parameter to identify the custom key store. This
     * value is valid only for symmetric KMS keys.</p>
     */
    inline CreateKeyRequest& WithOrigin(OriginType&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated CloudHSM cluster. To create
     * a KMS key in a custom key store, you must also specify the <code>Origin</code>
     * parameter with a value of <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that
     * is associated with the custom key store must have at least two active HSMs, each
     * in a different Availability Zone in the Region.</p> <p>This parameter is valid
     * only for symmetric KMS keys and regional KMS keys. You cannot create an
     * asymmetric KMS key or a multi-Region key in a custom key store.</p> <p>To find
     * the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in KMS, which combines the convenience and
     * extensive integration of KMS with the isolation and control of a single-tenant
     * key store.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated CloudHSM cluster. To create
     * a KMS key in a custom key store, you must also specify the <code>Origin</code>
     * parameter with a value of <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that
     * is associated with the custom key store must have at least two active HSMs, each
     * in a different Availability Zone in the Region.</p> <p>This parameter is valid
     * only for symmetric KMS keys and regional KMS keys. You cannot create an
     * asymmetric KMS key or a multi-Region key in a custom key store.</p> <p>To find
     * the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in KMS, which combines the convenience and
     * extensive integration of KMS with the isolation and control of a single-tenant
     * key store.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated CloudHSM cluster. To create
     * a KMS key in a custom key store, you must also specify the <code>Origin</code>
     * parameter with a value of <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that
     * is associated with the custom key store must have at least two active HSMs, each
     * in a different Availability Zone in the Region.</p> <p>This parameter is valid
     * only for symmetric KMS keys and regional KMS keys. You cannot create an
     * asymmetric KMS key or a multi-Region key in a custom key store.</p> <p>To find
     * the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in KMS, which combines the convenience and
     * extensive integration of KMS with the isolation and control of a single-tenant
     * key store.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated CloudHSM cluster. To create
     * a KMS key in a custom key store, you must also specify the <code>Origin</code>
     * parameter with a value of <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that
     * is associated with the custom key store must have at least two active HSMs, each
     * in a different Availability Zone in the Region.</p> <p>This parameter is valid
     * only for symmetric KMS keys and regional KMS keys. You cannot create an
     * asymmetric KMS key or a multi-Region key in a custom key store.</p> <p>To find
     * the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in KMS, which combines the convenience and
     * extensive integration of KMS with the isolation and control of a single-tenant
     * key store.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated CloudHSM cluster. To create
     * a KMS key in a custom key store, you must also specify the <code>Origin</code>
     * parameter with a value of <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that
     * is associated with the custom key store must have at least two active HSMs, each
     * in a different Availability Zone in the Region.</p> <p>This parameter is valid
     * only for symmetric KMS keys and regional KMS keys. You cannot create an
     * asymmetric KMS key or a multi-Region key in a custom key store.</p> <p>To find
     * the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in KMS, which combines the convenience and
     * extensive integration of KMS with the isolation and control of a single-tenant
     * key store.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated CloudHSM cluster. To create
     * a KMS key in a custom key store, you must also specify the <code>Origin</code>
     * parameter with a value of <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that
     * is associated with the custom key store must have at least two active HSMs, each
     * in a different Availability Zone in the Region.</p> <p>This parameter is valid
     * only for symmetric KMS keys and regional KMS keys. You cannot create an
     * asymmetric KMS key or a multi-Region key in a custom key store.</p> <p>To find
     * the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in KMS, which combines the convenience and
     * extensive integration of KMS with the isolation and control of a single-tenant
     * key store.</p>
     */
    inline CreateKeyRequest& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated CloudHSM cluster. To create
     * a KMS key in a custom key store, you must also specify the <code>Origin</code>
     * parameter with a value of <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that
     * is associated with the custom key store must have at least two active HSMs, each
     * in a different Availability Zone in the Region.</p> <p>This parameter is valid
     * only for symmetric KMS keys and regional KMS keys. You cannot create an
     * asymmetric KMS key or a multi-Region key in a custom key store.</p> <p>To find
     * the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in KMS, which combines the convenience and
     * extensive integration of KMS with the isolation and control of a single-tenant
     * key store.</p>
     */
    inline CreateKeyRequest& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated CloudHSM cluster. To create
     * a KMS key in a custom key store, you must also specify the <code>Origin</code>
     * parameter with a value of <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that
     * is associated with the custom key store must have at least two active HSMs, each
     * in a different Availability Zone in the Region.</p> <p>This parameter is valid
     * only for symmetric KMS keys and regional KMS keys. You cannot create an
     * asymmetric KMS key or a multi-Region key in a custom key store.</p> <p>To find
     * the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in KMS, which combines the convenience and
     * extensive integration of KMS with the isolation and control of a single-tenant
     * key store.</p>
     */
    inline CreateKeyRequest& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}


    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p>  <p>Use this parameter only when you include a policy in
     * the request and you intend to prevent the principal that is making the request
     * from making a subsequent <a>PutKeyPolicy</a> request on the KMS key.</p> <p>The
     * default value is false.</p>
     */
    inline bool GetBypassPolicyLockoutSafetyCheck() const{ return m_bypassPolicyLockoutSafetyCheck; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p>  <p>Use this parameter only when you include a policy in
     * the request and you intend to prevent the principal that is making the request
     * from making a subsequent <a>PutKeyPolicy</a> request on the KMS key.</p> <p>The
     * default value is false.</p>
     */
    inline bool BypassPolicyLockoutSafetyCheckHasBeenSet() const { return m_bypassPolicyLockoutSafetyCheckHasBeenSet; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p>  <p>Use this parameter only when you include a policy in
     * the request and you intend to prevent the principal that is making the request
     * from making a subsequent <a>PutKeyPolicy</a> request on the KMS key.</p> <p>The
     * default value is false.</p>
     */
    inline void SetBypassPolicyLockoutSafetyCheck(bool value) { m_bypassPolicyLockoutSafetyCheckHasBeenSet = true; m_bypassPolicyLockoutSafetyCheck = value; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p>  <p>Use this parameter only when you include a policy in
     * the request and you intend to prevent the principal that is making the request
     * from making a subsequent <a>PutKeyPolicy</a> request on the KMS key.</p> <p>The
     * default value is false.</p>
     */
    inline CreateKeyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}


    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Tagging or untagging a KMS key can allow or deny
     * permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">Using
     * ABAC in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>To use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Tagging or untagging a KMS key can allow or deny
     * permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">Using
     * ABAC in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>To use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Tagging or untagging a KMS key can allow or deny
     * permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">Using
     * ABAC in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>To use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Tagging or untagging a KMS key can allow or deny
     * permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">Using
     * ABAC in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>To use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Tagging or untagging a KMS key can allow or deny
     * permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">Using
     * ABAC in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>To use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline CreateKeyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Tagging or untagging a KMS key can allow or deny
     * permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">Using
     * ABAC in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>To use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline CreateKeyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Tagging or untagging a KMS key can allow or deny
     * permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">Using
     * ABAC in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>To use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline CreateKeyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Tagging or untagging a KMS key can allow or deny
     * permission to the KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">Using
     * ABAC in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>To use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
     * Keys</a>.</p>
     */
    inline CreateKeyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Creates a multi-Region primary key that you can replicate into other Amazon
     * Web Services Regions. You cannot change this value after you create the KMS key.
     * </p> <p>For a multi-Region key, set this parameter to <code>True</code>. For a
     * single-Region KMS key, omit this parameter or set it to <code>False</code>. The
     * default value is <code>False</code>.</p> <p>This operation supports
     * <i>multi-Region keys</i>, an KMS feature that lets you create multiple
     * interoperable KMS keys in different Amazon Web Services Regions. Because these
     * KMS keys have the same key ID, key material, and other metadata, you can use
     * them interchangeably to encrypt data in one Amazon Web Services Region and
     * decrypt it in a different Amazon Web Services Region without re-encrypting the
     * data or making a cross-Region call. For more information about multi-Region
     * keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Using
     * multi-Region keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     * <p>This value creates a <i>primary key</i>, not a replica. To create a
     * <i>replica key</i>, use the <a>ReplicateKey</a> operation. </p> <p>You can
     * create a symmetric or asymmetric multi-Region key, and you can create a
     * multi-Region key with imported key material. However, you cannot create a
     * multi-Region key in a custom key store.</p>
     */
    inline bool GetMultiRegion() const{ return m_multiRegion; }

    /**
     * <p>Creates a multi-Region primary key that you can replicate into other Amazon
     * Web Services Regions. You cannot change this value after you create the KMS key.
     * </p> <p>For a multi-Region key, set this parameter to <code>True</code>. For a
     * single-Region KMS key, omit this parameter or set it to <code>False</code>. The
     * default value is <code>False</code>.</p> <p>This operation supports
     * <i>multi-Region keys</i>, an KMS feature that lets you create multiple
     * interoperable KMS keys in different Amazon Web Services Regions. Because these
     * KMS keys have the same key ID, key material, and other metadata, you can use
     * them interchangeably to encrypt data in one Amazon Web Services Region and
     * decrypt it in a different Amazon Web Services Region without re-encrypting the
     * data or making a cross-Region call. For more information about multi-Region
     * keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Using
     * multi-Region keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     * <p>This value creates a <i>primary key</i>, not a replica. To create a
     * <i>replica key</i>, use the <a>ReplicateKey</a> operation. </p> <p>You can
     * create a symmetric or asymmetric multi-Region key, and you can create a
     * multi-Region key with imported key material. However, you cannot create a
     * multi-Region key in a custom key store.</p>
     */
    inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }

    /**
     * <p>Creates a multi-Region primary key that you can replicate into other Amazon
     * Web Services Regions. You cannot change this value after you create the KMS key.
     * </p> <p>For a multi-Region key, set this parameter to <code>True</code>. For a
     * single-Region KMS key, omit this parameter or set it to <code>False</code>. The
     * default value is <code>False</code>.</p> <p>This operation supports
     * <i>multi-Region keys</i>, an KMS feature that lets you create multiple
     * interoperable KMS keys in different Amazon Web Services Regions. Because these
     * KMS keys have the same key ID, key material, and other metadata, you can use
     * them interchangeably to encrypt data in one Amazon Web Services Region and
     * decrypt it in a different Amazon Web Services Region without re-encrypting the
     * data or making a cross-Region call. For more information about multi-Region
     * keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Using
     * multi-Region keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     * <p>This value creates a <i>primary key</i>, not a replica. To create a
     * <i>replica key</i>, use the <a>ReplicateKey</a> operation. </p> <p>You can
     * create a symmetric or asymmetric multi-Region key, and you can create a
     * multi-Region key with imported key material. However, you cannot create a
     * multi-Region key in a custom key store.</p>
     */
    inline void SetMultiRegion(bool value) { m_multiRegionHasBeenSet = true; m_multiRegion = value; }

    /**
     * <p>Creates a multi-Region primary key that you can replicate into other Amazon
     * Web Services Regions. You cannot change this value after you create the KMS key.
     * </p> <p>For a multi-Region key, set this parameter to <code>True</code>. For a
     * single-Region KMS key, omit this parameter or set it to <code>False</code>. The
     * default value is <code>False</code>.</p> <p>This operation supports
     * <i>multi-Region keys</i>, an KMS feature that lets you create multiple
     * interoperable KMS keys in different Amazon Web Services Regions. Because these
     * KMS keys have the same key ID, key material, and other metadata, you can use
     * them interchangeably to encrypt data in one Amazon Web Services Region and
     * decrypt it in a different Amazon Web Services Region without re-encrypting the
     * data or making a cross-Region call. For more information about multi-Region
     * keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Using
     * multi-Region keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     * <p>This value creates a <i>primary key</i>, not a replica. To create a
     * <i>replica key</i>, use the <a>ReplicateKey</a> operation. </p> <p>You can
     * create a symmetric or asymmetric multi-Region key, and you can create a
     * multi-Region key with imported key material. However, you cannot create a
     * multi-Region key in a custom key store.</p>
     */
    inline CreateKeyRequest& WithMultiRegion(bool value) { SetMultiRegion(value); return *this;}

  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    KeyUsageType m_keyUsage;
    bool m_keyUsageHasBeenSet;

    KeySpec m_keySpec;
    bool m_keySpecHasBeenSet;

    OriginType m_origin;
    bool m_originHasBeenSet;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet;

    bool m_bypassPolicyLockoutSafetyCheck;
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    bool m_multiRegion;
    bool m_multiRegionHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
