/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PreEvaluationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PreEvaluationFilter::PreEvaluationFilter(JsonView jsonValue) { *this = jsonValue; }

PreEvaluationFilter& PreEvaluationFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = PreEvaluationFilterResourceTypeMapper::GetPreEvaluationFilterResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FilterType")) {
    m_filterType = PreEvaluationFilterTypeMapper::GetPreEvaluationFilterTypeForName(jsonValue.GetString("FilterType"));
    m_filterTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FilterKey")) {
    m_filterKey = jsonValue.GetString("FilterKey");
    m_filterKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FilterValue")) {
    m_filterValue = jsonValue.GetString("FilterValue");
    m_filterValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Operator")) {
    m_operator = PreEvaluationFilterOperatorMapper::GetPreEvaluationFilterOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue PreEvaluationFilter::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", PreEvaluationFilterResourceTypeMapper::GetNameForPreEvaluationFilterResourceType(m_resourceType));
  }

  if (m_filterTypeHasBeenSet) {
    payload.WithString("FilterType", PreEvaluationFilterTypeMapper::GetNameForPreEvaluationFilterType(m_filterType));
  }

  if (m_filterKeyHasBeenSet) {
    payload.WithString("FilterKey", m_filterKey);
  }

  if (m_filterValueHasBeenSet) {
    payload.WithString("FilterValue", m_filterValue);
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator", PreEvaluationFilterOperatorMapper::GetNameForPreEvaluationFilterOperator(m_operator));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
