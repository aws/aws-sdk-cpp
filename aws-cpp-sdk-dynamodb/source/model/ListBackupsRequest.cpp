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

#include <aws/dynamodb/model/ListBackupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListBackupsRequest::ListBackupsRequest() : 
    m_tableNameHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_timeRangeLowerBoundHasBeenSet(false),
    m_timeRangeUpperBoundHasBeenSet(false),
    m_exclusiveStartBackupArnHasBeenSet(false)
{
}

Aws::String ListBackupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_timeRangeLowerBoundHasBeenSet)
  {
   payload.WithDouble("TimeRangeLowerBound", m_timeRangeLowerBound.SecondsWithMSPrecision());
  }

  if(m_timeRangeUpperBoundHasBeenSet)
  {
   payload.WithDouble("TimeRangeUpperBound", m_timeRangeUpperBound.SecondsWithMSPrecision());
  }

  if(m_exclusiveStartBackupArnHasBeenSet)
  {
   payload.WithString("ExclusiveStartBackupArn", m_exclusiveStartBackupArn);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListBackupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListBackups"));
  return headers;

}




