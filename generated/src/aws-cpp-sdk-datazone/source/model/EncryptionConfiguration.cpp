/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/EncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

EncryptionConfiguration& EncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sseAlgorithm")) {
    m_sseAlgorithm = jsonValue.GetString("sseAlgorithm");
    m_sseAlgorithmHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_sseAlgorithmHasBeenSet) {
    payload.WithString("sseAlgorithm", m_sseAlgorithm);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
