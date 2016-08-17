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
#include <aws/codepipeline/model/ActionType.h>
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

ActionType::ActionType() : 
    m_idHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_actionConfigurationPropertiesHasBeenSet(false),
    m_inputArtifactDetailsHasBeenSet(false),
    m_outputArtifactDetailsHasBeenSet(false)
{
}

ActionType::ActionType(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_actionConfigurationPropertiesHasBeenSet(false),
    m_inputArtifactDetailsHasBeenSet(false),
    m_outputArtifactDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ActionType& ActionType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetObject("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    m_settings = jsonValue.GetObject("settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionConfigurationProperties"))
  {
    Array<JsonValue> actionConfigurationPropertiesJsonList = jsonValue.GetArray("actionConfigurationProperties");
    for(unsigned actionConfigurationPropertiesIndex = 0; actionConfigurationPropertiesIndex < actionConfigurationPropertiesJsonList.GetLength(); ++actionConfigurationPropertiesIndex)
    {
      m_actionConfigurationProperties.push_back(actionConfigurationPropertiesJsonList[actionConfigurationPropertiesIndex].AsObject());
    }
    m_actionConfigurationPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputArtifactDetails"))
  {
    m_inputArtifactDetails = jsonValue.GetObject("inputArtifactDetails");

    m_inputArtifactDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputArtifactDetails"))
  {
    m_outputArtifactDetails = jsonValue.GetObject("outputArtifactDetails");

    m_outputArtifactDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionType::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithObject("id", m_id.Jsonize());

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  if(m_actionConfigurationPropertiesHasBeenSet)
  {
   Array<JsonValue> actionConfigurationPropertiesJsonList(m_actionConfigurationProperties.size());
   for(unsigned actionConfigurationPropertiesIndex = 0; actionConfigurationPropertiesIndex < actionConfigurationPropertiesJsonList.GetLength(); ++actionConfigurationPropertiesIndex)
   {
     actionConfigurationPropertiesJsonList[actionConfigurationPropertiesIndex].AsObject(m_actionConfigurationProperties[actionConfigurationPropertiesIndex].Jsonize());
   }
   payload.WithArray("actionConfigurationProperties", std::move(actionConfigurationPropertiesJsonList));

  }

  if(m_inputArtifactDetailsHasBeenSet)
  {
   payload.WithObject("inputArtifactDetails", m_inputArtifactDetails.Jsonize());

  }

  if(m_outputArtifactDetailsHasBeenSet)
  {
   payload.WithObject("outputArtifactDetails", m_outputArtifactDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws