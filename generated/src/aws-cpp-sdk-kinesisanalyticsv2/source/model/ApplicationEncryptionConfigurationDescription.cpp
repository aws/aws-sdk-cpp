﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/ApplicationEncryptionConfigurationDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

ApplicationEncryptionConfigurationDescription::ApplicationEncryptionConfigurationDescription(JsonView jsonValue) { *this = jsonValue; }

ApplicationEncryptionConfigurationDescription& ApplicationEncryptionConfigurationDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KeyId")) {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyType")) {
    m_keyType = KeyTypeMapper::GetKeyTypeForName(jsonValue.GetString("KeyType"));
    m_keyTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationEncryptionConfigurationDescription::Jsonize() const {
  JsonValue payload;

  if (m_keyIdHasBeenSet) {
    payload.WithString("KeyId", m_keyId);
  }

  if (m_keyTypeHasBeenSet) {
    payload.WithString("KeyType", KeyTypeMapper::GetNameForKeyType(m_keyType));
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
