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
  class AWS_KMS_API ImportKeyMaterialRequest : public KMSRequest
  {
  public:
    ImportKeyMaterialRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportKeyMaterial"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the CMK to import the key material into. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the CMK to import the key material into. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The identifier of the CMK to import the key material into. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the CMK to import the key material into. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The identifier of the CMK to import the key material into. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of the CMK to import the key material into. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline ImportKeyMaterialRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the CMK to import the key material into. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline ImportKeyMaterialRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the CMK to import the key material into. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
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
     * <p>The encrypted key material to import. It must be encrypted with the public
     * key that you received in the response to a previous
     * <a>GetParametersForImport</a> request, using the wrapping algorithm that you
     * specified in that request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetEncryptedKeyMaterial() const{ return m_encryptedKeyMaterial; }

    /**
     * <p>The encrypted key material to import. It must be encrypted with the public
     * key that you received in the response to a previous
     * <a>GetParametersForImport</a> request, using the wrapping algorithm that you
     * specified in that request.</p>
     */
    inline bool EncryptedKeyMaterialHasBeenSet() const { return m_encryptedKeyMaterialHasBeenSet; }

    /**
     * <p>The encrypted key material to import. It must be encrypted with the public
     * key that you received in the response to a previous
     * <a>GetParametersForImport</a> request, using the wrapping algorithm that you
     * specified in that request.</p>
     */
    inline void SetEncryptedKeyMaterial(const Aws::Utils::ByteBuffer& value) { m_encryptedKeyMaterialHasBeenSet = true; m_encryptedKeyMaterial = value; }

    /**
     * <p>The encrypted key material to import. It must be encrypted with the public
     * key that you received in the response to a previous
     * <a>GetParametersForImport</a> request, using the wrapping algorithm that you
     * specified in that request.</p>
     */
    inline void SetEncryptedKeyMaterial(Aws::Utils::ByteBuffer&& value) { m_encryptedKeyMaterialHasBeenSet = true; m_encryptedKeyMaterial = std::move(value); }

    /**
     * <p>The encrypted key material to import. It must be encrypted with the public
     * key that you received in the response to a previous
     * <a>GetParametersForImport</a> request, using the wrapping algorithm that you
     * specified in that request.</p>
     */
    inline ImportKeyMaterialRequest& WithEncryptedKeyMaterial(const Aws::Utils::ByteBuffer& value) { SetEncryptedKeyMaterial(value); return *this;}

    /**
     * <p>The encrypted key material to import. It must be encrypted with the public
     * key that you received in the response to a previous
     * <a>GetParametersForImport</a> request, using the wrapping algorithm that you
     * specified in that request.</p>
     */
    inline ImportKeyMaterialRequest& WithEncryptedKeyMaterial(Aws::Utils::ByteBuffer&& value) { SetEncryptedKeyMaterial(std::move(value)); return *this;}


    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. You must
     * omit this parameter when the <code>ExpirationModel</code> parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>. Otherwise it is required.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTo() const{ return m_validTo; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. You must
     * omit this parameter when the <code>ExpirationModel</code> parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>. Otherwise it is required.</p>
     */
    inline bool ValidToHasBeenSet() const { return m_validToHasBeenSet; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. You must
     * omit this parameter when the <code>ExpirationModel</code> parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>. Otherwise it is required.</p>
     */
    inline void SetValidTo(const Aws::Utils::DateTime& value) { m_validToHasBeenSet = true; m_validTo = value; }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. You must
     * omit this parameter when the <code>ExpirationModel</code> parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>. Otherwise it is required.</p>
     */
    inline void SetValidTo(Aws::Utils::DateTime&& value) { m_validToHasBeenSet = true; m_validTo = std::move(value); }

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. You must
     * omit this parameter when the <code>ExpirationModel</code> parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>. Otherwise it is required.</p>
     */
    inline ImportKeyMaterialRequest& WithValidTo(const Aws::Utils::DateTime& value) { SetValidTo(value); return *this;}

    /**
     * <p>The time at which the imported key material expires. When the key material
     * expires, AWS KMS deletes the key material and the CMK becomes unusable. You must
     * omit this parameter when the <code>ExpirationModel</code> parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>. Otherwise it is required.</p>
     */
    inline ImportKeyMaterialRequest& WithValidTo(Aws::Utils::DateTime&& value) { SetValidTo(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>, in which case you must include the
     * <code>ValidTo</code> parameter. When this parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p>
     */
    inline const ExpirationModelType& GetExpirationModel() const{ return m_expirationModel; }

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>, in which case you must include the
     * <code>ValidTo</code> parameter. When this parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p>
     */
    inline bool ExpirationModelHasBeenSet() const { return m_expirationModelHasBeenSet; }

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>, in which case you must include the
     * <code>ValidTo</code> parameter. When this parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p>
     */
    inline void SetExpirationModel(const ExpirationModelType& value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>, in which case you must include the
     * <code>ValidTo</code> parameter. When this parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p>
     */
    inline void SetExpirationModel(ExpirationModelType&& value) { m_expirationModelHasBeenSet = true; m_expirationModel = std::move(value); }

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>, in which case you must include the
     * <code>ValidTo</code> parameter. When this parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p>
     */
    inline ImportKeyMaterialRequest& WithExpirationModel(const ExpirationModelType& value) { SetExpirationModel(value); return *this;}

    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>, in which case you must include the
     * <code>ValidTo</code> parameter. When this parameter is set to
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p>
     */
    inline ImportKeyMaterialRequest& WithExpirationModel(ExpirationModelType&& value) { SetExpirationModel(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    Aws::Utils::ByteBuffer m_importToken;
    bool m_importTokenHasBeenSet;

    Aws::Utils::ByteBuffer m_encryptedKeyMaterial;
    bool m_encryptedKeyMaterialHasBeenSet;

    Aws::Utils::DateTime m_validTo;
    bool m_validToHasBeenSet;

    ExpirationModelType m_expirationModel;
    bool m_expirationModelHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
