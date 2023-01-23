/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_excludedAccountsHasBeenSet(false),
    m_organizationCustomPolicyRuleMetadataHasBeenSet(false)
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
   Aws::Utils::Array<JsonValue> excludedAccountsJsonList(m_excludedAccounts.size());
   for(unsigned excludedAccountsIndex = 0; excludedAccountsIndex < excludedAccountsJsonList.GetLength(); ++excludedAccountsIndex)
   {
     excludedAccountsJsonList[excludedAccountsIndex].AsString(m_excludedAccounts[excludedAccountsIndex]);
   }
   payload.WithArray("ExcludedAccounts", std::move(excludedAccountsJsonList));

  }

  if(m_organizationCustomPolicyRuleMetadataHasBeenSet)
  {
   payload.WithObject("OrganizationCustomPolicyRuleMetadata", m_organizationCustomPolicyRuleMetadata.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutOrganizationConfigRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutOrganizationConfigRule"));
  return headers;

}




