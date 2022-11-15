/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetJobsResult::BatchGetJobsResult()
{
}

BatchGetJobsResult::BatchGetJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetJobsResult& BatchGetJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Jobs"))
  {
    Aws::Utils::Array<JsonView> jobsJsonList = jsonValue.GetArray("Jobs");
    for(unsigned jobsIndex = 0; jobsIndex < jobsJsonList.GetLength(); ++jobsIndex)
    {
      m_jobs.push_back(jobsJsonList[jobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("JobsNotFound"))
  {
    Aws::Utils::Array<JsonView> jobsNotFoundJsonList = jsonValue.GetArray("JobsNotFound");
    for(unsigned jobsNotFoundIndex = 0; jobsNotFoundIndex < jobsNotFoundJsonList.GetLength(); ++jobsNotFoundIndex)
    {
      m_jobsNotFound.push_back(jobsNotFoundJsonList[jobsNotFoundIndex].AsString());
    }
  }



  return *this;
}
