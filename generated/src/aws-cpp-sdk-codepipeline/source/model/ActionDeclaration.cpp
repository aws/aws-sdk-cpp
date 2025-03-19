/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionDeclaration.h>
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

ActionDeclaration::ActionDeclaration(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionDeclaration& ActionDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionTypeId"))
  {
    m_actionTypeId = jsonValue.GetObject("actionTypeId");
    m_actionTypeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runOrder"))
  {
    m_runOrder = jsonValue.GetInteger("runOrder");
    m_runOrderHasBeenSet = true;
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
  if(jsonValue.ValueExists("outputArtifacts"))
  {
    Aws::Utils::Array<JsonView> outputArtifactsJsonList = jsonValue.GetArray("outputArtifacts");
    for(unsigned outputArtifactsIndex = 0; outputArtifactsIndex < outputArtifactsJsonList.GetLength(); ++outputArtifactsIndex)
    {
      m_outputArtifacts.push_back(outputArtifactsJsonList[outputArtifactsIndex].AsObject());
    }
    m_outputArtifactsHasBeenSet = true;
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
  if(jsonValue.ValueExists("outputVariables"))
  {
    Aws::Utils::Array<JsonView> outputVariablesJsonList = jsonValue.GetArray("outputVariables");
    for(unsigned outputVariablesIndex = 0; outputVariablesIndex < outputVariablesJsonList.GetLength(); ++outputVariablesIndex)
    {
      m_outputVariables.push_back(outputVariablesJsonList[outputVariablesIndex].AsString());
    }
    m_outputVariablesHasBeenSet = true;
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
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutInMinutes"))
  {
    m_timeoutInMinutes = jsonValue.GetInteger("timeoutInMinutes");
    m_timeoutInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentVariables"))
  {
    Aws::Utils::Array<JsonView> environmentVariablesJsonList = jsonValue.GetArray("environmentVariables");
    for(unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength(); ++environmentVariablesIndex)
    {
      m_environmentVariables.push_back(environmentVariablesJsonList[environmentVariablesIndex].AsObject());
    }
    m_environmentVariablesHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_actionTypeIdHasBeenSet)
  {
   payload.WithObject("actionTypeId", m_actionTypeId.Jsonize());

  }

  if(m_runOrderHasBeenSet)
  {
   payload.WithInteger("runOrder", m_runOrder);

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

  if(m_outputArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputArtifactsJsonList(m_outputArtifacts.size());
   for(unsigned outputArtifactsIndex = 0; outputArtifactsIndex < outputArtifactsJsonList.GetLength(); ++outputArtifactsIndex)
   {
     outputArtifactsJsonList[outputArtifactsIndex].AsObject(m_outputArtifacts[outputArtifactsIndex].Jsonize());
   }
   payload.WithArray("outputArtifacts", std::move(outputArtifactsJsonList));

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

  if(m_outputVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputVariablesJsonList(m_outputVariables.size());
   for(unsigned outputVariablesIndex = 0; outputVariablesIndex < outputVariablesJsonList.GetLength(); ++outputVariablesIndex)
   {
     outputVariablesJsonList[outputVariablesIndex].AsString(m_outputVariables[outputVariablesIndex]);
   }
   payload.WithArray("outputVariables", std::move(outputVariablesJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);

  }

  if(m_environmentVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentVariablesJsonList(m_environmentVariables.size());
   for(unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength(); ++environmentVariablesIndex)
   {
     environmentVariablesJsonList[environmentVariablesIndex].AsObject(m_environmentVariables[environmentVariablesIndex].Jsonize());
   }
   payload.WithArray("environmentVariables", std::move(environmentVariablesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
