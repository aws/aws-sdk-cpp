/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ListJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListJobsResult::ListJobsResult()
{
}

ListJobsResult::ListJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListJobsResult& ListJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobSummaryList"))
  {
    Aws::Utils::Array<JsonView> jobSummaryListJsonList = jsonValue.GetArray("jobSummaryList");
    for(unsigned jobSummaryListIndex = 0; jobSummaryListIndex < jobSummaryListJsonList.GetLength(); ++jobSummaryListIndex)
    {
      m_jobSummaryList.push_back(jobSummaryListJsonList[jobSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
