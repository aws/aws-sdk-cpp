/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iotthingsgraph/model/CreateSystemInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSystemInstanceRequest::CreateSystemInstanceRequest() : 
    m_tagsHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_target(DeploymentTarget::NOT_SET),
    m_targetHasBeenSet(false),
    m_greengrassGroupNameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_metricsConfigurationHasBeenSet(false),
    m_flowActionsRoleArnHasBeenSet(false)
{
}

Aws::String CreateSystemInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", DeploymentTargetMapper::GetNameForDeploymentTarget(m_target));
  }

  if(m_greengrassGroupNameHasBeenSet)
  {
   payload.WithString("greengrassGroupName", m_greengrassGroupName);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_metricsConfigurationHasBeenSet)
  {
   payload.WithObject("metricsConfiguration", m_metricsConfiguration.Jsonize());

  }

  if(m_flowActionsRoleArnHasBeenSet)
  {
   payload.WithString("flowActionsRoleArn", m_flowActionsRoleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSystemInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.CreateSystemInstance"));
  return headers;

}




