/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SelfManagedConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

SelfManagedConfiguration::SelfManagedConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SelfManagedConfiguration& SelfManagedConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("triggerConditions"))
  {
    Aws::Utils::Array<JsonView> triggerConditionsJsonList = jsonValue.GetArray("triggerConditions");
    for(unsigned triggerConditionsIndex = 0; triggerConditionsIndex < triggerConditionsJsonList.GetLength(); ++triggerConditionsIndex)
    {
      m_triggerConditions.push_back(triggerConditionsJsonList[triggerConditionsIndex].AsObject());
    }
    m_triggerConditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationConfiguration"))
  {
    m_invocationConfiguration = jsonValue.GetObject("invocationConfiguration");
    m_invocationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("historicalContextWindowSize"))
  {
    m_historicalContextWindowSize = jsonValue.GetInteger("historicalContextWindowSize");
    m_historicalContextWindowSizeHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfManagedConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_triggerConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggerConditionsJsonList(m_triggerConditions.size());
   for(unsigned triggerConditionsIndex = 0; triggerConditionsIndex < triggerConditionsJsonList.GetLength(); ++triggerConditionsIndex)
   {
     triggerConditionsJsonList[triggerConditionsIndex].AsObject(m_triggerConditions[triggerConditionsIndex].Jsonize());
   }
   payload.WithArray("triggerConditions", std::move(triggerConditionsJsonList));

  }

  if(m_invocationConfigurationHasBeenSet)
  {
   payload.WithObject("invocationConfiguration", m_invocationConfiguration.Jsonize());

  }

  if(m_historicalContextWindowSizeHasBeenSet)
  {
   payload.WithInteger("historicalContextWindowSize", m_historicalContextWindowSize);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
