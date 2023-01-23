/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CancelReplicationTaskAssessmentRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelReplicationTaskAssessmentRunRequest::CancelReplicationTaskAssessmentRunRequest() : 
    m_replicationTaskAssessmentRunArnHasBeenSet(false)
{
}

Aws::String CancelReplicationTaskAssessmentRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationTaskAssessmentRunArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskAssessmentRunArn", m_replicationTaskAssessmentRunArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelReplicationTaskAssessmentRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CancelReplicationTaskAssessmentRun"));
  return headers;

}




