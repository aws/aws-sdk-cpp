/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeEventDetailsForOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEventDetailsForOrganizationRequest::DescribeEventDetailsForOrganizationRequest() : 
    m_organizationEventDetailFiltersHasBeenSet(false),
    m_localeHasBeenSet(false)
{
}

Aws::String DescribeEventDetailsForOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationEventDetailFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationEventDetailFiltersJsonList(m_organizationEventDetailFilters.size());
   for(unsigned organizationEventDetailFiltersIndex = 0; organizationEventDetailFiltersIndex < organizationEventDetailFiltersJsonList.GetLength(); ++organizationEventDetailFiltersIndex)
   {
     organizationEventDetailFiltersJsonList[organizationEventDetailFiltersIndex].AsObject(m_organizationEventDetailFilters[organizationEventDetailFiltersIndex].Jsonize());
   }
   payload.WithArray("organizationEventDetailFilters", std::move(organizationEventDetailFiltersJsonList));

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEventDetailsForOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHealth_20160804.DescribeEventDetailsForOrganization"));
  return headers;

}




