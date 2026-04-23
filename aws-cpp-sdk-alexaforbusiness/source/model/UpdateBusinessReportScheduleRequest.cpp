/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/alexaforbusiness/model/UpdateBusinessReportScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBusinessReportScheduleRequest::UpdateBusinessReportScheduleRequest() : 
    m_scheduleArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_format(BusinessReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_scheduleNameHasBeenSet(false),
    m_recurrenceHasBeenSet(false)
{
}

Aws::String UpdateBusinessReportScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduleArnHasBeenSet)
  {
   payload.WithString("ScheduleArn", m_scheduleArn);

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

  if(m_scheduleNameHasBeenSet)
  {
   payload.WithString("ScheduleName", m_scheduleName);

  }

  if(m_recurrenceHasBeenSet)
  {
   payload.WithObject("Recurrence", m_recurrence.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBusinessReportScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.UpdateBusinessReportSchedule"));
  return headers;

}




