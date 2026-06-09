/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateAdvancedPromptOptimizationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAdvancedPromptOptimizationJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_jobNameHasBeenSet) {
    payload.WithString("jobName", m_jobName);
  }

  if (m_jobDescriptionHasBeenSet) {
    payload.WithString("jobDescription", m_jobDescription);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_inputConfigHasBeenSet) {
    payload.WithObject("inputConfig", m_inputConfig.Jsonize());
  }

  if (m_outputConfigHasBeenSet) {
    payload.WithObject("outputConfig", m_outputConfig.Jsonize());
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("encryptionKeyArn", m_encryptionKeyArn);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  if (m_modelConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> modelConfigurationsJsonList(m_modelConfigurations.size());
    for (unsigned modelConfigurationsIndex = 0; modelConfigurationsIndex < modelConfigurationsJsonList.GetLength();
         ++modelConfigurationsIndex) {
      modelConfigurationsJsonList[modelConfigurationsIndex].AsObject(m_modelConfigurations[modelConfigurationsIndex].Jsonize());
    }
    payload.WithArray("modelConfigurations", std::move(modelConfigurationsJsonList));
  }

  return payload.View().WriteReadable();
}
