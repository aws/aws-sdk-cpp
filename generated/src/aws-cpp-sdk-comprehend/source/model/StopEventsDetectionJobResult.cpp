/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/StopEventsDetectionJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopEventsDetectionJobResult::StopEventsDetectionJobResult() : 
    m_jobStatus(JobStatus::NOT_SET)
{
}

StopEventsDetectionJobResult::StopEventsDetectionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(JobStatus::NOT_SET)
{
  *this = result;
}

StopEventsDetectionJobResult& StopEventsDetectionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

  }



  return *this;
}
