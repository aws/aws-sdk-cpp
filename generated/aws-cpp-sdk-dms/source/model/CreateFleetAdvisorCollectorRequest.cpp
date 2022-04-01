/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CreateFleetAdvisorCollectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFleetAdvisorCollectorRequest::CreateFleetAdvisorCollectorRequest() : 
    m_collectorNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
}

Aws::String CreateFleetAdvisorCollectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collectorNameHasBeenSet)
  {
   payload.WithString("CollectorName", m_collectorName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFleetAdvisorCollectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CreateFleetAdvisorCollector"));
  return headers;

}




