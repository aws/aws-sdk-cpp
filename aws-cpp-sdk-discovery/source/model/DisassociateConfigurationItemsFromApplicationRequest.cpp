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

#include <aws/discovery/model/DisassociateConfigurationItemsFromApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateConfigurationItemsFromApplicationRequest::DisassociateConfigurationItemsFromApplicationRequest() : 
    m_applicationConfigurationIdHasBeenSet(false),
    m_configurationIdsHasBeenSet(false)
{
}

Aws::String DisassociateConfigurationItemsFromApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationConfigurationIdHasBeenSet)
  {
   payload.WithString("applicationConfigurationId", m_applicationConfigurationId);

  }

  if(m_configurationIdsHasBeenSet)
  {
   Array<JsonValue> configurationIdsJsonList(m_configurationIds.size());
   for(unsigned configurationIdsIndex = 0; configurationIdsIndex < configurationIdsJsonList.GetLength(); ++configurationIdsIndex)
   {
     configurationIdsJsonList[configurationIdsIndex].AsString(m_configurationIds[configurationIdsIndex]);
   }
   payload.WithArray("configurationIds", std::move(configurationIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateConfigurationItemsFromApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.DisassociateConfigurationItemsFromApplication"));
  return headers;

}




