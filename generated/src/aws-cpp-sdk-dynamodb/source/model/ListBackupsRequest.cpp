﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ListBackupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

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

  if(m_backupTypeHasBeenSet)
  {
   payload.WithString("BackupType", BackupTypeFilterMapper::GetNameForBackupTypeFilter(m_backupType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListBackupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListBackups"));
  return headers;

}



ListBackupsRequest::EndpointParameters ListBackupsRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (TableNameHasBeenSet()) {
        parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


