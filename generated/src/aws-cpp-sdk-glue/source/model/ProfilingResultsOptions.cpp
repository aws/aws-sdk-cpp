/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ProfilingResultsOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ProfilingResultsOptions::ProfilingResultsOptions(JsonView jsonValue) { *this = jsonValue; }

ProfilingResultsOptions& ProfilingResultsOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WriteProfilingResultsEnabled")) {
    m_writeProfilingResultsEnabled = jsonValue.GetBool("WriteProfilingResultsEnabled");
    m_writeProfilingResultsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CatalogTableConfig")) {
    m_catalogTableConfig = jsonValue.GetObject("CatalogTableConfig");
    m_catalogTableConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DistributionResults")) {
    m_distributionResults = jsonValue.GetObject("DistributionResults");
    m_distributionResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfilingResultsOptions::Jsonize() const {
  JsonValue payload;

  if (m_writeProfilingResultsEnabledHasBeenSet) {
    payload.WithBool("WriteProfilingResultsEnabled", m_writeProfilingResultsEnabled);
  }

  if (m_catalogTableConfigHasBeenSet) {
    payload.WithObject("CatalogTableConfig", m_catalogTableConfig.Jsonize());
  }

  if (m_distributionResultsHasBeenSet) {
    payload.WithObject("DistributionResults", m_distributionResults.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
