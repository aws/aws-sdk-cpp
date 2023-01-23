/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/SubscriptionDefinitionVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

SubscriptionDefinitionVersion::SubscriptionDefinitionVersion() : 
    m_subscriptionsHasBeenSet(false)
{
}

SubscriptionDefinitionVersion::SubscriptionDefinitionVersion(JsonView jsonValue) : 
    m_subscriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionDefinitionVersion& SubscriptionDefinitionVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Subscriptions"))
  {
    Aws::Utils::Array<JsonView> subscriptionsJsonList = jsonValue.GetArray("Subscriptions");
    for(unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex)
    {
      m_subscriptions.push_back(subscriptionsJsonList[subscriptionsIndex].AsObject());
    }
    m_subscriptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscriptionDefinitionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_subscriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscriptionsJsonList(m_subscriptions.size());
   for(unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex)
   {
     subscriptionsJsonList[subscriptionsIndex].AsObject(m_subscriptions[subscriptionsIndex].Jsonize());
   }
   payload.WithArray("Subscriptions", std::move(subscriptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
