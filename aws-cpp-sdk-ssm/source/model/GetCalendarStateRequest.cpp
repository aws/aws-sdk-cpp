/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetCalendarStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCalendarStateRequest::GetCalendarStateRequest() : 
    m_calendarNamesHasBeenSet(false),
    m_atTimeHasBeenSet(false)
{
}

Aws::String GetCalendarStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_calendarNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> calendarNamesJsonList(m_calendarNames.size());
   for(unsigned calendarNamesIndex = 0; calendarNamesIndex < calendarNamesJsonList.GetLength(); ++calendarNamesIndex)
   {
     calendarNamesJsonList[calendarNamesIndex].AsString(m_calendarNames[calendarNamesIndex]);
   }
   payload.WithArray("CalendarNames", std::move(calendarNamesJsonList));

  }

  if(m_atTimeHasBeenSet)
  {
   payload.WithString("AtTime", m_atTime);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCalendarStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetCalendarState"));
  return headers;

}




