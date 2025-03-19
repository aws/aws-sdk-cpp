/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/Filters.h>
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

Filters::Filters(JsonView jsonValue)
{
  *this = jsonValue;
}

Filters& Filters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Names"))
  {
    Aws::Utils::Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
    {
      m_names.push_back(namesJsonList[namesIndex].AsString());
    }
    m_namesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvoiceReceivers"))
  {
    Aws::Utils::Array<JsonView> invoiceReceiversJsonList = jsonValue.GetArray("InvoiceReceivers");
    for(unsigned invoiceReceiversIndex = 0; invoiceReceiversIndex < invoiceReceiversJsonList.GetLength(); ++invoiceReceiversIndex)
    {
      m_invoiceReceivers.push_back(invoiceReceiversJsonList[invoiceReceiversIndex].AsString());
    }
    m_invoiceReceiversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("Accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }
  return *this;
}

JsonValue Filters::Jsonize() const
{
  JsonValue payload;

  if(m_namesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_invoiceReceiversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invoiceReceiversJsonList(m_invoiceReceivers.size());
   for(unsigned invoiceReceiversIndex = 0; invoiceReceiversIndex < invoiceReceiversJsonList.GetLength(); ++invoiceReceiversIndex)
   {
     invoiceReceiversJsonList[invoiceReceiversIndex].AsString(m_invoiceReceivers[invoiceReceiversIndex]);
   }
   payload.WithArray("InvoiceReceivers", std::move(invoiceReceiversJsonList));

  }

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
   }
   payload.WithArray("Accounts", std::move(accountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
