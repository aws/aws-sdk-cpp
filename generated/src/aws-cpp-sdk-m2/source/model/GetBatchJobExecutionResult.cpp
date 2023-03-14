/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GetBatchJobExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBatchJobExecutionResult::GetBatchJobExecutionResult() : 
    m_jobType(BatchJobType::NOT_SET),
    m_status(BatchJobExecutionStatus::NOT_SET)
{
}

GetBatchJobExecutionResult::GetBatchJobExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobType(BatchJobType::NOT_SET),
    m_status(BatchJobExecutionStatus::NOT_SET)
{
  *this = result;
}

GetBatchJobExecutionResult& GetBatchJobExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("batchJobIdentifier"))
  {
    m_batchJobIdentifier = jsonValue.GetObject("batchJobIdentifier");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

  }

  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");

  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

  }

  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = BatchJobTypeMapper::GetBatchJobTypeForName(jsonValue.GetString("jobType"));

  }

  if(jsonValue.ValueExists("jobUser"))
  {
    m_jobUser = jsonValue.GetString("jobUser");

  }

  if(jsonValue.ValueExists("returnCode"))
  {
    m_returnCode = jsonValue.GetString("returnCode");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = BatchJobExecutionStatusMapper::GetBatchJobExecutionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
