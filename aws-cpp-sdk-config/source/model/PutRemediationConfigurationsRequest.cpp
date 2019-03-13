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

#include <aws/config/model/PutRemediationConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRemediationConfigurationsRequest::PutRemediationConfigurationsRequest() : 
    m_remediationConfigurationsHasBeenSet(false)
{
}

Aws::String PutRemediationConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_remediationConfigurationsHasBeenSet)
  {
   Array<JsonValue> remediationConfigurationsJsonList(m_remediationConfigurations.size());
   for(unsigned remediationConfigurationsIndex = 0; remediationConfigurationsIndex < remediationConfigurationsJsonList.GetLength(); ++remediationConfigurationsIndex)
   {
     remediationConfigurationsJsonList[remediationConfigurationsIndex].AsObject(m_remediationConfigurations[remediationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("RemediationConfigurations", std::move(remediationConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRemediationConfigurationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutRemediationConfigurations"));
  return headers;

}




