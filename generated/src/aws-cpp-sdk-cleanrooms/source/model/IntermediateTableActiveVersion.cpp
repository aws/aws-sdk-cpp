/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableActiveVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTableActiveVersion::IntermediateTableActiveVersion(JsonView jsonValue) { *this = jsonValue; }

IntermediateTableActiveVersion& IntermediateTableActiveVersion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisId")) {
    m_analysisId = jsonValue.GetString("analysisId");
    m_analysisIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisType")) {
    m_analysisType =
        PopulateIntermediateTableAnalysisTypeMapper::GetPopulateIntermediateTableAnalysisTypeForName(jsonValue.GetString("analysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for (auto& parametersItem : parametersJsonMap) {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inheritedConstraints")) {
    m_inheritedConstraints = jsonValue.GetObject("inheritedConstraints");
    m_inheritedConstraintsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationTime")) {
    m_expirationTime = jsonValue.GetDouble("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTableActiveVersion::Jsonize() const {
  JsonValue payload;

  if (m_versionIdHasBeenSet) {
    payload.WithString("versionId", m_versionId);
  }

  if (m_analysisIdHasBeenSet) {
    payload.WithString("analysisId", m_analysisId);
  }

  if (m_analysisTypeHasBeenSet) {
    payload.WithString("analysisType",
                       PopulateIntermediateTableAnalysisTypeMapper::GetNameForPopulateIntermediateTableAnalysisType(m_analysisType));
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_parametersHasBeenSet) {
    JsonValue parametersJsonMap;
    for (auto& parametersItem : m_parameters) {
      parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
    }
    payload.WithObject("parameters", std::move(parametersJsonMap));
  }

  if (m_inheritedConstraintsHasBeenSet) {
    payload.WithObject("inheritedConstraints", m_inheritedConstraints.Jsonize());
  }

  if (m_expirationTimeHasBeenSet) {
    payload.WithDouble("expirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
