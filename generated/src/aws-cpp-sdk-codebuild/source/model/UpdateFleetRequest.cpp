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

UpdateFleetRequest::UpdateFleetRequest() : 
    m_arnHasBeenSet(false),
    m_baseCapacity(0),
    m_baseCapacityHasBeenSet(false),
    m_environmentType(EnvironmentType::NOT_SET),
    m_environmentTypeHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_scalingConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

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

  if(m_scalingConfigurationHasBeenSet)
  {
   payload.WithObject("scalingConfiguration", m_scalingConfiguration.Jsonize());

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




