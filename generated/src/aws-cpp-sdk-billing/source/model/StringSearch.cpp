/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/StringSearch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

StringSearch::StringSearch(JsonView jsonValue) { *this = jsonValue; }

StringSearch& StringSearch::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("searchOption")) {
    m_searchOption = SearchOptionMapper::GetSearchOptionForName(jsonValue.GetString("searchOption"));
    m_searchOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("searchValue")) {
    m_searchValue = jsonValue.GetString("searchValue");
    m_searchValueHasBeenSet = true;
  }
  return *this;
}

JsonValue StringSearch::Jsonize() const {
  JsonValue payload;

  if (m_searchOptionHasBeenSet) {
    payload.WithString("searchOption", SearchOptionMapper::GetNameForSearchOption(m_searchOption));
  }

  if (m_searchValueHasBeenSet) {
    payload.WithString("searchValue", m_searchValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
