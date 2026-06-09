/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/SessionManagedLoggingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

SessionManagedLoggingConfiguration::SessionManagedLoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

SessionManagedLoggingConfiguration& SessionManagedLoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionManagedLoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
