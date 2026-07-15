/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/TransformationJobProgressReport.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

TransformationJobProgressReport::TransformationJobProgressReport(JsonView jsonValue) { *this = jsonValue; }

TransformationJobProgressReport& TransformationJobProgressReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TotalFilesScanned")) {
    m_totalFilesScanned = jsonValue.GetInt64("TotalFilesScanned");
    m_totalFilesScannedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalFilesConverted")) {
    m_totalFilesConverted = jsonValue.GetInt64("TotalFilesConverted");
    m_totalFilesConvertedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalFilesFailed")) {
    m_totalFilesFailed = jsonValue.GetInt64("TotalFilesFailed");
    m_totalFilesFailedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalResourcesGenerated")) {
    m_totalResourcesGenerated = jsonValue.GetInt64("TotalResourcesGenerated");
    m_totalResourcesGeneratedHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformationJobProgressReport::Jsonize() const {
  JsonValue payload;

  if (m_totalFilesScannedHasBeenSet) {
    payload.WithInt64("TotalFilesScanned", m_totalFilesScanned);
  }

  if (m_totalFilesConvertedHasBeenSet) {
    payload.WithInt64("TotalFilesConverted", m_totalFilesConverted);
  }

  if (m_totalFilesFailedHasBeenSet) {
    payload.WithInt64("TotalFilesFailed", m_totalFilesFailed);
  }

  if (m_totalResourcesGeneratedHasBeenSet) {
    payload.WithInt64("TotalResourcesGenerated", m_totalResourcesGenerated);
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
