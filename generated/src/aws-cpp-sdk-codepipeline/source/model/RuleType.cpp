/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleType.h>
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

RuleType::RuleType(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleType& RuleType::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ruleConfigurationProperties"))
  {
    Aws::Utils::Array<JsonView> ruleConfigurationPropertiesJsonList = jsonValue.GetArray("ruleConfigurationProperties");
    for(unsigned ruleConfigurationPropertiesIndex = 0; ruleConfigurationPropertiesIndex < ruleConfigurationPropertiesJsonList.GetLength(); ++ruleConfigurationPropertiesIndex)
    {
      m_ruleConfigurationProperties.push_back(ruleConfigurationPropertiesJsonList[ruleConfigurationPropertiesIndex].AsObject());
    }
    m_ruleConfigurationPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputArtifactDetails"))
  {
    m_inputArtifactDetails = jsonValue.GetObject("inputArtifactDetails");
    m_inputArtifactDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleType::Jsonize() const
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

  if(m_ruleConfigurationPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleConfigurationPropertiesJsonList(m_ruleConfigurationProperties.size());
   for(unsigned ruleConfigurationPropertiesIndex = 0; ruleConfigurationPropertiesIndex < ruleConfigurationPropertiesJsonList.GetLength(); ++ruleConfigurationPropertiesIndex)
   {
     ruleConfigurationPropertiesJsonList[ruleConfigurationPropertiesIndex].AsObject(m_ruleConfigurationProperties[ruleConfigurationPropertiesIndex].Jsonize());
   }
   payload.WithArray("ruleConfigurationProperties", std::move(ruleConfigurationPropertiesJsonList));

  }

  if(m_inputArtifactDetailsHasBeenSet)
  {
   payload.WithObject("inputArtifactDetails", m_inputArtifactDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
