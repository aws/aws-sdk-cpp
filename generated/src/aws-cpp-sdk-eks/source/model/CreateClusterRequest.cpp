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

CreateClusterRequest::CreateClusterRequest() : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_resourcesVpcConfigHasBeenSet(false),
    m_kubernetesNetworkConfigHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false),
    m_outpostConfigHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




