﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/Problem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

Problem::Problem(JsonView jsonValue)
{
  *this = jsonValue;
}

Problem& Problem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShortName"))
  {
    m_shortName = jsonValue.GetString("ShortName");
    m_shortNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Insights"))
  {
    m_insights = jsonValue.GetString("Insights");
    m_insightsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AffectedResource"))
  {
    m_affectedResource = jsonValue.GetString("AffectedResource");
    m_affectedResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SeverityLevel"))
  {
    m_severityLevel = SeverityLevelMapper::GetSeverityLevelForName(jsonValue.GetString("SeverityLevel"));
    m_severityLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("ResourceGroupName");
    m_resourceGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Feedback"))
  {
    Aws::Map<Aws::String, JsonView> feedbackJsonMap = jsonValue.GetObject("Feedback").GetAllObjects();
    for(auto& feedbackItem : feedbackJsonMap)
    {
      m_feedback[FeedbackKeyMapper::GetFeedbackKeyForName(feedbackItem.first)] = FeedbackValueMapper::GetFeedbackValueForName(feedbackItem.second.AsString());
    }
    m_feedbackHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecurringCount"))
  {
    m_recurringCount = jsonValue.GetInt64("RecurringCount");
    m_recurringCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastRecurrenceTime"))
  {
    m_lastRecurrenceTime = jsonValue.GetDouble("LastRecurrenceTime");
    m_lastRecurrenceTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResolutionMethod"))
  {
    m_resolutionMethod = ResolutionMethodMapper::GetResolutionMethodForName(jsonValue.GetString("ResolutionMethod"));
    m_resolutionMethodHasBeenSet = true;
  }
  return *this;
}

JsonValue Problem::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_shortNameHasBeenSet)
  {
   payload.WithString("ShortName", m_shortName);

  }

  if(m_insightsHasBeenSet)
  {
   payload.WithString("Insights", m_insights);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_affectedResourceHasBeenSet)
  {
   payload.WithString("AffectedResource", m_affectedResource);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_severityLevelHasBeenSet)
  {
   payload.WithString("SeverityLevel", SeverityLevelMapper::GetNameForSeverityLevel(m_severityLevel));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("ResourceGroupName", m_resourceGroupName);

  }

  if(m_feedbackHasBeenSet)
  {
   JsonValue feedbackJsonMap;
   for(auto& feedbackItem : m_feedback)
   {
     feedbackJsonMap.WithString(FeedbackKeyMapper::GetNameForFeedbackKey(feedbackItem.first), FeedbackValueMapper::GetNameForFeedbackValue(feedbackItem.second));
   }
   payload.WithObject("Feedback", std::move(feedbackJsonMap));

  }

  if(m_recurringCountHasBeenSet)
  {
   payload.WithInt64("RecurringCount", m_recurringCount);

  }

  if(m_lastRecurrenceTimeHasBeenSet)
  {
   payload.WithDouble("LastRecurrenceTime", m_lastRecurrenceTime.SecondsWithMSPrecision());
  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_resolutionMethodHasBeenSet)
  {
   payload.WithString("ResolutionMethod", ResolutionMethodMapper::GetNameForResolutionMethod(m_resolutionMethod));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
