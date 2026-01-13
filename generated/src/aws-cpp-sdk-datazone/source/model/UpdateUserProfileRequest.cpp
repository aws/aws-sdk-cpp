/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/UpdateUserProfileRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateUserProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", UserProfileTypeMapper::GetNameForUserProfileType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", UserProfileStatusMapper::GetNameForUserProfileStatus(m_status));
  }

  return payload.View().WriteReadable();
}
