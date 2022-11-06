/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CreateMaintenanceWindowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMaintenanceWindowRequest::CreateMaintenanceWindowRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_scheduleTimezoneHasBeenSet(false),
    m_scheduleOffset(0),
    m_scheduleOffsetHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_cutoff(0),
    m_cutoffHasBeenSet(false),
    m_allowUnassociatedTargets(false),
    m_allowUnassociatedTargetsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateMaintenanceWindowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithString("StartDate", m_startDate);

  }

  if(m_endDateHasBeenSet)
  {
   payload.WithString("EndDate", m_endDate);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  if(m_scheduleTimezoneHasBeenSet)
  {
   payload.WithString("ScheduleTimezone", m_scheduleTimezone);

  }

  if(m_scheduleOffsetHasBeenSet)
  {
   payload.WithInteger("ScheduleOffset", m_scheduleOffset);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  if(m_cutoffHasBeenSet)
  {
   payload.WithInteger("Cutoff", m_cutoff);

  }

  if(m_allowUnassociatedTargetsHasBeenSet)
  {
   payload.WithBool("AllowUnassociatedTargets", m_allowUnassociatedTargets);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

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

Aws::Http::HeaderValueCollection CreateMaintenanceWindowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreateMaintenanceWindow"));
  return headers;

}




