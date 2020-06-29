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

UpdateNodegroupConfigRequest::UpdateNodegroupConfigRequest() : 
    m_clusterNameHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_scalingConfigHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String UpdateNodegroupConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelsHasBeenSet)
  {
   payload.WithObject("labels", m_labels.Jsonize());

  }

  if(m_scalingConfigHasBeenSet)
  {
   payload.WithObject("scalingConfig", m_scalingConfig.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




