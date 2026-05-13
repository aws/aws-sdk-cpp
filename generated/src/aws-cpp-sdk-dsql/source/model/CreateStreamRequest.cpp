/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dsql/model/CreateStreamRequest.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateStreamRequest::SerializePayload() const {
  JsonValue payload;

  if (m_targetDefinitionHasBeenSet) {
    payload.WithObject("targetDefinition", m_targetDefinition.Jsonize());
  }

  if (m_orderingHasBeenSet) {
    payload.WithString("ordering", StreamOrderingMapper::GetNameForStreamOrdering(m_ordering));
  }

  if (m_formatHasBeenSet) {
    payload.WithString("format", StreamFormatMapper::GetNameForStreamFormat(m_format));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
