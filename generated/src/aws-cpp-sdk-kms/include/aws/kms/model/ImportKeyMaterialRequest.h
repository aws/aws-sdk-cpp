/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kms/model/ExpirationModelType.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class ImportKeyMaterialRequest : public KMSRequest
  {
  public:
    AWS_KMS_API ImportKeyMaterialRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportKeyMaterial"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the symmetric encryption KMS key that receives the imported
     * key material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>. You cannot
     * perform this operation on an asymmetric KMS key, an HMAC KMS key, a KMS key in a
     * custom key store, or on a KMS key in a different Amazon Web Services account</p>
     * <p>Specify the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the symmetric encryption KMS key that receives the imported
     * key material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>. You cannot
     * perform this operation on an asymmetric KMS key, an HMAC KMS key, a KMS key in a
     * custom key store, or on a KMS key in a different Amazon Web Services account</p>
     * <p>Specify the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The identifier of the symmetric encryption KMS key that receives the imported
     * key material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>. You cannot
     * perform this operation on an asymmetric KMS key, an HMAC KMS key, a KMS key in a
     * custom key store, or on a KMS key in a different Amazon Web Services account</p>
     * <p>Specify the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the symmetric encryption KMS key that receives the imported
     * key material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>. You cannot
     * perform this operation on an asymmetric KMS key, an HMAC KMS key, a KMS key in a
     * custom key store, or on a KMS key in a different Amazon Web Services account</p>
     * <p>Specify the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The identifier of the symmetric encryption KMS key that receives the imported
     * key material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>. You cannot
     * perform this operation on an asymmetric KMS key, an HMAC KMS key, a KMS key in a
     * custom key store, or on a KMS key in a different Amazon Web Services account</p>
     * <p>Specify the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of the symmetric encryption KMS key that receives the imported
     * key material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>. You cannot
     * perform this operation on an asymmetric KMS key, an HMAC KMS key, a KMS key in a
     * custom key store, or on a KMS key in a different Amazon Web Services account</p>
     * <p>Specify the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ImportKeyMaterialRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the symmetric encryption KMS key that receives the imported
     * key material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>. You cannot
     * perform this operation on an asymmetric KMS key, an HMAC KMS key, a KMS key in a
     * custom key store, or on a KMS key in a different Amazon Web Services account</p>
     * <p>Specify the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ImportKeyMaterialRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the symmetric encryption KMS key that receives the imported
     * key material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>. You cannot
     * perform this operation on an asymmetric KMS key, an HMAC KMS key, a KMS key in a
     * custom key store, or on a KMS key in a different Amazon Web Services account</p>
     * <p>Specify the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ImportKeyMaterialRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The import token that you received in the response to a previous
     * <a>GetParametersForImport</a> request. It must be from the same response that
     * contained the public key that you used to encrypt the key material.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetImportToken() const{ return m_importToken; }

    /**
     * <p>The import token that you received in the response to a previous
     * <a>GetParametersForImport</a> request. It must be from the same response that
     * contained the public key that you used to encrypt the key material.</p>
     */
    inline bool ImportTokenHasBeenSet() const { return m_importTokenHasBeenSet; }

    /**
     * <p>The import token that you received in the response to a previous
     * <a>GetParametersForImport</a> request. It must be from the same response that
     * contained the public key that you used to encrypt the key material.</p>
     */
    inline void SetImportToken(const Aws::Utils::ByteBuffer& value) { m_importTokenHasBeenSet = true; m_importToken = value; }

    /**
     * <p>The import token that you received in the response to a previous
     * <a>GetParametersForImport</a> request. It must be from the same response that
     * contained the public key that you used to encrypt the key material.</p>
     */
    inline void SetImportToken(Aws::Utils::ByteBuffer&& value) { m_importTokenHasBeenSet = true; m_importToken = std::move(value); }

    /**
     * <p>The import token that you received in the response to a previous
     * <a>GetParametersForImport</a> request. It must be from the same response that
     * contained the public key that you used to encrypt the key material.</p>
     */
    inline ImportKeyMaterialRequest& WithImportToken(const Aws::Utils::ByteBuffer& value) { SetImportToken(value); return *this;}

    /**
     * <p>The import token that you received in the response to a previous
     * <a>GetParametersForImport</a> request. It must be from the same response that
     * contained the public key that you used to encrypt the key material.</p>
     */
    inline ImportKeyMaterialRequest& WithImportToken(Aws::Utils::ByteBuffer&& value) { SetImportToken(std::move(value)); return *this;}


    /**
     * <p>The encrypted key material to import. The key material must be encrypted with
     * the public wrapping key that <a>GetParametersForImport</a> returned, using the
     * wrapping algorithm that you specified in the same
     * <code>GetParametersForImport</code> request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetEncryptedKeyMaterial() const{ return m_encryptedKeyMaterial; }

    /**
     * <p>The encrypted key material to import. The key material must be encrypted with
     * the public wrapping key that <a>GetParametersForImport</a> returned, using the
     * wrapping algorithm that you specified in the same
     * <code>GetParametersForImport</code> request.</p>
     */
    inline bool EncryptedKeyMaterialHasBeenSet() const { return m_encryptedKeyMaterialHasBeenSet; }

    /**
     * <p>The encrypted key material to import. The key material must be encrypted with
     * the public wrapping key that <a>GetParametersForImport</a> returned, using the
     * wrapping algorithm that you specified in the same
     * <code>GetParametersForImport</code> request.</p>
     */
    inline void SetEncryptedKeyMaterial(const Aws::Utils::ByteBuffer& value) { m_encryptedKeyMaterialHasBeenSet = true; m_encryptedKeyMaterial = value; }

    /**
     * <p>The encrypted key material to import. The key material must be encrypted with
     * the public wrapping key that <a>GetParametersForImport</a> returned, using the
     * wrapping algorithm that you specified in the same
     * <code>GetParametersForImport</code> request.</p>
     */
    inline void SetEncryptedKeyMaterial(Aws::Utils::ByteBuffer&& value) { m_encryptedKeyMaterialHasBeenSet = true; m_encryptedKeyMaterial = std::move(value); }

    /**
     * <p>The encrypted key material to import. The key material must be encrypted with
     * the public wrapping key that <a>GetParametersForImport</a> returned, using the
     * wrapping algorithm that you specified in the same
     * <code>GetParametersForImport</code> request.</p>
     */
    inline ImportKeyMaterialRequest& WithEncryptedKeyMaterial(const Aws::Utils::ByteBuffer& value) { SetEncryptedKeyMaterial(value); return *this;}

    /**
     * <p>The encrypted key material to import. The key material must be encrypted with
     * the public wrapping key that <a>GetParametersForImport</a> returned, using the
     * wrapping algorithm that you specified in the same
     * <code>GetParametersForImport</code> request.</p>
     */
    inline ImportKeyMaterialRequest& WithEncryptedKeyMaterial(Aws::Utils::ByteBuffer&& value) { SetEncryptedKeyMaterial(std::move(value)); return *this;}


    /**
     * <p>The date and time when the imported key material expires. This parameter is
     * required when the value of the <code>ExpirationModel</code> parameter is
     * <code>KEY_MATERIAL_EXPIRES</code>. Otherwise it is not valid.</p> <p>The value
     * of this parameter must be a future date and time. The maximum value is 365 days
     * from the request date.</p> <p>When the key material expires, KMS deletes the key
     * material from the KMS key. Without its key material, the KMS key is unusable. To
     * use the KMS key in cryptographic operations, you must reimport the same key
     * material.</p> <p>You cannot change the <code>ExpirationModel</code> or
     * <code>ValidTo</code> values for the current import after the request completes.
     * To change either value, you must delete (<a>DeleteImportedKeyMaterial</a>) and
     * reimport the key material.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTo() const{ return m_validTo; }

    /**
     * <p>The date and time when the imported key material expires. This parameter is
     * required when the value of the <code>ExpirationModel</code> parameter is
     * <code>KEY_MATERIAL_EXPIRES</code>. Otherwise it is not valid.</p> <p>The value
     * of this parameter must be a future date and time. The maximum value is 365 days
     * from the request date.</p> <p>When the key material expires, KMS deletes the key
     * material from the KMS key. Without its key material, the KMS key is unusable. To
     * use the KMS key in cryptographic operations, you must reimport the same key
     * material.</p> <p>You cannot change the <code>ExpirationModel</code> or
     * <code>ValidTo</code> values for the current import after the request completes.
     * To change either value, you must delete (<a>DeleteImportedKeyMaterial</a>) and
     * reimport the key material.</p>
     */
    inline bool ValidToHasBeenSet() const { return m_validToHasBeenSet; }

    /**
     * <p>The date and time when the imported key material expires. This parameter is
     * required when the value of the <code>ExpirationModel</code> parameter is
     * <code>KEY_MATERIAL_EXPIRES</code>. Otherwise it is not valid.</p> <p>The value
     * of this parameter must be a future date and time. The maximum value is 365 days
     * from the request date.</p> <p>When the key material expires, KMS deletes the key
     * material from the KMS key. Without its key material, the KMS key is unusable. To
     * use the KMS key in cryptographic operations, you must reimport the same key
     * material.</p> <p>You cannot change the <code>ExpirationModel</code> or
     * <code>ValidTo</code> values for the current import after the request completes.
     * To change either value, you must delete (<a>DeleteImportedKeyMaterial</a>) and
     * reimport the key material.</p>
     */
    inline void SetValidTo(const Aws::Utils::DateTime& value) { m_validToHasBeenSet = true; m_validTo = value; }

    /**
     * <p>The date and time when the imported key material expires. This parameter is
     * required when the value of the <code>ExpirationModel</code> parameter is
     * <code>KEY_MATERIAL_EXPIRES</code>. Otherwise it is not valid.</p> <p>The value
     * of this parameter must be a future date and time. The maximum value is 365 days
     * from the request date.</p> <p>When the key material expires, KMS deletes the key
     * material from the KMS key. Without its key material, the KMS key is unusable. To
     * use the KMS key in cryptographic operations, you must reimport the same key
     * material.</p> <p>You cannot change the <code>ExpirationModel</code> or
     * <code>ValidTo</code> values for the current import after the request completes.
     * To change either value, you must delete (<a>DeleteImportedKeyMaterial</a>) and
     * reimport the key material.</p>
     */
    inline void SetValidTo(Aws::Utils::DateTime&& value) { m_validToHasBeenSet = true; m_validTo = std::move(value); }

    /**
     * <p>The date and time when the imported key material expires. This parameter is
     * required when the value of the <code>ExpirationModel</code> parameter is
     * <code>KEY_MATERIAL_EXPIRES</code>. Otherwise it is not valid.</p> <p>The value
     * of this parameter must be a future date and time. The maximum value is 365 days
     * from the request date.</p> <p>When the key material expires, KMS deletes the key
     * material from the KMS key. Without its key material, the KMS key is unusable. To
     * use the KMS key in cryptographic operations, you must reimport the same key
     * material.</p> <p>You cannot change the <code>ExpirationModel</code> or
     * <code>ValidTo</code> values for the current import after the request completes.
     * To change either value, you must delete (<a>DeleteImportedKeyMaterial</a>) and
     * reimport the key material.</p>
     */
    inline ImportKeyMaterialRequest& WithValidTo(const Aws::Utils::DateTime& value) { SetValidTo(value); return *this;}

    /**
     * <p>The date and time when the imported key material expires. This parameter is
     * required when the value of the <code>ExpirationModel</code> parameter is
     * <code>KEY_MATERIAL_EXPIRES</code>. Otherwise it is not valid.</p> <p>The value
     * of this parameter must be a future date and time. The maximum value is 365 days
     * from the request date.</p> <p>When the key material expires, KMS deletes the key
     * material from the KMS key. Without its key material, the KMS key is unusable. To
     * use the KMS key in cryptographic operations, you must reimport the same key
     * material.</p> <p>You cannot change the <code>ExpirationModel</code> or
     * <code>ValidTo</code> values for the current import after the request completes.
     * To change either value, you must delete (<a>DeleteImportedKeyMaterial</a>) and
     * reimport the key material.</p>
     */
    inline ImportKeyMaterialRequest& WithValidTo(Aws::Utils::DateTime&& value) { SetValidTo(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>.</p> <p>When the value of
     * <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, you must
     * specify a value for the <code>ValidTo</code> parameter. When value is
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p> <p>You cannot change the
     * <code>ExpirationModel</code> or <code>ValidTo</code> values for the current
     * import after the request completes. To change either value, you must delete
     * (<a>DeleteImportedKeyMaterial</a>) and reimport the key material.</p>
     */
    inline const ExpirationModelType& GetExpirationModel() const{ return m_expirationModel; }

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>.</p> <p>When the value of
     * <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, you must
     * specify a value for the <code>ValidTo</code> parameter. When value is
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p> <p>You cannot change the
     * <code>ExpirationModel</code> or <code>ValidTo</code> values for the current
     * import after the request completes. To change either value, you must delete
     * (<a>DeleteImportedKeyMaterial</a>) and reimport the key material.</p>
     */
    inline bool ExpirationModelHasBeenSet() const { return m_expirationModelHasBeenSet; }

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>.</p> <p>When the value of
     * <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, you must
     * specify a value for the <code>ValidTo</code> parameter. When value is
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p> <p>You cannot change the
     * <code>ExpirationModel</code> or <code>ValidTo</code> values for the current
     * import after the request completes. To change either value, you must delete
     * (<a>DeleteImportedKeyMaterial</a>) and reimport the key material.</p>
     */
    inline void SetExpirationModel(const ExpirationModelType& value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>.</p> <p>When the value of
     * <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, you must
     * specify a value for the <code>ValidTo</code> parameter. When value is
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p> <p>You cannot change the
     * <code>ExpirationModel</code> or <code>ValidTo</code> values for the current
     * import after the request completes. To change either value, you must delete
     * (<a>DeleteImportedKeyMaterial</a>) and reimport the key material.</p>
     */
    inline void SetExpirationModel(ExpirationModelType&& value) { m_expirationModelHasBeenSet = true; m_expirationModel = std::move(value); }

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>.</p> <p>When the value of
     * <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, you must
     * specify a value for the <code>ValidTo</code> parameter. When value is
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p> <p>You cannot change the
     * <code>ExpirationModel</code> or <code>ValidTo</code> values for the current
     * import after the request completes. To change either value, you must delete
     * (<a>DeleteImportedKeyMaterial</a>) and reimport the key material.</p>
     */
    inline ImportKeyMaterialRequest& WithExpirationModel(const ExpirationModelType& value) { SetExpirationModel(value); return *this;}

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>.</p> <p>When the value of
     * <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, you must
     * specify a value for the <code>ValidTo</code> parameter. When value is
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p> <p>You cannot change the
     * <code>ExpirationModel</code> or <code>ValidTo</code> values for the current
     * import after the request completes. To change either value, you must delete
     * (<a>DeleteImportedKeyMaterial</a>) and reimport the key material.</p>
     */
    inline ImportKeyMaterialRequest& WithExpirationModel(ExpirationModelType&& value) { SetExpirationModel(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::ByteBuffer m_importToken;
    bool m_importTokenHasBeenSet = false;

    Aws::Utils::ByteBuffer m_encryptedKeyMaterial;
    bool m_encryptedKeyMaterialHasBeenSet = false;

    Aws::Utils::DateTime m_validTo;
    bool m_validToHasBeenSet = false;

    ExpirationModelType m_expirationModel;
    bool m_expirationModelHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
