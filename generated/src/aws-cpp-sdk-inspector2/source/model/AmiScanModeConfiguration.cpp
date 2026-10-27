/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/AmiScanModeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

AmiScanModeConfiguration::AmiScanModeConfiguration(JsonView jsonValue) { *this = jsonValue; }

AmiScanModeConfiguration& AmiScanModeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scanMode")) {
    m_scanMode = AmiScanModeMapper::GetAmiScanModeForName(jsonValue.GetString("scanMode"));
    m_scanModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("excludeCopiedAmis")) {
    m_excludeCopiedAmis = jsonValue.GetBool("excludeCopiedAmis");
    m_excludeCopiedAmisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("excludeBackupDlmAmis")) {
    m_excludeBackupDlmAmis = jsonValue.GetBool("excludeBackupDlmAmis");
    m_excludeBackupDlmAmisHasBeenSet = true;
  }
  return *this;
}

JsonValue AmiScanModeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_scanModeHasBeenSet) {
    payload.WithString("scanMode", AmiScanModeMapper::GetNameForAmiScanMode(m_scanMode));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  if (m_excludeCopiedAmisHasBeenSet) {
    payload.WithBool("excludeCopiedAmis", m_excludeCopiedAmis);
  }

  if (m_excludeBackupDlmAmisHasBeenSet) {
    payload.WithBool("excludeBackupDlmAmis", m_excludeBackupDlmAmis);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
