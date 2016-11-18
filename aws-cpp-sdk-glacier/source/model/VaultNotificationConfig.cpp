/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glacier/model/VaultNotificationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

VaultNotificationConfig::VaultNotificationConfig() : 
    m_sNSTopicHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

VaultNotificationConfig::VaultNotificationConfig(const JsonValue& jsonValue) : 
    m_sNSTopicHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

VaultNotificationConfig& VaultNotificationConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SNSTopic"))
  {
    m_sNSTopic = jsonValue.GetString("SNSTopic");

    m_sNSTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Events"))
  {
    Array<JsonValue> eventsJsonList = jsonValue.GetArray("Events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsString());
    }
    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue VaultNotificationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_sNSTopicHasBeenSet)
  {
   payload.WithString("SNSTopic", m_sNSTopic);

  }

  if(m_eventsHasBeenSet)
  {
   Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsString(m_events[eventsIndex]);
   }
   payload.WithArray("Events", std::move(eventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws