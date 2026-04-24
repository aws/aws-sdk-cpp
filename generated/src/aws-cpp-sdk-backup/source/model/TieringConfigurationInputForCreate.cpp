/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/TieringConfigurationInputForCreate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

TieringConfigurationInputForCreate::TieringConfigurationInputForCreate(JsonView jsonValue) { *this = jsonValue; }

TieringConfigurationInputForCreate& TieringConfigurationInputForCreate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TieringConfigurationName")) {
    m_tieringConfigurationName = jsonValue.GetString("TieringConfigurationName");
    m_tieringConfigurationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultName")) {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceSelection")) {
    Aws::Utils::Array<JsonView> resourceSelectionJsonList = jsonValue.GetArray("ResourceSelection");
    for (unsigned resourceSelectionIndex = 0; resourceSelectionIndex < resourceSelectionJsonList.GetLength(); ++resourceSelectionIndex) {
      m_resourceSelection.push_back(resourceSelectionJsonList[resourceSelectionIndex].AsObject());
    }
    m_resourceSelectionHasBeenSet = true;
  }
  return *this;
}

JsonValue TieringConfigurationInputForCreate::Jsonize() const {
  JsonValue payload;

  if (m_tieringConfigurationNameHasBeenSet) {
    payload.WithString("TieringConfigurationName", m_tieringConfigurationName);
  }

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("BackupVaultName", m_backupVaultName);
  }

  if (m_resourceSelectionHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceSelectionJsonList(m_resourceSelection.size());
    for (unsigned resourceSelectionIndex = 0; resourceSelectionIndex < resourceSelectionJsonList.GetLength(); ++resourceSelectionIndex) {
      resourceSelectionJsonList[resourceSelectionIndex].AsObject(m_resourceSelection[resourceSelectionIndex].Jsonize());
    }
    payload.WithArray("ResourceSelection", std::move(resourceSelectionJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
