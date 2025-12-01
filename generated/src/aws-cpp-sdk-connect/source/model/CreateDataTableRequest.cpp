/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateDataTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataTableRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_timeZoneHasBeenSet) {
    payload.WithString("TimeZone", m_timeZone);
  }

  if (m_valueLockLevelHasBeenSet) {
    payload.WithString("ValueLockLevel", DataTableLockLevelMapper::GetNameForDataTableLockLevel(m_valueLockLevel));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", DataTableStatusMapper::GetNameForDataTableStatus(m_status));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
