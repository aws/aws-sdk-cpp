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

SubscriptionDefinitionVersion::SubscriptionDefinitionVersion(const JsonValue& jsonValue) : 
    m_subscriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionDefinitionVersion& SubscriptionDefinitionVersion::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Subscriptions"))
  {
    Array<JsonValue> subscriptionsJsonList = jsonValue.GetArray("Subscriptions");
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
   Array<JsonValue> subscriptionsJsonList(m_subscriptions.size());
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
