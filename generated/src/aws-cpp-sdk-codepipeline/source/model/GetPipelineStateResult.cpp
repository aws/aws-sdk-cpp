/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GetPipelineStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPipelineStateResult::GetPipelineStateResult() : 
    m_pipelineVersion(0)
{
}

GetPipelineStateResult::GetPipelineStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_pipelineVersion(0)
{
  *this = result;
}

GetPipelineStateResult& GetPipelineStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pipelineName"))
  {
    m_pipelineName = jsonValue.GetString("pipelineName");

  }

  if(jsonValue.ValueExists("pipelineVersion"))
  {
    m_pipelineVersion = jsonValue.GetInteger("pipelineVersion");

  }

  if(jsonValue.ValueExists("stageStates"))
  {
    Aws::Utils::Array<JsonView> stageStatesJsonList = jsonValue.GetArray("stageStates");
    for(unsigned stageStatesIndex = 0; stageStatesIndex < stageStatesJsonList.GetLength(); ++stageStatesIndex)
    {
      m_stageStates.push_back(stageStatesJsonList[stageStatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

  }

  if(jsonValue.ValueExists("updated"))
  {
    m_updated = jsonValue.GetDouble("updated");

  }



  return *this;
}
