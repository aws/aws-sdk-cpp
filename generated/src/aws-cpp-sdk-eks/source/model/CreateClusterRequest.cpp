/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/CreateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_resourcesVpcConfigHasBeenSet)
  {
   payload.WithObject("resourcesVpcConfig", m_resourcesVpcConfig.Jsonize());

  }

  if(m_kubernetesNetworkConfigHasBeenSet)
  {
   payload.WithObject("kubernetesNetworkConfig", m_kubernetesNetworkConfig.Jsonize());

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithObject("logging", m_logging.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

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

  if(m_encryptionConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> encryptionConfigJsonList(m_encryptionConfig.size());
   for(unsigned encryptionConfigIndex = 0; encryptionConfigIndex < encryptionConfigJsonList.GetLength(); ++encryptionConfigIndex)
   {
     encryptionConfigJsonList[encryptionConfigIndex].AsObject(m_encryptionConfig[encryptionConfigIndex].Jsonize());
   }
   payload.WithArray("encryptionConfig", std::move(encryptionConfigJsonList));

  }

  if(m_outpostConfigHasBeenSet)
  {
   payload.WithObject("outpostConfig", m_outpostConfig.Jsonize());

  }

  if(m_accessConfigHasBeenSet)
  {
   payload.WithObject("accessConfig", m_accessConfig.Jsonize());

  }

  if(m_bootstrapSelfManagedAddonsHasBeenSet)
  {
   payload.WithBool("bootstrapSelfManagedAddons", m_bootstrapSelfManagedAddons);

  }

  if(m_upgradePolicyHasBeenSet)
  {
   payload.WithObject("upgradePolicy", m_upgradePolicy.Jsonize());

  }

  if(m_zonalShiftConfigHasBeenSet)
  {
   payload.WithObject("zonalShiftConfig", m_zonalShiftConfig.Jsonize());

  }

  if(m_remoteNetworkConfigHasBeenSet)
  {
   payload.WithObject("remoteNetworkConfig", m_remoteNetworkConfig.Jsonize());

  }

  if(m_computeConfigHasBeenSet)
  {
   payload.WithObject("computeConfig", m_computeConfig.Jsonize());

  }

  if(m_storageConfigHasBeenSet)
  {
   payload.WithObject("storageConfig", m_storageConfig.Jsonize());

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("deletionProtection", m_deletionProtection);

  }

  return payload.View().WriteReadable();
}




