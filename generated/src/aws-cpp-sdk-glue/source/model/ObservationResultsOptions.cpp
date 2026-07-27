/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ObservationResultsOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ObservationResultsOptions::ObservationResultsOptions(JsonView jsonValue) { *this = jsonValue; }

ObservationResultsOptions& ObservationResultsOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WriteObservationResultsEnabled")) {
    m_writeObservationResultsEnabled = jsonValue.GetBool("WriteObservationResultsEnabled");
    m_writeObservationResultsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CatalogTableConfig")) {
    m_catalogTableConfig = jsonValue.GetObject("CatalogTableConfig");
    m_catalogTableConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ObservationResultsOptions::Jsonize() const {
  JsonValue payload;

  if (m_writeObservationResultsEnabledHasBeenSet) {
    payload.WithBool("WriteObservationResultsEnabled", m_writeObservationResultsEnabled);
  }

  if (m_catalogTableConfigHasBeenSet) {
    payload.WithObject("CatalogTableConfig", m_catalogTableConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
