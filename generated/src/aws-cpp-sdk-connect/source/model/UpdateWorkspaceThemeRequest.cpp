/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateWorkspaceThemeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkspaceThemeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_themeHasBeenSet) {
    payload.WithObject("Theme", m_theme.Jsonize());
  }

  return payload.View().WriteReadable();
}
