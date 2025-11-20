/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/InvokeDataAutomationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomationRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeDataAutomationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_inputConfigurationHasBeenSet) {
    payload.WithObject("inputConfiguration", m_inputConfiguration.Jsonize());
  }

  if (m_dataAutomationConfigurationHasBeenSet) {
    payload.WithObject("dataAutomationConfiguration", m_dataAutomationConfiguration.Jsonize());
  }

  if (m_blueprintsHasBeenSet) {
    Aws::Utils::Array<JsonValue> blueprintsJsonList(m_blueprints.size());
    for (unsigned blueprintsIndex = 0; blueprintsIndex < blueprintsJsonList.GetLength(); ++blueprintsIndex) {
      blueprintsJsonList[blueprintsIndex].AsObject(m_blueprints[blueprintsIndex].Jsonize());
    }
    payload.WithArray("blueprints", std::move(blueprintsJsonList));
  }

  if (m_dataAutomationProfileArnHasBeenSet) {
    payload.WithString("dataAutomationProfileArn", m_dataAutomationProfileArn);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InvokeDataAutomationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonBedrockKeystoneRuntimeService.InvokeDataAutomation"));
  return headers;
}
