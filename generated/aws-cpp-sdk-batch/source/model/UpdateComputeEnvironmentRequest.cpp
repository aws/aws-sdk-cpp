/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_unmanagedvCpus(0),
    m_unmanagedvCpusHasBeenSet(false),
    m_computeResourcesHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_updatePolicyHasBeenSet(false)
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

  if(m_updatePolicyHasBeenSet)
  {
   payload.WithObject("updatePolicy", m_updatePolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}




