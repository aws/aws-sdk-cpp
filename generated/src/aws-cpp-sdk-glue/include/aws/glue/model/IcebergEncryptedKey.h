/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Encryption key structure used for Iceberg table encryption. Contains the key
 * ID, encrypted key metadata, optional reference to the encrypting key, and
 * additional properties for the table's encryption scheme.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergEncryptedKey">AWS
 * API Reference</a></p>
 */
class IcebergEncryptedKey {
 public:
  AWS_GLUE_API IcebergEncryptedKey() = default;
  AWS_GLUE_API IcebergEncryptedKey(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API IcebergEncryptedKey& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the encryption key used for Iceberg table encryption.
   * This ID is used to reference the key in table metadata and track which key was
   * used to encrypt specific data.</p>
   */
  inline const Aws::String& GetKeyId() const { return m_keyId; }
  inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
  template <typename KeyIdT = Aws::String>
  void SetKeyId(KeyIdT&& value) {
    m_keyIdHasBeenSet = true;
    m_keyId = std::forward<KeyIdT>(value);
  }
  template <typename KeyIdT = Aws::String>
  IcebergEncryptedKey& WithKeyId(KeyIdT&& value) {
    SetKeyId(std::forward<KeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Encrypted key and metadata, base64 encoded. The format of encrypted key
   * metadata is determined by the table's encryption scheme and can be a wrapped
   * format specific to the table's KMS provider.</p>
   */
  inline const Aws::String& GetEncryptedKeyMetadata() const { return m_encryptedKeyMetadata; }
  inline bool EncryptedKeyMetadataHasBeenSet() const { return m_encryptedKeyMetadataHasBeenSet; }
  template <typename EncryptedKeyMetadataT = Aws::String>
  void SetEncryptedKeyMetadata(EncryptedKeyMetadataT&& value) {
    m_encryptedKeyMetadataHasBeenSet = true;
    m_encryptedKeyMetadata = std::forward<EncryptedKeyMetadataT>(value);
  }
  template <typename EncryptedKeyMetadataT = Aws::String>
  IcebergEncryptedKey& WithEncryptedKeyMetadata(EncryptedKeyMetadataT&& value) {
    SetEncryptedKeyMetadata(std::forward<EncryptedKeyMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional ID of the key used to encrypt or wrap the key metadata in Iceberg
   * table encryption. This field references another encryption key that was used to
   * encrypt the current key's metadata.</p>
   */
  inline const Aws::String& GetEncryptedById() const { return m_encryptedById; }
  inline bool EncryptedByIdHasBeenSet() const { return m_encryptedByIdHasBeenSet; }
  template <typename EncryptedByIdT = Aws::String>
  void SetEncryptedById(EncryptedByIdT&& value) {
    m_encryptedByIdHasBeenSet = true;
    m_encryptedById = std::forward<EncryptedByIdT>(value);
  }
  template <typename EncryptedByIdT = Aws::String>
  IcebergEncryptedKey& WithEncryptedById(EncryptedByIdT&& value) {
    SetEncryptedById(std::forward<EncryptedByIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string to string map of additional metadata used by the table's encryption
   * scheme. These properties provide additional context and configuration for the
   * encryption key implementation.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  IcebergEncryptedKey& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  IcebergEncryptedKey& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyId;

  Aws::String m_encryptedKeyMetadata;

  Aws::String m_encryptedById;

  Aws::Map<Aws::String, Aws::String> m_properties;
  bool m_keyIdHasBeenSet = false;
  bool m_encryptedKeyMetadataHasBeenSet = false;
  bool m_encryptedByIdHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
