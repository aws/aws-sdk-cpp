/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/NotificationFilterConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

NotificationFilterConfig::NotificationFilterConfig() : 
    m_severitiesHasBeenSet(false),
    m_messageTypesHasBeenSet(false)
{
}

NotificationFilterConfig::NotificationFilterConfig(JsonView jsonValue) : 
    m_severitiesHasBeenSet(false),
    m_messageTypesHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationFilterConfig& NotificationFilterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Severities"))
  {
    Aws::Utils::Array<JsonView> severitiesJsonList = jsonValue.GetArray("Severities");
    for(unsigned severitiesIndex = 0; severitiesIndex < severitiesJsonList.GetLength(); ++severitiesIndex)
    {
      m_severities.push_back(InsightSeverityMapper::GetInsightSeverityForName(severitiesJsonList[severitiesIndex].AsString()));
    }
    m_severitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageTypes"))
  {
    Aws::Utils::Array<JsonView> messageTypesJsonList = jsonValue.GetArray("MessageTypes");
    for(unsigned messageTypesIndex = 0; messageTypesIndex < messageTypesJsonList.GetLength(); ++messageTypesIndex)
    {
      m_messageTypes.push_back(NotificationMessageTypeMapper::GetNotificationMessageTypeForName(messageTypesJsonList[messageTypesIndex].AsString()));
    }
    m_messageTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationFilterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_severitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> severitiesJsonList(m_severities.size());
   for(unsigned severitiesIndex = 0; severitiesIndex < severitiesJsonList.GetLength(); ++severitiesIndex)
   {
     severitiesJsonList[severitiesIndex].AsString(InsightSeverityMapper::GetNameForInsightSeverity(m_severities[severitiesIndex]));
   }
   payload.WithArray("Severities", std::move(severitiesJsonList));

  }

  if(m_messageTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messageTypesJsonList(m_messageTypes.size());
   for(unsigned messageTypesIndex = 0; messageTypesIndex < messageTypesJsonList.GetLength(); ++messageTypesIndex)
   {
     messageTypesJsonList[messageTypesIndex].AsString(NotificationMessageTypeMapper::GetNameForNotificationMessageType(m_messageTypes[messageTypesIndex]));
   }
   payload.WithArray("MessageTypes", std::move(messageTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
