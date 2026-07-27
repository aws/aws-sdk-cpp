/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityRuleResultsOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityRuleResultsOptions::DataQualityRuleResultsOptions(JsonView jsonValue) { *this = jsonValue; }

DataQualityRuleResultsOptions& DataQualityRuleResultsOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WriteDataQualityRuleResultsEnabled")) {
    m_writeDataQualityRuleResultsEnabled = jsonValue.GetBool("WriteDataQualityRuleResultsEnabled");
    m_writeDataQualityRuleResultsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CatalogTableConfig")) {
    m_catalogTableConfig = jsonValue.GetObject("CatalogTableConfig");
    m_catalogTableConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityRuleResultsOptions::Jsonize() const {
  JsonValue payload;

  if (m_writeDataQualityRuleResultsEnabledHasBeenSet) {
    payload.WithBool("WriteDataQualityRuleResultsEnabled", m_writeDataQualityRuleResultsEnabled);
  }

  if (m_catalogTableConfigHasBeenSet) {
    payload.WithObject("CatalogTableConfig", m_catalogTableConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
