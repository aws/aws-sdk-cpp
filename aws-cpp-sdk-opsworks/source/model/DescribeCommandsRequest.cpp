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
#include <aws/opsworks/model/DescribeCommandsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCommandsRequest::DescribeCommandsRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_commandIdsHasBeenSet(false)
{
}

Aws::String DescribeCommandsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_commandIdsHasBeenSet)
  {
   Array<JsonValue> commandIdsJsonList(m_commandIds.size());
   for(unsigned commandIdsIndex = 0; commandIdsIndex < commandIdsJsonList.GetLength(); ++commandIdsIndex)
   {
     commandIdsJsonList[commandIdsIndex].AsString(m_commandIds[commandIdsIndex]);
   }
   payload.WithArray("CommandIds", std::move(commandIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCommandsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeCommands"));
  return headers;

}



