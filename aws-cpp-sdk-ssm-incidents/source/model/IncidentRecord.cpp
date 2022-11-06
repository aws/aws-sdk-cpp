/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/IncidentRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

IncidentRecord::IncidentRecord() : 
    m_arnHasBeenSet(false),
    m_automationExecutionsHasBeenSet(false),
    m_chatChannelHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_dedupeStringHasBeenSet(false),
    m_impact(0),
    m_impactHasBeenSet(false),
    m_incidentRecordSourceHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_notificationTargetsHasBeenSet(false),
    m_resolvedTimeHasBeenSet(false),
    m_status(IncidentRecordStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

IncidentRecord::IncidentRecord(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_automationExecutionsHasBeenSet(false),
    m_chatChannelHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_dedupeStringHasBeenSet(false),
    m_impact(0),
    m_impactHasBeenSet(false),
    m_incidentRecordSourceHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_notificationTargetsHasBeenSet(false),
    m_resolvedTimeHasBeenSet(false),
    m_status(IncidentRecordStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

IncidentRecord& IncidentRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("automationExecutions"))
  {
    Aws::Utils::Array<JsonView> automationExecutionsJsonList = jsonValue.GetArray("automationExecutions");
    for(unsigned automationExecutionsIndex = 0; automationExecutionsIndex < automationExecutionsJsonList.GetLength(); ++automationExecutionsIndex)
    {
      m_automationExecutions.push_back(automationExecutionsJsonList[automationExecutionsIndex].AsObject());
    }
    m_automationExecutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("chatChannel"))
  {
    m_chatChannel = jsonValue.GetObject("chatChannel");

    m_chatChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dedupeString"))
  {
    m_dedupeString = jsonValue.GetString("dedupeString");

    m_dedupeStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("impact"))
  {
    m_impact = jsonValue.GetInteger("impact");

    m_impactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("incidentRecordSource"))
  {
    m_incidentRecordSource = jsonValue.GetObject("incidentRecordSource");

    m_incidentRecordSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notificationTargets"))
  {
    Aws::Utils::Array<JsonView> notificationTargetsJsonList = jsonValue.GetArray("notificationTargets");
    for(unsigned notificationTargetsIndex = 0; notificationTargetsIndex < notificationTargetsJsonList.GetLength(); ++notificationTargetsIndex)
    {
      m_notificationTargets.push_back(notificationTargetsJsonList[notificationTargetsIndex].AsObject());
    }
    m_notificationTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedTime"))
  {
    m_resolvedTime = jsonValue.GetDouble("resolvedTime");

    m_resolvedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IncidentRecordStatusMapper::GetIncidentRecordStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetString("summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue IncidentRecord::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_automationExecutionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> automationExecutionsJsonList(m_automationExecutions.size());
   for(unsigned automationExecutionsIndex = 0; automationExecutionsIndex < automationExecutionsJsonList.GetLength(); ++automationExecutionsIndex)
   {
     automationExecutionsJsonList[automationExecutionsIndex].AsObject(m_automationExecutions[automationExecutionsIndex].Jsonize());
   }
   payload.WithArray("automationExecutions", std::move(automationExecutionsJsonList));

  }

  if(m_chatChannelHasBeenSet)
  {
   payload.WithObject("chatChannel", m_chatChannel.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_dedupeStringHasBeenSet)
  {
   payload.WithString("dedupeString", m_dedupeString);

  }

  if(m_impactHasBeenSet)
  {
   payload.WithInteger("impact", m_impact);

  }

  if(m_incidentRecordSourceHasBeenSet)
  {
   payload.WithObject("incidentRecordSource", m_incidentRecordSource.Jsonize());

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("lastModifiedBy", m_lastModifiedBy);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("lastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_notificationTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationTargetsJsonList(m_notificationTargets.size());
   for(unsigned notificationTargetsIndex = 0; notificationTargetsIndex < notificationTargetsJsonList.GetLength(); ++notificationTargetsIndex)
   {
     notificationTargetsJsonList[notificationTargetsIndex].AsObject(m_notificationTargets[notificationTargetsIndex].Jsonize());
   }
   payload.WithArray("notificationTargets", std::move(notificationTargetsJsonList));

  }

  if(m_resolvedTimeHasBeenSet)
  {
   payload.WithDouble("resolvedTime", m_resolvedTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", IncidentRecordStatusMapper::GetNameForIncidentRecordStatus(m_status));
  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
