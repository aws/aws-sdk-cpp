/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeploymentLifecycleHook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

DeploymentLifecycleHook::DeploymentLifecycleHook(JsonView jsonValue)
{
  *this = jsonValue;
}

DeploymentLifecycleHook& DeploymentLifecycleHook::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hookTargetArn"))
  {
    m_hookTargetArn = jsonValue.GetString("hookTargetArn");
    m_hookTargetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleStages"))
  {
    Aws::Utils::Array<JsonView> lifecycleStagesJsonList = jsonValue.GetArray("lifecycleStages");
    for(unsigned lifecycleStagesIndex = 0; lifecycleStagesIndex < lifecycleStagesJsonList.GetLength(); ++lifecycleStagesIndex)
    {
      m_lifecycleStages.push_back(DeploymentLifecycleHookStageMapper::GetDeploymentLifecycleHookStageForName(lifecycleStagesJsonList[lifecycleStagesIndex].AsString()));
    }
    m_lifecycleStagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hookDetails"))
  {
    m_hookDetails = jsonValue.GetObject("hookDetails");
    m_hookDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentLifecycleHook::Jsonize() const
{
  JsonValue payload;

  if(m_hookTargetArnHasBeenSet)
  {
   payload.WithString("hookTargetArn", m_hookTargetArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_lifecycleStagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lifecycleStagesJsonList(m_lifecycleStages.size());
   for(unsigned lifecycleStagesIndex = 0; lifecycleStagesIndex < lifecycleStagesJsonList.GetLength(); ++lifecycleStagesIndex)
   {
     lifecycleStagesJsonList[lifecycleStagesIndex].AsString(DeploymentLifecycleHookStageMapper::GetNameForDeploymentLifecycleHookStage(m_lifecycleStages[lifecycleStagesIndex]));
   }
   payload.WithArray("lifecycleStages", std::move(lifecycleStagesJsonList));

  }

  if(m_hookDetailsHasBeenSet)
  {
    if(!m_hookDetails.View().IsNull())
    {
       payload.WithObject("hookDetails", JsonValue(m_hookDetails.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
