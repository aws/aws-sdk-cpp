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

#include <aws/apigateway/model/DeploymentCanarySettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

DeploymentCanarySettings::DeploymentCanarySettings() : 
    m_percentTraffic(0.0),
    m_percentTrafficHasBeenSet(false),
    m_stageVariableOverridesHasBeenSet(false),
    m_useStageCache(false),
    m_useStageCacheHasBeenSet(false)
{
}

DeploymentCanarySettings::DeploymentCanarySettings(const JsonValue& jsonValue) : 
    m_percentTraffic(0.0),
    m_percentTrafficHasBeenSet(false),
    m_stageVariableOverridesHasBeenSet(false),
    m_useStageCache(false),
    m_useStageCacheHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentCanarySettings& DeploymentCanarySettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("percentTraffic"))
  {
    m_percentTraffic = jsonValue.GetDouble("percentTraffic");

    m_percentTrafficHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stageVariableOverrides"))
  {
    Aws::Map<Aws::String, JsonValue> stageVariableOverridesJsonMap = jsonValue.GetObject("stageVariableOverrides").GetAllObjects();
    for(auto& stageVariableOverridesItem : stageVariableOverridesJsonMap)
    {
      m_stageVariableOverrides[stageVariableOverridesItem.first] = stageVariableOverridesItem.second.AsString();
    }
    m_stageVariableOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useStageCache"))
  {
    m_useStageCache = jsonValue.GetBool("useStageCache");

    m_useStageCacheHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentCanarySettings::Jsonize() const
{
  JsonValue payload;

  if(m_percentTrafficHasBeenSet)
  {
   payload.WithDouble("percentTraffic", m_percentTraffic);

  }

  if(m_stageVariableOverridesHasBeenSet)
  {
   JsonValue stageVariableOverridesJsonMap;
   for(auto& stageVariableOverridesItem : m_stageVariableOverrides)
   {
     stageVariableOverridesJsonMap.WithString(stageVariableOverridesItem.first, stageVariableOverridesItem.second);
   }
   payload.WithObject("stageVariableOverrides", std::move(stageVariableOverridesJsonMap));

  }

  if(m_useStageCacheHasBeenSet)
  {
   payload.WithBool("useStageCache", m_useStageCache);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
