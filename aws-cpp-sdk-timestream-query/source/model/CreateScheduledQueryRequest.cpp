/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/CreateScheduledQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateScheduledQueryRequest::CreateScheduledQueryRequest() : 
    m_nameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_scheduleConfigurationHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_scheduledQueryExecutionRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_errorReportConfigurationHasBeenSet(false)
{
}

Aws::String CreateScheduledQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_scheduleConfigurationHasBeenSet)
  {
   payload.WithObject("ScheduleConfiguration", m_scheduleConfiguration.Jsonize());

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  if(m_targetConfigurationHasBeenSet)
  {
   payload.WithObject("TargetConfiguration", m_targetConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_scheduledQueryExecutionRoleArnHasBeenSet)
  {
   payload.WithString("ScheduledQueryExecutionRoleArn", m_scheduledQueryExecutionRoleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_errorReportConfigurationHasBeenSet)
  {
   payload.WithObject("ErrorReportConfiguration", m_errorReportConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateScheduledQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.CreateScheduledQuery"));
  return headers;

}




