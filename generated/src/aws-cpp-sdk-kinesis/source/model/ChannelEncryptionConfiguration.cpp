/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/ChannelEncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

ChannelEncryptionConfiguration::ChannelEncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ChannelEncryptionConfiguration& ChannelEncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EncryptionType")) {
    m_encryptionType = ChannelEncryptionTypeMapper::GetChannelEncryptionTypeForName(jsonValue.GetString("EncryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyId")) {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelEncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_encryptionTypeHasBeenSet) {
    payload.WithString("EncryptionType", ChannelEncryptionTypeMapper::GetNameForChannelEncryptionType(m_encryptionType));
  }

  if (m_keyIdHasBeenSet) {
    payload.WithString("KeyId", m_keyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
