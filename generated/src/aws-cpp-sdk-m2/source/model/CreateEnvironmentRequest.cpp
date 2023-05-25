/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/CreateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentRequest::CreateEnvironmentRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_highAvailabilityConfigHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_storageConfigurationsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_highAvailabilityConfigHasBeenSet)
  {
   payload.WithObject("highAvailabilityConfig", m_highAvailabilityConfig.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("preferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_storageConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageConfigurationsJsonList(m_storageConfigurations.size());
   for(unsigned storageConfigurationsIndex = 0; storageConfigurationsIndex < storageConfigurationsJsonList.GetLength(); ++storageConfigurationsIndex)
   {
     storageConfigurationsJsonList[storageConfigurationsIndex].AsObject(m_storageConfigurations[storageConfigurationsIndex].Jsonize());
   }
   payload.WithArray("storageConfigurations", std::move(storageConfigurationsJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

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




