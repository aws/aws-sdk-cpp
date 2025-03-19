/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateNodegroupConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNodegroupConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelsHasBeenSet)
  {
   payload.WithObject("labels", m_labels.Jsonize());

  }

  if(m_taintsHasBeenSet)
  {
   payload.WithObject("taints", m_taints.Jsonize());

  }

  if(m_scalingConfigHasBeenSet)
  {
   payload.WithObject("scalingConfig", m_scalingConfig.Jsonize());

  }

  if(m_updateConfigHasBeenSet)
  {
   payload.WithObject("updateConfig", m_updateConfig.Jsonize());

  }

  if(m_nodeRepairConfigHasBeenSet)
  {
   payload.WithObject("nodeRepairConfig", m_nodeRepairConfig.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




