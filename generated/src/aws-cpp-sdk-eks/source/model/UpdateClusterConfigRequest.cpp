/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateClusterConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourcesVpcConfigHasBeenSet)
  {
   payload.WithObject("resourcesVpcConfig", m_resourcesVpcConfig.Jsonize());

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithObject("logging", m_logging.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_accessConfigHasBeenSet)
  {
   payload.WithObject("accessConfig", m_accessConfig.Jsonize());

  }

  if(m_upgradePolicyHasBeenSet)
  {
   payload.WithObject("upgradePolicy", m_upgradePolicy.Jsonize());

  }

  if(m_zonalShiftConfigHasBeenSet)
  {
   payload.WithObject("zonalShiftConfig", m_zonalShiftConfig.Jsonize());

  }

  if(m_computeConfigHasBeenSet)
  {
   payload.WithObject("computeConfig", m_computeConfig.Jsonize());

  }

  if(m_kubernetesNetworkConfigHasBeenSet)
  {
   payload.WithObject("kubernetesNetworkConfig", m_kubernetesNetworkConfig.Jsonize());

  }

  if(m_storageConfigHasBeenSet)
  {
   payload.WithObject("storageConfig", m_storageConfig.Jsonize());

  }

  if(m_remoteNetworkConfigHasBeenSet)
  {
   payload.WithObject("remoteNetworkConfig", m_remoteNetworkConfig.Jsonize());

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("deletionProtection", m_deletionProtection);

  }

  return payload.View().WriteReadable();
}




