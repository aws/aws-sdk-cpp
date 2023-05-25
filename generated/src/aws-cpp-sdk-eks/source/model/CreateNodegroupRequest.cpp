/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/CreateNodegroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNodegroupRequest::CreateNodegroupRequest() : 
    m_clusterNameHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false),
    m_scalingConfigHasBeenSet(false),
    m_diskSize(0),
    m_diskSizeHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_amiType(AMITypes::NOT_SET),
    m_amiTypeHasBeenSet(false),
    m_remoteAccessHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_launchTemplateHasBeenSet(false),
    m_updateConfigHasBeenSet(false),
    m_capacityType(CapacityTypes::NOT_SET),
    m_capacityTypeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_releaseVersionHasBeenSet(false)
{
}

Aws::String CreateNodegroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nodegroupNameHasBeenSet)
  {
   payload.WithString("nodegroupName", m_nodegroupName);

  }

  if(m_scalingConfigHasBeenSet)
  {
   payload.WithObject("scalingConfig", m_scalingConfig.Jsonize());

  }

  if(m_diskSizeHasBeenSet)
  {
   payload.WithInteger("diskSize", m_diskSize);

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

  if(m_instanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
   for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
   {
     instanceTypesJsonList[instanceTypesIndex].AsString(m_instanceTypes[instanceTypesIndex]);
   }
   payload.WithArray("instanceTypes", std::move(instanceTypesJsonList));

  }

  if(m_amiTypeHasBeenSet)
  {
   payload.WithString("amiType", AMITypesMapper::GetNameForAMITypes(m_amiType));
  }

  if(m_remoteAccessHasBeenSet)
  {
   payload.WithObject("remoteAccess", m_remoteAccess.Jsonize());

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_launchTemplateHasBeenSet)
  {
   payload.WithObject("launchTemplate", m_launchTemplate.Jsonize());

  }

  if(m_updateConfigHasBeenSet)
  {
   payload.WithObject("updateConfig", m_updateConfig.Jsonize());

  }

  if(m_capacityTypeHasBeenSet)
  {
   payload.WithString("capacityType", CapacityTypesMapper::GetNameForCapacityTypes(m_capacityType));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_releaseVersionHasBeenSet)
  {
   payload.WithString("releaseVersion", m_releaseVersion);

  }

  return payload.View().WriteReadable();
}




