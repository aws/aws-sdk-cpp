/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/SsmDocumentConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

SsmDocumentConfig::SsmDocumentConfig(JsonView jsonValue) { *this = jsonValue; }

SsmDocumentConfig& SsmDocumentConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("crossAccountRole")) {
    m_crossAccountRole = jsonValue.GetString("crossAccountRole");
    m_crossAccountRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("externalId")) {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentArn")) {
    m_documentArn = jsonValue.GetString("documentArn");
    m_documentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targets")) {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("targets");
    for (unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex) {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for (auto& parametersItem : parametersJsonMap) {
      Aws::Utils::Array<JsonView> ssmParameterValues2JsonList = parametersItem.second.AsArray();
      Aws::Vector<Aws::String> ssmParameterValues2List;
      ssmParameterValues2List.reserve((size_t)ssmParameterValues2JsonList.GetLength());
      for (unsigned ssmParameterValues2Index = 0; ssmParameterValues2Index < ssmParameterValues2JsonList.GetLength();
           ++ssmParameterValues2Index) {
        ssmParameterValues2List.push_back(ssmParameterValues2JsonList[ssmParameterValues2Index].AsString());
      }
      m_parameters[parametersItem.first] = std::move(ssmParameterValues2List);
    }
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentVersion")) {
    m_documentVersion = jsonValue.GetString("documentVersion");
    m_documentVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue SsmDocumentConfig::Jsonize() const {
  JsonValue payload;

  if (m_crossAccountRoleHasBeenSet) {
    payload.WithString("crossAccountRole", m_crossAccountRole);
  }

  if (m_externalIdHasBeenSet) {
    payload.WithString("externalId", m_externalId);
  }

  if (m_documentArnHasBeenSet) {
    payload.WithString("documentArn", m_documentArn);
  }

  if (m_targetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
    for (unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex) {
      targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
    }
    payload.WithArray("targets", std::move(targetsJsonList));
  }

  if (m_parametersHasBeenSet) {
    JsonValue parametersJsonMap;
    for (auto& parametersItem : m_parameters) {
      Aws::Utils::Array<JsonValue> ssmParameterValuesJsonList(parametersItem.second.size());
      for (unsigned ssmParameterValuesIndex = 0; ssmParameterValuesIndex < ssmParameterValuesJsonList.GetLength();
           ++ssmParameterValuesIndex) {
        ssmParameterValuesJsonList[ssmParameterValuesIndex].AsString(parametersItem.second[ssmParameterValuesIndex]);
      }
      parametersJsonMap.WithArray(parametersItem.first, std::move(ssmParameterValuesJsonList));
    }
    payload.WithObject("parameters", std::move(parametersJsonMap));
  }

  if (m_documentVersionHasBeenSet) {
    payload.WithString("documentVersion", m_documentVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
