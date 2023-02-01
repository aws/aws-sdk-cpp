/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionTypePermissions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionTypePermissions::ActionTypePermissions() : 
    m_allowedAccountsHasBeenSet(false)
{
}

ActionTypePermissions::ActionTypePermissions(JsonView jsonValue) : 
    m_allowedAccountsHasBeenSet(false)
{
  *this = jsonValue;
}

ActionTypePermissions& ActionTypePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedAccounts"))
  {
    Aws::Utils::Array<JsonView> allowedAccountsJsonList = jsonValue.GetArray("allowedAccounts");
    for(unsigned allowedAccountsIndex = 0; allowedAccountsIndex < allowedAccountsJsonList.GetLength(); ++allowedAccountsIndex)
    {
      m_allowedAccounts.push_back(allowedAccountsJsonList[allowedAccountsIndex].AsString());
    }
    m_allowedAccountsHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionTypePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_allowedAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedAccountsJsonList(m_allowedAccounts.size());
   for(unsigned allowedAccountsIndex = 0; allowedAccountsIndex < allowedAccountsJsonList.GetLength(); ++allowedAccountsIndex)
   {
     allowedAccountsJsonList[allowedAccountsIndex].AsString(m_allowedAccounts[allowedAccountsIndex]);
   }
   payload.WithArray("allowedAccounts", std::move(allowedAccountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
