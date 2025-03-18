/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeAuditTaskResult.h>
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

DescribeAuditTaskResult::DescribeAuditTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAuditTaskResult& DescribeAuditTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = AuditTaskStatusMapper::GetAuditTaskStatusForName(jsonValue.GetString("taskStatus"));
    m_taskStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskType"))
  {
    m_taskType = AuditTaskTypeMapper::GetAuditTaskTypeForName(jsonValue.GetString("taskType"));
    m_taskTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskStartTime"))
  {
    m_taskStartTime = jsonValue.GetDouble("taskStartTime");
    m_taskStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskStatistics"))
  {
    m_taskStatistics = jsonValue.GetObject("taskStatistics");
    m_taskStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduledAuditName"))
  {
    m_scheduledAuditName = jsonValue.GetString("scheduledAuditName");
    m_scheduledAuditNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("auditDetails"))
  {
    Aws::Map<Aws::String, JsonView> auditDetailsJsonMap = jsonValue.GetObject("auditDetails").GetAllObjects();
    for(auto& auditDetailsItem : auditDetailsJsonMap)
    {
      m_auditDetails[auditDetailsItem.first] = auditDetailsItem.second.AsObject();
    }
    m_auditDetailsHasBeenSet = true;
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
