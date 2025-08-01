/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeServiceJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeServiceJobResult::DescribeServiceJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeServiceJobResult& DescribeServiceJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("attempts"))
  {
    Aws::Utils::Array<JsonView> attemptsJsonList = jsonValue.GetArray("attempts");
    for(unsigned attemptsIndex = 0; attemptsIndex < attemptsJsonList.GetLength(); ++attemptsIndex)
    {
      m_attempts.push_back(attemptsJsonList[attemptsIndex].AsObject());
    }
    m_attemptsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetInt64("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isTerminated"))
  {
    m_isTerminated = jsonValue.GetBool("isTerminated");
    m_isTerminatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobQueue"))
  {
    m_jobQueue = jsonValue.GetString("jobQueue");
    m_jobQueueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestAttempt"))
  {
    m_latestAttempt = jsonValue.GetObject("latestAttempt");
    m_latestAttemptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retryStrategy"))
  {
    m_retryStrategy = jsonValue.GetObject("retryStrategy");
    m_retryStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schedulingPriority"))
  {
    m_schedulingPriority = jsonValue.GetInteger("schedulingPriority");
    m_schedulingPriorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceRequestPayload"))
  {
    m_serviceRequestPayload = jsonValue.GetString("serviceRequestPayload");
    m_serviceRequestPayloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceJobType"))
  {
    m_serviceJobType = ServiceJobTypeMapper::GetServiceJobTypeForName(jsonValue.GetString("serviceJobType"));
    m_serviceJobTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shareIdentifier"))
  {
    m_shareIdentifier = jsonValue.GetString("shareIdentifier");
    m_shareIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetInt64("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceJobStatusMapper::GetServiceJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetInt64("stoppedAt");
    m_stoppedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutConfig"))
  {
    m_timeoutConfig = jsonValue.GetObject("timeoutConfig");
    m_timeoutConfigHasBeenSet = true;
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
