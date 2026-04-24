/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/S3LoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Athena {
namespace Model {

S3LoggingConfiguration::S3LoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3LoggingConfiguration& S3LoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKey")) {
    m_kmsKey = jsonValue.GetString("KmsKey");
    m_kmsKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogLocation")) {
    m_logLocation = jsonValue.GetString("LogLocation");
    m_logLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue S3LoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_kmsKeyHasBeenSet) {
    payload.WithString("KmsKey", m_kmsKey);
  }

  if (m_logLocationHasBeenSet) {
    payload.WithString("LogLocation", m_logLocation);
  }

  return payload;
}

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
