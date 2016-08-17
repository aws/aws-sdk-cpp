/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/datapipeline/model/GetPipelineDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPipelineDefinitionResult::GetPipelineDefinitionResult()
{
}

GetPipelineDefinitionResult::GetPipelineDefinitionResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPipelineDefinitionResult& GetPipelineDefinitionResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("pipelineObjects"))
  {
    Array<JsonValue> pipelineObjectsJsonList = jsonValue.GetArray("pipelineObjects");
    for(unsigned pipelineObjectsIndex = 0; pipelineObjectsIndex < pipelineObjectsJsonList.GetLength(); ++pipelineObjectsIndex)
    {
      m_pipelineObjects.push_back(pipelineObjectsJsonList[pipelineObjectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("parameterObjects"))
  {
    Array<JsonValue> parameterObjectsJsonList = jsonValue.GetArray("parameterObjects");
    for(unsigned parameterObjectsIndex = 0; parameterObjectsIndex < parameterObjectsJsonList.GetLength(); ++parameterObjectsIndex)
    {
      m_parameterObjects.push_back(parameterObjectsJsonList[parameterObjectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("parameterValues"))
  {
    Array<JsonValue> parameterValuesJsonList = jsonValue.GetArray("parameterValues");
    for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
    {
      m_parameterValues.push_back(parameterValuesJsonList[parameterValuesIndex].AsObject());
    }
  }



  return *this;
}
