/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kms/model/KeyUsageType.h>
#include <aws/kms/model/KeyState.h>
#include <aws/kms/model/OriginType.h>
#include <aws/kms/model/ExpirationModelType.h>
#include <aws/kms/model/KeyManagerType.h>
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
   * <p>Contains metadata about a customer master key (CMK).</p> <p>This data type is
   * used as a response element for the <a>CreateKey</a> and <a>DescribeKey</a>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/KeyMetadata">AWS API
   * Reference</a></p>
   */
  class AWS_KMS_API KeyMetadata
  {
  public:
    KeyMetadata();
    KeyMetadata(Aws::Utils::Json::JsonView jsonValue);
    KeyMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline void SetAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::move(value); }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline void SetAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.assign(value); }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline KeyMetadata& WithAWSAccountId(const Aws::String& value) { SetAWSAccountId(value); return *this;}

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline KeyMetadata& WithAWSAccountId(Aws::String&& value) { SetAWSAccountId(std::move(value)); return *this;}

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline KeyMetadata& WithAWSAccountId(const char* value) { SetAWSAccountId(value); return *this;}


    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline KeyMetadata& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline KeyMetadata& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline KeyMetadata& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline KeyMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline KeyMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline KeyMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline KeyMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline KeyMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the CMK is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the CMK is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the CMK is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the CMK is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline KeyMetadata& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The description of the CMK.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the CMK.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the CMK.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the CMK.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the CMK.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the CMK.</p>
     */
    inline KeyMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the CMK.</p>
     */
    inline KeyMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the CMK.</p>
     */
    inline KeyMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::move(value); }

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline KeyMetadata& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline KeyMetadata& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(std::move(value)); return *this;}


    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline const KeyState& GetKeyState() const{ return m_keyState; }

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyState(const KeyState& value) { m_keyStateHasBeenSet = true; m_keyState = value; }

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyState(KeyState&& value) { m_keyStateHasBeenSet = true; m_keyState = std::move(value); }

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyState(const KeyState& value) { SetKeyState(value); return *this;}

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyState(KeyState&& value) { SetKeyState(std::move(value)); return *this;}


    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const{ return m_deletionDate; }

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>.</p>
     */
    inline bool DeletionDateHasBeenSet() const { return m_deletionDateHasBeenSet; }

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>.</p>
     */
    inline void SetDeletionDate(const Aws::Utils::DateTime& value) { m_deletionDateHasBeenSet = true; m_deletionDate = value; }

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>.</p>
     */
    inline void SetDeletionDate(Aws::Utils::DateTime&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = std::move(value); }

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>.</p>
     */
    inline KeyMetadata& WithDeletionDate(const Aws::Utils::DateTime& value) { SetDeletionDate(value); return *this;}

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>.</p>
     */
    inline KeyMetadata& WithDeletionDate(Aws::Utils::DateTime&& value) { SetDeletionDate(std::move(value)); return *this;}


    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. This
     * value is present only for CMKs whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTo() const{ return m_validTo; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. This
     * value is present only for CMKs whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline bool ValidToHasBeenSet() const { return m_validToHasBeenSet; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. This
     * value is present only for CMKs whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline void SetValidTo(const Aws::Utils::DateTime& value) { m_validToHasBeenSet = true; m_validTo = value; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. This
     * value is present only for CMKs whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline void SetValidTo(Aws::Utils::DateTime&& value) { m_validToHasBeenSet = true; m_validTo = std::move(value); }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. This
     * value is present only for CMKs whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline KeyMetadata& WithValidTo(const Aws::Utils::DateTime& value) { SetValidTo(value); return *this;}

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. This
     * value is present only for CMKs whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline KeyMetadata& WithValidTo(Aws::Utils::DateTime&& value) { SetValidTo(std::move(value)); return *this;}


    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material. When this value is
     * <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline const OriginType& GetOrigin() const{ return m_origin; }

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material. When this value is
     * <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material. When this value is
     * <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(const OriginType& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material. When this value is
     * <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline void SetOrigin(OriginType&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material. When this value is
     * <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline KeyMetadata& WithOrigin(const OriginType& value) { SetOrigin(value); return *this;}

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material. When this value is
     * <code>AWS_CLOUDHSM</code>, the key material was created in the AWS CloudHSM
     * cluster associated with a custom key store.</p>
     */
    inline KeyMetadata& WithOrigin(OriginType&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the CMK. This value is present only when the CMK is
     * created in a custom key store.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the CMK. This value is present only when the CMK is
     * created in a custom key store.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the CMK. This value is present only when the CMK is
     * created in a custom key store.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the CMK. This value is present only when the CMK is
     * created in a custom key store.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the CMK. This value is present only when the CMK is
     * created in a custom key store.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the CMK. This value is present only when the CMK is
     * created in a custom key store.</p>
     */
    inline KeyMetadata& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the CMK. This value is present only when the CMK is
     * created in a custom key store.</p>
     */
    inline KeyMetadata& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> that contains the CMK. This value is present only when the CMK is
     * created in a custom key store.</p>
     */
    inline KeyMetadata& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}


    /**
     * <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for
     * the CMK. When you create a CMK in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, AWS KMS creates the key material for the CMK in the associated
     * AWS CloudHSM cluster. This value is present only when the CMK is created in a
     * custom key store.</p>
     */
    inline const Aws::String& GetCloudHsmClusterId() const{ return m_cloudHsmClusterId; }

    /**
     * <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for
     * the CMK. When you create a CMK in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, AWS KMS creates the key material for the CMK in the associated
     * AWS CloudHSM cluster. This value is present only when the CMK is created in a
     * custom key store.</p>
     */
    inline bool CloudHsmClusterIdHasBeenSet() const { return m_cloudHsmClusterIdHasBeenSet; }

    /**
     * <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for
     * the CMK. When you create a CMK in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, AWS KMS creates the key material for the CMK in the associated
     * AWS CloudHSM cluster. This value is present only when the CMK is created in a
     * custom key store.</p>
     */
    inline void SetCloudHsmClusterId(const Aws::String& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = value; }

    /**
     * <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for
     * the CMK. When you create a CMK in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, AWS KMS creates the key material for the CMK in the associated
     * AWS CloudHSM cluster. This value is present only when the CMK is created in a
     * custom key store.</p>
     */
    inline void SetCloudHsmClusterId(Aws::String&& value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId = std::move(value); }

    /**
     * <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for
     * the CMK. When you create a CMK in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, AWS KMS creates the key material for the CMK in the associated
     * AWS CloudHSM cluster. This value is present only when the CMK is created in a
     * custom key store.</p>
     */
    inline void SetCloudHsmClusterId(const char* value) { m_cloudHsmClusterIdHasBeenSet = true; m_cloudHsmClusterId.assign(value); }

    /**
     * <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for
     * the CMK. When you create a CMK in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, AWS KMS creates the key material for the CMK in the associated
     * AWS CloudHSM cluster. This value is present only when the CMK is created in a
     * custom key store.</p>
     */
    inline KeyMetadata& WithCloudHsmClusterId(const Aws::String& value) { SetCloudHsmClusterId(value); return *this;}

    /**
     * <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for
     * the CMK. When you create a CMK in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, AWS KMS creates the key material for the CMK in the associated
     * AWS CloudHSM cluster. This value is present only when the CMK is created in a
     * custom key store.</p>
     */
    inline KeyMetadata& WithCloudHsmClusterId(Aws::String&& value) { SetCloudHsmClusterId(std::move(value)); return *this;}

    /**
     * <p>The cluster ID of the AWS CloudHSM cluster that contains the key material for
     * the CMK. When you create a CMK in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>, AWS KMS creates the key material for the CMK in the associated
     * AWS CloudHSM cluster. This value is present only when the CMK is created in a
     * custom key store.</p>
     */
    inline KeyMetadata& WithCloudHsmClusterId(const char* value) { SetCloudHsmClusterId(value); return *this;}


    /**
     * <p>Specifies whether the CMK's key material expires. This value is present only
     * when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline const ExpirationModelType& GetExpirationModel() const{ return m_expirationModel; }

    /**
     * <p>Specifies whether the CMK's key material expires. This value is present only
     * when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline bool ExpirationModelHasBeenSet() const { return m_expirationModelHasBeenSet; }

    /**
     * <p>Specifies whether the CMK's key material expires. This value is present only
     * when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline void SetExpirationModel(const ExpirationModelType& value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }

    /**
     * <p>Specifies whether the CMK's key material expires. This value is present only
     * when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline void SetExpirationModel(ExpirationModelType&& value) { m_expirationModelHasBeenSet = true; m_expirationModel = std::move(value); }

    /**
     * <p>Specifies whether the CMK's key material expires. This value is present only
     * when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline KeyMetadata& WithExpirationModel(const ExpirationModelType& value) { SetExpirationModel(value); return *this;}

    /**
     * <p>Specifies whether the CMK's key material expires. This value is present only
     * when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline KeyMetadata& WithExpirationModel(ExpirationModelType&& value) { SetExpirationModel(std::move(value)); return *this;}


    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed. For more information about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const KeyManagerType& GetKeyManager() const{ return m_keyManager; }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed. For more information about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline bool KeyManagerHasBeenSet() const { return m_keyManagerHasBeenSet; }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed. For more information about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyManager(const KeyManagerType& value) { m_keyManagerHasBeenSet = true; m_keyManager = value; }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed. For more information about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyManager(KeyManagerType&& value) { m_keyManagerHasBeenSet = true; m_keyManager = std::move(value); }

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed. For more information about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyManager(const KeyManagerType& value) { SetKeyManager(value); return *this;}

    /**
     * <p>The manager of the CMK. CMKs in your AWS account are either customer managed
     * or AWS managed. For more information about the difference, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyManager(KeyManagerType&& value) { SetKeyManager(std::move(value)); return *this;}

  private:

    Aws::String m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    KeyUsageType m_keyUsage;
    bool m_keyUsageHasBeenSet;

    KeyState m_keyState;
    bool m_keyStateHasBeenSet;

    Aws::Utils::DateTime m_deletionDate;
    bool m_deletionDateHasBeenSet;

    Aws::Utils::DateTime m_validTo;
    bool m_validToHasBeenSet;

    OriginType m_origin;
    bool m_originHasBeenSet;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet;

    Aws::String m_cloudHsmClusterId;
    bool m_cloudHsmClusterIdHasBeenSet;

    ExpirationModelType m_expirationModel;
    bool m_expirationModelHasBeenSet;

    KeyManagerType m_keyManager;
    bool m_keyManagerHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
