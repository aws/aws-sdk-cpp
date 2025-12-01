/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateDataTableMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDataTableMetadataRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_valueLockLevelHasBeenSet) {
    payload.WithString("ValueLockLevel", DataTableLockLevelMapper::GetNameForDataTableLockLevel(m_valueLockLevel));
  }

  if (m_timeZoneHasBeenSet) {
    payload.WithString("TimeZone", m_timeZone);
  }

  return payload.View().WriteReadable();
}
