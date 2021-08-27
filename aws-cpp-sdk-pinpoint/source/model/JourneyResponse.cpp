/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyResponse.h>
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

JourneyResponse::JourneyResponse() : 
    m_activitiesHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_localTime(false),
    m_localTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_quietTimeHasBeenSet(false),
    m_refreshFrequencyHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_startActivityHasBeenSet(false),
    m_startConditionHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

JourneyResponse::JourneyResponse(JsonView jsonValue) : 
    m_activitiesHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_localTime(false),
    m_localTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_quietTimeHasBeenSet(false),
    m_refreshFrequencyHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_startActivityHasBeenSet(false),
    m_startConditionHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyResponse& JourneyResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Activities"))
  {
    Aws::Map<Aws::String, JsonView> activitiesJsonMap = jsonValue.GetObject("Activities").GetAllObjects();
    for(auto& activitiesItem : activitiesJsonMap)
    {
      m_activities[activitiesItem.first] = activitiesItem.second.AsObject();
    }
    m_activitiesHasBeenSet = true;
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

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("LocalTime"))
  {
    m_localTime = jsonValue.GetBool("LocalTime");

    m_localTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuietTime"))
  {
    m_quietTime = jsonValue.GetObject("QuietTime");

    m_quietTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshFrequency"))
  {
    m_refreshFrequency = jsonValue.GetString("RefreshFrequency");

    m_refreshFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartActivity"))
  {
    m_startActivity = jsonValue.GetString("StartActivity");

    m_startActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartCondition"))
  {
    m_startCondition = jsonValue.GetObject("StartCondition");

    m_startConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyResponse::Jsonize() const
{
  JsonValue payload;

  if(m_activitiesHasBeenSet)
  {
   JsonValue activitiesJsonMap;
   for(auto& activitiesItem : m_activities)
   {
     activitiesJsonMap.WithObject(activitiesItem.first, activitiesItem.second.Jsonize());
   }
   payload.WithObject("Activities", std::move(activitiesJsonMap));

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_limitsHasBeenSet)
  {
   payload.WithObject("Limits", m_limits.Jsonize());

  }

  if(m_localTimeHasBeenSet)
  {
   payload.WithBool("LocalTime", m_localTime);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_quietTimeHasBeenSet)
  {
   payload.WithObject("QuietTime", m_quietTime.Jsonize());

  }

  if(m_refreshFrequencyHasBeenSet)
  {
   payload.WithString("RefreshFrequency", m_refreshFrequency);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_startActivityHasBeenSet)
  {
   payload.WithString("StartActivity", m_startActivity);

  }

  if(m_startConditionHasBeenSet)
  {
   payload.WithObject("StartCondition", m_startCondition.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
