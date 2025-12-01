/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/Recommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

Recommendation::Recommendation(JsonView jsonValue) { *this = jsonValue; }

Recommendation& Recommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CatalogItem")) {
    m_catalogItem = jsonValue.GetObject("CatalogItem");
    m_catalogItemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetDouble("Score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue Recommendation::Jsonize() const {
  JsonValue payload;

  if (m_catalogItemHasBeenSet) {
    payload.WithObject("CatalogItem", m_catalogItem.Jsonize());
  }

  if (m_scoreHasBeenSet) {
    payload.WithDouble("Score", m_score);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
