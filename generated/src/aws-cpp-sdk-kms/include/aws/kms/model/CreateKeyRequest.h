/**
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
  class CreateKeyRequest : public KMSRequest
  {
  public:
    AWS_KMS_API CreateKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKey"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The key policy to attach to the KMS key.</p> <p>If you provide a key policy,
     * it must meet the following criteria:</p> <ul> <li> <p>The key policy must allow
     * the calling principal to make a subsequent <code>PutKeyPolicy</code> request on
     * the KMS key. This reduces the risk that the KMS key becomes unmanageable. For
     * more information, see <a
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
     * reports an error, but the <code>CreateKey</code> and <code>PutKeyPolicy</code>
     * API requests succeed, even though the policy statement is ineffective.</p>
     * <p>For more information on required key policy elements, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-overview.html#key-policy-elements">Elements
     * in a key policy</a> in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>If you do not provide a key policy, KMS attaches a default key policy
     * to the KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html">Default
     * key policy</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>If the key policy exceeds the length constraint, KMS returns a
     * <code>LimitExceededException</code>.</p>  <p>For help writing and
     * formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    CreateKeyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the KMS key. Use a description that helps you decide whether
     * the KMS key is appropriate for a task. The default value is an empty string (no
     * description).</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>  <p>To set or change the
     * description after the key is created, use <a>UpdateKeyDescription</a>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateKeyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-cryptography.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key. The default value is
     * <code>ENCRYPT_DECRYPT</code>. This parameter is optional when you are creating a
     * symmetric encryption KMS key; otherwise, it is required. You can't change the
     * <code>KeyUsage</code> value after the KMS key is created.</p> <p>Select only one
     * valid value.</p> <ul> <li> <p>For symmetric encryption KMS keys, omit the
     * parameter or specify <code>ENCRYPT_DECRYPT</code>.</p> </li> <li> <p>For HMAC
     * KMS keys (symmetric), specify <code>GENERATE_VERIFY_MAC</code>.</p> </li> <li>
     * <p>For asymmetric KMS keys with RSA key pairs, specify
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For
     * asymmetric KMS keys with NIST-recommended elliptic curve key pairs, specify
     * <code>SIGN_VERIFY</code> or <code>KEY_AGREEMENT</code>.</p> </li> <li> <p>For
     * asymmetric KMS keys with <code>ECC_SECG_P256K1</code> key pairs, specify
     * <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For asymmetric KMS keys with ML-DSA
     * key pairs, specify <code>SIGN_VERIFY</code>.</p> </li> <li> <p>For asymmetric
     * KMS keys with SM2 key pairs (China Regions only), specify
     * <code>ENCRYPT_DECRYPT</code>, <code>SIGN_VERIFY</code>, or
     * <code>KEY_AGREEMENT</code>.</p> </li> </ul>
     */
    inline KeyUsageType GetKeyUsage() const { return m_keyUsage; }
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }
    inline void SetKeyUsage(KeyUsageType value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }
    inline CreateKeyRequest& WithKeyUsage(KeyUsageType value) { SetKeyUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of KMS key to create. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, creates a KMS key with a 256-bit AES-GCM key
     * that is used for encryption and decryption, except in China Regions, where it
     * creates a 128-bit symmetric key that uses SM4 encryption. For a detailed
     * description of all supported key specs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-choose-key-spec.html">Key
     * spec reference</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>The <code>KeySpec</code> determines whether the KMS key contains a
     * symmetric key or an asymmetric key pair. It also determines the algorithms that
     * the KMS key supports. You can't change the <code>KeySpec</code> after the KMS
     * key is created. To further restrict the algorithms that can be used with the KMS
     * key, use a condition key in its key policy or IAM policy. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a>,
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-mac-algorithm">kms:MacAlgorithm</a>,
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-key-agreement-algorithm">kms:KeyAgreementAlgorithm</a>,
     * or <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-signing-algorithm">kms:SigningAlgorithm</a>
     * in the <i> <i>Key Management Service Developer Guide</i> </i>.</p> 
     * <p> <a href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">Amazon
     * Web Services services that are integrated with KMS</a> use symmetric encryption
     * KMS keys to protect your data. These services do not support asymmetric KMS keys
     * or HMAC KMS keys.</p>  <p>KMS supports the following key specs for
     * KMS keys:</p> <ul> <li> <p>Symmetric encryption key (default)</p> <ul> <li> <p>
     * <code>SYMMETRIC_DEFAULT</code> </p> </li> </ul> </li> <li> <p>HMAC keys
     * (symmetric)</p> <ul> <li> <p> <code>HMAC_224</code> </p> </li> <li> <p>
     * <code>HMAC_256</code> </p> </li> <li> <p> <code>HMAC_384</code> </p> </li> <li>
     * <p> <code>HMAC_512</code> </p> </li> </ul> </li> <li> <p>Asymmetric RSA key
     * pairs (encryption and decryption -or- signing and verification)</p> <ul> <li>
     * <p> <code>RSA_2048</code> </p> </li> <li> <p> <code>RSA_3072</code> </p> </li>
     * <li> <p> <code>RSA_4096</code> </p> </li> </ul> </li> <li> <p>Asymmetric
     * NIST-recommended elliptic curve key pairs (signing and verification -or-
     * deriving shared secrets)</p> <ul> <li> <p> <code>ECC_NIST_P256</code>
     * (secp256r1)</p> </li> <li> <p> <code>ECC_NIST_P384</code> (secp384r1)</p> </li>
     * <li> <p> <code>ECC_NIST_P521</code> (secp521r1)</p> </li> </ul> </li> <li>
     * <p>Other asymmetric elliptic curve key pairs (signing and verification)</p> <ul>
     * <li> <p> <code>ECC_SECG_P256K1</code> (secp256k1), commonly used for
     * cryptocurrencies.</p> </li> </ul> </li> <li> <p>Asymmetric ML-DSA key pairs
     * (signing and verification)</p> <ul> <li> <p> <code>ML_DSA_44</code> </p> </li>
     * <li> <p> <code>ML_DSA_65</code> </p> </li> <li> <p> <code>ML_DSA_87</code> </p>
     * </li> </ul> </li> <li> <p>SM2 key pairs (encryption and decryption -or- signing
     * and verification -or- deriving shared secrets)</p> <ul> <li> <p>
     * <code>SM2</code> (China Regions only)</p> </li> </ul> </li> </ul>
     */
    inline KeySpec GetKeySpec() const { return m_keySpec; }
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }
    inline void SetKeySpec(KeySpec value) { m_keySpecHasBeenSet = true; m_keySpec = value; }
    inline CreateKeyRequest& WithKeySpec(KeySpec value) { SetKeySpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the key material for the KMS key. You cannot change the origin
     * after you create the KMS key. The default is <code>AWS_KMS</code>, which means
     * that KMS creates the key material.</p> <p>To <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-create-cmk.html">create
     * a KMS key with no key material</a> (for imported key material), set this value
     * to <code>EXTERNAL</code>. For more information about importing key material into
     * KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>Key Management Service Developer Guide</i>. The
     * <code>EXTERNAL</code> origin value is valid only for symmetric KMS keys.</p>
     * <p>To <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-cmk-keystore.html">create
     * a KMS key in an CloudHSM key store</a> and create its key material in the
     * associated CloudHSM cluster, set this value to <code>AWS_CLOUDHSM</code>. You
     * must also use the <code>CustomKeyStoreId</code> parameter to identify the
     * CloudHSM key store. The <code>KeySpec</code> value must be
     * <code>SYMMETRIC_DEFAULT</code>.</p> <p>To <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keys.html">create
     * a KMS key in an external key store</a>, set this value to
     * <code>EXTERNAL_KEY_STORE</code>. You must also use the
     * <code>CustomKeyStoreId</code> parameter to identify the external key store and
     * the <code>XksKeyId</code> parameter to identify the associated external key. The
     * <code>KeySpec</code> value must be <code>SYMMETRIC_DEFAULT</code>.</p>
     */
    inline OriginType GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(OriginType value) { m_originHasBeenSet = true; m_origin = value; }
    inline CreateKeyRequest& WithOrigin(OriginType value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates the KMS key in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom
     * key store</a>. The <code>ConnectionState</code> of the custom key store must be
     * <code>CONNECTED</code>. To find the CustomKeyStoreID and ConnectionState use the
     * <a>DescribeCustomKeyStores</a> operation.</p> <p>This parameter is valid only
     * for symmetric encryption KMS keys in a single Region. You cannot create any
     * other type of KMS key in a custom key store.</p> <p>When you create a KMS key in
     * an CloudHSM key store, KMS generates a non-exportable 256-bit symmetric key in
     * its associated CloudHSM cluster and associates it with the KMS key. When you
     * create a KMS key in an external key store, you must use the
     * <code>XksKeyId</code> parameter to specify an external key that serves as key
     * material for the KMS key.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const { return m_customKeyStoreId; }
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }
    template<typename CustomKeyStoreIdT = Aws::String>
    void SetCustomKeyStoreId(CustomKeyStoreIdT&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::forward<CustomKeyStoreIdT>(value); }
    template<typename CustomKeyStoreIdT = Aws::String>
    CreateKeyRequest& WithCustomKeyStoreId(CustomKeyStoreIdT&& value) { SetCustomKeyStoreId(std::forward<CustomKeyStoreIdT>(value)); return *this;}
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
    inline CreateKeyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS
     * key when it is created. To tag an existing KMS key, use the <a>TagResource</a>
     * operation.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging a KMS key can allow or deny permission to the KMS key. For details,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>To
     * use this parameter, you must have <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
     * permission in an IAM policy.</p> <p>Each tag consists of a tag key and a tag
     * value. Both the tag key and the tag value are required, but the tag value can be
     * an empty (null) string. You cannot have more than one tag on a KMS key with the
     * same tag key. If you specify an existing tag key with a different tag value, KMS
     * replaces the current tag value with the specified one.</p> <p>When you add tags
     * to an Amazon Web Services resource, Amazon Web Services generates a cost
     * allocation report with usage and costs aggregated by tags. Tags can also be used
     * to control access to a KMS key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tags
     * in KMS</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateKeyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateKeyRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
     * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     * <p>This value creates a <i>primary key</i>, not a replica. To create a
     * <i>replica key</i>, use the <a>ReplicateKey</a> operation. </p> <p>You can
     * create a symmetric or asymmetric multi-Region key, and you can create a
     * multi-Region key with imported key material. However, you cannot create a
     * multi-Region key in a custom key store.</p>
     */
    inline bool GetMultiRegion() const { return m_multiRegion; }
    inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }
    inline void SetMultiRegion(bool value) { m_multiRegionHasBeenSet = true; m_multiRegion = value; }
    inline CreateKeyRequest& WithMultiRegion(bool value) { SetMultiRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">external
     * key</a> that serves as key material for the KMS key in an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html">external
     * key store</a>. Specify the ID that the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-xks-proxy">external
     * key store proxy</a> uses to refer to the external key. For help, see the
     * documentation for your external key store proxy.</p> <p>This parameter is
     * required for a KMS key with an <code>Origin</code> value of
     * <code>EXTERNAL_KEY_STORE</code>. It is not valid for KMS keys with any other
     * <code>Origin</code> value.</p> <p>The external key must be an existing 256-bit
     * AES symmetric encryption key hosted outside of Amazon Web Services in an
     * external key manager associated with the external key store specified by the
     * <code>CustomKeyStoreId</code> parameter. This key must be enabled and configured
     * to perform encryption and decryption. Each KMS key in an external key store must
     * use a different external key. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keys.html#xks-key-requirements">Requirements
     * for a KMS key in an external key store</a> in the <i>Key Management Service
     * Developer Guide</i>.</p> <p>Each KMS key in an external key store is associated
     * two backing keys. One is key material that KMS generates. The other is the
     * external key specified by this parameter. When you use the KMS key in an
     * external key store to encrypt data, the encryption operation is performed first
     * by KMS using the KMS key material, and then by the external key manager using
     * the specified external key, a process known as <i>double encryption</i>. For
     * details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-double-encryption">Double
     * encryption</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetXksKeyId() const { return m_xksKeyId; }
    inline bool XksKeyIdHasBeenSet() const { return m_xksKeyIdHasBeenSet; }
    template<typename XksKeyIdT = Aws::String>
    void SetXksKeyId(XksKeyIdT&& value) { m_xksKeyIdHasBeenSet = true; m_xksKeyId = std::forward<XksKeyIdT>(value); }
    template<typename XksKeyIdT = Aws::String>
    CreateKeyRequest& WithXksKeyId(XksKeyIdT&& value) { SetXksKeyId(std::forward<XksKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KeyUsageType m_keyUsage{KeyUsageType::NOT_SET};
    bool m_keyUsageHasBeenSet = false;

    KeySpec m_keySpec{KeySpec::NOT_SET};
    bool m_keySpecHasBeenSet = false;

    OriginType m_origin{OriginType::NOT_SET};
    bool m_originHasBeenSet = false;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;

    bool m_bypassPolicyLockoutSafetyCheck{false};
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_multiRegion{false};
    bool m_multiRegionHasBeenSet = false;

    Aws::String m_xksKeyId;
    bool m_xksKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
