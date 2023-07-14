/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/DeleteReplicationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteReplicationJobRequest::DeleteReplicationJobRequest() : 
    m_replicationJobIdHasBeenSet(false)
{
}

Aws::String DeleteReplicationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationJobIdHasBeenSet)
  {
   payload.WithString("replicationJobId", m_replicationJobId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteReplicationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.DeleteReplicationJob"));
  return headers;

}




