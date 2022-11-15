/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

AssociationDescription::AssociationDescription() : 
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_associationVersionHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_lastUpdateAssociationDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_overviewHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_automationTargetParameterNameHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false),
    m_lastSuccessfulExecutionDateHasBeenSet(false),
    m_associationNameHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_complianceSeverity(AssociationComplianceSeverity::NOT_SET),
    m_complianceSeverityHasBeenSet(false),
    m_syncCompliance(AssociationSyncCompliance::NOT_SET),
    m_syncComplianceHasBeenSet(false),
    m_applyOnlyAtCronInterval(false),
    m_applyOnlyAtCronIntervalHasBeenSet(false),
    m_calendarNamesHasBeenSet(false),
    m_targetLocationsHasBeenSet(false),
    m_scheduleOffset(0),
    m_scheduleOffsetHasBeenSet(false),
    m_targetMapsHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false)
{
}

AssociationDescription::AssociationDescription(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_associationVersionHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_lastUpdateAssociationDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_overviewHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_automationTargetParameterNameHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false),
    m_lastSuccessfulExecutionDateHasBeenSet(false),
    m_associationNameHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_complianceSeverity(AssociationComplianceSeverity::NOT_SET),
    m_complianceSeverityHasBeenSet(false),
    m_syncCompliance(AssociationSyncCompliance::NOT_SET),
    m_syncComplianceHasBeenSet(false),
    m_applyOnlyAtCronInterval(false),
    m_applyOnlyAtCronIntervalHasBeenSet(false),
    m_calendarNamesHasBeenSet(false),
    m_targetLocationsHasBeenSet(false),
    m_scheduleOffset(0),
    m_scheduleOffsetHasBeenSet(false),
    m_targetMapsHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationDescription& AssociationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationVersion"))
  {
    m_associationVersion = jsonValue.GetString("AssociationVersion");

    m_associationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetDouble("Date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateAssociationDate"))
  {
    m_lastUpdateAssociationDate = jsonValue.GetDouble("LastUpdateAssociationDate");

    m_lastUpdateAssociationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overview"))
  {
    m_overview = jsonValue.GetObject("Overview");

    m_overviewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomationTargetParameterName"))
  {
    m_automationTargetParameterName = jsonValue.GetString("AutomationTargetParameterName");

    m_automationTargetParameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Aws::Utils::Array<JsonView> parameterValueListJsonList = parametersItem.second.AsArray();
      Aws::Vector<Aws::String> parameterValueListList;
      parameterValueListList.reserve((size_t)parameterValueListJsonList.GetLength());
      for(unsigned parameterValueListIndex = 0; parameterValueListIndex < parameterValueListJsonList.GetLength(); ++parameterValueListIndex)
      {
        parameterValueListList.push_back(parameterValueListJsonList[parameterValueListIndex].AsString());
      }
      m_parameters[parametersItem.first] = std::move(parameterValueListList);
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("OutputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastExecutionDate"))
  {
    m_lastExecutionDate = jsonValue.GetDouble("LastExecutionDate");

    m_lastExecutionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulExecutionDate"))
  {
    m_lastSuccessfulExecutionDate = jsonValue.GetDouble("LastSuccessfulExecutionDate");

    m_lastSuccessfulExecutionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationName"))
  {
    m_associationName = jsonValue.GetString("AssociationName");

    m_associationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxErrors"))
  {
    m_maxErrors = jsonValue.GetString("MaxErrors");

    m_maxErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetString("MaxConcurrency");

    m_maxConcurrencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceSeverity"))
  {
    m_complianceSeverity = AssociationComplianceSeverityMapper::GetAssociationComplianceSeverityForName(jsonValue.GetString("ComplianceSeverity"));

    m_complianceSeverityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncCompliance"))
  {
    m_syncCompliance = AssociationSyncComplianceMapper::GetAssociationSyncComplianceForName(jsonValue.GetString("SyncCompliance"));

    m_syncComplianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplyOnlyAtCronInterval"))
  {
    m_applyOnlyAtCronInterval = jsonValue.GetBool("ApplyOnlyAtCronInterval");

    m_applyOnlyAtCronIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CalendarNames"))
  {
    Aws::Utils::Array<JsonView> calendarNamesJsonList = jsonValue.GetArray("CalendarNames");
    for(unsigned calendarNamesIndex = 0; calendarNamesIndex < calendarNamesJsonList.GetLength(); ++calendarNamesIndex)
    {
      m_calendarNames.push_back(calendarNamesJsonList[calendarNamesIndex].AsString());
    }
    m_calendarNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLocations"))
  {
    Aws::Utils::Array<JsonView> targetLocationsJsonList = jsonValue.GetArray("TargetLocations");
    for(unsigned targetLocationsIndex = 0; targetLocationsIndex < targetLocationsJsonList.GetLength(); ++targetLocationsIndex)
    {
      m_targetLocations.push_back(targetLocationsJsonList[targetLocationsIndex].AsObject());
    }
    m_targetLocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleOffset"))
  {
    m_scheduleOffset = jsonValue.GetInteger("ScheduleOffset");

    m_scheduleOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetMaps"))
  {
    Aws::Utils::Array<JsonView> targetMapsJsonList = jsonValue.GetArray("TargetMaps");
    for(unsigned targetMapsIndex = 0; targetMapsIndex < targetMapsJsonList.GetLength(); ++targetMapsIndex)
    {
      Aws::Map<Aws::String, JsonView> targetMapJsonMap = targetMapsJsonList[targetMapsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::Vector<Aws::String>> targetMapMap;
      for(auto& targetMapItem : targetMapJsonMap)
      {
        Aws::Utils::Array<JsonView> targetMapValueListJsonList = targetMapItem.second.AsArray();
        Aws::Vector<Aws::String> targetMapValueListList;
        targetMapValueListList.reserve((size_t)targetMapValueListJsonList.GetLength());
        for(unsigned targetMapValueListIndex = 0; targetMapValueListIndex < targetMapValueListJsonList.GetLength(); ++targetMapValueListIndex)
        {
          targetMapValueListList.push_back(targetMapValueListJsonList[targetMapValueListIndex].AsString());
        }
        targetMapMap[targetMapItem.first] = std::move(targetMapValueListList);
      }
      m_targetMaps.push_back(std::move(targetMapMap));
    }
    m_targetMapsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmConfiguration"))
  {
    m_alarmConfiguration = jsonValue.GetObject("AlarmConfiguration");

    m_alarmConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggeredAlarms"))
  {
    Aws::Utils::Array<JsonView> triggeredAlarmsJsonList = jsonValue.GetArray("TriggeredAlarms");
    for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
    {
      m_triggeredAlarms.push_back(triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject());
    }
    m_triggeredAlarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_associationVersionHasBeenSet)
  {
   payload.WithString("AssociationVersion", m_associationVersion);

  }

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
  }

  if(m_lastUpdateAssociationDateHasBeenSet)
  {
   payload.WithDouble("LastUpdateAssociationDate", m_lastUpdateAssociationDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_overviewHasBeenSet)
  {
   payload.WithObject("Overview", m_overview.Jsonize());

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_automationTargetParameterNameHasBeenSet)
  {
   payload.WithString("AutomationTargetParameterName", m_automationTargetParameterName);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> parameterValueListJsonList(parametersItem.second.size());
     for(unsigned parameterValueListIndex = 0; parameterValueListIndex < parameterValueListJsonList.GetLength(); ++parameterValueListIndex)
     {
       parameterValueListJsonList[parameterValueListIndex].AsString(parametersItem.second[parameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(parameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("OutputLocation", m_outputLocation.Jsonize());

  }

  if(m_lastExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastExecutionDate", m_lastExecutionDate.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulExecutionDate", m_lastSuccessfulExecutionDate.SecondsWithMSPrecision());
  }

  if(m_associationNameHasBeenSet)
  {
   payload.WithString("AssociationName", m_associationName);

  }

  if(m_maxErrorsHasBeenSet)
  {
   payload.WithString("MaxErrors", m_maxErrors);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithString("MaxConcurrency", m_maxConcurrency);

  }

  if(m_complianceSeverityHasBeenSet)
  {
   payload.WithString("ComplianceSeverity", AssociationComplianceSeverityMapper::GetNameForAssociationComplianceSeverity(m_complianceSeverity));
  }

  if(m_syncComplianceHasBeenSet)
  {
   payload.WithString("SyncCompliance", AssociationSyncComplianceMapper::GetNameForAssociationSyncCompliance(m_syncCompliance));
  }

  if(m_applyOnlyAtCronIntervalHasBeenSet)
  {
   payload.WithBool("ApplyOnlyAtCronInterval", m_applyOnlyAtCronInterval);

  }

  if(m_calendarNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> calendarNamesJsonList(m_calendarNames.size());
   for(unsigned calendarNamesIndex = 0; calendarNamesIndex < calendarNamesJsonList.GetLength(); ++calendarNamesIndex)
   {
     calendarNamesJsonList[calendarNamesIndex].AsString(m_calendarNames[calendarNamesIndex]);
   }
   payload.WithArray("CalendarNames", std::move(calendarNamesJsonList));

  }

  if(m_targetLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetLocationsJsonList(m_targetLocations.size());
   for(unsigned targetLocationsIndex = 0; targetLocationsIndex < targetLocationsJsonList.GetLength(); ++targetLocationsIndex)
   {
     targetLocationsJsonList[targetLocationsIndex].AsObject(m_targetLocations[targetLocationsIndex].Jsonize());
   }
   payload.WithArray("TargetLocations", std::move(targetLocationsJsonList));

  }

  if(m_scheduleOffsetHasBeenSet)
  {
   payload.WithInteger("ScheduleOffset", m_scheduleOffset);

  }

  if(m_targetMapsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetMapsJsonList(m_targetMaps.size());
   for(unsigned targetMapsIndex = 0; targetMapsIndex < targetMapsJsonList.GetLength(); ++targetMapsIndex)
   {
     JsonValue targetMapJsonMap;
     for(auto& targetMapItem : m_targetMaps[targetMapsIndex])
     {
       Aws::Utils::Array<JsonValue> targetMapValueListJsonList(targetMapItem.second.size());
       for(unsigned targetMapValueListIndex = 0; targetMapValueListIndex < targetMapValueListJsonList.GetLength(); ++targetMapValueListIndex)
       {
         targetMapValueListJsonList[targetMapValueListIndex].AsString(targetMapItem.second[targetMapValueListIndex]);
       }
       targetMapJsonMap.WithArray(targetMapItem.first, std::move(targetMapValueListJsonList));
     }
     targetMapsJsonList[targetMapsIndex].AsObject(std::move(targetMapJsonMap));
   }
   payload.WithArray("TargetMaps", std::move(targetMapsJsonList));

  }

  if(m_alarmConfigurationHasBeenSet)
  {
   payload.WithObject("AlarmConfiguration", m_alarmConfiguration.Jsonize());

  }

  if(m_triggeredAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggeredAlarmsJsonList(m_triggeredAlarms.size());
   for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
   {
     triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject(m_triggeredAlarms[triggeredAlarmsIndex].Jsonize());
   }
   payload.WithArray("TriggeredAlarms", std::move(triggeredAlarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
