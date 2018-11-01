/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/servicecatalog/model/ShareError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ShareError::ShareError() : 
    m_accountsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

ShareError::ShareError(JsonView jsonValue) : 
    m_accountsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

ShareError& ShareError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Accounts"))
  {
    Array<JsonView> accountsJsonList = jsonValue.GetArray("Accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareError::Jsonize() const
{
  JsonValue payload;

  if(m_accountsHasBeenSet)
  {
   Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
   }
   payload.WithArray("Accounts", std::move(accountsJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
