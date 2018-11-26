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

#include <aws/amplify/model/CreateDomainAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDomainAssociationRequest::CreateDomainAssociationRequest() : 
    m_appIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_enableAutoSubDomain(false),
    m_enableAutoSubDomainHasBeenSet(false),
    m_subDomainSettingsHasBeenSet(false)
{
}

Aws::String CreateDomainAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_enableAutoSubDomainHasBeenSet)
  {
   payload.WithBool("enableAutoSubDomain", m_enableAutoSubDomain);

  }

  if(m_subDomainSettingsHasBeenSet)
  {
   Array<JsonValue> subDomainSettingsJsonList(m_subDomainSettings.size());
   for(unsigned subDomainSettingsIndex = 0; subDomainSettingsIndex < subDomainSettingsJsonList.GetLength(); ++subDomainSettingsIndex)
   {
     subDomainSettingsJsonList[subDomainSettingsIndex].AsObject(m_subDomainSettings[subDomainSettingsIndex].Jsonize());
   }
   payload.WithArray("subDomainSettings", std::move(subDomainSettingsJsonList));

  }

  return payload.View().WriteReadable();
}




