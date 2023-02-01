/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CreateComputeEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateComputeEnvironmentRequest::CreateComputeEnvironmentRequest() : 
    m_computeEnvironmentNameHasBeenSet(false),
    m_type(CEType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(CEState::NOT_SET),
    m_stateHasBeenSet(false),
    m_unmanagedvCpus(0),
    m_unmanagedvCpusHasBeenSet(false),
    m_computeResourcesHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_eksConfigurationHasBeenSet(false)
{
}

Aws::String CreateComputeEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computeEnvironmentNameHasBeenSet)
  {
   payload.WithString("computeEnvironmentName", m_computeEnvironmentName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CETypeMapper::GetNameForCEType(m_type));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", CEStateMapper::GetNameForCEState(m_state));
  }

  if(m_unmanagedvCpusHasBeenSet)
  {
   payload.WithInteger("unmanagedvCpus", m_unmanagedvCpus);

  }

  if(m_computeResourcesHasBeenSet)
  {
   payload.WithObject("computeResources", m_computeResources.Jsonize());

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("serviceRole", m_serviceRole);

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

  if(m_eksConfigurationHasBeenSet)
  {
   payload.WithObject("eksConfiguration", m_eksConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




