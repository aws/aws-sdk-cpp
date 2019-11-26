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

#include <aws/resourcegroupstaggingapi/model/GetResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourcesRequest::GetResourcesRequest() : 
    m_paginationTokenHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_resourcesPerPage(0),
    m_resourcesPerPageHasBeenSet(false),
    m_tagsPerPage(0),
    m_tagsPerPageHasBeenSet(false),
    m_resourceTypeFiltersHasBeenSet(false),
    m_includeComplianceDetails(false),
    m_includeComplianceDetailsHasBeenSet(false),
    m_excludeCompliantResources(false),
    m_excludeCompliantResourcesHasBeenSet(false)
{
}

Aws::String GetResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_paginationTokenHasBeenSet)
  {
   payload.WithString("PaginationToken", m_paginationToken);

  }

  if(m_tagFiltersHasBeenSet)
  {
   Array<JsonValue> tagFiltersJsonList(m_tagFilters.size());
   for(unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex)
   {
     tagFiltersJsonList[tagFiltersIndex].AsObject(m_tagFilters[tagFiltersIndex].Jsonize());
   }
   payload.WithArray("TagFilters", std::move(tagFiltersJsonList));

  }

  if(m_resourcesPerPageHasBeenSet)
  {
   payload.WithInteger("ResourcesPerPage", m_resourcesPerPage);

  }

  if(m_tagsPerPageHasBeenSet)
  {
   payload.WithInteger("TagsPerPage", m_tagsPerPage);

  }

  if(m_resourceTypeFiltersHasBeenSet)
  {
   Array<JsonValue> resourceTypeFiltersJsonList(m_resourceTypeFilters.size());
   for(unsigned resourceTypeFiltersIndex = 0; resourceTypeFiltersIndex < resourceTypeFiltersJsonList.GetLength(); ++resourceTypeFiltersIndex)
   {
     resourceTypeFiltersJsonList[resourceTypeFiltersIndex].AsString(m_resourceTypeFilters[resourceTypeFiltersIndex]);
   }
   payload.WithArray("ResourceTypeFilters", std::move(resourceTypeFiltersJsonList));

  }

  if(m_includeComplianceDetailsHasBeenSet)
  {
   payload.WithBool("IncludeComplianceDetails", m_includeComplianceDetails);

  }

  if(m_excludeCompliantResourcesHasBeenSet)
  {
   payload.WithBool("ExcludeCompliantResources", m_excludeCompliantResources);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ResourceGroupsTaggingAPI_20170126.GetResources"));
  return headers;

}




