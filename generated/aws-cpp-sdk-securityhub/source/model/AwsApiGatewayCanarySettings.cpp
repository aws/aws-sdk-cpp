/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayCanarySettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsApiGatewayCanarySettings::AwsApiGatewayCanarySettings() : 
    m_percentTraffic(0.0),
    m_percentTrafficHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_stageVariableOverridesHasBeenSet(false),
    m_useStageCache(false),
    m_useStageCacheHasBeenSet(false)
{
}

AwsApiGatewayCanarySettings::AwsApiGatewayCanarySettings(JsonView jsonValue) : 
    m_percentTraffic(0.0),
    m_percentTrafficHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_stageVariableOverridesHasBeenSet(false),
    m_useStageCache(false),
    m_useStageCacheHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayCanarySettings& AwsApiGatewayCanarySettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PercentTraffic"))
  {
    m_percentTraffic = jsonValue.GetDouble("PercentTraffic");

    m_percentTrafficHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageVariableOverrides"))
  {
    Aws::Map<Aws::String, JsonView> stageVariableOverridesJsonMap = jsonValue.GetObject("StageVariableOverrides").GetAllObjects();
    for(auto& stageVariableOverridesItem : stageVariableOverridesJsonMap)
    {
      m_stageVariableOverrides[stageVariableOverridesItem.first] = stageVariableOverridesItem.second.AsString();
    }
    m_stageVariableOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseStageCache"))
  {
    m_useStageCache = jsonValue.GetBool("UseStageCache");

    m_useStageCacheHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayCanarySettings::Jsonize() const
{
  JsonValue payload;

  if(m_percentTrafficHasBeenSet)
  {
   payload.WithDouble("PercentTraffic", m_percentTraffic);

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_stageVariableOverridesHasBeenSet)
  {
   JsonValue stageVariableOverridesJsonMap;
   for(auto& stageVariableOverridesItem : m_stageVariableOverrides)
   {
     stageVariableOverridesJsonMap.WithString(stageVariableOverridesItem.first, stageVariableOverridesItem.second);
   }
   payload.WithObject("StageVariableOverrides", std::move(stageVariableOverridesJsonMap));

  }

  if(m_useStageCacheHasBeenSet)
  {
   payload.WithBool("UseStageCache", m_useStageCache);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
