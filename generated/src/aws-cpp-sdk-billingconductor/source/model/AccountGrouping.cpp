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
    m_linkedAccountIdsHasBeenSet(false),
    m_autoAssociate(false),
    m_autoAssociateHasBeenSet(false)
{
}

AccountGrouping::AccountGrouping(JsonView jsonValue) : 
    m_linkedAccountIdsHasBeenSet(false),
    m_autoAssociate(false),
    m_autoAssociateHasBeenSet(false)
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

  if(jsonValue.ValueExists("AutoAssociate"))
  {
    m_autoAssociate = jsonValue.GetBool("AutoAssociate");

    m_autoAssociateHasBeenSet = true;
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

  if(m_autoAssociateHasBeenSet)
  {
   payload.WithBool("AutoAssociate", m_autoAssociate);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
