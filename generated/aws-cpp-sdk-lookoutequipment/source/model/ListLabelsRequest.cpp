/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListLabelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListLabelsRequest::ListLabelsRequest() : 
    m_labelGroupNameHasBeenSet(false),
    m_intervalStartTimeHasBeenSet(false),
    m_intervalEndTimeHasBeenSet(false),
    m_faultCodeHasBeenSet(false),
    m_equipmentHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListLabelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelGroupNameHasBeenSet)
  {
   payload.WithString("LabelGroupName", m_labelGroupName);

  }

  if(m_intervalStartTimeHasBeenSet)
  {
   payload.WithDouble("IntervalStartTime", m_intervalStartTime.SecondsWithMSPrecision());
  }

  if(m_intervalEndTimeHasBeenSet)
  {
   payload.WithDouble("IntervalEndTime", m_intervalEndTime.SecondsWithMSPrecision());
  }

  if(m_faultCodeHasBeenSet)
  {
   payload.WithString("FaultCode", m_faultCode);

  }

  if(m_equipmentHasBeenSet)
  {
   payload.WithString("Equipment", m_equipment);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListLabelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.ListLabels"));
  return headers;

}




