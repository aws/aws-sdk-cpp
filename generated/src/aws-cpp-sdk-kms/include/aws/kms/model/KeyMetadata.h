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
    AWS_KMS_API KeyMetadata();
    AWS_KMS_API KeyMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API KeyMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline void SetAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::move(value); }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline void SetAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.assign(value); }

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline KeyMetadata& WithAWSAccountId(const Aws::String& value) { SetAWSAccountId(value); return *this;}

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline KeyMetadata& WithAWSAccountId(Aws::String&& value) { SetAWSAccountId(std::move(value)); return *this;}

    /**
     * <p>The twelve-digit account ID of the Amazon Web Services account that owns the
     * KMS key.</p>
     */
    inline KeyMetadata& WithAWSAccountId(const char* value) { SetAWSAccountId(value); return *this;}


    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline KeyMetadata& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline KeyMetadata& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the KMS key.</p>
     */
    inline KeyMetadata& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline KeyMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline KeyMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key
     * Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline KeyMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time when the KMS key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the KMS key was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time when the KMS key was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the KMS key was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the KMS key was created.</p>
     */
    inline KeyMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the KMS key was created.</p>
     */
    inline KeyMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the KMS key is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the KMS key is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the KMS key is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the KMS key is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline KeyMetadata& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The description of the KMS key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the KMS key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the KMS key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the KMS key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the KMS key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the KMS key.</p>
     */
    inline KeyMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the KMS key.</p>
     */
    inline KeyMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the KMS key.</p>
     */
    inline KeyMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key.</p>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key.</p>
     */
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key.</p>
     */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key.</p>
     */
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key.</p>
     */
    inline KeyMetadata& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> for which you can use the KMS key.</p>
     */
    inline KeyMetadata& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(std::move(value)); return *this;}


    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const KeyState& GetKeyState() const{ return m_keyState; }

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyState(const KeyState& value) { m_keyStateHasBeenSet = true; m_keyState = value; }

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyState(KeyState&& value) { m_keyStateHasBeenSet = true; m_keyState = std::move(value); }

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyState(const KeyState& value) { SetKeyState(value); return *this;}

    /**
     * <p>The current status of the KMS key.</p> <p>For more information about how key
     * state affects the use of a KMS key, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyState(KeyState&& value) { SetKeyState(std::move(value)); return *this;}


    /**
     * <p>The date and time after which KMS deletes this KMS key. This value is present
     * only when the KMS key is scheduled for deletion, that is, when its
     * <code>KeyState</code> is <code>PendingDeletion</code>.</p> <p>When the primary
     * key in a multi-Region key is scheduled for deletion but still has replica keys,
     * its key state is <code>PendingReplicaDeletion</code> and the length of its
     * waiting period is displayed in the <code>PendingDeletionWindowInDays</code>
     * field.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const{ return m_deletionDate; }

    /**
     * <p>The date and time after which KMS deletes this KMS key. This value is present
     * only when the KMS key is scheduled for deletion, that is, when its
     * <code>KeyState</code> is <code>PendingDeletion</code>.</p> <p>When the primary
     * key in a multi-Region key is scheduled for deletion but still has replica keys,
     * its key state is <code>PendingReplicaDeletion</code> and the length of its
     * waiting period is displayed in the <code>PendingDeletionWindowInDays</code>
     * field.</p>
     */
    inline bool DeletionDateHasBeenSet() const { return m_deletionDateHasBeenSet; }

    /**
     * <p>The date and time after which KMS deletes this KMS key. This value is present
     * only when the KMS key is scheduled for deletion, that is, when its
     * <code>KeyState</code> is <code>PendingDeletion</code>.</p> <p>When the primary
     * key in a multi-Region key is scheduled for deletion but still has replica keys,
     * its key state is <code>PendingReplicaDeletion</code> and the length of its
     * waiting period is displayed in the <code>PendingDeletionWindowInDays</code>
     * field.</p>
     */
    inline void SetDeletionDate(const Aws::Utils::DateTime& value) { m_deletionDateHasBeenSet = true; m_deletionDate = value; }

    /**
     * <p>The date and time after which KMS deletes this KMS key. This value is present
     * only when the KMS key is scheduled for deletion, that is, when its
     * <code>KeyState</code> is <code>PendingDeletion</code>.</p> <p>When the primary
     * key in a multi-Region key is scheduled for deletion but still has replica keys,
     * its key state is <code>PendingReplicaDeletion</code> and the length of its
     * waiting period is displayed in the <code>PendingDeletionWindowInDays</code>
     * field.</p>
     */
    inline void SetDeletionDate(Aws::Utils::DateTime&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = std::move(value); }

    /**
     * <p>The date and time after which KMS deletes this KMS key. This value is present
     * only when the KMS key is scheduled for deletion, that is, when its
     * <code>KeyState</code> is <code>PendingDeletion</code>.</p> <p>When the primary
     * key in a multi-Region key is scheduled for deletion but still has replica keys,
     * its key state is <code>PendingReplicaDeletion</code> and the length of its
     * waiting period is displayed in the <code>PendingDeletionWindowInDays</code>
     * field.</p>
     */
    inline KeyMetadata& WithDeletionDate(const Aws::Utils::DateTime& value) { SetDeletionDate(value); return *this;}

    /**
     * <p>The date and time after which KMS deletes this KMS key. This value is present
     * only when the KMS key is scheduled for deletion, that is, when its
     * <code>KeyState</code> is <code>PendingDeletion</code>.</p> <p>When the primary
     * key in a multi-Region key is scheduled for deletion but still has replica keys,
     * its key state is <code>PendingReplicaDeletion</code> and the length of its
     * waiting period is displayed in the <code>PendingDeletionWindowInDays</code>
     * field.</p>
     */
    inline KeyMetadata& WithDeletionDate(Aws::Utils::DateTime&& value) { SetDeletionDate(std::move(value)); return *this;}


    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, KMS deletes the key material and the KMS key becomes unusable. This
     * value is present only for KMS keys whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTo() const{ return m_validTo; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, KMS deletes the key material and the KMS key becomes unusable. This
     * value is present only for KMS keys whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline bool ValidToHasBeenSet() const { return m_validToHasBeenSet; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, KMS deletes the key material and the KMS key becomes unusable. This
     * value is present only for KMS keys whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline void SetValidTo(const Aws::Utils::DateTime& value) { m_validToHasBeenSet = true; m_validTo = value; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, KMS deletes the key material and the KMS key becomes unusable. This
     * value is present only for KMS keys whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline void SetValidTo(Aws::Utils::DateTime&& value) { m_validToHasBeenSet = true; m_validTo = std::move(value); }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, KMS deletes the key material and the KMS key becomes unusable. This
     * value is present only for KMS keys whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline KeyMetadata& WithValidTo(const Aws::Utils::DateTime& value) { SetValidTo(value); return *this;}

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, KMS deletes the key material and the KMS key becomes unusable. This
     * value is present only for KMS keys whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline KeyMetadata& WithValidTo(Aws::Utils::DateTime&& value) { SetValidTo(std::move(value)); return *this;}


    /**
     * <p>The source of the key material for the KMS key. When this value is
     * <code>AWS_KMS</code>, KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have
     * any key material. When this value is <code>AWS_CLOUDHSM</code>, the key material
     * was created in the CloudHSM cluster associated with a custom key store.</p>
     */
    inline const OriginType& GetOrigin() const{ return m_origin; }

    /**
     * <p>The source of the key material for the KMS key. When this value is
     * <code>AWS_KMS</code>, KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have
     * any key material. When this value is <code>AWS_CLOUDHSM</code>, the key material
     * was created in the CloudHSM cluster associated with a custom key store.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>The source of the key material for the KMS key. When this value is
     * <code>AWS_KMS</code>, KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have
     * any key material. When this value is <code>AWS_CLOUDHSM</code>, the key material
     * was created in the CloudHSM cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(const OriginType& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the key material for the KMS key. When this value is
     * <code>AWS_KMS</code>, KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have
     * any key material. When this value is <code>AWS_CLOUDHSM</code>, the key material
     * was created in the CloudHSM cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(OriginType&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>The source of the key material for the KMS key. When this value is
     * <code>AWS_KMS</code>, KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have
     * any key material. When this value is <code>AWS_CLOUDHSM</code>, the key material
     * was created in the CloudHSM cluster associated with a custom key store.</p>
     */
    inline KeyMetadata& WithOrigin(const OriginType& value) { SetOrigin(value); return *this;}

    /**
     * <p>The source of the key material for the KMS key. When this value is
     * <code>AWS_KMS</code>, KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have
     * any key material. When this value is <code>AWS_CLOUDHSM</code>, the key material
     * was created in the CloudHSM cluster associated with a custom key store.</p>
     */
    inline KeyMetadata& WithOrigin(OriginType&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline KeyMetadata& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline KeyMetadata& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the KMS key. This field is present only when the KMS
     * key is created in a custom key store.</p>
     */
    inline KeyMetadata& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}


    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const{ return m_cloudHsmClusterId; }

    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }

    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline void SetCloudHsmClusterId(const Aws::String& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = value; }

    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline void SetCloudHsmClusterId(Aws::String&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::move(value); }

    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline void SetCloudHsmClusterId(const char* value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId.assign(value); }

    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline KeyMetadata& WithCloudHsmClusterId(const Aws::String& value) { SetCloudHsmClusterId(value); return *this;}

    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline KeyMetadata& WithCloudHsmClusterId(Aws::String&& value) { SetCloudHsmClusterId(std::move(value)); return *this;}

    /**
     * <p>The cluster ID of the CloudHSM cluster that contains the key material for the
     * KMS key. When you create a KMS key in an CloudHSM <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, KMS creates the key material for the KMS key in the associated
     * CloudHSM cluster. This field is present only when the KMS key is created in an
     * CloudHSM key store.</p>
     */
    inline KeyMetadata& WithCloudHsmClusterId(const char* value) { SetCloudHsmClusterId(value); return *this;}


    /**
     * <p>Specifies whether the KMS key's key material expires. This value is present
     * only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline const ExpirationModelType& GetExpirationModel() const{ return m_expirationModel; }

    /**
     * <p>Specifies whether the KMS key's key material expires. This value is present
     * only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline bool ExpirationModelHasBeenSet() const { return m_expirationModelHasBeenSet; }

    /**
     * <p>Specifies whether the KMS key's key material expires. This value is present
     * only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline void SetExpirationModel(const ExpirationModelType& value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }

    /**
     * <p>Specifies whether the KMS key's key material expires. This value is present
     * only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline void SetExpirationModel(ExpirationModelType&& value) { m_expirationModelHasBeenSet = true; m_expirationModel = std::move(value); }

    /**
     * <p>Specifies whether the KMS key's key material expires. This value is present
     * only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline KeyMetadata& WithExpirationModel(const ExpirationModelType& value) { SetExpirationModel(value); return *this;}

    /**
     * <p>Specifies whether the KMS key's key material expires. This value is present
     * only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline KeyMetadata& WithExpirationModel(ExpirationModelType&& value) { SetExpirationModel(std::move(value)); return *this;}


    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed. For more information
     * about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS
     * keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const KeyManagerType& GetKeyManager() const{ return m_keyManager; }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed. For more information
     * about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS
     * keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool KeyManagerHasBeenSet() const { return m_keyManagerHasBeenSet; }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed. For more information
     * about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS
     * keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyManager(const KeyManagerType& value) { m_keyManagerHasBeenSet = true; m_keyManager = value; }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed. For more information
     * about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS
     * keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyManager(KeyManagerType&& value) { m_keyManagerHasBeenSet = true; m_keyManager = std::move(value); }

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed. For more information
     * about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS
     * keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyManager(const KeyManagerType& value) { SetKeyManager(value); return *this;}

    /**
     * <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are
     * either customer managed or Amazon Web Services managed. For more information
     * about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS
     * keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyManager(KeyManagerType&& value) { SetKeyManager(std::move(value)); return *this;}


    /**
     * <p>Describes the type of key material in the KMS key.</p>
     */
    inline const KeySpec& GetKeySpec() const{ return m_keySpec; }

    /**
     * <p>Describes the type of key material in the KMS key.</p>
     */
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }

    /**
     * <p>Describes the type of key material in the KMS key.</p>
     */
    inline void SetKeySpec(const KeySpec& value) { m_keySpecHasBeenSet = true; m_keySpec = value; }

    /**
     * <p>Describes the type of key material in the KMS key.</p>
     */
    inline void SetKeySpec(KeySpec&& value) { m_keySpecHasBeenSet = true; m_keySpec = std::move(value); }

    /**
     * <p>Describes the type of key material in the KMS key.</p>
     */
    inline KeyMetadata& WithKeySpec(const KeySpec& value) { SetKeySpec(value); return *this;}

    /**
     * <p>Describes the type of key material in the KMS key.</p>
     */
    inline KeyMetadata& WithKeySpec(KeySpec&& value) { SetKeySpec(std::move(value)); return *this;}


    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline const Aws::Vector<EncryptionAlgorithmSpec>& GetEncryptionAlgorithms() const{ return m_encryptionAlgorithms; }

    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline bool EncryptionAlgorithmsHasBeenSet() const { return m_encryptionAlgorithmsHasBeenSet; }

    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline void SetEncryptionAlgorithms(const Aws::Vector<EncryptionAlgorithmSpec>& value) { m_encryptionAlgorithmsHasBeenSet = true; m_encryptionAlgorithms = value; }

    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline void SetEncryptionAlgorithms(Aws::Vector<EncryptionAlgorithmSpec>&& value) { m_encryptionAlgorithmsHasBeenSet = true; m_encryptionAlgorithms = std::move(value); }

    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline KeyMetadata& WithEncryptionAlgorithms(const Aws::Vector<EncryptionAlgorithmSpec>& value) { SetEncryptionAlgorithms(value); return *this;}

    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline KeyMetadata& WithEncryptionAlgorithms(Aws::Vector<EncryptionAlgorithmSpec>&& value) { SetEncryptionAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline KeyMetadata& AddEncryptionAlgorithms(const EncryptionAlgorithmSpec& value) { m_encryptionAlgorithmsHasBeenSet = true; m_encryptionAlgorithms.push_back(value); return *this; }

    /**
     * <p>The encryption algorithms that the KMS key supports. You cannot use the KMS
     * key with other encryption algorithms within KMS.</p> <p>This value is present
     * only when the <code>KeyUsage</code> of the KMS key is
     * <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline KeyMetadata& AddEncryptionAlgorithms(EncryptionAlgorithmSpec&& value) { m_encryptionAlgorithmsHasBeenSet = true; m_encryptionAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline const Aws::Vector<SigningAlgorithmSpec>& GetSigningAlgorithms() const{ return m_signingAlgorithms; }

    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline bool SigningAlgorithmsHasBeenSet() const { return m_signingAlgorithmsHasBeenSet; }

    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline void SetSigningAlgorithms(const Aws::Vector<SigningAlgorithmSpec>& value) { m_signingAlgorithmsHasBeenSet = true; m_signingAlgorithms = value; }

    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline void SetSigningAlgorithms(Aws::Vector<SigningAlgorithmSpec>&& value) { m_signingAlgorithmsHasBeenSet = true; m_signingAlgorithms = std::move(value); }

    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline KeyMetadata& WithSigningAlgorithms(const Aws::Vector<SigningAlgorithmSpec>& value) { SetSigningAlgorithms(value); return *this;}

    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline KeyMetadata& WithSigningAlgorithms(Aws::Vector<SigningAlgorithmSpec>&& value) { SetSigningAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline KeyMetadata& AddSigningAlgorithms(const SigningAlgorithmSpec& value) { m_signingAlgorithmsHasBeenSet = true; m_signingAlgorithms.push_back(value); return *this; }

    /**
     * <p>The signing algorithms that the KMS key supports. You cannot use the KMS key
     * with other signing algorithms within KMS.</p> <p>This field appears only when
     * the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
     */
    inline KeyMetadata& AddSigningAlgorithms(SigningAlgorithmSpec&& value) { m_signingAlgorithmsHasBeenSet = true; m_signingAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the KMS key is a multi-Region (<code>True</code>) or
     * regional (<code>False</code>) key. This value is <code>True</code> for
     * multi-Region primary and replica keys and <code>False</code> for regional KMS
     * keys.</p> <p>For more information about multi-Region keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
     * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GetMultiRegion() const{ return m_multiRegion; }

    /**
     * <p>Indicates whether the KMS key is a multi-Region (<code>True</code>) or
     * regional (<code>False</code>) key. This value is <code>True</code> for
     * multi-Region primary and replica keys and <code>False</code> for regional KMS
     * keys.</p> <p>For more information about multi-Region keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
     * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }

    /**
     * <p>Indicates whether the KMS key is a multi-Region (<code>True</code>) or
     * regional (<code>False</code>) key. This value is <code>True</code> for
     * multi-Region primary and replica keys and <code>False</code> for regional KMS
     * keys.</p> <p>For more information about multi-Region keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
     * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetMultiRegion(bool value) { m_multiRegionHasBeenSet = true; m_multiRegion = value; }

    /**
     * <p>Indicates whether the KMS key is a multi-Region (<code>True</code>) or
     * regional (<code>False</code>) key. This value is <code>True</code> for
     * multi-Region primary and replica keys and <code>False</code> for regional KMS
     * keys.</p> <p>For more information about multi-Region keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
     * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithMultiRegion(bool value) { SetMultiRegion(value); return *this;}


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
    inline const MultiRegionConfiguration& GetMultiRegionConfiguration() const{ return m_multiRegionConfiguration; }

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
    inline bool MultiRegionConfigurationHasBeenSet() const { return m_multiRegionConfigurationHasBeenSet; }

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
    inline void SetMultiRegionConfiguration(const MultiRegionConfiguration& value) { m_multiRegionConfigurationHasBeenSet = true; m_multiRegionConfiguration = value; }

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
    inline void SetMultiRegionConfiguration(MultiRegionConfiguration&& value) { m_multiRegionConfigurationHasBeenSet = true; m_multiRegionConfiguration = std::move(value); }

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
    inline KeyMetadata& WithMultiRegionConfiguration(const MultiRegionConfiguration& value) { SetMultiRegionConfiguration(value); return *this;}

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
    inline KeyMetadata& WithMultiRegionConfiguration(MultiRegionConfiguration&& value) { SetMultiRegionConfiguration(std::move(value)); return *this;}


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
    inline int GetPendingDeletionWindowInDays() const{ return m_pendingDeletionWindowInDays; }

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
    inline bool PendingDeletionWindowInDaysHasBeenSet() const { return m_pendingDeletionWindowInDaysHasBeenSet; }

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
    inline void SetPendingDeletionWindowInDays(int value) { m_pendingDeletionWindowInDaysHasBeenSet = true; m_pendingDeletionWindowInDays = value; }

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
    inline KeyMetadata& WithPendingDeletionWindowInDays(int value) { SetPendingDeletionWindowInDays(value); return *this;}


    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline const Aws::Vector<MacAlgorithmSpec>& GetMacAlgorithms() const{ return m_macAlgorithms; }

    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline bool MacAlgorithmsHasBeenSet() const { return m_macAlgorithmsHasBeenSet; }

    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline void SetMacAlgorithms(const Aws::Vector<MacAlgorithmSpec>& value) { m_macAlgorithmsHasBeenSet = true; m_macAlgorithms = value; }

    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline void SetMacAlgorithms(Aws::Vector<MacAlgorithmSpec>&& value) { m_macAlgorithmsHasBeenSet = true; m_macAlgorithms = std::move(value); }

    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline KeyMetadata& WithMacAlgorithms(const Aws::Vector<MacAlgorithmSpec>& value) { SetMacAlgorithms(value); return *this;}

    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline KeyMetadata& WithMacAlgorithms(Aws::Vector<MacAlgorithmSpec>&& value) { SetMacAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline KeyMetadata& AddMacAlgorithms(const MacAlgorithmSpec& value) { m_macAlgorithmsHasBeenSet = true; m_macAlgorithms.push_back(value); return *this; }

    /**
     * <p>The message authentication code (MAC) algorithm that the HMAC KMS key
     * supports.</p> <p>This value is present only when the <code>KeyUsage</code> of
     * the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
     */
    inline KeyMetadata& AddMacAlgorithms(MacAlgorithmSpec&& value) { m_macAlgorithmsHasBeenSet = true; m_macAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the external key that is associated with a KMS key in an
     * external key store.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External
     * key</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const XksKeyConfigurationType& GetXksKeyConfiguration() const{ return m_xksKeyConfiguration; }

    /**
     * <p>Information about the external key that is associated with a KMS key in an
     * external key store.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External
     * key</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool XksKeyConfigurationHasBeenSet() const { return m_xksKeyConfigurationHasBeenSet; }

    /**
     * <p>Information about the external key that is associated with a KMS key in an
     * external key store.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External
     * key</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetXksKeyConfiguration(const XksKeyConfigurationType& value) { m_xksKeyConfigurationHasBeenSet = true; m_xksKeyConfiguration = value; }

    /**
     * <p>Information about the external key that is associated with a KMS key in an
     * external key store.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External
     * key</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetXksKeyConfiguration(XksKeyConfigurationType&& value) { m_xksKeyConfigurationHasBeenSet = true; m_xksKeyConfiguration = std::move(value); }

    /**
     * <p>Information about the external key that is associated with a KMS key in an
     * external key store.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External
     * key</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithXksKeyConfiguration(const XksKeyConfigurationType& value) { SetXksKeyConfiguration(value); return *this;}

    /**
     * <p>Information about the external key that is associated with a KMS key in an
     * external key store.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External
     * key</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithXksKeyConfiguration(XksKeyConfigurationType&& value) { SetXksKeyConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KeyUsageType m_keyUsage;
    bool m_keyUsageHasBeenSet = false;

    KeyState m_keyState;
    bool m_keyStateHasBeenSet = false;

    Aws::Utils::DateTime m_deletionDate;
    bool m_deletionDateHasBeenSet = false;

    Aws::Utils::DateTime m_validTo;
    bool m_validToHasBeenSet = false;

    OriginType m_origin;
    bool m_originHasBeenSet = false;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet = false;

    ExpirationModelType m_expirationModel;
    bool m_expirationModelHasBeenSet = false;

    KeyManagerType m_keyManager;
    bool m_keyManagerHasBeenSet = false;

    KeySpec m_keySpec;
    bool m_keySpecHasBeenSet = false;

    Aws::Vector<EncryptionAlgorithmSpec> m_encryptionAlgorithms;
    bool m_encryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<SigningAlgorithmSpec> m_signingAlgorithms;
    bool m_signingAlgorithmsHasBeenSet = false;

    bool m_multiRegion;
    bool m_multiRegionHasBeenSet = false;

    MultiRegionConfiguration m_multiRegionConfiguration;
    bool m_multiRegionConfigurationHasBeenSet = false;

    int m_pendingDeletionWindowInDays;
    bool m_pendingDeletionWindowInDaysHasBeenSet = false;

    Aws::Vector<MacAlgorithmSpec> m_macAlgorithms;
    bool m_macAlgorithmsHasBeenSet = false;

    XksKeyConfigurationType m_xksKeyConfiguration;
    bool m_xksKeyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
