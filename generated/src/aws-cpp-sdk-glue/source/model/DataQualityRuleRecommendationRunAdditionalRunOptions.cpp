/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityRuleRecommendationRunAdditionalRunOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityRuleRecommendationRunAdditionalRunOptions::DataQualityRuleRecommendationRunAdditionalRunOptions(JsonView jsonValue) {
  *this = jsonValue;
}

DataQualityRuleRecommendationRunAdditionalRunOptions& DataQualityRuleRecommendationRunAdditionalRunOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CustomLogGroupPrefix")) {
    m_customLogGroupPrefix = jsonValue.GetString("CustomLogGroupPrefix");
    m_customLogGroupPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityRuleRecommendationRunAdditionalRunOptions::Jsonize() const {
  JsonValue payload;

  if (m_customLogGroupPrefixHasBeenSet) {
    payload.WithString("CustomLogGroupPrefix", m_customLogGroupPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
