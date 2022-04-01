/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/GetPipelineDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPipelineDefinitionResult::GetPipelineDefinitionResult()
{
}

GetPipelineDefinitionResult::GetPipelineDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPipelineDefinitionResult& GetPipelineDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pipelineObjects"))
  {
    Array<JsonView> pipelineObjectsJsonList = jsonValue.GetArray("pipelineObjects");
    for(unsigned pipelineObjectsIndex = 0; pipelineObjectsIndex < pipelineObjectsJsonList.GetLength(); ++pipelineObjectsIndex)
    {
      m_pipelineObjects.push_back(pipelineObjectsJsonList[pipelineObjectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("parameterObjects"))
  {
    Array<JsonView> parameterObjectsJsonList = jsonValue.GetArray("parameterObjects");
    for(unsigned parameterObjectsIndex = 0; parameterObjectsIndex < parameterObjectsJsonList.GetLength(); ++parameterObjectsIndex)
    {
      m_parameterObjects.push_back(parameterObjectsJsonList[parameterObjectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("parameterValues"))
  {
    Array<JsonView> parameterValuesJsonList = jsonValue.GetArray("parameterValues");
    for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
    {
      m_parameterValues.push_back(parameterValuesJsonList[parameterValuesIndex].AsObject());
    }
  }



  return *this;
}
