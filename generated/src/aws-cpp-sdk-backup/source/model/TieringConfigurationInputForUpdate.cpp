/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/TieringConfigurationInputForUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

TieringConfigurationInputForUpdate::TieringConfigurationInputForUpdate(JsonView jsonValue) { *this = jsonValue; }

TieringConfigurationInputForUpdate& TieringConfigurationInputForUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceSelection")) {
    Aws::Utils::Array<JsonView> resourceSelectionJsonList = jsonValue.GetArray("ResourceSelection");
    for (unsigned resourceSelectionIndex = 0; resourceSelectionIndex < resourceSelectionJsonList.GetLength(); ++resourceSelectionIndex) {
      m_resourceSelection.push_back(resourceSelectionJsonList[resourceSelectionIndex].AsObject());
    }
    m_resourceSelectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultName")) {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TieringConfigurationInputForUpdate::Jsonize() const {
  JsonValue payload;

  if (m_resourceSelectionHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceSelectionJsonList(m_resourceSelection.size());
    for (unsigned resourceSelectionIndex = 0; resourceSelectionIndex < resourceSelectionJsonList.GetLength(); ++resourceSelectionIndex) {
      resourceSelectionJsonList[resourceSelectionIndex].AsObject(m_resourceSelection[resourceSelectionIndex].Jsonize());
    }
    payload.WithArray("ResourceSelection", std::move(resourceSelectionJsonList));
  }

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("BackupVaultName", m_backupVaultName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
