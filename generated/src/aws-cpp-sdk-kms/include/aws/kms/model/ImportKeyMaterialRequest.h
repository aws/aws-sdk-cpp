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
#include <aws/kms/model/ImportType.h>
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
    AWS_KMS_API ImportKeyMaterialRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportKeyMaterial"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. This must be the same KMS key specified in the <code>KeyID</code>
     * parameter of the corresponding <a>GetParametersForImport</a> request. The
     * <code>Origin</code> of the KMS key must be <code>EXTERNAL</code> and its
     * <code>KeyState</code> must be <code>PendingImport</code>. </p> <p>The KMS key
     * can be a symmetric encryption KMS key, HMAC KMS key, asymmetric encryption KMS
     * key, or asymmetric signing KMS key, including a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">multi-Region
     * key</a> of any supported type. You cannot perform this operation on a KMS key in
     * a custom key store, or on a KMS key in a different Amazon Web Services
     * account.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    ImportKeyMaterialRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import token that you received in the response to a previous
     * <a>GetParametersForImport</a> request. It must be from the same response that
     * contained the public key that you used to encrypt the key material.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetImportToken() const { return m_importToken; }
    inline bool ImportTokenHasBeenSet() const { return m_importTokenHasBeenSet; }
    template<typename ImportTokenT = Aws::Utils::ByteBuffer>
    void SetImportToken(ImportTokenT&& value) { m_importTokenHasBeenSet = true; m_importToken = std::forward<ImportTokenT>(value); }
    template<typename ImportTokenT = Aws::Utils::ByteBuffer>
    ImportKeyMaterialRequest& WithImportToken(ImportTokenT&& value) { SetImportToken(std::forward<ImportTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted key material to import. The key material must be encrypted
     * under the public wrapping key that <a>GetParametersForImport</a> returned, using
     * the wrapping algorithm that you specified in the same
     * <code>GetParametersForImport</code> request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetEncryptedKeyMaterial() const { return m_encryptedKeyMaterial; }
    inline bool EncryptedKeyMaterialHasBeenSet() const { return m_encryptedKeyMaterialHasBeenSet; }
    template<typename EncryptedKeyMaterialT = Aws::Utils::ByteBuffer>
    void SetEncryptedKeyMaterial(EncryptedKeyMaterialT&& value) { m_encryptedKeyMaterialHasBeenSet = true; m_encryptedKeyMaterial = std::forward<EncryptedKeyMaterialT>(value); }
    template<typename EncryptedKeyMaterialT = Aws::Utils::ByteBuffer>
    ImportKeyMaterialRequest& WithEncryptedKeyMaterial(EncryptedKeyMaterialT&& value) { SetEncryptedKeyMaterial(std::forward<EncryptedKeyMaterialT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Utils::DateTime& GetValidTo() const { return m_validTo; }
    inline bool ValidToHasBeenSet() const { return m_validToHasBeenSet; }
    template<typename ValidToT = Aws::Utils::DateTime>
    void SetValidTo(ValidToT&& value) { m_validToHasBeenSet = true; m_validTo = std::forward<ValidToT>(value); }
    template<typename ValidToT = Aws::Utils::DateTime>
    ImportKeyMaterialRequest& WithValidTo(ValidToT&& value) { SetValidTo(std::forward<ValidToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the key material expires. The default is
     * <code>KEY_MATERIAL_EXPIRES</code>. For help with this choice, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-import-key-material.html#importing-keys-expiration">Setting
     * an expiration time</a> in the <i>Key Management Service Developer Guide</i>.</p>
     * <p>When the value of <code>ExpirationModel</code> is
     * <code>KEY_MATERIAL_EXPIRES</code>, you must specify a value for the
     * <code>ValidTo</code> parameter. When value is
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the
     * <code>ValidTo</code> parameter.</p> <p>You cannot change the
     * <code>ExpirationModel</code> or <code>ValidTo</code> values for the current
     * import after the request completes. To change either value, you must reimport
     * the key material.</p>
     */
    inline ExpirationModelType GetExpirationModel() const { return m_expirationModel; }
    inline bool ExpirationModelHasBeenSet() const { return m_expirationModelHasBeenSet; }
    inline void SetExpirationModel(ExpirationModelType value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }
    inline ImportKeyMaterialRequest& WithExpirationModel(ExpirationModelType value) { SetExpirationModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the key material being imported is previously associated
     * with this KMS key or not. This parameter is optional and only usable with
     * symmetric encryption keys. If no key material has ever been imported into the
     * KMS key, and this parameter is omitted, the parameter defaults to
     * <code>NEW_KEY_MATERIAL</code>. After the first key material is imported, if this
     * parameter is omitted then the parameter defaults to
     * <code>EXISTING_KEY_MATERIAL</code>.</p>
     */
    inline ImportType GetImportType() const { return m_importType; }
    inline bool ImportTypeHasBeenSet() const { return m_importTypeHasBeenSet; }
    inline void SetImportType(ImportType value) { m_importTypeHasBeenSet = true; m_importType = value; }
    inline ImportKeyMaterialRequest& WithImportType(ImportType value) { SetImportType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for the key material being imported. This parameter is optional
     * and only usable with symmetric encryption keys. If you do not specify a key
     * material description, KMS retains the value you specified when you last imported
     * the same key material into this KMS key.</p>
     */
    inline const Aws::String& GetKeyMaterialDescription() const { return m_keyMaterialDescription; }
    inline bool KeyMaterialDescriptionHasBeenSet() const { return m_keyMaterialDescriptionHasBeenSet; }
    template<typename KeyMaterialDescriptionT = Aws::String>
    void SetKeyMaterialDescription(KeyMaterialDescriptionT&& value) { m_keyMaterialDescriptionHasBeenSet = true; m_keyMaterialDescription = std::forward<KeyMaterialDescriptionT>(value); }
    template<typename KeyMaterialDescriptionT = Aws::String>
    ImportKeyMaterialRequest& WithKeyMaterialDescription(KeyMaterialDescriptionT&& value) { SetKeyMaterialDescription(std::forward<KeyMaterialDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the key material being imported. This parameter is optional and
     * only usable with symmetric encryption keys. You cannot specify a key material ID
     * with <code>ImportType</code> set to <code>NEW_KEY_MATERIAL</code>. Whenever you
     * import key material into a symmetric encryption key, KMS assigns a unique
     * identifier to the key material based on the KMS key ID and the imported key
     * material. When you re-import key material with a specified key material ID,
     * KMS:</p> <ul> <li> <p>Computes the identifier for the key material</p> </li>
     * <li> <p>Matches the computed identifier against the specified key material
     * ID</p> </li> <li> <p>Verifies that the key material ID is already associated
     * with the KMS key</p> </li> </ul> <p>To get the list of key material IDs
     * associated with a KMS key, use <a>ListKeyRotations</a>.</p>
     */
    inline const Aws::String& GetKeyMaterialId() const { return m_keyMaterialId; }
    inline bool KeyMaterialIdHasBeenSet() const { return m_keyMaterialIdHasBeenSet; }
    template<typename KeyMaterialIdT = Aws::String>
    void SetKeyMaterialId(KeyMaterialIdT&& value) { m_keyMaterialIdHasBeenSet = true; m_keyMaterialId = std::forward<KeyMaterialIdT>(value); }
    template<typename KeyMaterialIdT = Aws::String>
    ImportKeyMaterialRequest& WithKeyMaterialId(KeyMaterialIdT&& value) { SetKeyMaterialId(std::forward<KeyMaterialIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::ByteBuffer m_importToken{};
    bool m_importTokenHasBeenSet = false;

    Aws::Utils::ByteBuffer m_encryptedKeyMaterial{};
    bool m_encryptedKeyMaterialHasBeenSet = false;

    Aws::Utils::DateTime m_validTo{};
    bool m_validToHasBeenSet = false;

    ExpirationModelType m_expirationModel{ExpirationModelType::NOT_SET};
    bool m_expirationModelHasBeenSet = false;

    ImportType m_importType{ImportType::NOT_SET};
    bool m_importTypeHasBeenSet = false;

    Aws::String m_keyMaterialDescription;
    bool m_keyMaterialDescriptionHasBeenSet = false;

    Aws::String m_keyMaterialId;
    bool m_keyMaterialIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
