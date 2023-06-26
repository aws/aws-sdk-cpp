/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeMonitorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMonitorResult::DescribeMonitorResult() : 
    m_estimatedEvaluationTimeRemainingInMinutes(0)
{
}

DescribeMonitorResult::DescribeMonitorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_estimatedEvaluationTimeRemainingInMinutes(0)
{
  *this = result;
}

DescribeMonitorResult& DescribeMonitorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonitorName"))
  {
    m_monitorName = jsonValue.GetString("MonitorName");

  }

  if(jsonValue.ValueExists("MonitorArn"))
  {
    m_monitorArn = jsonValue.GetString("MonitorArn");

  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("LastEvaluationTime"))
  {
    m_lastEvaluationTime = jsonValue.GetDouble("LastEvaluationTime");

  }

  if(jsonValue.ValueExists("LastEvaluationState"))
  {
    m_lastEvaluationState = jsonValue.GetString("LastEvaluationState");

  }

  if(jsonValue.ValueExists("Baseline"))
  {
    m_baseline = jsonValue.GetObject("Baseline");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }

  if(jsonValue.ValueExists("EstimatedEvaluationTimeRemainingInMinutes"))
  {
    m_estimatedEvaluationTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedEvaluationTimeRemainingInMinutes");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
