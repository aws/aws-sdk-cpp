/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/AnomalyDetectorDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

AnomalyDetectorDescription::AnomalyDetectorDescription(JsonView jsonValue) { *this = jsonValue; }

AnomalyDetectorDescription& AnomalyDetectorDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("anomalyDetectorId")) {
    m_anomalyDetectorId = jsonValue.GetString("anomalyDetectorId");
    m_anomalyDetectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alias")) {
    m_alias = jsonValue.GetString("alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluationIntervalInSeconds")) {
    m_evaluationIntervalInSeconds = jsonValue.GetInteger("evaluationIntervalInSeconds");
    m_evaluationIntervalInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("missingDataAction")) {
    m_missingDataAction = jsonValue.GetObject("missingDataAction");
    m_missingDataActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("labels")) {
    Aws::Map<Aws::String, JsonView> labelsJsonMap = jsonValue.GetObject("labels").GetAllObjects();
    for (auto& labelsItem : labelsJsonMap) {
      m_labels[labelsItem.first] = labelsItem.second.AsString();
    }
    m_labelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modifiedAt")) {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AnomalyDetectorDescription::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_anomalyDetectorIdHasBeenSet) {
    payload.WithString("anomalyDetectorId", m_anomalyDetectorId);
  }

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

  if (m_statusHasBeenSet) {
    payload.WithObject("status", m_status.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_modifiedAtHasBeenSet) {
    payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
