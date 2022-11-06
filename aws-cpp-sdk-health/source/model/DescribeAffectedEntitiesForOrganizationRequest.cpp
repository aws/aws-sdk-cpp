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
    m_organizationEntityFiltersHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeAffectedEntitiesForOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationEntityFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationEntityFiltersJsonList(m_organizationEntityFilters.size());
   for(unsigned organizationEntityFiltersIndex = 0; organizationEntityFiltersIndex < organizationEntityFiltersJsonList.GetLength(); ++organizationEntityFiltersIndex)
   {
     organizationEntityFiltersJsonList[organizationEntityFiltersIndex].AsObject(m_organizationEntityFilters[organizationEntityFiltersIndex].Jsonize());
   }
   payload.WithArray("organizationEntityFilters", std::move(organizationEntityFiltersJsonList));

  }

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAffectedEntitiesForOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHealth_20160804.DescribeAffectedEntitiesForOrganization"));
  return headers;

}




