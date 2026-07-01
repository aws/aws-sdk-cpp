/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PopulationAnalysisSqlParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

PopulationAnalysisSqlParameters::PopulationAnalysisSqlParameters(JsonView jsonValue) { *this = jsonValue; }

PopulationAnalysisSqlParameters& PopulationAnalysisSqlParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("queryString")) {
    m_queryString = jsonValue.GetString("queryString");
    m_queryStringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisTemplateArn")) {
    m_analysisTemplateArn = jsonValue.GetString("analysisTemplateArn");
    m_analysisTemplateArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PopulationAnalysisSqlParameters::Jsonize() const {
  JsonValue payload;

  if (m_queryStringHasBeenSet) {
    payload.WithString("queryString", m_queryString);
  }

  if (m_analysisTemplateArnHasBeenSet) {
    payload.WithString("analysisTemplateArn", m_analysisTemplateArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
