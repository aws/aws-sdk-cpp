/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/S3MonitoringConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

S3MonitoringConfiguration::S3MonitoringConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3MonitoringConfiguration& S3MonitoringConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LogUri")) {
    m_logUri = jsonValue.GetString("LogUri");
    m_logUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue S3MonitoringConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_logUriHasBeenSet) {
    payload.WithString("LogUri", m_logUri);
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
