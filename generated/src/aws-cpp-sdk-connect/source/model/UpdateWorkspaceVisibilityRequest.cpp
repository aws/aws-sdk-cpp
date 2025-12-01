/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateWorkspaceVisibilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkspaceVisibilityRequest::SerializePayload() const {
  JsonValue payload;

  if (m_visibilityHasBeenSet) {
    payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  return payload.View().WriteReadable();
}
