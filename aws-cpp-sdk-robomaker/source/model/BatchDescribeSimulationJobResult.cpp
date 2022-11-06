/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/BatchDescribeSimulationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDescribeSimulationJobResult::BatchDescribeSimulationJobResult()
{
}

BatchDescribeSimulationJobResult::BatchDescribeSimulationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDescribeSimulationJobResult& BatchDescribeSimulationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobs"))
  {
    Aws::Utils::Array<JsonView> jobsJsonList = jsonValue.GetArray("jobs");
    for(unsigned jobsIndex = 0; jobsIndex < jobsJsonList.GetLength(); ++jobsIndex)
    {
      m_jobs.push_back(jobsJsonList[jobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("unprocessedJobs"))
  {
    Aws::Utils::Array<JsonView> unprocessedJobsJsonList = jsonValue.GetArray("unprocessedJobs");
    for(unsigned unprocessedJobsIndex = 0; unprocessedJobsIndex < unprocessedJobsJsonList.GetLength(); ++unprocessedJobsIndex)
    {
      m_unprocessedJobs.push_back(unprocessedJobsJsonList[unprocessedJobsIndex].AsString());
    }
  }



  return *this;
}
