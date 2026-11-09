/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSegmentsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

RealTimeContactAnalysisSegmentsFilter::RealTimeContactAnalysisSegmentsFilter(JsonView jsonValue) { *this = jsonValue; }

RealTimeContactAnalysisSegmentsFilter& RealTimeContactAnalysisSegmentsFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CategoriesAttributeFilter")) {
    m_categoriesAttributeFilter = jsonValue.GetObject("CategoriesAttributeFilter");
    m_categoriesAttributeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue RealTimeContactAnalysisSegmentsFilter::Jsonize() const {
  JsonValue payload;

  if (m_categoriesAttributeFilterHasBeenSet) {
    payload.WithObject("CategoriesAttributeFilter", m_categoriesAttributeFilter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
