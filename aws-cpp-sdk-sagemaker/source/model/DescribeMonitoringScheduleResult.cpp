/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeMonitoringScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMonitoringScheduleResult::DescribeMonitoringScheduleResult() : 
    m_monitoringScheduleStatus(ScheduleStatus::NOT_SET)
{
}

DescribeMonitoringScheduleResult::DescribeMonitoringScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_monitoringScheduleStatus(ScheduleStatus::NOT_SET)
{
  *this = result;
}

DescribeMonitoringScheduleResult& DescribeMonitoringScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonitoringScheduleArn"))
  {
    m_monitoringScheduleArn = jsonValue.GetString("MonitoringScheduleArn");

  }

  if(jsonValue.ValueExists("MonitoringScheduleName"))
  {
    m_monitoringScheduleName = jsonValue.GetString("MonitoringScheduleName");

  }

  if(jsonValue.ValueExists("MonitoringScheduleStatus"))
  {
    m_monitoringScheduleStatus = ScheduleStatusMapper::GetScheduleStatusForName(jsonValue.GetString("MonitoringScheduleStatus"));

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("MonitoringScheduleConfig"))
  {
    m_monitoringScheduleConfig = jsonValue.GetObject("MonitoringScheduleConfig");

  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

  }

  if(jsonValue.ValueExists("LastMonitoringExecutionSummary"))
  {
    m_lastMonitoringExecutionSummary = jsonValue.GetObject("LastMonitoringExecutionSummary");

  }



  return *this;
}
