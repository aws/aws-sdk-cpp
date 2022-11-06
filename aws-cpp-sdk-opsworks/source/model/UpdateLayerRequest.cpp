/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/UpdateLayerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLayerRequest::UpdateLayerRequest() : 
    m_layerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shortnameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_cloudWatchLogsConfigurationHasBeenSet(false),
    m_customInstanceProfileArnHasBeenSet(false),
    m_customJsonHasBeenSet(false),
    m_customSecurityGroupIdsHasBeenSet(false),
    m_packagesHasBeenSet(false),
    m_volumeConfigurationsHasBeenSet(false),
    m_enableAutoHealing(false),
    m_enableAutoHealingHasBeenSet(false),
    m_autoAssignElasticIps(false),
    m_autoAssignElasticIpsHasBeenSet(false),
    m_autoAssignPublicIps(false),
    m_autoAssignPublicIpsHasBeenSet(false),
    m_customRecipesHasBeenSet(false),
    m_installUpdatesOnBoot(false),
    m_installUpdatesOnBootHasBeenSet(false),
    m_useEbsOptimizedInstances(false),
    m_useEbsOptimizedInstancesHasBeenSet(false),
    m_lifecycleEventConfigurationHasBeenSet(false)
{
}

Aws::String UpdateLayerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_shortnameHasBeenSet)
  {
   payload.WithString("Shortname", m_shortname);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(LayerAttributesKeysMapper::GetNameForLayerAttributesKeys(attributesItem.first), attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_cloudWatchLogsConfigurationHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsConfiguration", m_cloudWatchLogsConfiguration.Jsonize());

  }

  if(m_customInstanceProfileArnHasBeenSet)
  {
   payload.WithString("CustomInstanceProfileArn", m_customInstanceProfileArn);

  }

  if(m_customJsonHasBeenSet)
  {
   payload.WithString("CustomJson", m_customJson);

  }

  if(m_customSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customSecurityGroupIdsJsonList(m_customSecurityGroupIds.size());
   for(unsigned customSecurityGroupIdsIndex = 0; customSecurityGroupIdsIndex < customSecurityGroupIdsJsonList.GetLength(); ++customSecurityGroupIdsIndex)
   {
     customSecurityGroupIdsJsonList[customSecurityGroupIdsIndex].AsString(m_customSecurityGroupIds[customSecurityGroupIdsIndex]);
   }
   payload.WithArray("CustomSecurityGroupIds", std::move(customSecurityGroupIdsJsonList));

  }

  if(m_packagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> packagesJsonList(m_packages.size());
   for(unsigned packagesIndex = 0; packagesIndex < packagesJsonList.GetLength(); ++packagesIndex)
   {
     packagesJsonList[packagesIndex].AsString(m_packages[packagesIndex]);
   }
   payload.WithArray("Packages", std::move(packagesJsonList));

  }

  if(m_volumeConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeConfigurationsJsonList(m_volumeConfigurations.size());
   for(unsigned volumeConfigurationsIndex = 0; volumeConfigurationsIndex < volumeConfigurationsJsonList.GetLength(); ++volumeConfigurationsIndex)
   {
     volumeConfigurationsJsonList[volumeConfigurationsIndex].AsObject(m_volumeConfigurations[volumeConfigurationsIndex].Jsonize());
   }
   payload.WithArray("VolumeConfigurations", std::move(volumeConfigurationsJsonList));

  }

  if(m_enableAutoHealingHasBeenSet)
  {
   payload.WithBool("EnableAutoHealing", m_enableAutoHealing);

  }

  if(m_autoAssignElasticIpsHasBeenSet)
  {
   payload.WithBool("AutoAssignElasticIps", m_autoAssignElasticIps);

  }

  if(m_autoAssignPublicIpsHasBeenSet)
  {
   payload.WithBool("AutoAssignPublicIps", m_autoAssignPublicIps);

  }

  if(m_customRecipesHasBeenSet)
  {
   payload.WithObject("CustomRecipes", m_customRecipes.Jsonize());

  }

  if(m_installUpdatesOnBootHasBeenSet)
  {
   payload.WithBool("InstallUpdatesOnBoot", m_installUpdatesOnBoot);

  }

  if(m_useEbsOptimizedInstancesHasBeenSet)
  {
   payload.WithBool("UseEbsOptimizedInstances", m_useEbsOptimizedInstances);

  }

  if(m_lifecycleEventConfigurationHasBeenSet)
  {
   payload.WithObject("LifecycleEventConfiguration", m_lifecycleEventConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLayerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.UpdateLayer"));
  return headers;

}




