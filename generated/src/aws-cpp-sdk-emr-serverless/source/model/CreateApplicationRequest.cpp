/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationRequest::CreateApplicationRequest() : 
    m_nameHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_initialCapacityHasBeenSet(false),
    m_maximumCapacityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoStartConfigurationHasBeenSet(false),
    m_autoStopConfigurationHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false),
    m_imageConfigurationHasBeenSet(false),
    m_workerTypeSpecificationsHasBeenSet(false),
    m_runtimeConfigurationHasBeenSet(false),
    m_monitoringConfigurationHasBeenSet(false)
{
}

Aws::String CreateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_initialCapacityHasBeenSet)
  {
   JsonValue initialCapacityJsonMap;
   for(auto& initialCapacityItem : m_initialCapacity)
   {
     initialCapacityJsonMap.WithObject(initialCapacityItem.first, initialCapacityItem.second.Jsonize());
   }
   payload.WithObject("initialCapacity", std::move(initialCapacityJsonMap));

  }

  if(m_maximumCapacityHasBeenSet)
  {
   payload.WithObject("maximumCapacity", m_maximumCapacity.Jsonize());

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

  if(m_autoStartConfigurationHasBeenSet)
  {
   payload.WithObject("autoStartConfiguration", m_autoStartConfiguration.Jsonize());

  }

  if(m_autoStopConfigurationHasBeenSet)
  {
   payload.WithObject("autoStopConfiguration", m_autoStopConfiguration.Jsonize());

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  if(m_imageConfigurationHasBeenSet)
  {
   payload.WithObject("imageConfiguration", m_imageConfiguration.Jsonize());

  }

  if(m_workerTypeSpecificationsHasBeenSet)
  {
   JsonValue workerTypeSpecificationsJsonMap;
   for(auto& workerTypeSpecificationsItem : m_workerTypeSpecifications)
   {
     workerTypeSpecificationsJsonMap.WithObject(workerTypeSpecificationsItem.first, workerTypeSpecificationsItem.second.Jsonize());
   }
   payload.WithObject("workerTypeSpecifications", std::move(workerTypeSpecificationsJsonMap));

  }

  if(m_runtimeConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> runtimeConfigurationJsonList(m_runtimeConfiguration.size());
   for(unsigned runtimeConfigurationIndex = 0; runtimeConfigurationIndex < runtimeConfigurationJsonList.GetLength(); ++runtimeConfigurationIndex)
   {
     runtimeConfigurationJsonList[runtimeConfigurationIndex].AsObject(m_runtimeConfiguration[runtimeConfigurationIndex].Jsonize());
   }
   payload.WithArray("runtimeConfiguration", std::move(runtimeConfigurationJsonList));

  }

  if(m_monitoringConfigurationHasBeenSet)
  {
   payload.WithObject("monitoringConfiguration", m_monitoringConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




