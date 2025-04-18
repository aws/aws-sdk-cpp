﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_jobModeHasBeenSet)
  {
   payload.WithString("JobMode", JobModeMapper::GetNameForJobMode(m_jobMode));
  }

  if(m_jobRunQueuingEnabledHasBeenSet)
  {
   payload.WithBool("JobRunQueuingEnabled", m_jobRunQueuingEnabled);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_logUriHasBeenSet)
  {
   payload.WithString("LogUri", m_logUri);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_executionPropertyHasBeenSet)
  {
   payload.WithObject("ExecutionProperty", m_executionProperty.Jsonize());

  }

  if(m_commandHasBeenSet)
  {
   payload.WithObject("Command", m_command.Jsonize());

  }

  if(m_defaultArgumentsHasBeenSet)
  {
   JsonValue defaultArgumentsJsonMap;
   for(auto& defaultArgumentsItem : m_defaultArguments)
   {
     defaultArgumentsJsonMap.WithString(defaultArgumentsItem.first, defaultArgumentsItem.second);
   }
   payload.WithObject("DefaultArguments", std::move(defaultArgumentsJsonMap));

  }

  if(m_nonOverridableArgumentsHasBeenSet)
  {
   JsonValue nonOverridableArgumentsJsonMap;
   for(auto& nonOverridableArgumentsItem : m_nonOverridableArguments)
   {
     nonOverridableArgumentsJsonMap.WithString(nonOverridableArgumentsItem.first, nonOverridableArgumentsItem.second);
   }
   payload.WithObject("NonOverridableArguments", std::move(nonOverridableArgumentsJsonMap));

  }

  if(m_connectionsHasBeenSet)
  {
   payload.WithObject("Connections", m_connections.Jsonize());

  }

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInteger("MaxRetries", m_maxRetries);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithDouble("MaxCapacity", m_maxCapacity);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_notificationPropertyHasBeenSet)
  {
   payload.WithObject("NotificationProperty", m_notificationProperty.Jsonize());

  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("GlueVersion", m_glueVersion);

  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("WorkerType", WorkerTypeMapper::GetNameForWorkerType(m_workerType));
  }

  if(m_codeGenConfigurationNodesHasBeenSet)
  {
   JsonValue codeGenConfigurationNodesJsonMap;
   for(auto& codeGenConfigurationNodesItem : m_codeGenConfigurationNodes)
   {
     codeGenConfigurationNodesJsonMap.WithObject(codeGenConfigurationNodesItem.first, codeGenConfigurationNodesItem.second.Jsonize());
   }
   payload.WithObject("CodeGenConfigurationNodes", std::move(codeGenConfigurationNodesJsonMap));

  }

  if(m_executionClassHasBeenSet)
  {
   payload.WithString("ExecutionClass", ExecutionClassMapper::GetNameForExecutionClass(m_executionClass));
  }

  if(m_sourceControlDetailsHasBeenSet)
  {
   payload.WithObject("SourceControlDetails", m_sourceControlDetails.Jsonize());

  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithString("MaintenanceWindow", m_maintenanceWindow);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateJob"));
  return headers;

}




