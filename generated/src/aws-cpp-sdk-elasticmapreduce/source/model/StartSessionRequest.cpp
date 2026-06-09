/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/StartSessionRequest.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_clusterIdHasBeenSet) {
    payload.WithString("ClusterId", m_clusterId);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("ExecutionRoleArn", m_executionRoleArn);
  }

  if (m_engineConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> engineConfigurationsJsonList(m_engineConfigurations.size());
    for (unsigned engineConfigurationsIndex = 0; engineConfigurationsIndex < engineConfigurationsJsonList.GetLength();
         ++engineConfigurationsIndex) {
      engineConfigurationsJsonList[engineConfigurationsIndex].AsObject(m_engineConfigurations[engineConfigurationsIndex].Jsonize());
    }
    payload.WithArray("EngineConfigurations", std::move(engineConfigurationsJsonList));
  }

  if (m_monitoringConfigurationHasBeenSet) {
    payload.WithObject("MonitoringConfiguration", m_monitoringConfiguration.Jsonize());
  }

  if (m_sessionIdleTimeoutInMinutesHasBeenSet) {
    payload.WithInt64("SessionIdleTimeoutInMinutes", m_sessionIdleTimeoutInMinutes);
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.StartSession"));
  return headers;
}
