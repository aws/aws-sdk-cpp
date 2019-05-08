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

#include <aws/sagemaker/model/UpdateWorkteamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkteamRequest::UpdateWorkteamRequest() : 
    m_workteamNameHasBeenSet(false),
    m_memberDefinitionsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false)
{
}

Aws::String UpdateWorkteamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workteamNameHasBeenSet)
  {
   payload.WithString("WorkteamName", m_workteamName);

  }

  if(m_memberDefinitionsHasBeenSet)
  {
   Array<JsonValue> memberDefinitionsJsonList(m_memberDefinitions.size());
   for(unsigned memberDefinitionsIndex = 0; memberDefinitionsIndex < memberDefinitionsJsonList.GetLength(); ++memberDefinitionsIndex)
   {
     memberDefinitionsJsonList[memberDefinitionsIndex].AsObject(m_memberDefinitions[memberDefinitionsIndex].Jsonize());
   }
   payload.WithArray("MemberDefinitions", std::move(memberDefinitionsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkteamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateWorkteam"));
  return headers;

}




