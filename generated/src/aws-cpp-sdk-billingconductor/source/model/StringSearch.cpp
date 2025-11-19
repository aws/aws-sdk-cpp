/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/StringSearch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BillingConductor {
namespace Model {

StringSearch::StringSearch(JsonView jsonValue) { *this = jsonValue; }

StringSearch& StringSearch::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SearchOption")) {
    m_searchOption = SearchOptionMapper::GetSearchOptionForName(jsonValue.GetString("SearchOption"));
    m_searchOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SearchValue")) {
    m_searchValue = jsonValue.GetString("SearchValue");
    m_searchValueHasBeenSet = true;
  }
  return *this;
}

JsonValue StringSearch::Jsonize() const {
  JsonValue payload;

  if (m_searchOptionHasBeenSet) {
    payload.WithString("SearchOption", SearchOptionMapper::GetNameForSearchOption(m_searchOption));
  }

  if (m_searchValueHasBeenSet) {
    payload.WithString("SearchValue", m_searchValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
