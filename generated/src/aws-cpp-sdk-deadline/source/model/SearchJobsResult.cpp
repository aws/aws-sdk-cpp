﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchJobsResult::SearchJobsResult() : 
    m_nextItemOffset(0),
    m_totalResults(0)
{
}

SearchJobsResult::SearchJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SearchJobsResult()
{
  *this = result;
}

SearchJobsResult& SearchJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("nextItemOffset"))
  {
    m_nextItemOffset = jsonValue.GetInteger("nextItemOffset");

  }

  if(jsonValue.ValueExists("totalResults"))
  {
    m_totalResults = jsonValue.GetInteger("totalResults");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
