/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/KeyConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

KeyConfigurationType::KeyConfigurationType(JsonView jsonValue) { *this = jsonValue; }

KeyConfigurationType& KeyConfigurationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KeyType")) {
    m_keyType = EncryptionKeyTypeMapper::GetEncryptionKeyTypeForName(jsonValue.GetString("KeyType"));
    m_keyTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyConfigurationType::Jsonize() const {
  JsonValue payload;

  if (m_keyTypeHasBeenSet) {
    payload.WithString("KeyType", EncryptionKeyTypeMapper::GetNameForEncryptionKeyType(m_keyType));
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
