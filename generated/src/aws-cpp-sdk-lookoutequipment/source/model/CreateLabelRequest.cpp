/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/CreateLabelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLabelRequest::CreateLabelRequest() : 
    m_labelGroupNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_rating(LabelRating::NOT_SET),
    m_ratingHasBeenSet(false),
    m_faultCodeHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_equipmentHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateLabelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelGroupNameHasBeenSet)
  {
   payload.WithString("LabelGroupName", m_labelGroupName);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_ratingHasBeenSet)
  {
   payload.WithString("Rating", LabelRatingMapper::GetNameForLabelRating(m_rating));
  }

  if(m_faultCodeHasBeenSet)
  {
   payload.WithString("FaultCode", m_faultCode);

  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  if(m_equipmentHasBeenSet)
  {
   payload.WithString("Equipment", m_equipment);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLabelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.CreateLabel"));
  return headers;

}




