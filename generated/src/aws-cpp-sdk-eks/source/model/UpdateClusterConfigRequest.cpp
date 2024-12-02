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

UpdateClusterConfigRequest::UpdateClusterConfigRequest() : 
    m_nameHasBeenSet(false),
    m_resourcesVpcConfigHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_accessConfigHasBeenSet(false),
    m_upgradePolicyHasBeenSet(false),
    m_zonalShiftConfigHasBeenSet(false),
    m_computeConfigHasBeenSet(false),
    m_kubernetesNetworkConfigHasBeenSet(false),
    m_storageConfigHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




