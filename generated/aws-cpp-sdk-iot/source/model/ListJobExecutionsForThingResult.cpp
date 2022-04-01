﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListJobExecutionsForThingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListJobExecutionsForThingResult::ListJobExecutionsForThingResult()
{
}

ListJobExecutionsForThingResult::ListJobExecutionsForThingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListJobExecutionsForThingResult& ListJobExecutionsForThingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("executionSummaries"))
  {
    Array<JsonView> executionSummariesJsonList = jsonValue.GetArray("executionSummaries");
    for(unsigned executionSummariesIndex = 0; executionSummariesIndex < executionSummariesJsonList.GetLength(); ++executionSummariesIndex)
    {
      m_executionSummaries.push_back(executionSummariesJsonList[executionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
