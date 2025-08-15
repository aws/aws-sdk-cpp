/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MemoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

MemoryConfiguration::MemoryConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

MemoryConfiguration& MemoryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabledMemoryTypes"))
  {
    Aws::Utils::Array<JsonView> enabledMemoryTypesJsonList = jsonValue.GetArray("enabledMemoryTypes");
    for(unsigned enabledMemoryTypesIndex = 0; enabledMemoryTypesIndex < enabledMemoryTypesJsonList.GetLength(); ++enabledMemoryTypesIndex)
    {
      m_enabledMemoryTypes.push_back(MemoryTypeMapper::GetMemoryTypeForName(enabledMemoryTypesJsonList[enabledMemoryTypesIndex].AsString()));
    }
    m_enabledMemoryTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageDays"))
  {
    m_storageDays = jsonValue.GetInteger("storageDays");
    m_storageDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionSummaryConfiguration"))
  {
    m_sessionSummaryConfiguration = jsonValue.GetObject("sessionSummaryConfiguration");
    m_sessionSummaryConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledMemoryTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledMemoryTypesJsonList(m_enabledMemoryTypes.size());
   for(unsigned enabledMemoryTypesIndex = 0; enabledMemoryTypesIndex < enabledMemoryTypesJsonList.GetLength(); ++enabledMemoryTypesIndex)
   {
     enabledMemoryTypesJsonList[enabledMemoryTypesIndex].AsString(MemoryTypeMapper::GetNameForMemoryType(m_enabledMemoryTypes[enabledMemoryTypesIndex]));
   }
   payload.WithArray("enabledMemoryTypes", std::move(enabledMemoryTypesJsonList));

  }

  if(m_storageDaysHasBeenSet)
  {
   payload.WithInteger("storageDays", m_storageDays);

  }

  if(m_sessionSummaryConfigurationHasBeenSet)
  {
   payload.WithObject("sessionSummaryConfiguration", m_sessionSummaryConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
