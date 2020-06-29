/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CreateAssociationBatchRequestEntry.h>
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

CreateAssociationBatchRequestEntry::CreateAssociationBatchRequestEntry() : 
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_automationTargetParameterNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_associationNameHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_complianceSeverity(AssociationComplianceSeverity::NOT_SET),
    m_complianceSeverityHasBeenSet(false),
    m_syncCompliance(AssociationSyncCompliance::NOT_SET),
    m_syncComplianceHasBeenSet(false),
    m_applyOnlyAtCronInterval(false),
    m_applyOnlyAtCronIntervalHasBeenSet(false)
{
}

CreateAssociationBatchRequestEntry::CreateAssociationBatchRequestEntry(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_automationTargetParameterNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_associationNameHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_complianceSeverity(AssociationComplianceSeverity::NOT_SET),
    m_complianceSeverityHasBeenSet(false),
    m_syncCompliance(AssociationSyncCompliance::NOT_SET),
    m_syncComplianceHasBeenSet(false),
    m_applyOnlyAtCronInterval(false),
    m_applyOnlyAtCronIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

CreateAssociationBatchRequestEntry& CreateAssociationBatchRequestEntry::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Array<JsonView> parameterValueListJsonList = parametersItem.second.AsArray();
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

  if(jsonValue.ValueExists("AutomationTargetParameterName"))
  {
    m_automationTargetParameterName = jsonValue.GetString("AutomationTargetParameterName");

    m_automationTargetParameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
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

  return *this;
}

JsonValue CreateAssociationBatchRequestEntry::Jsonize() const
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

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Array<JsonValue> parameterValueListJsonList(parametersItem.second.size());
     for(unsigned parameterValueListIndex = 0; parameterValueListIndex < parameterValueListJsonList.GetLength(); ++parameterValueListIndex)
     {
       parameterValueListJsonList[parameterValueListIndex].AsString(parametersItem.second[parameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(parameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_automationTargetParameterNameHasBeenSet)
  {
   payload.WithString("AutomationTargetParameterName", m_automationTargetParameterName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
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

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
