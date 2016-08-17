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
#include <aws/datapipeline/model/ValidatePipelineDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidatePipelineDefinitionResult::ValidatePipelineDefinitionResult() : 
    m_errored(false)
{
}

ValidatePipelineDefinitionResult::ValidatePipelineDefinitionResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_errored(false)
{
  *this = result;
}

ValidatePipelineDefinitionResult& ValidatePipelineDefinitionResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("validationErrors"))
  {
    Array<JsonValue> validationErrorsJsonList = jsonValue.GetArray("validationErrors");
    for(unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex)
    {
      m_validationErrors.push_back(validationErrorsJsonList[validationErrorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("validationWarnings"))
  {
    Array<JsonValue> validationWarningsJsonList = jsonValue.GetArray("validationWarnings");
    for(unsigned validationWarningsIndex = 0; validationWarningsIndex < validationWarningsJsonList.GetLength(); ++validationWarningsIndex)
    {
      m_validationWarnings.push_back(validationWarningsJsonList[validationWarningsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errored"))
  {
    m_errored = jsonValue.GetBool("errored");

  }



  return *this;
}
