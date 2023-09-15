/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeAffectedEntitiesForOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAffectedEntitiesForOrganizationRequest::DescribeAffectedEntitiesForOrganizationRequest() : 
    m_localeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_organizationEntityAccountFiltersHasBeenSet(false)
{
}

Aws::String DescribeAffectedEntitiesForOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_organizationEntityAccountFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationEntityAccountFiltersJsonList(m_organizationEntityAccountFilters.size());
   for(unsigned organizationEntityAccountFiltersIndex = 0; organizationEntityAccountFiltersIndex < organizationEntityAccountFiltersJsonList.GetLength(); ++organizationEntityAccountFiltersIndex)
   {
     organizationEntityAccountFiltersJsonList[organizationEntityAccountFiltersIndex].AsObject(m_organizationEntityAccountFilters[organizationEntityAccountFiltersIndex].Jsonize());
   }
   payload.WithArray("organizationEntityAccountFilters", std::move(organizationEntityAccountFiltersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAffectedEntitiesForOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHealth_20160804.DescribeAffectedEntitiesForOrganization"));
  return headers;

}




