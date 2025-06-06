﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/model/GetPendingJobExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTJobsDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPendingJobExecutionsResult::GetPendingJobExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPendingJobExecutionsResult& GetPendingJobExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("inProgressJobs"))
  {
    Aws::Utils::Array<JsonView> inProgressJobsJsonList = jsonValue.GetArray("inProgressJobs");
    for(unsigned inProgressJobsIndex = 0; inProgressJobsIndex < inProgressJobsJsonList.GetLength(); ++inProgressJobsIndex)
    {
      m_inProgressJobs.push_back(inProgressJobsJsonList[inProgressJobsIndex].AsObject());
    }
    m_inProgressJobsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queuedJobs"))
  {
    Aws::Utils::Array<JsonView> queuedJobsJsonList = jsonValue.GetArray("queuedJobs");
    for(unsigned queuedJobsIndex = 0; queuedJobsIndex < queuedJobsJsonList.GetLength(); ++queuedJobsIndex)
    {
      m_queuedJobs.push_back(queuedJobsJsonList[queuedJobsIndex].AsObject());
    }
    m_queuedJobsHasBeenSet = true;
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
