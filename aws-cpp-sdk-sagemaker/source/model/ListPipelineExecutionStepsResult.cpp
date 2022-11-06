/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListPipelineExecutionStepsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPipelineExecutionStepsResult::ListPipelineExecutionStepsResult()
{
}

ListPipelineExecutionStepsResult::ListPipelineExecutionStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipelineExecutionStepsResult& ListPipelineExecutionStepsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineExecutionSteps"))
  {
    Aws::Utils::Array<JsonView> pipelineExecutionStepsJsonList = jsonValue.GetArray("PipelineExecutionSteps");
    for(unsigned pipelineExecutionStepsIndex = 0; pipelineExecutionStepsIndex < pipelineExecutionStepsJsonList.GetLength(); ++pipelineExecutionStepsIndex)
    {
      m_pipelineExecutionSteps.push_back(pipelineExecutionStepsJsonList[pipelineExecutionStepsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
