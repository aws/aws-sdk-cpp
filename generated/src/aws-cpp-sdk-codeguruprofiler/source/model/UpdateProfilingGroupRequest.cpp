/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/UpdateProfilingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProfilingGroupRequest::UpdateProfilingGroupRequest() : 
    m_agentOrchestrationConfigHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false)
{
}

Aws::String UpdateProfilingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentOrchestrationConfigHasBeenSet)
  {
   payload.WithObject("agentOrchestrationConfig", m_agentOrchestrationConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




