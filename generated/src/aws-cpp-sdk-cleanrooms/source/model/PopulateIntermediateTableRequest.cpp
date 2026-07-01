/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PopulateIntermediateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PopulateIntermediateTableRequest::SerializePayload() const {
  JsonValue payload;

  if (m_parametersHasBeenSet) {
    JsonValue parametersJsonMap;
    for (auto& parametersItem : m_parameters) {
      parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
    }
    payload.WithObject("parameters", std::move(parametersJsonMap));
  }

  if (m_computeConfigurationHasBeenSet) {
    payload.WithObject("computeConfiguration", m_computeConfiguration.Jsonize());
  }

  if (m_analysisPayerAccountIdHasBeenSet) {
    payload.WithString("analysisPayerAccountId", m_analysisPayerAccountId);
  }

  return payload.View().WriteReadable();
}
