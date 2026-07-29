/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/UpdatePipelineRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePipelineRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_environmentVariablesHasBeenSet) {
    JsonValue environmentVariablesJsonMap;
    for (auto& environmentVariablesItem : m_environmentVariables) {
      environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
    }
    payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));
  }

  if (m_computationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> computationsJsonList(m_computations.size());
    for (unsigned computationsIndex = 0; computationsIndex < computationsJsonList.GetLength(); ++computationsIndex) {
      computationsJsonList[computationsIndex].AsObject(m_computations[computationsIndex].Jsonize());
    }
    payload.WithArray("computations", std::move(computationsJsonList));
  }

  return payload.View().WriteReadable();
}
