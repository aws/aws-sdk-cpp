/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/UpdateCollaborationChangeRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCollaborationChangeRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("action", ChangeRequestActionMapper::GetNameForChangeRequestAction(m_action));
  }

  return payload.View().WriteReadable();
}
