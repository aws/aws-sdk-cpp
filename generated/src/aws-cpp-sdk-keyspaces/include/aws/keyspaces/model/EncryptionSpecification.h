/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Amazon Keyspaces encrypts and decrypts the table data at rest transparently
   * and integrates with Key Management Service for storing and managing the
   * encryption key. You can choose one of the following KMS keys (KMS keys):</p>
   * <p>• Amazon Web Services owned key - This is the default encryption type. The
   * key is owned by Amazon Keyspaces (no additional charge). </p> <p>• Customer
   * managed key - This key is stored in your account and is created, owned, and
   * managed by you. You have full control over the customer managed key (KMS charges
   * apply).</p> <p>For more information about encryption at rest in Amazon
   * Keyspaces, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
   * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>For more
   * information about KMS, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">KMS
   * management service concepts</a> in the <i>Key Management Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/EncryptionSpecification">AWS
   * API Reference</a></p>
   */
  class EncryptionSpecification
  {
  public:
    AWS_KEYSPACES_API EncryptionSpecification();
    AWS_KEYSPACES_API EncryptionSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API EncryptionSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption option specified for the table. You can choose one of the
     * following KMS keys (KMS keys):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const EncryptionType& GetType() const{ return m_type; }

    /**
     * <p>The encryption option specified for the table. You can choose one of the
     * following KMS keys (KMS keys):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The encryption option specified for the table. You can choose one of the
     * following KMS keys (KMS keys):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetType(const EncryptionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The encryption option specified for the table. You can choose one of the
     * following KMS keys (KMS keys):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetType(EncryptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The encryption option specified for the table. You can choose one of the
     * following KMS keys (KMS keys):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline EncryptionSpecification& WithType(const EncryptionType& value) { SetType(value); return *this;}

    /**
     * <p>The encryption option specified for the table. You can choose one of the
     * following KMS keys (KMS keys):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline EncryptionSpecification& WithType(EncryptionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key, for example
     * <code>kms_key_identifier:ARN</code>.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key, for example
     * <code>kms_key_identifier:ARN</code>.</p>
     */
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key, for example
     * <code>kms_key_identifier:ARN</code>.</p>
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key, for example
     * <code>kms_key_identifier:ARN</code>.</p>
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key, for example
     * <code>kms_key_identifier:ARN</code>.</p>
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key, for example
     * <code>kms_key_identifier:ARN</code>.</p>
     */
    inline EncryptionSpecification& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key, for example
     * <code>kms_key_identifier:ARN</code>.</p>
     */
    inline EncryptionSpecification& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key, for example
     * <code>kms_key_identifier:ARN</code>.</p>
     */
    inline EncryptionSpecification& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}

  private:

    EncryptionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
