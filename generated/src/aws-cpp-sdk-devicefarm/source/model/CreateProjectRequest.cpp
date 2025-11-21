/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/CreateProjectRequest.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProjectRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_defaultJobTimeoutMinutesHasBeenSet) {
    payload.WithInteger("defaultJobTimeoutMinutes", m_defaultJobTimeoutMinutes);
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_environmentVariablesHasBeenSet) {
    Aws::Utils::Array<JsonValue> environmentVariablesJsonList(m_environmentVariables.size());
    for (unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength();
         ++environmentVariablesIndex) {
      environmentVariablesJsonList[environmentVariablesIndex].AsObject(m_environmentVariables[environmentVariablesIndex].Jsonize());
    }
    payload.WithArray("environmentVariables", std::move(environmentVariablesJsonList));
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProjectRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateProject"));
  return headers;
}
