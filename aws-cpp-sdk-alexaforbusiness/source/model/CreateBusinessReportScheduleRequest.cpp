/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/CreateBusinessReportScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBusinessReportScheduleRequest::CreateBusinessReportScheduleRequest() : 
    m_scheduleNameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_format(BusinessReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_contentRangeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateBusinessReportScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduleNameHasBeenSet)
  {
   payload.WithString("ScheduleName", m_scheduleName);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", BusinessReportFormatMapper::GetNameForBusinessReportFormat(m_format));
  }

  if(m_contentRangeHasBeenSet)
  {
   payload.WithObject("ContentRange", m_contentRange.Jsonize());

  }

  if(m_recurrenceHasBeenSet)
  {
   payload.WithObject("Recurrence", m_recurrence.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBusinessReportScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.CreateBusinessReportSchedule"));
  return headers;

}




