/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeleteBusinessReportScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBusinessReportScheduleRequest::DeleteBusinessReportScheduleRequest() : 
    m_scheduleArnHasBeenSet(false)
{
}

Aws::String DeleteBusinessReportScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduleArnHasBeenSet)
  {
   payload.WithString("ScheduleArn", m_scheduleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteBusinessReportScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.DeleteBusinessReportSchedule"));
  return headers;

}




