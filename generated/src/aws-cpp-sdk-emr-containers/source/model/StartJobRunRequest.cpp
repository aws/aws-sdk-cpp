/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/StartJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRContainers::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartJobRunRequest::StartJobRunRequest() : 
    m_nameHasBeenSet(false),
    m_virtualClusterIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_executionRoleArnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_jobDriverHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_jobTemplateIdHasBeenSet(false),
    m_jobTemplateParametersHasBeenSet(false)
{
}

Aws::String StartJobRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_jobDriverHasBeenSet)
  {
   payload.WithObject("jobDriver", m_jobDriver.Jsonize());

  }

  if(m_configurationOverridesHasBeenSet)
  {
   payload.WithObject("configurationOverrides", m_configurationOverrides.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_jobTemplateIdHasBeenSet)
  {
   payload.WithString("jobTemplateId", m_jobTemplateId);

  }

  if(m_jobTemplateParametersHasBeenSet)
  {
   JsonValue jobTemplateParametersJsonMap;
   for(auto& jobTemplateParametersItem : m_jobTemplateParameters)
   {
     jobTemplateParametersJsonMap.WithString(jobTemplateParametersItem.first, jobTemplateParametersItem.second);
   }
   payload.WithObject("jobTemplateParameters", std::move(jobTemplateParametersJsonMap));

  }

  return payload.View().WriteReadable();
}




