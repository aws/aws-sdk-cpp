/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/UpdateDeploymentStrategyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDeploymentStrategyRequest::UpdateDeploymentStrategyRequest() : 
    m_deploymentStrategyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deploymentDurationInMinutes(0),
    m_deploymentDurationInMinutesHasBeenSet(false),
    m_finalBakeTimeInMinutes(0),
    m_finalBakeTimeInMinutesHasBeenSet(false),
    m_growthFactor(0.0),
    m_growthFactorHasBeenSet(false),
    m_growthType(GrowthType::NOT_SET),
    m_growthTypeHasBeenSet(false)
{
}

Aws::String UpdateDeploymentStrategyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_deploymentDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("DeploymentDurationInMinutes", m_deploymentDurationInMinutes);

  }

  if(m_finalBakeTimeInMinutesHasBeenSet)
  {
   payload.WithInteger("FinalBakeTimeInMinutes", m_finalBakeTimeInMinutes);

  }

  if(m_growthFactorHasBeenSet)
  {
   payload.WithDouble("GrowthFactor", m_growthFactor);

  }

  if(m_growthTypeHasBeenSet)
  {
   payload.WithString("GrowthType", GrowthTypeMapper::GetNameForGrowthType(m_growthType));
  }

  return payload.View().WriteReadable();
}




