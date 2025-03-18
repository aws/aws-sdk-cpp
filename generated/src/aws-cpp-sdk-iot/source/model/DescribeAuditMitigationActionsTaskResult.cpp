/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeAuditMitigationActionsTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAuditMitigationActionsTaskResult::DescribeAuditMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAuditMitigationActionsTaskResult& DescribeAuditMitigationActionsTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = AuditMitigationActionsTaskStatusMapper::GetAuditMitigationActionsTaskStatusForName(jsonValue.GetString("taskStatus"));
    m_taskStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskStatistics"))
  {
    Aws::Map<Aws::String, JsonView> taskStatisticsJsonMap = jsonValue.GetObject("taskStatistics").GetAllObjects();
    for(auto& taskStatisticsItem : taskStatisticsJsonMap)
    {
      m_taskStatistics[taskStatisticsItem.first] = taskStatisticsItem.second.AsObject();
    }
    m_taskStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("auditCheckToActionsMapping"))
  {
    Aws::Map<Aws::String, JsonView> auditCheckToActionsMappingJsonMap = jsonValue.GetObject("auditCheckToActionsMapping").GetAllObjects();
    for(auto& auditCheckToActionsMappingItem : auditCheckToActionsMappingJsonMap)
    {
      Aws::Utils::Array<JsonView> mitigationActionNameListJsonList = auditCheckToActionsMappingItem.second.AsArray();
      Aws::Vector<Aws::String> mitigationActionNameListList;
      mitigationActionNameListList.reserve((size_t)mitigationActionNameListJsonList.GetLength());
      for(unsigned mitigationActionNameListIndex = 0; mitigationActionNameListIndex < mitigationActionNameListJsonList.GetLength(); ++mitigationActionNameListIndex)
      {
        mitigationActionNameListList.push_back(mitigationActionNameListJsonList[mitigationActionNameListIndex].AsString());
      }
      m_auditCheckToActionsMapping[auditCheckToActionsMappingItem.first] = std::move(mitigationActionNameListList);
    }
    m_auditCheckToActionsMappingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionsDefinition"))
  {
    Aws::Utils::Array<JsonView> actionsDefinitionJsonList = jsonValue.GetArray("actionsDefinition");
    for(unsigned actionsDefinitionIndex = 0; actionsDefinitionIndex < actionsDefinitionJsonList.GetLength(); ++actionsDefinitionIndex)
    {
      m_actionsDefinition.push_back(actionsDefinitionJsonList[actionsDefinitionIndex].AsObject());
    }
    m_actionsDefinitionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
