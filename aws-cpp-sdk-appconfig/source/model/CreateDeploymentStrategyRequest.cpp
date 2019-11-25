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

#include <aws/appconfig/model/CreateDeploymentStrategyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeploymentStrategyRequest::CreateDeploymentStrategyRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deploymentDurationInMinutes(0),
    m_deploymentDurationInMinutesHasBeenSet(false),
    m_finalBakeTimeInMinutes(0),
    m_finalBakeTimeInMinutesHasBeenSet(false),
    m_growthFactor(0.0),
    m_growthFactorHasBeenSet(false),
    m_growthType(GrowthType::NOT_SET),
    m_growthTypeHasBeenSet(false),
    m_replicateTo(ReplicateTo::NOT_SET),
    m_replicateToHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDeploymentStrategyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

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

  if(m_replicateToHasBeenSet)
  {
   payload.WithString("ReplicateTo", ReplicateToMapper::GetNameForReplicateTo(m_replicateTo));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




