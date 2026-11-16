/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalCodingDatasetConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalCodingDatasetConfig::MedicalCodingDatasetConfig(JsonView jsonValue) { *this = jsonValue; }

MedicalCodingDatasetConfig& MedicalCodingDatasetConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3InputPath")) {
    m_s3InputPath = jsonValue.GetString("s3InputPath");
    m_s3InputPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3OutputPath")) {
    m_s3OutputPath = jsonValue.GetString("s3OutputPath");
    m_s3OutputPathHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalCodingDatasetConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3InputPathHasBeenSet) {
    payload.WithString("s3InputPath", m_s3InputPath);
  }

  if (m_s3OutputPathHasBeenSet) {
    payload.WithString("s3OutputPath", m_s3OutputPath);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
