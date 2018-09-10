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

#include <aws/pinpoint/model/CampaignResponse.h>
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

CampaignResponse::CampaignResponse() : 
    m_additionalTreatmentsHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_defaultStateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_holdoutPercent(0),
    m_holdoutPercentHasBeenSet(false),
    m_hookHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isPaused(false),
    m_isPausedHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_segmentVersion(0),
    m_segmentVersionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_treatmentDescriptionHasBeenSet(false),
    m_treatmentNameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

CampaignResponse::CampaignResponse(JsonView jsonValue) : 
    m_additionalTreatmentsHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_defaultStateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_holdoutPercent(0),
    m_holdoutPercentHasBeenSet(false),
    m_hookHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isPaused(false),
    m_isPausedHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_segmentVersion(0),
    m_segmentVersionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_treatmentDescriptionHasBeenSet(false),
    m_treatmentNameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignResponse& CampaignResponse::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultState"))
  {
    m_defaultState = jsonValue.GetObject("DefaultState");

    m_defaultStateHasBeenSet = true;
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

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsPaused"))
  {
    m_isPaused = jsonValue.GetBool("IsPaused");

    m_isPausedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
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

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetObject("State");

    m_stateHasBeenSet = true;
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

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignResponse::Jsonize() const
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

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_defaultStateHasBeenSet)
  {
   payload.WithObject("DefaultState", m_defaultState.Jsonize());

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

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_isPausedHasBeenSet)
  {
   payload.WithBool("IsPaused", m_isPaused);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

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

  if(m_stateHasBeenSet)
  {
   payload.WithObject("State", m_state.Jsonize());

  }

  if(m_treatmentDescriptionHasBeenSet)
  {
   payload.WithString("TreatmentDescription", m_treatmentDescription);

  }

  if(m_treatmentNameHasBeenSet)
  {
   payload.WithString("TreatmentName", m_treatmentName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
