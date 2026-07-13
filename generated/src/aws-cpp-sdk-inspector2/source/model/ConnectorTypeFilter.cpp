/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ConnectorTypeFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ConnectorTypeFilter::ConnectorTypeFilter(JsonView jsonValue) { *this = jsonValue; }

ConnectorTypeFilter& ConnectorTypeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("comparison")) {
    m_comparison = ConnectorTypeComparisonMapper::GetConnectorTypeComparisonForName(jsonValue.GetString("comparison"));
    m_comparisonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("value"));
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorTypeFilter::Jsonize() const {
  JsonValue payload;

  if (m_comparisonHasBeenSet) {
    payload.WithString("comparison", ConnectorTypeComparisonMapper::GetNameForConnectorTypeComparison(m_comparison));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", ConnectorTypeMapper::GetNameForConnectorType(m_value));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
