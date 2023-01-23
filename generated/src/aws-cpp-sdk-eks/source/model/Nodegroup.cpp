/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Nodegroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Nodegroup::Nodegroup() : 
    m_nodegroupNameHasBeenSet(false),
    m_nodegroupArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_releaseVersionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_status(NodegroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_capacityType(CapacityTypes::NOT_SET),
    m_capacityTypeHasBeenSet(false),
    m_scalingConfigHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_remoteAccessHasBeenSet(false),
    m_amiType(AMITypes::NOT_SET),
    m_amiTypeHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_diskSize(0),
    m_diskSizeHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_updateConfigHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Nodegroup::Nodegroup(JsonView jsonValue) : 
    m_nodegroupNameHasBeenSet(false),
    m_nodegroupArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_releaseVersionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_status(NodegroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_capacityType(CapacityTypes::NOT_SET),
    m_capacityTypeHasBeenSet(false),
    m_scalingConfigHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_remoteAccessHasBeenSet(false),
    m_amiType(AMITypes::NOT_SET),
    m_amiTypeHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_diskSize(0),
    m_diskSizeHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_updateConfigHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Nodegroup& Nodegroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodegroupName"))
  {
    m_nodegroupName = jsonValue.GetString("nodegroupName");

    m_nodegroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodegroupArn"))
  {
    m_nodegroupArn = jsonValue.GetString("nodegroupArn");

    m_nodegroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("releaseVersion"))
  {
    m_releaseVersion = jsonValue.GetString("releaseVersion");

    m_releaseVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = NodegroupStatusMapper::GetNodegroupStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capacityType"))
  {
    m_capacityType = CapacityTypesMapper::GetCapacityTypesForName(jsonValue.GetString("capacityType"));

    m_capacityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scalingConfig"))
  {
    m_scalingConfig = jsonValue.GetObject("scalingConfig");

    m_scalingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceTypes"))
  {
    Aws::Utils::Array<JsonView> instanceTypesJsonList = jsonValue.GetArray("instanceTypes");
    for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
    {
      m_instanceTypes.push_back(instanceTypesJsonList[instanceTypesIndex].AsString());
    }
    m_instanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteAccess"))
  {
    m_remoteAccess = jsonValue.GetObject("remoteAccess");

    m_remoteAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amiType"))
  {
    m_amiType = AMITypesMapper::GetAMITypesForName(jsonValue.GetString("amiType"));

    m_amiTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeRole"))
  {
    m_nodeRole = jsonValue.GetString("nodeRole");

    m_nodeRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labels"))
  {
    Aws::Map<Aws::String, JsonView> labelsJsonMap = jsonValue.GetObject("labels").GetAllObjects();
    for(auto& labelsItem : labelsJsonMap)
    {
      m_labels[labelsItem.first] = labelsItem.second.AsString();
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taints"))
  {
    Aws::Utils::Array<JsonView> taintsJsonList = jsonValue.GetArray("taints");
    for(unsigned taintsIndex = 0; taintsIndex < taintsJsonList.GetLength(); ++taintsIndex)
    {
      m_taints.push_back(taintsJsonList[taintsIndex].AsObject());
    }
    m_taintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    m_resources = jsonValue.GetObject("resources");

    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diskSize"))
  {
    m_diskSize = jsonValue.GetInteger("diskSize");

    m_diskSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("health"))
  {
    m_health = jsonValue.GetObject("health");

    m_healthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateConfig"))
  {
    m_updateConfig = jsonValue.GetObject("updateConfig");

    m_updateConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchTemplate"))
  {
    m_launchTemplate = jsonValue.GetObject("launchTemplate");

    m_launchTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Nodegroup::Jsonize() const
{
  JsonValue payload;

  if(m_nodegroupNameHasBeenSet)
  {
   payload.WithString("nodegroupName", m_nodegroupName);

  }

  if(m_nodegroupArnHasBeenSet)
  {
   payload.WithString("nodegroupArn", m_nodegroupArn);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_releaseVersionHasBeenSet)
  {
   payload.WithString("releaseVersion", m_releaseVersion);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", NodegroupStatusMapper::GetNameForNodegroupStatus(m_status));
  }

  if(m_capacityTypeHasBeenSet)
  {
   payload.WithString("capacityType", CapacityTypesMapper::GetNameForCapacityTypes(m_capacityType));
  }

  if(m_scalingConfigHasBeenSet)
  {
   payload.WithObject("scalingConfig", m_scalingConfig.Jsonize());

  }

  if(m_instanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
   for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
   {
     instanceTypesJsonList[instanceTypesIndex].AsString(m_instanceTypes[instanceTypesIndex]);
   }
   payload.WithArray("instanceTypes", std::move(instanceTypesJsonList));

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_remoteAccessHasBeenSet)
  {
   payload.WithObject("remoteAccess", m_remoteAccess.Jsonize());

  }

  if(m_amiTypeHasBeenSet)
  {
   payload.WithString("amiType", AMITypesMapper::GetNameForAMITypes(m_amiType));
  }

  if(m_nodeRoleHasBeenSet)
  {
   payload.WithString("nodeRole", m_nodeRole);

  }

  if(m_labelsHasBeenSet)
  {
   JsonValue labelsJsonMap;
   for(auto& labelsItem : m_labels)
   {
     labelsJsonMap.WithString(labelsItem.first, labelsItem.second);
   }
   payload.WithObject("labels", std::move(labelsJsonMap));

  }

  if(m_taintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taintsJsonList(m_taints.size());
   for(unsigned taintsIndex = 0; taintsIndex < taintsJsonList.GetLength(); ++taintsIndex)
   {
     taintsJsonList[taintsIndex].AsObject(m_taints[taintsIndex].Jsonize());
   }
   payload.WithArray("taints", std::move(taintsJsonList));

  }

  if(m_resourcesHasBeenSet)
  {
   payload.WithObject("resources", m_resources.Jsonize());

  }

  if(m_diskSizeHasBeenSet)
  {
   payload.WithInteger("diskSize", m_diskSize);

  }

  if(m_healthHasBeenSet)
  {
   payload.WithObject("health", m_health.Jsonize());

  }

  if(m_updateConfigHasBeenSet)
  {
   payload.WithObject("updateConfig", m_updateConfig.Jsonize());

  }

  if(m_launchTemplateHasBeenSet)
  {
   payload.WithObject("launchTemplate", m_launchTemplate.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
