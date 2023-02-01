/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetJobRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetJobRunsResult::GetJobRunsResult()
{
}

GetJobRunsResult::GetJobRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetJobRunsResult& GetJobRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobRuns"))
  {
    Aws::Utils::Array<JsonView> jobRunsJsonList = jsonValue.GetArray("JobRuns");
    for(unsigned jobRunsIndex = 0; jobRunsIndex < jobRunsJsonList.GetLength(); ++jobRunsIndex)
    {
      m_jobRuns.push_back(jobRunsJsonList[jobRunsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
