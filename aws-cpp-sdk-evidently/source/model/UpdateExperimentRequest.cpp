/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/UpdateExperimentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateExperimentRequest::UpdateExperimentRequest() : 
    m_descriptionHasBeenSet(false),
    m_experimentHasBeenSet(false),
    m_metricGoalsHasBeenSet(false),
    m_onlineAbConfigHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_randomizationSaltHasBeenSet(false),
    m_removeSegment(false),
    m_removeSegmentHasBeenSet(false),
    m_samplingRate(0),
    m_samplingRateHasBeenSet(false),
    m_segmentHasBeenSet(false),
    m_treatmentsHasBeenSet(false)
{
}

Aws::String UpdateExperimentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_metricGoalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricGoalsJsonList(m_metricGoals.size());
   for(unsigned metricGoalsIndex = 0; metricGoalsIndex < metricGoalsJsonList.GetLength(); ++metricGoalsIndex)
   {
     metricGoalsJsonList[metricGoalsIndex].AsObject(m_metricGoals[metricGoalsIndex].Jsonize());
   }
   payload.WithArray("metricGoals", std::move(metricGoalsJsonList));

  }

  if(m_onlineAbConfigHasBeenSet)
  {
   payload.WithObject("onlineAbConfig", m_onlineAbConfig.Jsonize());

  }

  if(m_randomizationSaltHasBeenSet)
  {
   payload.WithString("randomizationSalt", m_randomizationSalt);

  }

  if(m_removeSegmentHasBeenSet)
  {
   payload.WithBool("removeSegment", m_removeSegment);

  }

  if(m_samplingRateHasBeenSet)
  {
   payload.WithInt64("samplingRate", m_samplingRate);

  }

  if(m_segmentHasBeenSet)
  {
   payload.WithString("segment", m_segment);

  }

  if(m_treatmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> treatmentsJsonList(m_treatments.size());
   for(unsigned treatmentsIndex = 0; treatmentsIndex < treatmentsJsonList.GetLength(); ++treatmentsIndex)
   {
     treatmentsJsonList[treatmentsIndex].AsObject(m_treatments[treatmentsIndex].Jsonize());
   }
   payload.WithArray("treatments", std::move(treatmentsJsonList));

  }

  return payload.View().WriteReadable();
}




