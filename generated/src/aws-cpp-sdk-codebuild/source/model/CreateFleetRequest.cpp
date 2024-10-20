﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CreateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFleetRequest::CreateFleetRequest() : 
    m_nameHasBeenSet(false),
    m_baseCapacity(0),
    m_baseCapacityHasBeenSet(false),
    m_environmentType(EnvironmentType::NOT_SET),
    m_environmentTypeHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_scalingConfigurationHasBeenSet(false),
    m_overflowBehavior(FleetOverflowBehavior::NOT_SET),
    m_overflowBehaviorHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_fleetServiceRoleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

Aws::Http::HeaderValueCollection CreateFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.CreateFleet"));
  return headers;

}




