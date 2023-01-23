/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

VaultNotificationConfig::VaultNotificationConfig(JsonView jsonValue) : 
    m_sNSTopicHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

VaultNotificationConfig& VaultNotificationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SNSTopic"))
  {
    m_sNSTopic = jsonValue.GetString("SNSTopic");

    m_sNSTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
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
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
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
