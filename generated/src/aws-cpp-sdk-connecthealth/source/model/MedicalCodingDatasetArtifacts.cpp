/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalCodingDatasetArtifacts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalCodingDatasetArtifacts::MedicalCodingDatasetArtifacts(JsonView jsonValue) { *this = jsonValue; }

MedicalCodingDatasetArtifacts& MedicalCodingDatasetArtifacts::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("evaluationS3Uri")) {
    m_evaluationS3Uri = jsonValue.GetString("evaluationS3Uri");
    m_evaluationS3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalCodingDatasetArtifacts::Jsonize() const {
  JsonValue payload;

  if (m_evaluationS3UriHasBeenSet) {
    payload.WithString("evaluationS3Uri", m_evaluationS3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
