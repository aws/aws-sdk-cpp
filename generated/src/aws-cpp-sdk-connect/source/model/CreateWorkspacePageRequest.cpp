/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateWorkspacePageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWorkspacePageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_pageHasBeenSet) {
    payload.WithString("Page", m_page);
  }

  if (m_slugHasBeenSet) {
    payload.WithString("Slug", m_slug);
  }

  if (m_inputDataHasBeenSet) {
    payload.WithString("InputData", m_inputData);
  }

  return payload.View().WriteReadable();
}
