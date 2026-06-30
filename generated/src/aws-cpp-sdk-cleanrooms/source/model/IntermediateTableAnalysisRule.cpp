/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableAnalysisRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTableAnalysisRule::IntermediateTableAnalysisRule(JsonView jsonValue) { *this = jsonValue; }

IntermediateTableAnalysisRule& IntermediateTableAnalysisRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("intermediateTableIdentifier")) {
    m_intermediateTableIdentifier = jsonValue.GetString("intermediateTableIdentifier");
    m_intermediateTableIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intermediateTableArn")) {
    m_intermediateTableArn = jsonValue.GetString("intermediateTableArn");
    m_intermediateTableArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisRulePolicy")) {
    m_analysisRulePolicy = jsonValue.GetObject("analysisRulePolicy");
    m_analysisRulePolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisRuleType")) {
    m_analysisRuleType =
        IntermediateTableAnalysisRuleTypeMapper::GetIntermediateTableAnalysisRuleTypeForName(jsonValue.GetString("analysisRuleType"));
    m_analysisRuleTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createTime")) {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateTime")) {
    m_updateTime = jsonValue.GetDouble("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTableAnalysisRule::Jsonize() const {
  JsonValue payload;

  if (m_intermediateTableIdentifierHasBeenSet) {
    payload.WithString("intermediateTableIdentifier", m_intermediateTableIdentifier);
  }

  if (m_intermediateTableArnHasBeenSet) {
    payload.WithString("intermediateTableArn", m_intermediateTableArn);
  }

  if (m_analysisRulePolicyHasBeenSet) {
    payload.WithObject("analysisRulePolicy", m_analysisRulePolicy.Jsonize());
  }

  if (m_analysisRuleTypeHasBeenSet) {
    payload.WithString("analysisRuleType",
                       IntermediateTableAnalysisRuleTypeMapper::GetNameForIntermediateTableAnalysisRuleType(m_analysisRuleType));
  }

  if (m_createTimeHasBeenSet) {
    payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if (m_updateTimeHasBeenSet) {
    payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
