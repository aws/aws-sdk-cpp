/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ContractAccount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

ContractAccount::ContractAccount(JsonView jsonValue) { *this = jsonValue; }

ContractAccount& ContractAccount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isGdn")) {
    m_isGdn = jsonValue.GetBool("isGdn");
    m_isGdnHasBeenSet = true;
  }
  return *this;
}

JsonValue ContractAccount::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_isGdnHasBeenSet) {
    payload.WithBool("isGdn", m_isGdn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
