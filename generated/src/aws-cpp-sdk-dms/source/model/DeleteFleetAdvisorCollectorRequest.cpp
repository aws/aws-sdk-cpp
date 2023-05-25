/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DeleteFleetAdvisorCollectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFleetAdvisorCollectorRequest::DeleteFleetAdvisorCollectorRequest() : 
    m_collectorReferencedIdHasBeenSet(false)
{
}

Aws::String DeleteFleetAdvisorCollectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collectorReferencedIdHasBeenSet)
  {
   payload.WithString("CollectorReferencedId", m_collectorReferencedId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFleetAdvisorCollectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DeleteFleetAdvisorCollector"));
  return headers;

}




