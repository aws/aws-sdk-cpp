/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DescribeBackupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBackupRequest::DescribeBackupRequest() : 
    m_backupArnHasBeenSet(false)
{
}

Aws::String DescribeBackupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupArnHasBeenSet)
  {
   payload.WithString("BackupArn", m_backupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBackupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DescribeBackup"));
  return headers;

}




