/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AssessmentRun::AssessmentRun() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_assessmentTemplateArnHasBeenSet(false),
    m_state(AssessmentRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false),
    m_userAttributesForFindingsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_stateChangedAtHasBeenSet(false),
    m_dataCollected(false),
    m_dataCollectedHasBeenSet(false),
    m_stateChangesHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_findingCountsHasBeenSet(false)
{
}

AssessmentRun::AssessmentRun(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_assessmentTemplateArnHasBeenSet(false),
    m_state(AssessmentRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false),
    m_userAttributesForFindingsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_stateChangedAtHasBeenSet(false),
    m_dataCollected(false),
    m_dataCollectedHasBeenSet(false),
    m_stateChangesHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_findingCountsHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentRun& AssessmentRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentTemplateArn"))
  {
    m_assessmentTemplateArn = jsonValue.GetString("assessmentTemplateArn");

    m_assessmentTemplateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = AssessmentRunStateMapper::GetAssessmentRunStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("durationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rulesPackageArns"))
  {
    Aws::Utils::Array<JsonView> rulesPackageArnsJsonList = jsonValue.GetArray("rulesPackageArns");
    for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
    {
      m_rulesPackageArns.push_back(rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString());
    }
    m_rulesPackageArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttributesForFindings"))
  {
    Aws::Utils::Array<JsonView> userAttributesForFindingsJsonList = jsonValue.GetArray("userAttributesForFindings");
    for(unsigned userAttributesForFindingsIndex = 0; userAttributesForFindingsIndex < userAttributesForFindingsJsonList.GetLength(); ++userAttributesForFindingsIndex)
    {
      m_userAttributesForFindings.push_back(userAttributesForFindingsJsonList[userAttributesForFindingsIndex].AsObject());
    }
    m_userAttributesForFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");

    m_completedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateChangedAt"))
  {
    m_stateChangedAt = jsonValue.GetDouble("stateChangedAt");

    m_stateChangedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataCollected"))
  {
    m_dataCollected = jsonValue.GetBool("dataCollected");

    m_dataCollectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateChanges"))
  {
    Aws::Utils::Array<JsonView> stateChangesJsonList = jsonValue.GetArray("stateChanges");
    for(unsigned stateChangesIndex = 0; stateChangesIndex < stateChangesJsonList.GetLength(); ++stateChangesIndex)
    {
      m_stateChanges.push_back(stateChangesJsonList[stateChangesIndex].AsObject());
    }
    m_stateChangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notifications"))
  {
    Aws::Utils::Array<JsonView> notificationsJsonList = jsonValue.GetArray("notifications");
    for(unsigned notificationsIndex = 0; notificationsIndex < notificationsJsonList.GetLength(); ++notificationsIndex)
    {
      m_notifications.push_back(notificationsJsonList[notificationsIndex].AsObject());
    }
    m_notificationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingCounts"))
  {
    Aws::Map<Aws::String, JsonView> findingCountsJsonMap = jsonValue.GetObject("findingCounts").GetAllObjects();
    for(auto& findingCountsItem : findingCountsJsonMap)
    {
      m_findingCounts[SeverityMapper::GetSeverityForName(findingCountsItem.first)] = findingCountsItem.second.AsInteger();
    }
    m_findingCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentRun::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_assessmentTemplateArnHasBeenSet)
  {
   payload.WithString("assessmentTemplateArn", m_assessmentTemplateArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", AssessmentRunStateMapper::GetNameForAssessmentRunState(m_state));
  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("durationInSeconds", m_durationInSeconds);

  }

  if(m_rulesPackageArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
   for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
   {
     rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString(m_rulesPackageArns[rulesPackageArnsIndex]);
   }
   payload.WithArray("rulesPackageArns", std::move(rulesPackageArnsJsonList));

  }

  if(m_userAttributesForFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAttributesForFindingsJsonList(m_userAttributesForFindings.size());
   for(unsigned userAttributesForFindingsIndex = 0; userAttributesForFindingsIndex < userAttributesForFindingsJsonList.GetLength(); ++userAttributesForFindingsIndex)
   {
     userAttributesForFindingsJsonList[userAttributesForFindingsIndex].AsObject(m_userAttributesForFindings[userAttributesForFindingsIndex].Jsonize());
   }
   payload.WithArray("userAttributesForFindings", std::move(userAttributesForFindingsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithDouble("completedAt", m_completedAt.SecondsWithMSPrecision());
  }

  if(m_stateChangedAtHasBeenSet)
  {
   payload.WithDouble("stateChangedAt", m_stateChangedAt.SecondsWithMSPrecision());
  }

  if(m_dataCollectedHasBeenSet)
  {
   payload.WithBool("dataCollected", m_dataCollected);

  }

  if(m_stateChangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateChangesJsonList(m_stateChanges.size());
   for(unsigned stateChangesIndex = 0; stateChangesIndex < stateChangesJsonList.GetLength(); ++stateChangesIndex)
   {
     stateChangesJsonList[stateChangesIndex].AsObject(m_stateChanges[stateChangesIndex].Jsonize());
   }
   payload.WithArray("stateChanges", std::move(stateChangesJsonList));

  }

  if(m_notificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationsJsonList(m_notifications.size());
   for(unsigned notificationsIndex = 0; notificationsIndex < notificationsJsonList.GetLength(); ++notificationsIndex)
   {
     notificationsJsonList[notificationsIndex].AsObject(m_notifications[notificationsIndex].Jsonize());
   }
   payload.WithArray("notifications", std::move(notificationsJsonList));

  }

  if(m_findingCountsHasBeenSet)
  {
   JsonValue findingCountsJsonMap;
   for(auto& findingCountsItem : m_findingCounts)
   {
     findingCountsJsonMap.WithInteger(SeverityMapper::GetNameForSeverity(findingCountsItem.first), findingCountsItem.second);
   }
   payload.WithObject("findingCounts", std::move(findingCountsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
