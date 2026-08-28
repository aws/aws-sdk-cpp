/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/ContinuousBackupRestoreConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

ContinuousBackupRestoreConfiguration::ContinuousBackupRestoreConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContinuousBackupRestoreConfiguration& ContinuousBackupRestoreConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RestorePointTime")) {
    m_restorePointTime = jsonValue.GetDouble("RestorePointTime");
    m_restorePointTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContinuousBackupRestoreConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_restorePointTimeHasBeenSet) {
    payload.WithDouble("RestorePointTime", m_restorePointTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
