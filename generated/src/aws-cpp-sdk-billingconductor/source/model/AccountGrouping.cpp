/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/AccountGrouping.h>
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

AccountGrouping::AccountGrouping() : 
    m_linkedAccountIdsHasBeenSet(false)
{
}

AccountGrouping::AccountGrouping(JsonView jsonValue) : 
    m_linkedAccountIdsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountGrouping& AccountGrouping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LinkedAccountIds"))
  {
    Aws::Utils::Array<JsonView> linkedAccountIdsJsonList = jsonValue.GetArray("LinkedAccountIds");
    for(unsigned linkedAccountIdsIndex = 0; linkedAccountIdsIndex < linkedAccountIdsJsonList.GetLength(); ++linkedAccountIdsIndex)
    {
      m_linkedAccountIds.push_back(linkedAccountIdsJsonList[linkedAccountIdsIndex].AsString());
    }
    m_linkedAccountIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountGrouping::Jsonize() const
{
  JsonValue payload;

  if(m_linkedAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linkedAccountIdsJsonList(m_linkedAccountIds.size());
   for(unsigned linkedAccountIdsIndex = 0; linkedAccountIdsIndex < linkedAccountIdsJsonList.GetLength(); ++linkedAccountIdsIndex)
   {
     linkedAccountIdsJsonList[linkedAccountIdsIndex].AsString(m_linkedAccountIds[linkedAccountIdsIndex]);
   }
   payload.WithArray("LinkedAccountIds", std::move(linkedAccountIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
