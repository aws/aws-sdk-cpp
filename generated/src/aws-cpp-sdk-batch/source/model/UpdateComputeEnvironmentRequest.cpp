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

  if(m_contextHasBeenSet)
  {
   payload.WithString("context", m_context);

  }

  return payload.View().WriteReadable();
}




