/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ExportEncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ExportEncryptionConfiguration::ExportEncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExportEncryptionConfiguration& ExportEncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SseAlgorithm")) {
    m_sseAlgorithm = jsonValue.GetString("SseAlgorithm");
    m_sseAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportEncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sseAlgorithmHasBeenSet) {
    payload.WithString("SseAlgorithm", m_sseAlgorithm);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
