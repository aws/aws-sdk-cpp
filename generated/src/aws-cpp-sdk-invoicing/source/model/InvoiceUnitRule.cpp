/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/InvoiceUnitRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

InvoiceUnitRule::InvoiceUnitRule(JsonView jsonValue) { *this = jsonValue; }

InvoiceUnitRule& InvoiceUnitRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LinkedAccounts")) {
    Aws::Utils::Array<JsonView> linkedAccountsJsonList = jsonValue.GetArray("LinkedAccounts");
    for (unsigned linkedAccountsIndex = 0; linkedAccountsIndex < linkedAccountsJsonList.GetLength(); ++linkedAccountsIndex) {
      m_linkedAccounts.push_back(linkedAccountsJsonList[linkedAccountsIndex].AsString());
    }
    m_linkedAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BillSourceAccounts")) {
    Aws::Utils::Array<JsonView> billSourceAccountsJsonList = jsonValue.GetArray("BillSourceAccounts");
    for (unsigned billSourceAccountsIndex = 0; billSourceAccountsIndex < billSourceAccountsJsonList.GetLength();
         ++billSourceAccountsIndex) {
      m_billSourceAccounts.push_back(billSourceAccountsJsonList[billSourceAccountsIndex].AsString());
    }
    m_billSourceAccountsHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceUnitRule::Jsonize() const {
  JsonValue payload;

  if (m_linkedAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> linkedAccountsJsonList(m_linkedAccounts.size());
    for (unsigned linkedAccountsIndex = 0; linkedAccountsIndex < linkedAccountsJsonList.GetLength(); ++linkedAccountsIndex) {
      linkedAccountsJsonList[linkedAccountsIndex].AsString(m_linkedAccounts[linkedAccountsIndex]);
    }
    payload.WithArray("LinkedAccounts", std::move(linkedAccountsJsonList));
  }

  if (m_billSourceAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> billSourceAccountsJsonList(m_billSourceAccounts.size());
    for (unsigned billSourceAccountsIndex = 0; billSourceAccountsIndex < billSourceAccountsJsonList.GetLength();
         ++billSourceAccountsIndex) {
      billSourceAccountsJsonList[billSourceAccountsIndex].AsString(m_billSourceAccounts[billSourceAccountsIndex]);
    }
    payload.WithArray("BillSourceAccounts", std::move(billSourceAccountsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
