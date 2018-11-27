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

#include <aws/sms/model/PutAppLaunchConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAppLaunchConfigurationRequest::PutAppLaunchConfigurationRequest() : 
    m_appIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_serverGroupLaunchConfigurationsHasBeenSet(false)
{
}

Aws::String PutAppLaunchConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  if(m_serverGroupLaunchConfigurationsHasBeenSet)
  {
   Array<JsonValue> serverGroupLaunchConfigurationsJsonList(m_serverGroupLaunchConfigurations.size());
   for(unsigned serverGroupLaunchConfigurationsIndex = 0; serverGroupLaunchConfigurationsIndex < serverGroupLaunchConfigurationsJsonList.GetLength(); ++serverGroupLaunchConfigurationsIndex)
   {
     serverGroupLaunchConfigurationsJsonList[serverGroupLaunchConfigurationsIndex].AsObject(m_serverGroupLaunchConfigurations[serverGroupLaunchConfigurationsIndex].Jsonize());
   }
   payload.WithArray("serverGroupLaunchConfigurations", std::move(serverGroupLaunchConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAppLaunchConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.PutAppLaunchConfiguration"));
  return headers;

}




