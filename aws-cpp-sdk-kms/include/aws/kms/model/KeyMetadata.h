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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kms/model/KeyUsageType.h>
#include <aws/kms/model/KeyState.h>
#include <aws/kms/model/OriginType.h>
#include <aws/kms/model/ExpirationModelType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{

  /**
   * <p>Contains metadata about a customer master key (CMK).</p> <p>This data type is
   * used as a response element for the <a>CreateKey</a> and <a>DescribeKey</a>
   * operations.</p>
   */
  class AWS_KMS_API KeyMetadata
  {
  public:
    KeyMetadata();
    KeyMetadata(const Aws::Utils::Json::JsonValue& jsonValue);
    KeyMetadata& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline const Aws::String& GetAWSAccountId() const{ return m_aWSAccountId; }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline void SetAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

    /**
     * <p>The twelve-digit account ID of the AWS account that owns the CMK.</p>
     */
    inline void SetAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

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
    inline KeyMetadata& WithAWSAccountId(Aws::String&& value) { SetAWSAccountId(value); return *this;}

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
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

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
    inline KeyMetadata& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The globally unique identifier for the CMK.</p>
     */
    inline KeyMetadata& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline KeyMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
     * Key Management Service (AWS KMS)</a> in the Example ARNs section of the <i>AWS
     * General Reference</i>.</p>
     */
    inline KeyMetadata& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK. For examples, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">AWS
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
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline KeyMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the CMK was created.</p>
     */
    inline KeyMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Specifies whether the CMK is enabled. When <code>KeyState</code> is
     * <code>Enabled</code> this value is true, otherwise it is false.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

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
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the CMK.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline KeyMetadata& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the CMK.</p>
     */
    inline KeyMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The cryptographic operations for which you can use the CMK. Currently the
     * only allowed value is <code>ENCRYPT_DECRYPT</code>, which means you can use the
     * CMK for the <a>Encrypt</a> and <a>Decrypt</a> operations.</p>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. Currently the
     * only allowed value is <code>ENCRYPT_DECRYPT</code>, which means you can use the
     * CMK for the <a>Encrypt</a> and <a>Decrypt</a> operations.</p>
     */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. Currently the
     * only allowed value is <code>ENCRYPT_DECRYPT</code>, which means you can use the
     * CMK for the <a>Encrypt</a> and <a>Decrypt</a> operations.</p>
     */
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. Currently the
     * only allowed value is <code>ENCRYPT_DECRYPT</code>, which means you can use the
     * CMK for the <a>Encrypt</a> and <a>Decrypt</a> operations.</p>
     */
    inline KeyMetadata& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The cryptographic operations for which you can use the CMK. Currently the
     * only allowed value is <code>ENCRYPT_DECRYPT</code>, which means you can use the
     * CMK for the <a>Encrypt</a> and <a>Decrypt</a> operations.</p>
     */
    inline KeyMetadata& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline const KeyState& GetKeyState() const{ return m_keyState; }

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyState(const KeyState& value) { m_keyStateHasBeenSet = true; m_keyState = value; }

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKeyState(KeyState&& value) { m_keyStateHasBeenSet = true; m_keyState = value; }

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyState(const KeyState& value) { SetKeyState(value); return *this;}

    /**
     * <p>The state of the CMK.</p> <p>For more information about how key state affects
     * the use of a CMK, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
     * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
     * Management Service Developer Guide</i>.</p>
     */
    inline KeyMetadata& WithKeyState(KeyState&& value) { SetKeyState(value); return *this;}

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>, otherwise this
     * value is omitted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const{ return m_deletionDate; }

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>, otherwise this
     * value is omitted.</p>
     */
    inline void SetDeletionDate(const Aws::Utils::DateTime& value) { m_deletionDateHasBeenSet = true; m_deletionDate = value; }

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>, otherwise this
     * value is omitted.</p>
     */
    inline void SetDeletionDate(Aws::Utils::DateTime&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = value; }

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>, otherwise this
     * value is omitted.</p>
     */
    inline KeyMetadata& WithDeletionDate(const Aws::Utils::DateTime& value) { SetDeletionDate(value); return *this;}

    /**
     * <p>The date and time after which AWS KMS deletes the CMK. This value is present
     * only when <code>KeyState</code> is <code>PendingDeletion</code>, otherwise this
     * value is omitted.</p>
     */
    inline KeyMetadata& WithDeletionDate(Aws::Utils::DateTime&& value) { SetDeletionDate(value); return *this;}

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
    inline void SetValidTo(const Aws::Utils::DateTime& value) { m_validToHasBeenSet = true; m_validTo = value; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. This
     * value is present only for CMKs whose <code>Origin</code> is
     * <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
     */
    inline void SetValidTo(Aws::Utils::DateTime&& value) { m_validToHasBeenSet = true; m_validTo = value; }

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
    inline KeyMetadata& WithValidTo(Aws::Utils::DateTime&& value) { SetValidTo(value); return *this;}

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p>
     */
    inline const OriginType& GetOrigin() const{ return m_origin; }

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p>
     */
    inline void SetOrigin(const OriginType& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p>
     */
    inline void SetOrigin(OriginType&& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p>
     */
    inline KeyMetadata& WithOrigin(const OriginType& value) { SetOrigin(value); return *this;}

    /**
     * <p>The source of the CMK's key material. When this value is
     * <code>AWS_KMS</code>, AWS KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported from your existing key
     * management infrastructure or the CMK lacks key material.</p>
     */
    inline KeyMetadata& WithOrigin(OriginType&& value) { SetOrigin(value); return *this;}

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
    inline void SetExpirationModel(const ExpirationModelType& value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }

    /**
     * <p>Specifies whether the CMK's key material expires. This value is present only
     * when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is
     * omitted.</p>
     */
    inline void SetExpirationModel(ExpirationModelType&& value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }

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
    inline KeyMetadata& WithExpirationModel(ExpirationModelType&& value) { SetExpirationModel(value); return *this;}

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
    ExpirationModelType m_expirationModel;
    bool m_expirationModelHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
