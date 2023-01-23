/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/DescribeEnvironmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Cloud9::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEnvironmentsRequest::DescribeEnvironmentsRequest() : 
    m_environmentIdsHasBeenSet(false)
{
}

Aws::String DescribeEnvironmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentIdsJsonList(m_environmentIds.size());
   for(unsigned environmentIdsIndex = 0; environmentIdsIndex < environmentIdsJsonList.GetLength(); ++environmentIdsIndex)
   {
     environmentIdsJsonList[environmentIdsIndex].AsString(m_environmentIds[environmentIdsIndex]);
   }
   payload.WithArray("environmentIds", std::move(environmentIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEnvironmentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCloud9WorkspaceManagementService.DescribeEnvironments"));
  return headers;

}




