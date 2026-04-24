/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/InvokeBlueprintOptimizationAsyncRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeBlueprintOptimizationAsyncRequest::SerializePayload() const {
  JsonValue payload;

  if (m_blueprintHasBeenSet) {
    payload.WithObject("blueprint", m_blueprint.Jsonize());
  }

  if (m_samplesHasBeenSet) {
    Aws::Utils::Array<JsonValue> samplesJsonList(m_samples.size());
    for (unsigned samplesIndex = 0; samplesIndex < samplesJsonList.GetLength(); ++samplesIndex) {
      samplesJsonList[samplesIndex].AsObject(m_samples[samplesIndex].Jsonize());
    }
    payload.WithArray("samples", std::move(samplesJsonList));
  }

  if (m_outputConfigurationHasBeenSet) {
    payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());
  }

  if (m_dataAutomationProfileArnHasBeenSet) {
    payload.WithString("dataAutomationProfileArn", m_dataAutomationProfileArn);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}
