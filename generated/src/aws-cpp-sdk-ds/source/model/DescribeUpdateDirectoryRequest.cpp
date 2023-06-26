/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeUpdateDirectoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeUpdateDirectoryRequest::DescribeUpdateDirectoryRequest() : 
    m_directoryIdHasBeenSet(false),
    m_updateType(UpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeUpdateDirectoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("UpdateType", UpdateTypeMapper::GetNameForUpdateType(m_updateType));
  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeUpdateDirectoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeUpdateDirectory"));
  return headers;

}




