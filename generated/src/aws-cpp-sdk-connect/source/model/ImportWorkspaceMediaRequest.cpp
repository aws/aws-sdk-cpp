/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ImportWorkspaceMediaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportWorkspaceMediaRequest::SerializePayload() const {
  JsonValue payload;

  if (m_mediaTypeHasBeenSet) {
    payload.WithString("MediaType", MediaTypeMapper::GetNameForMediaType(m_mediaType));
  }

  if (m_mediaSourceHasBeenSet) {
    payload.WithString("MediaSource", m_mediaSource);
  }

  return payload.View().WriteReadable();
}
