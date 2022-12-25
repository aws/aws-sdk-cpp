/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/CreateDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeploymentRequest::CreateDeploymentRequest() : 
    m_stackIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_layerIdsHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_customJsonHasBeenSet(false)
{
}

Aws::String CreateDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("AppId", m_appId);

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  if(m_layerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layerIdsJsonList(m_layerIds.size());
   for(unsigned layerIdsIndex = 0; layerIdsIndex < layerIdsJsonList.GetLength(); ++layerIdsIndex)
   {
     layerIdsJsonList[layerIdsIndex].AsString(m_layerIds[layerIdsIndex]);
   }
   payload.WithArray("LayerIds", std::move(layerIdsJsonList));

  }

  if(m_commandHasBeenSet)
  {
   payload.WithObject("Command", m_command.Jsonize());

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_customJsonHasBeenSet)
  {
   payload.WithString("CustomJson", m_customJson);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.CreateDeployment"));
  return headers;

}




