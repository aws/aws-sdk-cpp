/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RuleSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RuleSummary::RuleSummary(JsonView jsonValue) { *this = jsonValue; }

RuleSummary& RuleSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
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
  if (jsonValue.ValueExists("severity")) {
    m_severity = DetectionRuleSeverityMapper::GetDetectionRuleSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSource")) {
    m_dataSource = DetectionRuleDataSourceMapper::GetDetectionRuleDataSourceForName(jsonValue.GetString("dataSource"));
    m_dataSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tactic")) {
    m_tactic = jsonValue.GetString("tactic");
    m_tacticHasBeenSet = true;
  }
  if (jsonValue.ValueExists("technique")) {
    m_technique = jsonValue.GetString("technique");
    m_techniqueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("language")) {
    m_language = RuleLanguageMapper::GetRuleLanguageForName(jsonValue.GetString("language"));
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schema")) {
    m_schema = RuleSchemaMapper::GetRuleSchemaForName(jsonValue.GetString("schema"));
    m_schemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleSummary::Jsonize() const {
  JsonValue payload;

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
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

  if (m_severityHasBeenSet) {
    payload.WithString("severity", DetectionRuleSeverityMapper::GetNameForDetectionRuleSeverity(m_severity));
  }

  if (m_dataSourceHasBeenSet) {
    payload.WithString("dataSource", DetectionRuleDataSourceMapper::GetNameForDetectionRuleDataSource(m_dataSource));
  }

  if (m_tacticHasBeenSet) {
    payload.WithString("tactic", m_tactic);
  }

  if (m_techniqueHasBeenSet) {
    payload.WithString("technique", m_technique);
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  if (m_languageHasBeenSet) {
    payload.WithString("language", RuleLanguageMapper::GetNameForRuleLanguage(m_language));
  }

  if (m_schemaHasBeenSet) {
    payload.WithString("schema", RuleSchemaMapper::GetNameForRuleSchema(m_schema));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
