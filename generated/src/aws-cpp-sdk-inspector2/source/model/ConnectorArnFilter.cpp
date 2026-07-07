/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ConnectorArnFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ConnectorArnFilter::ConnectorArnFilter(JsonView jsonValue) { *this = jsonValue; }

ConnectorArnFilter& ConnectorArnFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("comparison")) {
    m_comparison = ConnectorArnComparisonMapper::GetConnectorArnComparisonForName(jsonValue.GetString("comparison"));
    m_comparisonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorArnFilter::Jsonize() const {
  JsonValue payload;

  if (m_comparisonHasBeenSet) {
    payload.WithString("comparison", ConnectorArnComparisonMapper::GetNameForConnectorArnComparison(m_comparison));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
