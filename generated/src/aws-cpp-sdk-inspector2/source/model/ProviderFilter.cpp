/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ProviderFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ProviderFilter::ProviderFilter(JsonView jsonValue) { *this = jsonValue; }

ProviderFilter& ProviderFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("comparison")) {
    m_comparison = ProviderComparisonMapper::GetProviderComparisonForName(jsonValue.GetString("comparison"));
    m_comparisonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = ConnectorCloudProviderMapper::GetConnectorCloudProviderForName(jsonValue.GetString("value"));
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderFilter::Jsonize() const {
  JsonValue payload;

  if (m_comparisonHasBeenSet) {
    payload.WithString("comparison", ProviderComparisonMapper::GetNameForProviderComparison(m_comparison));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", ConnectorCloudProviderMapper::GetNameForConnectorCloudProvider(m_value));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
