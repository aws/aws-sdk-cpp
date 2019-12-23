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
   Array<JsonValue> organizationEventDetailFiltersJsonList(m_organizationEventDetailFilters.size());
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




