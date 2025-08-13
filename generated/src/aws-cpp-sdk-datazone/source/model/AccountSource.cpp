/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AccountSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AccountSource::AccountSource(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountSource& AccountSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsObject());
    }
    m_accountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customAccountPoolHandler"))
  {
    m_customAccountPoolHandler = jsonValue.GetObject("customAccountPoolHandler");
    m_customAccountPoolHandlerHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountSource::Jsonize() const
{
  JsonValue payload;

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsObject(m_accounts[accountsIndex].Jsonize());
   }
   payload.WithArray("accounts", std::move(accountsJsonList));

  }

  if(m_customAccountPoolHandlerHasBeenSet)
  {
   payload.WithObject("customAccountPoolHandler", m_customAccountPoolHandler.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
