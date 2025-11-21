/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/StartSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_workGroupHasBeenSet) {
    payload.WithString("WorkGroup", m_workGroup);
  }

  if (m_engineConfigurationHasBeenSet) {
    payload.WithObject("EngineConfiguration", m_engineConfiguration.Jsonize());
  }

  if (m_executionRoleHasBeenSet) {
    payload.WithString("ExecutionRole", m_executionRole);
  }

  if (m_monitoringConfigurationHasBeenSet) {
    payload.WithObject("MonitoringConfiguration", m_monitoringConfiguration.Jsonize());
  }

  if (m_notebookVersionHasBeenSet) {
    payload.WithString("NotebookVersion", m_notebookVersion);
  }

  if (m_sessionIdleTimeoutInMinutesHasBeenSet) {
    payload.WithInteger("SessionIdleTimeoutInMinutes", m_sessionIdleTimeoutInMinutes);
  }

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("ClientRequestToken", m_clientRequestToken);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_copyWorkGroupTagsHasBeenSet) {
    payload.WithBool("CopyWorkGroupTags", m_copyWorkGroupTags);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.StartSession"));
  return headers;
}
