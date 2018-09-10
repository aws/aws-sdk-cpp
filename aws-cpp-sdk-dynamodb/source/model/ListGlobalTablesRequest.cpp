﻿/*
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

#include <aws/dynamodb/model/ListGlobalTablesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListGlobalTablesRequest::ListGlobalTablesRequest() : 
    m_exclusiveStartGlobalTableNameHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
}

Aws::String ListGlobalTablesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exclusiveStartGlobalTableNameHasBeenSet)
  {
   payload.WithString("ExclusiveStartGlobalTableName", m_exclusiveStartGlobalTableName);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListGlobalTablesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListGlobalTables"));
  return headers;

}




