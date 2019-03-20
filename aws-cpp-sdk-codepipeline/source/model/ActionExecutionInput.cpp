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
    m_roleArnHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false)
{
}

ActionExecutionInput::ActionExecutionInput(JsonView jsonValue) : 
    m_actionTypeIdHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false)
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
    Array<JsonView> inputArtifactsJsonList = jsonValue.GetArray("inputArtifacts");
    for(unsigned inputArtifactsIndex = 0; inputArtifactsIndex < inputArtifactsJsonList.GetLength(); ++inputArtifactsIndex)
    {
      m_inputArtifacts.push_back(inputArtifactsJsonList[inputArtifactsIndex].AsObject());
    }
    m_inputArtifactsHasBeenSet = true;
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
   Array<JsonValue> inputArtifactsJsonList(m_inputArtifacts.size());
   for(unsigned inputArtifactsIndex = 0; inputArtifactsIndex < inputArtifactsJsonList.GetLength(); ++inputArtifactsIndex)
   {
     inputArtifactsJsonList[inputArtifactsIndex].AsObject(m_inputArtifacts[inputArtifactsIndex].Jsonize());
   }
   payload.WithArray("inputArtifacts", std::move(inputArtifactsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
