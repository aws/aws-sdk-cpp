/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DeleteReplicationTaskAssessmentRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteReplicationTaskAssessmentRunRequest::DeleteReplicationTaskAssessmentRunRequest() : 
    m_replicationTaskAssessmentRunArnHasBeenSet(false)
{
}

Aws::String DeleteReplicationTaskAssessmentRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationTaskAssessmentRunArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskAssessmentRunArn", m_replicationTaskAssessmentRunArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteReplicationTaskAssessmentRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DeleteReplicationTaskAssessmentRun"));
  return headers;

}




