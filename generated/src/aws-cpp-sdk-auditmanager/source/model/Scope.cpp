/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Scope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

Scope::Scope(JsonView jsonValue)
{
  *this = jsonValue;
}

Scope& Scope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccounts"))
  {
    Aws::Utils::Array<JsonView> awsAccountsJsonList = jsonValue.GetArray("awsAccounts");
    for(unsigned awsAccountsIndex = 0; awsAccountsIndex < awsAccountsJsonList.GetLength(); ++awsAccountsIndex)
    {
      m_awsAccounts.push_back(awsAccountsJsonList[awsAccountsIndex].AsObject());
    }
    m_awsAccountsHasBeenSet = true;
  }
  return *this;
}

JsonValue Scope::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsAccountsJsonList(m_awsAccounts.size());
   for(unsigned awsAccountsIndex = 0; awsAccountsIndex < awsAccountsJsonList.GetLength(); ++awsAccountsIndex)
   {
     awsAccountsJsonList[awsAccountsIndex].AsObject(m_awsAccounts[awsAccountsIndex].Jsonize());
   }
   payload.WithArray("awsAccounts", std::move(awsAccountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
