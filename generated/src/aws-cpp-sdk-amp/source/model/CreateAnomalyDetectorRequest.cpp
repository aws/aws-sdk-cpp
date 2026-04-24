/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/CreateAnomalyDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAnomalyDetectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("alias", m_alias);
  }

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

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
