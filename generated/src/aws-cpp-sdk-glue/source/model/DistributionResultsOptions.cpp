/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DistributionResultsOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DistributionResultsOptions::DistributionResultsOptions(JsonView jsonValue) { *this = jsonValue; }

DistributionResultsOptions& DistributionResultsOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WriteDistributionResultsEnabled")) {
    m_writeDistributionResultsEnabled = jsonValue.GetBool("WriteDistributionResultsEnabled");
    m_writeDistributionResultsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CatalogTableConfig")) {
    m_catalogTableConfig = jsonValue.GetObject("CatalogTableConfig");
    m_catalogTableConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue DistributionResultsOptions::Jsonize() const {
  JsonValue payload;

  if (m_writeDistributionResultsEnabledHasBeenSet) {
    payload.WithBool("WriteDistributionResultsEnabled", m_writeDistributionResultsEnabled);
  }

  if (m_catalogTableConfigHasBeenSet) {
    payload.WithObject("CatalogTableConfig", m_catalogTableConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
