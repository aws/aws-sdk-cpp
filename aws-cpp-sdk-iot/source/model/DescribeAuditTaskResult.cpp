/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeAuditTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAuditTaskResult::DescribeAuditTaskResult() : 
    m_taskStatus(AuditTaskStatus::NOT_SET),
    m_taskType(AuditTaskType::NOT_SET)
{
}

DescribeAuditTaskResult::DescribeAuditTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_taskStatus(AuditTaskStatus::NOT_SET),
    m_taskType(AuditTaskType::NOT_SET)
{
  *this = result;
}

DescribeAuditTaskResult& DescribeAuditTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = AuditTaskStatusMapper::GetAuditTaskStatusForName(jsonValue.GetString("taskStatus"));

  }

  if(jsonValue.ValueExists("taskType"))
  {
    m_taskType = AuditTaskTypeMapper::GetAuditTaskTypeForName(jsonValue.GetString("taskType"));

  }

  if(jsonValue.ValueExists("taskStartTime"))
  {
    m_taskStartTime = jsonValue.GetDouble("taskStartTime");

  }

  if(jsonValue.ValueExists("taskStatistics"))
  {
    m_taskStatistics = jsonValue.GetObject("taskStatistics");

  }

  if(jsonValue.ValueExists("scheduledAuditName"))
  {
    m_scheduledAuditName = jsonValue.GetString("scheduledAuditName");

  }

  if(jsonValue.ValueExists("auditDetails"))
  {
    Aws::Map<Aws::String, JsonView> auditDetailsJsonMap = jsonValue.GetObject("auditDetails").GetAllObjects();
    for(auto& auditDetailsItem : auditDetailsJsonMap)
    {
      m_auditDetails[auditDetailsItem.first] = auditDetailsItem.second.AsObject();
    }
  }



  return *this;
}
