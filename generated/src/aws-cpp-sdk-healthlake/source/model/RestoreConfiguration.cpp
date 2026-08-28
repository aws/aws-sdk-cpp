/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/RestoreConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

RestoreConfiguration::RestoreConfiguration(JsonView jsonValue) { *this = jsonValue; }

RestoreConfiguration& RestoreConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContinuousBackupRestoreConfiguration")) {
    m_continuousBackupRestoreConfiguration = jsonValue.GetObject("ContinuousBackupRestoreConfiguration");
    m_continuousBackupRestoreConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RestoreConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_continuousBackupRestoreConfigurationHasBeenSet) {
    payload.WithObject("ContinuousBackupRestoreConfiguration", m_continuousBackupRestoreConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
