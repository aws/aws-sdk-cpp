/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/UpdateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_baseCapacityHasBeenSet)
  {
   payload.WithInteger("baseCapacity", m_baseCapacity);

  }

  if(m_environmentTypeHasBeenSet)
  {
   payload.WithString("environmentType", EnvironmentTypeMapper::GetNameForEnvironmentType(m_environmentType));
  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("computeType", ComputeTypeMapper::GetNameForComputeType(m_computeType));
  }

  if(m_computeConfigurationHasBeenSet)
  {
   payload.WithObject("computeConfiguration", m_computeConfiguration.Jsonize());

  }

  if(m_scalingConfigurationHasBeenSet)
  {
   payload.WithObject("scalingConfiguration", m_scalingConfiguration.Jsonize());

  }

  if(m_overflowBehaviorHasBeenSet)
  {
   payload.WithString("overflowBehavior", FleetOverflowBehaviorMapper::GetNameForFleetOverflowBehavior(m_overflowBehavior));
  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_proxyConfigurationHasBeenSet)
  {
   payload.WithObject("proxyConfiguration", m_proxyConfiguration.Jsonize());

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("imageId", m_imageId);

  }

  if(m_fleetServiceRoleHasBeenSet)
  {
   payload.WithString("fleetServiceRole", m_fleetServiceRole);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.UpdateFleet"));
  return headers;

}




