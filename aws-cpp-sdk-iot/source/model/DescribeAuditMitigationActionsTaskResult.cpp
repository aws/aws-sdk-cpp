/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeAuditMitigationActionsTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAuditMitigationActionsTaskResult::DescribeAuditMitigationActionsTaskResult() : 
    m_taskStatus(AuditMitigationActionsTaskStatus::NOT_SET)
{
}

DescribeAuditMitigationActionsTaskResult::DescribeAuditMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_taskStatus(AuditMitigationActionsTaskStatus::NOT_SET)
{
  *this = result;
}

DescribeAuditMitigationActionsTaskResult& DescribeAuditMitigationActionsTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = AuditMitigationActionsTaskStatusMapper::GetAuditMitigationActionsTaskStatusForName(jsonValue.GetString("taskStatus"));

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

  }

  if(jsonValue.ValueExists("taskStatistics"))
  {
    Aws::Map<Aws::String, JsonView> taskStatisticsJsonMap = jsonValue.GetObject("taskStatistics").GetAllObjects();
    for(auto& taskStatisticsItem : taskStatisticsJsonMap)
    {
      m_taskStatistics[taskStatisticsItem.first] = taskStatisticsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

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
  }

  if(jsonValue.ValueExists("actionsDefinition"))
  {
    Aws::Utils::Array<JsonView> actionsDefinitionJsonList = jsonValue.GetArray("actionsDefinition");
    for(unsigned actionsDefinitionIndex = 0; actionsDefinitionIndex < actionsDefinitionJsonList.GetLength(); ++actionsDefinitionIndex)
    {
      m_actionsDefinition.push_back(actionsDefinitionJsonList[actionsDefinitionIndex].AsObject());
    }
  }



  return *this;
}
