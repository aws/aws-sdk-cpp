/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/SplitPortion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

SplitPortion::SplitPortion(JsonView jsonValue) { *this = jsonValue; }

SplitPortion& SplitPortion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue SplitPortion::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithString("amount", m_amount);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
