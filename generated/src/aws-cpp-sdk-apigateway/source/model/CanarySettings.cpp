﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CanarySettings.h>
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

CanarySettings::CanarySettings(JsonView jsonValue)
{
  *this = jsonValue;
}

CanarySettings& CanarySettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("percentTraffic"))
  {
    m_percentTraffic = jsonValue.GetDouble("percentTraffic");
    m_percentTrafficHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");
    m_deploymentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stageVariableOverrides"))
  {
    Aws::Map<Aws::String, JsonView> stageVariableOverridesJsonMap = jsonValue.GetObject("stageVariableOverrides").GetAllObjects();
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

JsonValue CanarySettings::Jsonize() const
{
  JsonValue payload;

  if(m_percentTrafficHasBeenSet)
  {
   payload.WithDouble("percentTraffic", m_percentTraffic);

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

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
