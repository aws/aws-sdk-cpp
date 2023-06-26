/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListAccountAssociationsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

ListAccountAssociationsFilter::ListAccountAssociationsFilter() : 
    m_associationHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_accountIdsHasBeenSet(false)
{
}

ListAccountAssociationsFilter::ListAccountAssociationsFilter(JsonView jsonValue) : 
    m_associationHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_accountIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ListAccountAssociationsFilter& ListAccountAssociationsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Association"))
  {
    m_association = jsonValue.GetString("Association");

    m_associationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountIds"))
  {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("AccountIds");
    for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
    {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListAccountAssociationsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_associationHasBeenSet)
  {
   payload.WithString("Association", m_association);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("AccountIds", std::move(accountIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
