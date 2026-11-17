/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ChildCredit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

ChildCredit::ChildCredit(JsonView jsonValue) { *this = jsonValue; }

ChildCredit& ChildCredit::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("creditId")) {
    m_creditId = jsonValue.GetString("creditId");
    m_creditIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  return *this;
}

JsonValue ChildCredit::Jsonize() const {
  JsonValue payload;

  if (m_creditIdHasBeenSet) {
    payload.WithString("creditId", m_creditId);
  }

  if (m_amountHasBeenSet) {
    payload.WithString("amount", m_amount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
