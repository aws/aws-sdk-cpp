/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/DescribeMigrationTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeMigrationTaskRequest::DescribeMigrationTaskRequest() : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false)
{
}

Aws::String DescribeMigrationTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_progressUpdateStreamHasBeenSet)
  {
   payload.WithString("ProgressUpdateStream", m_progressUpdateStream);

  }

  if(m_migrationTaskNameHasBeenSet)
  {
   payload.WithString("MigrationTaskName", m_migrationTaskName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeMigrationTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHub.DescribeMigrationTask"));
  return headers;

}




