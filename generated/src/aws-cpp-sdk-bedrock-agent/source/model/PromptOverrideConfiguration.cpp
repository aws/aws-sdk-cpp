/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptOverrideConfiguration.h>
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

PromptOverrideConfiguration::PromptOverrideConfiguration() : 
    m_promptConfigurationsHasBeenSet(false),
    m_overrideLambdaHasBeenSet(false)
{
}

PromptOverrideConfiguration::PromptOverrideConfiguration(JsonView jsonValue) : 
    m_promptConfigurationsHasBeenSet(false),
    m_overrideLambdaHasBeenSet(false)
{
  *this = jsonValue;
}

PromptOverrideConfiguration& PromptOverrideConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("promptConfigurations"))
  {
    Aws::Utils::Array<JsonView> promptConfigurationsJsonList = jsonValue.GetArray("promptConfigurations");
    for(unsigned promptConfigurationsIndex = 0; promptConfigurationsIndex < promptConfigurationsJsonList.GetLength(); ++promptConfigurationsIndex)
    {
      m_promptConfigurations.push_back(promptConfigurationsJsonList[promptConfigurationsIndex].AsObject());
    }
    m_promptConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrideLambda"))
  {
    m_overrideLambda = jsonValue.GetString("overrideLambda");

    m_overrideLambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue PromptOverrideConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_promptConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> promptConfigurationsJsonList(m_promptConfigurations.size());
   for(unsigned promptConfigurationsIndex = 0; promptConfigurationsIndex < promptConfigurationsJsonList.GetLength(); ++promptConfigurationsIndex)
   {
     promptConfigurationsJsonList[promptConfigurationsIndex].AsObject(m_promptConfigurations[promptConfigurationsIndex].Jsonize());
   }
   payload.WithArray("promptConfigurations", std::move(promptConfigurationsJsonList));

  }

  if(m_overrideLambdaHasBeenSet)
  {
   payload.WithString("overrideLambda", m_overrideLambda);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
