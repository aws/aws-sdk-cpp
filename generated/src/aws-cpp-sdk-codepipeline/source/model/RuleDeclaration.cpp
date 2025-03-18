/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleDeclaration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

RuleDeclaration::RuleDeclaration(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleDeclaration& RuleDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleTypeId"))
  {
    m_ruleTypeId = jsonValue.GetObject("ruleTypeId");
    m_ruleTypeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuration"))
  {
    Aws::Map<Aws::String, JsonView> configurationJsonMap = jsonValue.GetObject("configuration").GetAllObjects();
    for(auto& configurationItem : configurationJsonMap)
    {
      m_configuration[configurationItem.first] = configurationItem.second.AsString();
    }
    m_configurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commands"))
  {
    Aws::Utils::Array<JsonView> commandsJsonList = jsonValue.GetArray("commands");
    for(unsigned commandsIndex = 0; commandsIndex < commandsJsonList.GetLength(); ++commandsIndex)
    {
      m_commands.push_back(commandsJsonList[commandsIndex].AsString());
    }
    m_commandsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputArtifacts"))
  {
    Aws::Utils::Array<JsonView> inputArtifactsJsonList = jsonValue.GetArray("inputArtifacts");
    for(unsigned inputArtifactsIndex = 0; inputArtifactsIndex < inputArtifactsJsonList.GetLength(); ++inputArtifactsIndex)
    {
      m_inputArtifacts.push_back(inputArtifactsJsonList[inputArtifactsIndex].AsObject());
    }
    m_inputArtifactsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutInMinutes"))
  {
    m_timeoutInMinutes = jsonValue.GetInteger("timeoutInMinutes");
    m_timeoutInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ruleTypeIdHasBeenSet)
  {
   payload.WithObject("ruleTypeId", m_ruleTypeId.Jsonize());

  }

  if(m_configurationHasBeenSet)
  {
   JsonValue configurationJsonMap;
   for(auto& configurationItem : m_configuration)
   {
     configurationJsonMap.WithString(configurationItem.first, configurationItem.second);
   }
   payload.WithObject("configuration", std::move(configurationJsonMap));

  }

  if(m_commandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandsJsonList(m_commands.size());
   for(unsigned commandsIndex = 0; commandsIndex < commandsJsonList.GetLength(); ++commandsIndex)
   {
     commandsJsonList[commandsIndex].AsString(m_commands[commandsIndex]);
   }
   payload.WithArray("commands", std::move(commandsJsonList));

  }

  if(m_inputArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputArtifactsJsonList(m_inputArtifacts.size());
   for(unsigned inputArtifactsIndex = 0; inputArtifactsIndex < inputArtifactsJsonList.GetLength(); ++inputArtifactsIndex)
   {
     inputArtifactsJsonList[inputArtifactsIndex].AsObject(m_inputArtifacts[inputArtifactsIndex].Jsonize());
   }
   payload.WithArray("inputArtifacts", std::move(inputArtifactsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
