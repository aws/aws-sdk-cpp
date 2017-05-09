/*
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
    m_dateHasBeenSet(false),
    m_lastUpdateAssociationDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_overviewHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false),
    m_lastSuccessfulExecutionDateHasBeenSet(false)
{
}

AssociationDescription::AssociationDescription(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_lastUpdateAssociationDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_overviewHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false),
    m_lastSuccessfulExecutionDateHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationDescription& AssociationDescription::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonValue> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Array<JsonValue> parameterValueListJsonList = parametersItem.second.AsArray();
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
    Array<JsonValue> targetsJsonList = jsonValue.GetArray("Targets");
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

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

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

  if(m_lastExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastExecutionDate", m_lastExecutionDate.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulExecutionDate", m_lastSuccessfulExecutionDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws