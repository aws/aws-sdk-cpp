/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PopulationAnalysisConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

PopulationAnalysisConfiguration::PopulationAnalysisConfiguration(JsonView jsonValue) { *this = jsonValue; }

PopulationAnalysisConfiguration& PopulationAnalysisConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sqlParameters")) {
    m_sqlParameters = jsonValue.GetObject("sqlParameters");
    m_sqlParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue PopulationAnalysisConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sqlParametersHasBeenSet) {
    payload.WithObject("sqlParameters", m_sqlParameters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
