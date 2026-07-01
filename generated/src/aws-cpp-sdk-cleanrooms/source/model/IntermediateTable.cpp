/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTable::IntermediateTable(JsonView jsonValue) { *this = jsonValue; }

IntermediateTable& IntermediateTable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("membershipArn")) {
    m_membershipArn = jsonValue.GetString("membershipArn");
    m_membershipArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("membershipId")) {
    m_membershipId = jsonValue.GetString("membershipId");
    m_membershipIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collaborationArn")) {
    m_collaborationArn = jsonValue.GetString("collaborationArn");
    m_collaborationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collaborationId")) {
    m_collaborationId = jsonValue.GetString("collaborationId");
    m_collaborationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("childResources")) {
    Aws::Utils::Array<JsonView> childResourcesJsonList = jsonValue.GetArray("childResources");
    for (unsigned childResourcesIndex = 0; childResourcesIndex < childResourcesJsonList.GetLength(); ++childResourcesIndex) {
      m_childResources.push_back(childResourcesJsonList[childResourcesIndex].AsObject());
    }
    m_childResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createTime")) {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateTime")) {
    m_updateTime = jsonValue.GetDouble("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IntermediateTableStatusMapper::GetIntermediateTableStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("populationAnalysisConfiguration")) {
    m_populationAnalysisConfiguration = jsonValue.GetObject("populationAnalysisConfiguration");
    m_populationAnalysisConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retentionInDays")) {
    m_retentionInDays = jsonValue.GetInteger("retentionInDays");
    m_retentionInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableDependencies")) {
    Aws::Utils::Array<JsonView> tableDependenciesJsonList = jsonValue.GetArray("tableDependencies");
    for (unsigned tableDependenciesIndex = 0; tableDependenciesIndex < tableDependenciesJsonList.GetLength(); ++tableDependenciesIndex) {
      m_tableDependencies.push_back(tableDependenciesJsonList[tableDependenciesIndex].AsObject());
    }
    m_tableDependenciesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intermediateTableVersion")) {
    m_intermediateTableVersion = jsonValue.GetObject("intermediateTableVersion");
    m_intermediateTableVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisRuleTypes")) {
    Aws::Utils::Array<JsonView> analysisRuleTypesJsonList = jsonValue.GetArray("analysisRuleTypes");
    for (unsigned analysisRuleTypesIndex = 0; analysisRuleTypesIndex < analysisRuleTypesJsonList.GetLength(); ++analysisRuleTypesIndex) {
      m_analysisRuleTypes.push_back(IntermediateTableAnalysisRuleTypeMapper::GetIntermediateTableAnalysisRuleTypeForName(
          analysisRuleTypesJsonList[analysisRuleTypesIndex].AsString()));
    }
    m_analysisRuleTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schema")) {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTable::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_membershipArnHasBeenSet) {
    payload.WithString("membershipArn", m_membershipArn);
  }

  if (m_membershipIdHasBeenSet) {
    payload.WithString("membershipId", m_membershipId);
  }

  if (m_collaborationArnHasBeenSet) {
    payload.WithString("collaborationArn", m_collaborationArn);
  }

  if (m_collaborationIdHasBeenSet) {
    payload.WithString("collaborationId", m_collaborationId);
  }

  if (m_childResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> childResourcesJsonList(m_childResources.size());
    for (unsigned childResourcesIndex = 0; childResourcesIndex < childResourcesJsonList.GetLength(); ++childResourcesIndex) {
      childResourcesJsonList[childResourcesIndex].AsObject(m_childResources[childResourcesIndex].Jsonize());
    }
    payload.WithArray("childResources", std::move(childResourcesJsonList));
  }

  if (m_createTimeHasBeenSet) {
    payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if (m_updateTimeHasBeenSet) {
    payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", IntermediateTableStatusMapper::GetNameForIntermediateTableStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_populationAnalysisConfigurationHasBeenSet) {
    payload.WithObject("populationAnalysisConfiguration", m_populationAnalysisConfiguration.Jsonize());
  }

  if (m_retentionInDaysHasBeenSet) {
    payload.WithInteger("retentionInDays", m_retentionInDays);
  }

  if (m_tableDependenciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> tableDependenciesJsonList(m_tableDependencies.size());
    for (unsigned tableDependenciesIndex = 0; tableDependenciesIndex < tableDependenciesJsonList.GetLength(); ++tableDependenciesIndex) {
      tableDependenciesJsonList[tableDependenciesIndex].AsObject(m_tableDependencies[tableDependenciesIndex].Jsonize());
    }
    payload.WithArray("tableDependencies", std::move(tableDependenciesJsonList));
  }

  if (m_intermediateTableVersionHasBeenSet) {
    payload.WithObject("intermediateTableVersion", m_intermediateTableVersion.Jsonize());
  }

  if (m_analysisRuleTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> analysisRuleTypesJsonList(m_analysisRuleTypes.size());
    for (unsigned analysisRuleTypesIndex = 0; analysisRuleTypesIndex < analysisRuleTypesJsonList.GetLength(); ++analysisRuleTypesIndex) {
      analysisRuleTypesJsonList[analysisRuleTypesIndex].AsString(
          IntermediateTableAnalysisRuleTypeMapper::GetNameForIntermediateTableAnalysisRuleType(
              m_analysisRuleTypes[analysisRuleTypesIndex]));
    }
    payload.WithArray("analysisRuleTypes", std::move(analysisRuleTypesJsonList));
  }

  if (m_schemaHasBeenSet) {
    payload.WithObject("schema", m_schema.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
