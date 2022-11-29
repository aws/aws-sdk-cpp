/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartRunRequest::StartRunRequest() : 
    m_logLevel(RunLogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputUriHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_requestId(Aws::Utils::UUID::RandomUUID()),
    m_requestIdHasBeenSet(true),
    m_roleArnHasBeenSet(false),
    m_runGroupIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowType(WorkflowType::NOT_SET),
    m_workflowTypeHasBeenSet(false)
{
}

Aws::String StartRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("logLevel", RunLogLevelMapper::GetNameForRunLogLevel(m_logLevel));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputUriHasBeenSet)
  {
   payload.WithString("outputUri", m_outputUri);

  }

  if(m_parametersHasBeenSet)
  {
    if(!m_parameters.View().IsNull())
    {
       payload.WithObject("parameters", JsonValue(m_parameters.View()));
    }
  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_runGroupIdHasBeenSet)
  {
   payload.WithString("runGroupId", m_runGroupId);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("runId", m_runId);

  }

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("storageCapacity", m_storageCapacity);

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

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithString("workflowType", WorkflowTypeMapper::GetNameForWorkflowType(m_workflowType));
  }

  return payload.View().WriteReadable();
}




