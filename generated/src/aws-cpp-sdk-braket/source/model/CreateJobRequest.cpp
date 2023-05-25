/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_algorithmSpecificationHasBeenSet(false),
    m_checkpointConfigHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_deviceConfigHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_instanceConfigHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_algorithmSpecificationHasBeenSet)
  {
   payload.WithObject("algorithmSpecification", m_algorithmSpecification.Jsonize());

  }

  if(m_checkpointConfigHasBeenSet)
  {
   payload.WithObject("checkpointConfig", m_checkpointConfig.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_deviceConfigHasBeenSet)
  {
   payload.WithObject("deviceConfig", m_deviceConfig.Jsonize());

  }

  if(m_hyperParametersHasBeenSet)
  {
   JsonValue hyperParametersJsonMap;
   for(auto& hyperParametersItem : m_hyperParameters)
   {
     hyperParametersJsonMap.WithString(hyperParametersItem.first, hyperParametersItem.second);
   }
   payload.WithObject("hyperParameters", std::move(hyperParametersJsonMap));

  }

  if(m_inputDataConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputDataConfigJsonList(m_inputDataConfig.size());
   for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
   {
     inputDataConfigJsonList[inputDataConfigIndex].AsObject(m_inputDataConfig[inputDataConfigIndex].Jsonize());
   }
   payload.WithArray("inputDataConfig", std::move(inputDataConfigJsonList));

  }

  if(m_instanceConfigHasBeenSet)
  {
   payload.WithObject("instanceConfig", m_instanceConfig.Jsonize());

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("outputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("stoppingCondition", m_stoppingCondition.Jsonize());

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

  return payload.View().WriteReadable();
}




