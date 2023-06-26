/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/CreateProgressUpdateStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProgressUpdateStreamRequest::CreateProgressUpdateStreamRequest() : 
    m_progressUpdateStreamNameHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateProgressUpdateStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_progressUpdateStreamNameHasBeenSet)
  {
   payload.WithString("ProgressUpdateStreamName", m_progressUpdateStreamName);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProgressUpdateStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHub.CreateProgressUpdateStream"));
  return headers;

}




