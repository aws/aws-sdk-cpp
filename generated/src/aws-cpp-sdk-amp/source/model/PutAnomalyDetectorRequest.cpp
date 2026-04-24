/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/PutAnomalyDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAnomalyDetectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_evaluationIntervalInSecondsHasBeenSet) {
    payload.WithInteger("evaluationIntervalInSeconds", m_evaluationIntervalInSeconds);
  }

  if (m_missingDataActionHasBeenSet) {
    payload.WithObject("missingDataAction", m_missingDataAction.Jsonize());
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_labelsHasBeenSet) {
    JsonValue labelsJsonMap;
    for (auto& labelsItem : m_labels) {
      labelsJsonMap.WithString(labelsItem.first, labelsItem.second);
    }
    payload.WithObject("labels", std::move(labelsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
