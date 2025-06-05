/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kms/model/KeyUsageType.h>
#include <aws/kms/model/KeyState.h>
#include <aws/kms/model/OriginType.h>
#include <aws/kms/model/ExpirationModelType.h>
#include <aws/kms/model/KeyManagerType.h>
#include <aws/kms/model/KeySpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/MultiRegionConfiguration.h>
#include <aws/kms/model/XksKeyConfigurationType.h>
#include <aws/kms/model/EncryptionAlgorithmSpec.h>
#include <aws/kms/model/SigningAlgorithmSpec.h>
#include <aws/kms/model/KeyAgreementAlgorithmSpec.h>
#include <aws/kms/model/MacAlgorithmSpec.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{

  /**
   * <p>Contains metadata about a KMS key.</p> <p>This data type is used as a
   * response element for the <a>CreateKey</a>, <a>DescribeKey</a>, and
   * <a>ReplicateKey</a> operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/KeyMetadata">AWS API
   * Reference</a></p>
   */
  class KeyMetadata
  {
  public:
    AWS_KMS_API KeyMetadata() = default;
    AWS_KMS_API KeyMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API KeyMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline const Aws::String& GetAWSAccountId() const { return m_aWSAccountId; }
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }
    template<typename AWSAccountIdT = Aws::String>
    void SetAWSAccountId(AWSAccountIdT&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::forward<AWSAccountIdT>(value); }
    template<typename AWSAccountIdT = Aws::String>
    KeyMetadata& WithAWSAccountId(AWSAccountIdT&& value) { SetAWSAccountId(std::forward<AWSAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    KeyMetadata& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    KeyMetadata& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the KMS key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    KeyMetadata& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the KMS key is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline KeyMetadata& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the KMS key.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    KeyMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-cryptography.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key.</p>
     */
    inline KeyUsageType GetKeyUsage() const { return m_keyUsage; }
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }
    inline void SetKeyUsage(KeyUsageType value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }
    inline KeyMetadata& WithKeyUsage(KeyUsageType value) { SetKeyUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyState GetKeyState() const { return m_keyState; }
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }
    inline void SetKeyState(KeyState value) { m_keyStateHasBeenSet = true; m_keyState = value; }
    inline KeyMetadata& WithKeyState(KeyState value) { SetKeyState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time after which KMS deletes this KMS key. This value is present
     * only when the KMS key is scheduled for deletion, that is, when its
     * <code>KeyState</code> is <code>PendingDeletion</code>.</p> <p>When the primary
     * key in a multi-Region key is scheduled for deletion but still has replica keys,
     * its key state is <code>PendingReplicaDeletion</code> and the length of its
     * waiting period is displayed in the <code>PendingDeletionWindowInDays</code>
     * field.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const { return m_deletionDate; }
    inline bool DeletionDateHasBeenSet() const { return m_deletionDateHasBeenSet; }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    void SetDeletionDate(DeletionDateT&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = std::forward<DeletionDateT>(value); }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    KeyMetadata& WithDeletionDate(DeletionDateT&& value) { SetDeletionDate(std::forward<DeletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest time at which any imported key material permanently associated
     * with this KMS key expires. When a key material expires, KMS deletes the key
     * material and the KMS key becomes unusable. This value is present only for KMS
     * keys whose <code>Origin</code> is <code>EXTERNAL</code> and the
     * <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, otherwise
     * this value is omitted.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTo() const { return m_validTo; }
    inline bool ValidToHasBeenSet() const { return m_validToHasBeenSet; }
    template<typename ValidToT = Aws::Utils::DateTime>
    void SetValidTo(ValidToT&& value) { m_validToHasBeenSet = true; m_validTo = std::forward<ValidToT>(value); }
    template<typename ValidToT = Aws::Utils::DateTime>
    KeyMetadata& WithValidTo(ValidToT&& value) { SetValidTo(std::forward<ValidToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the key material for the KMS key. When this value is
     * <code>AWS_KMS</code>, KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have
     * any key material. When this value is <code>AWS_CLOUDHSM</code>, the key material
     * was created in the CloudHSM cluster associated with a custom key store.</p>
     */
    inline OriginType GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(OriginType value) { m_originHasBeenSet = true; m_origin = value; }
    inline KeyMetadata& WithOrigin(OriginType value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const { return m_customKeyStoreId; }
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }
    template<typename CustomKeyStoreIdT = Aws::String>
    void SetCustomKeyStoreId(CustomKeyStoreIdT&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::forward<CustomKeyStoreIdT>(value); }
    template<typename CustomKeyStoreIdT = Aws::String>
    KeyMetadata& WithCustomKeyStoreId(CustomKeyStoreIdT&& value) { SetCustomKeyStoreId(std::forward<CustomKeyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const { return m_cloudHsmClusterId; }
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }
    template<typename CloudHsmClusterIdT = Aws::String>
    void SetCloudHsmClusterId(CloudHsmClusterIdT&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::forward<CloudHsmClusterIdT>(value); }
    template<typename CloudHsmClusterIdT = Aws::String>
    KeyMetadata& WithCloudHsmClusterId(CloudHsmClusterIdT&& value) { SetCloudHsmClusterId(std::forward<CloudHsmClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the KMS key's key material expires. This value is present
     * only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline ExpirationModelType GetExpirationModel() const { return m_expirationModel; }
    inline bool ExpirationModelHasBeenSet() const { return m_expirationModelHasBeenSet; }
    inline void SetExpirationModel(ExpirationModelType value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }
    inline KeyMetadata& WithExpirationModel(ExpirationModelType value) { SetExpirationModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed. For more information
     * about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS
     * keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyManagerType GetKeyManager() const { return m_keyManager; }
    inline bool KeyManagerHasBeenSet() const { return m_keyManagerHasBeenSet; }
    inline void SetKeyManager(KeyManagerType value) { m_keyManagerHasBeenSet = true; m_keyManager = value; }
    inline KeyMetadata& WithKeyManager(KeyManagerType value) { SetKeyManager(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type of key material in the KMS key.</p>
     */
    inline KeySpec GetKeySpec() const { return m_keySpec; }
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }
    inline void SetKeySpec(KeySpec value) { m_keySpecHasBeenSet = true; m_keySpec = value; }
    inline KeyMetadata& WithKeySpec(KeySpec value) { SetKeySpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline const Aws::Vector<EncryptionAlgorithmSpec>& GetEncryptionAlgorithms() const { return m_encryptionAlgorithms; }
    inline bool EncryptionAlgorithmsHasBeenSet() const { return m_encryptionAlgorithmsHasBeenSet; }
    template<typename EncryptionAlgorithmsT = Aws::Vector<EncryptionAlgorithmSpec>>
    void SetEncryptionAlgorithms(EncryptionAlgorithmsT&& value) { m_encryptionAlgorithmsHasBeenSet = true; m_encryptionAlgorithms = std::forward<EncryptionAlgorithmsT>(value); }
    template<typename EncryptionAlgorithmsT = Aws::Vector<EncryptionAlgorithmSpec>>
    KeyMetadata& WithEncryptionAlgorithms(EncryptionAlgorithmsT&& value) { SetEncryptionAlgorithms(std::forward<EncryptionAlgorithmsT>(value)); return *this;}
    inline KeyMetadata& AddEncryptionAlgorithms(EncryptionAlgorithmSpec value) { m_encryptionAlgorithmsHasBeenSet = true; m_encryptionAlgorithms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline const Aws::Vector<SigningAlgorithmSpec>& GetSigningAlgorithms() const { return m_signingAlgorithms; }
    inline bool SigningAlgorithmsHasBeenSet() const { return m_signingAlgorithmsHasBeenSet; }
    template<typename SigningAlgorithmsT = Aws::Vector<SigningAlgorithmSpec>>
    void SetSigningAlgorithms(SigningAlgorithmsT&& value) { m_signingAlgorithmsHasBeenSet = true; m_signingAlgorithms = std::forward<SigningAlgorithmsT>(value); }
    template<typename SigningAlgorithmsT = Aws::Vector<SigningAlgorithmSpec>>
    KeyMetadata& WithSigningAlgorithms(SigningAlgorithmsT&& value) { SetSigningAlgorithms(std::forward<SigningAlgorithmsT>(value)); return *this;}
    inline KeyMetadata& AddSigningAlgorithms(SigningAlgorithmSpec value) { m_signingAlgorithmsHasBeenSet = true; m_signingAlgorithms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key agreement algorithm used to derive a shared secret.</p>
     */
    inline const Aws::Vector<KeyAgreementAlgorithmSpec>& GetKeyAgreementAlgorithms() const { return m_keyAgreementAlgorithms; }
    inline bool KeyAgreementAlgorithmsHasBeenSet() const { return m_keyAgreementAlgorithmsHasBeenSet; }
    template<typename KeyAgreementAlgorithmsT = Aws::Vector<KeyAgreementAlgorithmSpec>>
    void SetKeyAgreementAlgorithms(KeyAgreementAlgorithmsT&& value) { m_keyAgreementAlgorithmsHasBeenSet = true; m_keyAgreementAlgorithms = std::forward<KeyAgreementAlgorithmsT>(value); }
    template<typename KeyAgreementAlgorithmsT = Aws::Vector<KeyAgreementAlgorithmSpec>>
    KeyMetadata& WithKeyAgreementAlgorithms(KeyAgreementAlgorithmsT&& value) { SetKeyAgreementAlgorithms(std::forward<KeyAgreementAlgorithmsT>(value)); return *this;}
    inline KeyMetadata& AddKeyAgreementAlgorithms(KeyAgreementAlgorithmSpec value) { m_keyAgreementAlgorithmsHasBeenSet = true; m_keyAgreementAlgorithms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the KMS key is a multi-Region (<code>True</code>) or
     * regional (<code>False</code>) key. This value is <code>True</code> for
     * multi-Region primary and replica keys and <code>False</code> for regional KMS
     * keys.</p> <p>For more information about multi-Region keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
     * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GetMultiRegion() const { return m_multiRegion; }
    inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }
    inline void SetMultiRegion(bool value) { m_multiRegionHasBeenSet = true; m_multiRegion = value; }
    inline KeyMetadata& WithMultiRegion(bool value) { SetMultiRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the primary and replica keys in same multi-Region key. This field is
     * present only when the value of the <code>MultiRegion</code> field is
     * <code>True</code>.</p> <p>For more information about any listed KMS key, use the
     * <a>DescribeKey</a> operation.</p> <ul> <li> <p> <code>MultiRegionKeyType</code>
     * indicates whether the KMS key is a <code>PRIMARY</code> or <code>REPLICA</code>
     * key.</p> </li> <li> <p> <code>PrimaryKey</code> displays the key ARN and Region
     * of the primary key. This field displays the current KMS key if it is the primary
     * key.</p> </li> <li> <p> <code>ReplicaKeys</code> displays the key ARNs and
     * Regions of all replica keys. This field includes the current KMS key if it is a
     * replica key.</p> </li> </ul>
     */
    inline const MultiRegionConfiguration& GetMultiRegionConfiguration() const { return m_multiRegionConfiguration; }
    inline bool MultiRegionConfigurationHasBeenSet() const { return m_multiRegionConfigurationHasBeenSet; }
    template<typename MultiRegionConfigurationT = MultiRegionConfiguration>
    void SetMultiRegionConfiguration(MultiRegionConfigurationT&& value) { m_multiRegionConfigurationHasBeenSet = true; m_multiRegionConfiguration = std::forward<MultiRegionConfigurationT>(value); }
    template<typename MultiRegionConfigurationT = MultiRegionConfiguration>
    KeyMetadata& WithMultiRegionConfiguration(MultiRegionConfigurationT&& value) { SetMultiRegionConfiguration(std::forward<MultiRegionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The waiting period before the primary key in a multi-Region key is deleted.
     * This waiting period begins when the last of its replica keys is deleted. This
     * value is present only when the <code>KeyState</code> of the KMS key is
     * <code>PendingReplicaDeletion</code>. That indicates that the KMS key is the
     * primary key in a multi-Region key, it is scheduled for deletion, and it still
     * has existing replica keys.</p> <p>When a single-Region KMS key or a multi-Region
     * replica key is scheduled for deletion, its deletion date is displayed in the
     * <code>DeletionDate</code> field. However, when the primary key in a multi-Region
     * key is scheduled for deletion, its waiting period doesn't begin until all of its
     * replica keys are deleted. This value displays that waiting period. When the last
     * replica key in the multi-Region key is deleted, the <code>KeyState</code> of the
     * scheduled primary key changes from <code>PendingReplicaDeletion</code> to
     * <code>PendingDeletion</code> and the deletion date appears in the
     * <code>DeletionDate</code> field.</p>
     */
    inline int GetPendingDeletionWindowInDays() const { return m_pendingDeletionWindowInDays; }
    inline bool PendingDeletionWindowInDaysHasBeenSet() const { return m_pendingDeletionWindowInDaysHasBeenSet; }
    inline void SetPendingDeletionWindowInDays(int value) { m_pendingDeletionWindowInDaysHasBeenSet = true; m_pendingDeletionWindowInDays = value; }
    inline KeyMetadata& WithPendingDeletionWindowInDays(int value) { SetPendingDeletionWindowInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline const Aws::Vector<MacAlgorithmSpec>& GetMacAlgorithms() const { return m_macAlgorithms; }
    inline bool MacAlgorithmsHasBeenSet() const { return m_macAlgorithmsHasBeenSet; }
    template<typename MacAlgorithmsT = Aws::Vector<MacAlgorithmSpec>>
    void SetMacAlgorithms(MacAlgorithmsT&& value) { m_macAlgorithmsHasBeenSet = true; m_macAlgorithms = std::forward<MacAlgorithmsT>(value); }
    template<typename MacAlgorithmsT = Aws::Vector<MacAlgorithmSpec>>
    KeyMetadata& WithMacAlgorithms(MacAlgorithmsT&& value) { SetMacAlgorithms(std::forward<MacAlgorithmsT>(value)); return *this;}
    inline KeyMetadata& AddMacAlgorithms(MacAlgorithmSpec value) { m_macAlgorithmsHasBeenSet = true; m_macAlgorithms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the external key that is associated with a KMS key in an
     * external key store.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External
     * key</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const XksKeyConfigurationType& GetXksKeyConfiguration() const { return m_xksKeyConfiguration; }
    inline bool XksKeyConfigurationHasBeenSet() const { return m_xksKeyConfigurationHasBeenSet; }
    template<typename XksKeyConfigurationT = XksKeyConfigurationType>
    void SetXksKeyConfiguration(XksKeyConfigurationT&& value) { m_xksKeyConfigurationHasBeenSet = true; m_xksKeyConfiguration = std::forward<XksKeyConfigurationT>(value); }
    template<typename XksKeyConfigurationT = XksKeyConfigurationType>
    KeyMetadata& WithXksKeyConfiguration(XksKeyConfigurationT&& value) { SetXksKeyConfiguration(std::forward<XksKeyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the current key material. This value is present for symmetric
     * encryption keys with <code>AWS_KMS</code> origin and single-Region, symmetric
     * encryption keys with <code>EXTERNAL</code> origin. These KMS keys support
     * automatic or on-demand key rotation and can have multiple key materials
     * associated with them. KMS uses the current key material for both encryption and
     * decryption, and the non-current key material for decryption operations only.</p>
     */
    inline const Aws::String& GetCurrentKeyMaterialId() const { return m_currentKeyMaterialId; }
    inline bool CurrentKeyMaterialIdHasBeenSet() const { return m_currentKeyMaterialIdHasBeenSet; }
    template<typename CurrentKeyMaterialIdT = Aws::String>
    void SetCurrentKeyMaterialId(CurrentKeyMaterialIdT&& value) { m_currentKeyMaterialIdHasBeenSet = true; m_currentKeyMaterialId = std::forward<CurrentKeyMaterialIdT>(value); }
    template<typename CurrentKeyMaterialIdT = Aws::String>
    KeyMetadata& WithCurrentKeyMaterialId(CurrentKeyMaterialIdT&& value) { SetCurrentKeyMaterialId(std::forward<CurrentKeyMaterialIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KeyUsageType m_keyUsage{KeyUsageType::NOT_SET};
    bool m_keyUsageHasBeenSet = false;

    KeyState m_keyState{KeyState::NOT_SET};
    bool m_keyStateHasBeenSet = false;

    Aws::Utils::DateTime m_deletionDate{};
    bool m_deletionDateHasBeenSet = false;

    Aws::Utils::DateTime m_validTo{};
    bool m_validToHasBeenSet = false;

    OriginType m_origin{OriginType::NOT_SET};
    bool m_originHasBeenSet = false;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet = false;

    ExpirationModelType m_expirationModel{ExpirationModelType::NOT_SET};
    bool m_expirationModelHasBeenSet = false;

    KeyManagerType m_keyManager{KeyManagerType::NOT_SET};
    bool m_keyManagerHasBeenSet = false;

    KeySpec m_keySpec{KeySpec::NOT_SET};
    bool m_keySpecHasBeenSet = false;

    Aws::Vector<EncryptionAlgorithmSpec> m_encryptionAlgorithms;
    bool m_encryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<SigningAlgorithmSpec> m_signingAlgorithms;
    bool m_signingAlgorithmsHasBeenSet = false;

    Aws::Vector<KeyAgreementAlgorithmSpec> m_keyAgreementAlgorithms;
    bool m_keyAgreementAlgorithmsHasBeenSet = false;

    bool m_multiRegion{false};
    bool m_multiRegionHasBeenSet = false;

    MultiRegionConfiguration m_multiRegionConfiguration;
    bool m_multiRegionConfigurationHasBeenSet = false;

    int m_pendingDeletionWindowInDays{0};
    bool m_pendingDeletionWindowInDaysHasBeenSet = false;

    Aws::Vector<MacAlgorithmSpec> m_macAlgorithms;
    bool m_macAlgorithmsHasBeenSet = false;

    XksKeyConfigurationType m_xksKeyConfiguration;
    bool m_xksKeyConfigurationHasBeenSet = false;

    Aws::String m_currentKeyMaterialId;
    bool m_currentKeyMaterialIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
