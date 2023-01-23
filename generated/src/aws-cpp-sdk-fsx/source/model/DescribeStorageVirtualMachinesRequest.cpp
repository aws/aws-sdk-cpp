/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeStorageVirtualMachinesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStorageVirtualMachinesRequest::DescribeStorageVirtualMachinesRequest() : 
    m_storageVirtualMachineIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeStorageVirtualMachinesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_storageVirtualMachineIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageVirtualMachineIdsJsonList(m_storageVirtualMachineIds.size());
   for(unsigned storageVirtualMachineIdsIndex = 0; storageVirtualMachineIdsIndex < storageVirtualMachineIdsJsonList.GetLength(); ++storageVirtualMachineIdsIndex)
   {
     storageVirtualMachineIdsJsonList[storageVirtualMachineIdsIndex].AsString(m_storageVirtualMachineIds[storageVirtualMachineIdsIndex]);
   }
   payload.WithArray("StorageVirtualMachineIds", std::move(storageVirtualMachineIdsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStorageVirtualMachinesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DescribeStorageVirtualMachines"));
  return headers;

}




