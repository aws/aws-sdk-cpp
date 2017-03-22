/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/batch/model/UpdateComputeEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateComputeEnvironmentRequest::UpdateComputeEnvironmentRequest() : 
    m_computeEnvironmentHasBeenSet(false),
    m_state(CEState::NOT_SET),
    m_stateHasBeenSet(false),
    m_computeResourcesHasBeenSet(false),
    m_serviceRoleHasBeenSet(false)
{
}

Aws::String UpdateComputeEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computeEnvironmentHasBeenSet)
  {
   payload.WithString("computeEnvironment", m_computeEnvironment);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", CEStateMapper::GetNameForCEState(m_state));
  }

  if(m_computeResourcesHasBeenSet)
  {
   payload.WithObject("computeResources", m_computeResources.Jsonize());

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("serviceRole", m_serviceRole);

  }

  return payload.WriteReadable();
}




