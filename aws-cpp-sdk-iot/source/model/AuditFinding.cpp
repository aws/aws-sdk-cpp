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

#include <aws/iot/model/AuditFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AuditFinding::AuditFinding() : 
    m_taskIdHasBeenSet(false),
    m_checkNameHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_findingTimeHasBeenSet(false),
    m_severity(AuditFindingSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_nonCompliantResourceHasBeenSet(false),
    m_relatedResourcesHasBeenSet(false),
    m_reasonForNonComplianceHasBeenSet(false),
    m_reasonForNonComplianceCodeHasBeenSet(false)
{
}

AuditFinding::AuditFinding(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_checkNameHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_findingTimeHasBeenSet(false),
    m_severity(AuditFindingSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_nonCompliantResourceHasBeenSet(false),
    m_relatedResourcesHasBeenSet(false),
    m_reasonForNonComplianceHasBeenSet(false),
    m_reasonForNonComplianceCodeHasBeenSet(false)
{
  *this = jsonValue;
}

AuditFinding& AuditFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checkName"))
  {
    m_checkName = jsonValue.GetString("checkName");

    m_checkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStartTime"))
  {
    m_taskStartTime = jsonValue.GetDouble("taskStartTime");

    m_taskStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingTime"))
  {
    m_findingTime = jsonValue.GetDouble("findingTime");

    m_findingTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = AuditFindingSeverityMapper::GetAuditFindingSeverityForName(jsonValue.GetString("severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nonCompliantResource"))
  {
    m_nonCompliantResource = jsonValue.GetObject("nonCompliantResource");

    m_nonCompliantResourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedResources"))
  {
    Array<JsonView> relatedResourcesJsonList = jsonValue.GetArray("relatedResources");
    for(unsigned relatedResourcesIndex = 0; relatedResourcesIndex < relatedResourcesJsonList.GetLength(); ++relatedResourcesIndex)
    {
      m_relatedResources.push_back(relatedResourcesJsonList[relatedResourcesIndex].AsObject());
    }
    m_relatedResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reasonForNonCompliance"))
  {
    m_reasonForNonCompliance = jsonValue.GetString("reasonForNonCompliance");

    m_reasonForNonComplianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reasonForNonComplianceCode"))
  {
    m_reasonForNonComplianceCode = jsonValue.GetString("reasonForNonComplianceCode");

    m_reasonForNonComplianceCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditFinding::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_checkNameHasBeenSet)
  {
   payload.WithString("checkName", m_checkName);

  }

  if(m_taskStartTimeHasBeenSet)
  {
   payload.WithDouble("taskStartTime", m_taskStartTime.SecondsWithMSPrecision());
  }

  if(m_findingTimeHasBeenSet)
  {
   payload.WithDouble("findingTime", m_findingTime.SecondsWithMSPrecision());
  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", AuditFindingSeverityMapper::GetNameForAuditFindingSeverity(m_severity));
  }

  if(m_nonCompliantResourceHasBeenSet)
  {
   payload.WithObject("nonCompliantResource", m_nonCompliantResource.Jsonize());

  }

  if(m_relatedResourcesHasBeenSet)
  {
   Array<JsonValue> relatedResourcesJsonList(m_relatedResources.size());
   for(unsigned relatedResourcesIndex = 0; relatedResourcesIndex < relatedResourcesJsonList.GetLength(); ++relatedResourcesIndex)
   {
     relatedResourcesJsonList[relatedResourcesIndex].AsObject(m_relatedResources[relatedResourcesIndex].Jsonize());
   }
   payload.WithArray("relatedResources", std::move(relatedResourcesJsonList));

  }

  if(m_reasonForNonComplianceHasBeenSet)
  {
   payload.WithString("reasonForNonCompliance", m_reasonForNonCompliance);

  }

  if(m_reasonForNonComplianceCodeHasBeenSet)
  {
   payload.WithString("reasonForNonComplianceCode", m_reasonForNonComplianceCode);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
