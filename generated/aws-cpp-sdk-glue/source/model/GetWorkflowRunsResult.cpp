﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetWorkflowRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowRunsResult::GetWorkflowRunsResult()
{
}

GetWorkflowRunsResult::GetWorkflowRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWorkflowRunsResult& GetWorkflowRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Runs"))
  {
    Array<JsonView> runsJsonList = jsonValue.GetArray("Runs");
    for(unsigned runsIndex = 0; runsIndex < runsJsonList.GetLength(); ++runsIndex)
    {
      m_runs.push_back(runsJsonList[runsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
