/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/CreateBackupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBackupRequest::CreateBackupRequest() : 
    m_tableNameHasBeenSet(false),
    m_backupNameHasBeenSet(false)
{
}

Aws::String CreateBackupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_backupNameHasBeenSet)
  {
   payload.WithString("BackupName", m_backupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBackupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.CreateBackup"));
  return headers;

}




