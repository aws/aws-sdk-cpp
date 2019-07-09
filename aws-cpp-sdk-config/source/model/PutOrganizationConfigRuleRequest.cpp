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

#include <aws/config/model/PutOrganizationConfigRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutOrganizationConfigRuleRequest::PutOrganizationConfigRuleRequest() : 
    m_organizationConfigRuleNameHasBeenSet(false),
    m_organizationManagedRuleMetadataHasBeenSet(false),
    m_organizationCustomRuleMetadataHasBeenSet(false),
    m_excludedAccountsHasBeenSet(false)
{
}

Aws::String PutOrganizationConfigRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationConfigRuleNameHasBeenSet)
  {
   payload.WithString("OrganizationConfigRuleName", m_organizationConfigRuleName);

  }

  if(m_organizationManagedRuleMetadataHasBeenSet)
  {
   payload.WithObject("OrganizationManagedRuleMetadata", m_organizationManagedRuleMetadata.Jsonize());

  }

  if(m_organizationCustomRuleMetadataHasBeenSet)
  {
   payload.WithObject("OrganizationCustomRuleMetadata", m_organizationCustomRuleMetadata.Jsonize());

  }

  if(m_excludedAccountsHasBeenSet)
  {
   Array<JsonValue> excludedAccountsJsonList(m_excludedAccounts.size());
   for(unsigned excludedAccountsIndex = 0; excludedAccountsIndex < excludedAccountsJsonList.GetLength(); ++excludedAccountsIndex)
   {
     excludedAccountsJsonList[excludedAccountsIndex].AsString(m_excludedAccounts[excludedAccountsIndex]);
   }
   payload.WithArray("ExcludedAccounts", std::move(excludedAccountsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutOrganizationConfigRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutOrganizationConfigRule"));
  return headers;

}




