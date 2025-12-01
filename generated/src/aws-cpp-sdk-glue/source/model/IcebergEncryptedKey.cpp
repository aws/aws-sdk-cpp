/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/IcebergEncryptedKey.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

IcebergEncryptedKey::IcebergEncryptedKey(JsonView jsonValue) { *this = jsonValue; }

IcebergEncryptedKey& IcebergEncryptedKey::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KeyId")) {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptedKeyMetadata")) {
    m_encryptedKeyMetadata = jsonValue.GetString("EncryptedKeyMetadata");
    m_encryptedKeyMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptedById")) {
    m_encryptedById = jsonValue.GetString("EncryptedById");
    m_encryptedByIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Properties")) {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("Properties").GetAllObjects();
    for (auto& propertiesItem : propertiesJsonMap) {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergEncryptedKey::Jsonize() const {
  JsonValue payload;

  if (m_keyIdHasBeenSet) {
    payload.WithString("KeyId", m_keyId);
  }

  if (m_encryptedKeyMetadataHasBeenSet) {
    payload.WithString("EncryptedKeyMetadata", m_encryptedKeyMetadata);
  }

  if (m_encryptedByIdHasBeenSet) {
    payload.WithString("EncryptedById", m_encryptedById);
  }

  if (m_propertiesHasBeenSet) {
    JsonValue propertiesJsonMap;
    for (auto& propertiesItem : m_properties) {
      propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
    }
    payload.WithObject("Properties", std::move(propertiesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
