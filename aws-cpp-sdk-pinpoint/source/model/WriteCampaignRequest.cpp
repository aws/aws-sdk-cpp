﻿/*
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

#include <aws/pinpoint/model/WriteCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

WriteCampaignRequest::WriteCampaignRequest() : 
    m_additionalTreatmentsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_holdoutPercent(0),
    m_holdoutPercentHasBeenSet(false),
    m_hookHasBeenSet(false),
    m_isPaused(false),
    m_isPausedHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_segmentVersion(0),
    m_segmentVersionHasBeenSet(false),
    m_treatmentDescriptionHasBeenSet(false),
    m_treatmentNameHasBeenSet(false)
{
}

WriteCampaignRequest::WriteCampaignRequest(JsonView jsonValue) : 
    m_additionalTreatmentsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_holdoutPercent(0),
    m_holdoutPercentHasBeenSet(false),
    m_hookHasBeenSet(false),
    m_isPaused(false),
    m_isPausedHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_segmentVersion(0),
    m_segmentVersionHasBeenSet(false),
    m_treatmentDescriptionHasBeenSet(false),
    m_treatmentNameHasBeenSet(false)
{
  *this = jsonValue;
}

WriteCampaignRequest& WriteCampaignRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdditionalTreatments"))
  {
    Array<JsonView> additionalTreatmentsJsonList = jsonValue.GetArray("AdditionalTreatments");
    for(unsigned additionalTreatmentsIndex = 0; additionalTreatmentsIndex < additionalTreatmentsJsonList.GetLength(); ++additionalTreatmentsIndex)
    {
      m_additionalTreatments.push_back(additionalTreatmentsJsonList[additionalTreatmentsIndex].AsObject());
    }
    m_additionalTreatmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HoldoutPercent"))
  {
    m_holdoutPercent = jsonValue.GetInteger("HoldoutPercent");

    m_holdoutPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hook"))
  {
    m_hook = jsonValue.GetObject("Hook");

    m_hookHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsPaused"))
  {
    m_isPaused = jsonValue.GetBool("IsPaused");

    m_isPausedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limits"))
  {
    m_limits = jsonValue.GetObject("Limits");

    m_limitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageConfiguration"))
  {
    m_messageConfiguration = jsonValue.GetObject("MessageConfiguration");

    m_messageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentId"))
  {
    m_segmentId = jsonValue.GetString("SegmentId");

    m_segmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentVersion"))
  {
    m_segmentVersion = jsonValue.GetInteger("SegmentVersion");

    m_segmentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreatmentDescription"))
  {
    m_treatmentDescription = jsonValue.GetString("TreatmentDescription");

    m_treatmentDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreatmentName"))
  {
    m_treatmentName = jsonValue.GetString("TreatmentName");

    m_treatmentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue WriteCampaignRequest::Jsonize() const
{
  JsonValue payload;

  if(m_additionalTreatmentsHasBeenSet)
  {
   Array<JsonValue> additionalTreatmentsJsonList(m_additionalTreatments.size());
   for(unsigned additionalTreatmentsIndex = 0; additionalTreatmentsIndex < additionalTreatmentsJsonList.GetLength(); ++additionalTreatmentsIndex)
   {
     additionalTreatmentsJsonList[additionalTreatmentsIndex].AsObject(m_additionalTreatments[additionalTreatmentsIndex].Jsonize());
   }
   payload.WithArray("AdditionalTreatments", std::move(additionalTreatmentsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_holdoutPercentHasBeenSet)
  {
   payload.WithInteger("HoldoutPercent", m_holdoutPercent);

  }

  if(m_hookHasBeenSet)
  {
   payload.WithObject("Hook", m_hook.Jsonize());

  }

  if(m_isPausedHasBeenSet)
  {
   payload.WithBool("IsPaused", m_isPaused);

  }

  if(m_limitsHasBeenSet)
  {
   payload.WithObject("Limits", m_limits.Jsonize());

  }

  if(m_messageConfigurationHasBeenSet)
  {
   payload.WithObject("MessageConfiguration", m_messageConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_segmentIdHasBeenSet)
  {
   payload.WithString("SegmentId", m_segmentId);

  }

  if(m_segmentVersionHasBeenSet)
  {
   payload.WithInteger("SegmentVersion", m_segmentVersion);

  }

  if(m_treatmentDescriptionHasBeenSet)
  {
   payload.WithString("TreatmentDescription", m_treatmentDescription);

  }

  if(m_treatmentNameHasBeenSet)
  {
   payload.WithString("TreatmentName", m_treatmentName);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
