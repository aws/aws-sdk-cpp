/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionExecutionInput.h>
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

ActionExecutionInput::ActionExecutionInput() : 
    m_actionTypeIdHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_resolvedConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

ActionExecutionInput::ActionExecutionInput(JsonView jsonValue) : 
    m_actionTypeIdHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_resolvedConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecutionInput& ActionExecutionInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionTypeId"))
  {
    m_actionTypeId = jsonValue.GetObject("actionTypeId");

    m_actionTypeIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("resolvedConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> resolvedConfigurationJsonMap = jsonValue.GetObject("resolvedConfiguration").GetAllObjects();
    for(auto& resolvedConfigurationItem : resolvedConfigurationJsonMap)
    {
      m_resolvedConfiguration[resolvedConfigurationItem.first] = resolvedConfigurationItem.second.AsString();
    }
    m_resolvedConfigurationHasBeenSet = true;
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

  if(jsonValue.ValueExists("inputArtifacts"))
  {
    Aws::Utils::Array<JsonView> inputArtifactsJsonList = jsonValue.GetArray("inputArtifacts");
    for(unsigned inputArtifactsIndex = 0; inputArtifactsIndex < inputArtifactsJsonList.GetLength(); ++inputArtifactsIndex)
    {
      m_inputArtifacts.push_back(inputArtifactsJsonList[inputArtifactsIndex].AsObject());
    }
    m_inputArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecutionInput::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeIdHasBeenSet)
  {
   payload.WithObject("actionTypeId", m_actionTypeId.Jsonize());

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

  if(m_resolvedConfigurationHasBeenSet)
  {
   JsonValue resolvedConfigurationJsonMap;
   for(auto& resolvedConfigurationItem : m_resolvedConfiguration)
   {
     resolvedConfigurationJsonMap.WithString(resolvedConfigurationItem.first, resolvedConfigurationItem.second);
   }
   payload.WithObject("resolvedConfiguration", std::move(resolvedConfigurationJsonMap));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

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

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
