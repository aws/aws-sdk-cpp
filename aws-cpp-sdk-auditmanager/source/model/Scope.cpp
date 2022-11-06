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

Scope::Scope() : 
    m_awsAccountsHasBeenSet(false),
    m_awsServicesHasBeenSet(false)
{
}

Scope::Scope(JsonView jsonValue) : 
    m_awsAccountsHasBeenSet(false),
    m_awsServicesHasBeenSet(false)
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

  if(jsonValue.ValueExists("awsServices"))
  {
    Aws::Utils::Array<JsonView> awsServicesJsonList = jsonValue.GetArray("awsServices");
    for(unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex)
    {
      m_awsServices.push_back(awsServicesJsonList[awsServicesIndex].AsObject());
    }
    m_awsServicesHasBeenSet = true;
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

  if(m_awsServicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsServicesJsonList(m_awsServices.size());
   for(unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex)
   {
     awsServicesJsonList[awsServicesIndex].AsObject(m_awsServices[awsServicesIndex].Jsonize());
   }
   payload.WithArray("awsServices", std::move(awsServicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
