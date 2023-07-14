﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListPipelineExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPipelineExecutionsResult::ListPipelineExecutionsResult()
{
}

ListPipelineExecutionsResult::ListPipelineExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipelineExecutionsResult& ListPipelineExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineExecutionSummaries"))
  {
    Array<JsonView> pipelineExecutionSummariesJsonList = jsonValue.GetArray("PipelineExecutionSummaries");
    for(unsigned pipelineExecutionSummariesIndex = 0; pipelineExecutionSummariesIndex < pipelineExecutionSummariesJsonList.GetLength(); ++pipelineExecutionSummariesIndex)
    {
      m_pipelineExecutionSummaries.push_back(pipelineExecutionSummariesJsonList[pipelineExecutionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
