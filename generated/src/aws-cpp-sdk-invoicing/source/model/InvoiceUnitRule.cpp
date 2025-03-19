/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/InvoiceUnitRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

InvoiceUnitRule::InvoiceUnitRule(JsonView jsonValue)
{
  *this = jsonValue;
}

InvoiceUnitRule& InvoiceUnitRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LinkedAccounts"))
  {
    Aws::Utils::Array<JsonView> linkedAccountsJsonList = jsonValue.GetArray("LinkedAccounts");
    for(unsigned linkedAccountsIndex = 0; linkedAccountsIndex < linkedAccountsJsonList.GetLength(); ++linkedAccountsIndex)
    {
      m_linkedAccounts.push_back(linkedAccountsJsonList[linkedAccountsIndex].AsString());
    }
    m_linkedAccountsHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceUnitRule::Jsonize() const
{
  JsonValue payload;

  if(m_linkedAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linkedAccountsJsonList(m_linkedAccounts.size());
   for(unsigned linkedAccountsIndex = 0; linkedAccountsIndex < linkedAccountsJsonList.GetLength(); ++linkedAccountsIndex)
   {
     linkedAccountsJsonList[linkedAccountsIndex].AsString(m_linkedAccounts[linkedAccountsIndex]);
   }
   payload.WithArray("LinkedAccounts", std::move(linkedAccountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
