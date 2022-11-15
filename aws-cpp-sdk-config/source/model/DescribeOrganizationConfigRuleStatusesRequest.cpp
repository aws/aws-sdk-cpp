/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeOrganizationConfigRuleStatusesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOrganizationConfigRuleStatusesRequest::DescribeOrganizationConfigRuleStatusesRequest() : 
    m_organizationConfigRuleNamesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeOrganizationConfigRuleStatusesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationConfigRuleNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationConfigRuleNamesJsonList(m_organizationConfigRuleNames.size());
   for(unsigned organizationConfigRuleNamesIndex = 0; organizationConfigRuleNamesIndex < organizationConfigRuleNamesJsonList.GetLength(); ++organizationConfigRuleNamesIndex)
   {
     organizationConfigRuleNamesJsonList[organizationConfigRuleNamesIndex].AsString(m_organizationConfigRuleNames[organizationConfigRuleNamesIndex]);
   }
   payload.WithArray("OrganizationConfigRuleNames", std::move(organizationConfigRuleNamesJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeOrganizationConfigRuleStatusesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeOrganizationConfigRuleStatuses"));
  return headers;

}




