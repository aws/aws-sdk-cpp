/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/Layer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Layer::Layer() : 
    m_stackIdHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_type(LayerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shortnameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_customInstanceProfileArnHasBeenSet(false),
    m_customJsonHasBeenSet(false),
    m_customSecurityGroupIdsHasBeenSet(false),
    m_defaultSecurityGroupNamesHasBeenSet(false),
    m_packagesHasBeenSet(false),
    m_volumeConfigurationsHasBeenSet(false),
    m_enableAutoHealing(false),
    m_enableAutoHealingHasBeenSet(false),
    m_autoAssignElasticIps(false),
    m_autoAssignElasticIpsHasBeenSet(false),
    m_autoAssignPublicIps(false),
    m_autoAssignPublicIpsHasBeenSet(false),
    m_defaultRecipesHasBeenSet(false),
    m_customRecipesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_installUpdatesOnBoot(false),
    m_installUpdatesOnBootHasBeenSet(false),
    m_useEbsOptimizedInstances(false),
    m_useEbsOptimizedInstancesHasBeenSet(false),
    m_lifecycleEventConfigurationHasBeenSet(false)
{
}

Layer::Layer(const JsonValue& jsonValue) : 
    m_stackIdHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_type(LayerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shortnameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_customInstanceProfileArnHasBeenSet(false),
    m_customJsonHasBeenSet(false),
    m_customSecurityGroupIdsHasBeenSet(false),
    m_defaultSecurityGroupNamesHasBeenSet(false),
    m_packagesHasBeenSet(false),
    m_volumeConfigurationsHasBeenSet(false),
    m_enableAutoHealing(false),
    m_enableAutoHealingHasBeenSet(false),
    m_autoAssignElasticIps(false),
    m_autoAssignElasticIpsHasBeenSet(false),
    m_autoAssignPublicIps(false),
    m_autoAssignPublicIpsHasBeenSet(false),
    m_defaultRecipesHasBeenSet(false),
    m_customRecipesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_installUpdatesOnBoot(false),
    m_installUpdatesOnBootHasBeenSet(false),
    m_useEbsOptimizedInstances(false),
    m_useEbsOptimizedInstancesHasBeenSet(false),
    m_lifecycleEventConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Layer& Layer::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LayerId"))
  {
    m_layerId = jsonValue.GetString("LayerId");

    m_layerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = LayerTypeMapper::GetLayerTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shortname"))
  {
    m_shortname = jsonValue.GetString("Shortname");

    m_shortnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonValue> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[LayerAttributesKeysMapper::GetLayerAttributesKeysForName(attributesItem.first)] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomInstanceProfileArn"))
  {
    m_customInstanceProfileArn = jsonValue.GetString("CustomInstanceProfileArn");

    m_customInstanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomJson"))
  {
    m_customJson = jsonValue.GetString("CustomJson");

    m_customJsonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomSecurityGroupIds"))
  {
    Array<JsonValue> customSecurityGroupIdsJsonList = jsonValue.GetArray("CustomSecurityGroupIds");
    for(unsigned customSecurityGroupIdsIndex = 0; customSecurityGroupIdsIndex < customSecurityGroupIdsJsonList.GetLength(); ++customSecurityGroupIdsIndex)
    {
      m_customSecurityGroupIds.push_back(customSecurityGroupIdsJsonList[customSecurityGroupIdsIndex].AsString());
    }
    m_customSecurityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSecurityGroupNames"))
  {
    Array<JsonValue> defaultSecurityGroupNamesJsonList = jsonValue.GetArray("DefaultSecurityGroupNames");
    for(unsigned defaultSecurityGroupNamesIndex = 0; defaultSecurityGroupNamesIndex < defaultSecurityGroupNamesJsonList.GetLength(); ++defaultSecurityGroupNamesIndex)
    {
      m_defaultSecurityGroupNames.push_back(defaultSecurityGroupNamesJsonList[defaultSecurityGroupNamesIndex].AsString());
    }
    m_defaultSecurityGroupNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Packages"))
  {
    Array<JsonValue> packagesJsonList = jsonValue.GetArray("Packages");
    for(unsigned packagesIndex = 0; packagesIndex < packagesJsonList.GetLength(); ++packagesIndex)
    {
      m_packages.push_back(packagesJsonList[packagesIndex].AsString());
    }
    m_packagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeConfigurations"))
  {
    Array<JsonValue> volumeConfigurationsJsonList = jsonValue.GetArray("VolumeConfigurations");
    for(unsigned volumeConfigurationsIndex = 0; volumeConfigurationsIndex < volumeConfigurationsJsonList.GetLength(); ++volumeConfigurationsIndex)
    {
      m_volumeConfigurations.push_back(volumeConfigurationsJsonList[volumeConfigurationsIndex].AsObject());
    }
    m_volumeConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableAutoHealing"))
  {
    m_enableAutoHealing = jsonValue.GetBool("EnableAutoHealing");

    m_enableAutoHealingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoAssignElasticIps"))
  {
    m_autoAssignElasticIps = jsonValue.GetBool("AutoAssignElasticIps");

    m_autoAssignElasticIpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoAssignPublicIps"))
  {
    m_autoAssignPublicIps = jsonValue.GetBool("AutoAssignPublicIps");

    m_autoAssignPublicIpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRecipes"))
  {
    m_defaultRecipes = jsonValue.GetObject("DefaultRecipes");

    m_defaultRecipesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomRecipes"))
  {
    m_customRecipes = jsonValue.GetObject("CustomRecipes");

    m_customRecipesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstallUpdatesOnBoot"))
  {
    m_installUpdatesOnBoot = jsonValue.GetBool("InstallUpdatesOnBoot");

    m_installUpdatesOnBootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseEbsOptimizedInstances"))
  {
    m_useEbsOptimizedInstances = jsonValue.GetBool("UseEbsOptimizedInstances");

    m_useEbsOptimizedInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifecycleEventConfiguration"))
  {
    m_lifecycleEventConfiguration = jsonValue.GetObject("LifecycleEventConfiguration");

    m_lifecycleEventConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Layer::Jsonize() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", LayerTypeMapper::GetNameForLayerType(m_type));
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
   Array<JsonValue> customSecurityGroupIdsJsonList(m_customSecurityGroupIds.size());
   for(unsigned customSecurityGroupIdsIndex = 0; customSecurityGroupIdsIndex < customSecurityGroupIdsJsonList.GetLength(); ++customSecurityGroupIdsIndex)
   {
     customSecurityGroupIdsJsonList[customSecurityGroupIdsIndex].AsString(m_customSecurityGroupIds[customSecurityGroupIdsIndex]);
   }
   payload.WithArray("CustomSecurityGroupIds", std::move(customSecurityGroupIdsJsonList));

  }

  if(m_defaultSecurityGroupNamesHasBeenSet)
  {
   Array<JsonValue> defaultSecurityGroupNamesJsonList(m_defaultSecurityGroupNames.size());
   for(unsigned defaultSecurityGroupNamesIndex = 0; defaultSecurityGroupNamesIndex < defaultSecurityGroupNamesJsonList.GetLength(); ++defaultSecurityGroupNamesIndex)
   {
     defaultSecurityGroupNamesJsonList[defaultSecurityGroupNamesIndex].AsString(m_defaultSecurityGroupNames[defaultSecurityGroupNamesIndex]);
   }
   payload.WithArray("DefaultSecurityGroupNames", std::move(defaultSecurityGroupNamesJsonList));

  }

  if(m_packagesHasBeenSet)
  {
   Array<JsonValue> packagesJsonList(m_packages.size());
   for(unsigned packagesIndex = 0; packagesIndex < packagesJsonList.GetLength(); ++packagesIndex)
   {
     packagesJsonList[packagesIndex].AsString(m_packages[packagesIndex]);
   }
   payload.WithArray("Packages", std::move(packagesJsonList));

  }

  if(m_volumeConfigurationsHasBeenSet)
  {
   Array<JsonValue> volumeConfigurationsJsonList(m_volumeConfigurations.size());
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

  if(m_defaultRecipesHasBeenSet)
  {
   payload.WithObject("DefaultRecipes", m_defaultRecipes.Jsonize());

  }

  if(m_customRecipesHasBeenSet)
  {
   payload.WithObject("CustomRecipes", m_customRecipes.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

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

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws