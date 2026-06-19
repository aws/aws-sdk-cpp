/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSearchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationSearchFilter::EvaluationSearchFilter(JsonView jsonValue) { *this = jsonValue; }

EvaluationSearchFilter& EvaluationSearchFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttributeFilter")) {
    m_attributeFilter = jsonValue.GetObject("AttributeFilter");
    m_attributeFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactEvaluationAttributeFilter")) {
    m_contactEvaluationAttributeFilter = jsonValue.GetObject("ContactEvaluationAttributeFilter");
    m_contactEvaluationAttributeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationSearchFilter::Jsonize() const {
  JsonValue payload;

  if (m_attributeFilterHasBeenSet) {
    payload.WithObject("AttributeFilter", m_attributeFilter.Jsonize());
  }

  if (m_contactEvaluationAttributeFilterHasBeenSet) {
    payload.WithObject("ContactEvaluationAttributeFilter", m_contactEvaluationAttributeFilter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
