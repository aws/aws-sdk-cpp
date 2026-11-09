/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/AutoUpgradeMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

AutoUpgradeMetadata::AutoUpgradeMetadata(JsonView jsonValue) { *this = jsonValue; }

AutoUpgradeMetadata& AutoUpgradeMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TargetVersion")) {
    m_targetVersion = jsonValue.GetString("TargetVersion");
    m_targetVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceVersion")) {
    m_sourceVersion = jsonValue.GetString("SourceVersion");
    m_sourceVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = AutoUpgradeStatusMapper::GetAutoUpgradeStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AnalysisId")) {
    m_analysisId = jsonValue.GetString("AnalysisId");
    m_analysisIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoUpgradeMetadata::Jsonize() const {
  JsonValue payload;

  if (m_targetVersionHasBeenSet) {
    payload.WithString("TargetVersion", m_targetVersion);
  }

  if (m_sourceVersionHasBeenSet) {
    payload.WithString("SourceVersion", m_sourceVersion);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", AutoUpgradeStatusMapper::GetNameForAutoUpgradeStatus(m_status));
  }

  if (m_analysisIdHasBeenSet) {
    payload.WithString("AnalysisId", m_analysisId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
