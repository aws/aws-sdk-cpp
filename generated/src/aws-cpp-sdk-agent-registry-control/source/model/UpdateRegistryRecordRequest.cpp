/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdateRegistryRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AgentRegistryControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRegistryRecordRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithObject("displayName", m_displayName.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithObject("description", m_description.Jsonize());
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

  if (m_triggerSynchronizationHasBeenSet) {
    payload.WithBool("triggerSynchronization", m_triggerSynchronization);
  }

  return payload.View().WriteReadable();
}
