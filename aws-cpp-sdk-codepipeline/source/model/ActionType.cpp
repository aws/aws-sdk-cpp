/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ActionType::ActionType(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_actionConfigurationPropertiesHasBeenSet(false),
    m_inputArtifactDetailsHasBeenSet(false),
    m_outputArtifactDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ActionType& ActionType::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> actionConfigurationPropertiesJsonList = jsonValue.GetArray("actionConfigurationProperties");
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
   Aws::Utils::Array<JsonValue> actionConfigurationPropertiesJsonList(m_actionConfigurationProperties.size());
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
