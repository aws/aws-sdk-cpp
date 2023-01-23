/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/PutPipelineDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutPipelineDefinitionResult::PutPipelineDefinitionResult() : 
    m_errored(false)
{
}

PutPipelineDefinitionResult::PutPipelineDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_errored(false)
{
  *this = result;
}

PutPipelineDefinitionResult& PutPipelineDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("validationErrors"))
  {
    Aws::Utils::Array<JsonView> validationErrorsJsonList = jsonValue.GetArray("validationErrors");
    for(unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex)
    {
      m_validationErrors.push_back(validationErrorsJsonList[validationErrorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("validationWarnings"))
  {
    Aws::Utils::Array<JsonView> validationWarningsJsonList = jsonValue.GetArray("validationWarnings");
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
