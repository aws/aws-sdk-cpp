﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/TestMetricFilterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestMetricFilterResult::TestMetricFilterResult()
{
}

TestMetricFilterResult::TestMetricFilterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestMetricFilterResult& TestMetricFilterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("matches"))
  {
    Aws::Utils::Array<JsonView> matchesJsonList = jsonValue.GetArray("matches");
    for(unsigned matchesIndex = 0; matchesIndex < matchesJsonList.GetLength(); ++matchesIndex)
    {
      m_matches.push_back(matchesJsonList[matchesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
