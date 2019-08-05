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

#include <aws/iot/model/AuditMitigationActionsTaskTarget.h>
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

AuditMitigationActionsTaskTarget::AuditMitigationActionsTaskTarget() : 
    m_auditTaskIdHasBeenSet(false),
    m_findingIdsHasBeenSet(false),
    m_auditCheckToReasonCodeFilterHasBeenSet(false)
{
}

AuditMitigationActionsTaskTarget::AuditMitigationActionsTaskTarget(JsonView jsonValue) : 
    m_auditTaskIdHasBeenSet(false),
    m_findingIdsHasBeenSet(false),
    m_auditCheckToReasonCodeFilterHasBeenSet(false)
{
  *this = jsonValue;
}

AuditMitigationActionsTaskTarget& AuditMitigationActionsTaskTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("auditTaskId"))
  {
    m_auditTaskId = jsonValue.GetString("auditTaskId");

    m_auditTaskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingIds"))
  {
    Array<JsonView> findingIdsJsonList = jsonValue.GetArray("findingIds");
    for(unsigned findingIdsIndex = 0; findingIdsIndex < findingIdsJsonList.GetLength(); ++findingIdsIndex)
    {
      m_findingIds.push_back(findingIdsJsonList[findingIdsIndex].AsString());
    }
    m_findingIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("auditCheckToReasonCodeFilter"))
  {
    Aws::Map<Aws::String, JsonView> auditCheckToReasonCodeFilterJsonMap = jsonValue.GetObject("auditCheckToReasonCodeFilter").GetAllObjects();
    for(auto& auditCheckToReasonCodeFilterItem : auditCheckToReasonCodeFilterJsonMap)
    {
      Array<JsonView> reasonForNonComplianceCodesJsonList = auditCheckToReasonCodeFilterItem.second.AsArray();
      Aws::Vector<Aws::String> reasonForNonComplianceCodesList;
      reasonForNonComplianceCodesList.reserve((size_t)reasonForNonComplianceCodesJsonList.GetLength());
      for(unsigned reasonForNonComplianceCodesIndex = 0; reasonForNonComplianceCodesIndex < reasonForNonComplianceCodesJsonList.GetLength(); ++reasonForNonComplianceCodesIndex)
      {
        reasonForNonComplianceCodesList.push_back(reasonForNonComplianceCodesJsonList[reasonForNonComplianceCodesIndex].AsString());
      }
      m_auditCheckToReasonCodeFilter[auditCheckToReasonCodeFilterItem.first] = std::move(reasonForNonComplianceCodesList);
    }
    m_auditCheckToReasonCodeFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditMitigationActionsTaskTarget::Jsonize() const
{
  JsonValue payload;

  if(m_auditTaskIdHasBeenSet)
  {
   payload.WithString("auditTaskId", m_auditTaskId);

  }

  if(m_findingIdsHasBeenSet)
  {
   Array<JsonValue> findingIdsJsonList(m_findingIds.size());
   for(unsigned findingIdsIndex = 0; findingIdsIndex < findingIdsJsonList.GetLength(); ++findingIdsIndex)
   {
     findingIdsJsonList[findingIdsIndex].AsString(m_findingIds[findingIdsIndex]);
   }
   payload.WithArray("findingIds", std::move(findingIdsJsonList));

  }

  if(m_auditCheckToReasonCodeFilterHasBeenSet)
  {
   JsonValue auditCheckToReasonCodeFilterJsonMap;
   for(auto& auditCheckToReasonCodeFilterItem : m_auditCheckToReasonCodeFilter)
   {
     Array<JsonValue> reasonForNonComplianceCodesJsonList(auditCheckToReasonCodeFilterItem.second.size());
     for(unsigned reasonForNonComplianceCodesIndex = 0; reasonForNonComplianceCodesIndex < reasonForNonComplianceCodesJsonList.GetLength(); ++reasonForNonComplianceCodesIndex)
     {
       reasonForNonComplianceCodesJsonList[reasonForNonComplianceCodesIndex].AsString(auditCheckToReasonCodeFilterItem.second[reasonForNonComplianceCodesIndex]);
     }
     auditCheckToReasonCodeFilterJsonMap.WithArray(auditCheckToReasonCodeFilterItem.first, std::move(reasonForNonComplianceCodesJsonList));
   }
   payload.WithObject("auditCheckToReasonCodeFilter", std::move(auditCheckToReasonCodeFilterJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
