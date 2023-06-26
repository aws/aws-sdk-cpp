/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateIntegrationWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIntegrationWorkflowRequest::CreateIntegrationWorkflowRequest() : 
    m_domainNameHasBeenSet(false),
    m_workflowType(WorkflowType::NOT_SET),
    m_workflowTypeHasBeenSet(false),
    m_integrationConfigHasBeenSet(false),
    m_objectTypeNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateIntegrationWorkflowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithString("WorkflowType", WorkflowTypeMapper::GetNameForWorkflowType(m_workflowType));
  }

  if(m_integrationConfigHasBeenSet)
  {
   payload.WithObject("IntegrationConfig", m_integrationConfig.Jsonize());

  }

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

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

  return payload.View().WriteReadable();
}




