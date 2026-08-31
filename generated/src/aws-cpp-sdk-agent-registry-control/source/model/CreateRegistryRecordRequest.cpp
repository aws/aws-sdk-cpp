/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/CreateRegistryRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AgentRegistryControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRegistryRecordRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_recordTypeHasBeenSet) {
    payload.WithString("recordType", RecordTypeMapper::GetNameForRecordType(m_recordType));
  }

  if (m_descriptorsHasBeenSet) {
    payload.WithObject("descriptors", m_descriptors.Jsonize());
  }

  if (m_recordVersionHasBeenSet) {
    payload.WithString("recordVersion", m_recordVersion);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_provenanceHasBeenSet) {
    Aws::Utils::Array<JsonValue> provenanceJsonList(m_provenance.size());
    for (unsigned provenanceIndex = 0; provenanceIndex < provenanceJsonList.GetLength(); ++provenanceIndex) {
      provenanceJsonList[provenanceIndex].AsObject(m_provenance[provenanceIndex].Jsonize());
    }
    payload.WithArray("provenance", std::move(provenanceJsonList));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
